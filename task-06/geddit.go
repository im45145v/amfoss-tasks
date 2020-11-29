package main

import (
	"context"
	"fmt"
	"log"
	"net/http"
	"time"

	"github.com/vartanbeno/go-reddit/reddit"
)

var ctx = context.Background()

func main() {
	if err := run(); err != nil {
		log.Fatal(err)
	}
}

func run() (err error) {
	withCredentials := reddit.WithCredentials("Client-ID", "Secret", "Username", "Password")
	httpClient := &http.Client{Timeout: time.Second * 30}
	client, _ := reddit.NewClient(withCredentials, reddit.WithHTTPClient(httpClient))
	a, _, err := client.Subreddit.SearchNames(ctx, "memes")
	posts, _, err := client.Subreddit.TopPosts(context.Background(), a[0], &reddit.ListPostOptions{
		ListOptions: reddit.ListOptions{
			Limit: 100,
		},
		Time: "week",
	})
	if err != nil {
		return err
	}
	for _, post := range posts {
		_, err := client.Post.Upvote(context.Background(), "t3_"+post.ID)
		if err != nil {
			return err
		}
	}
	fmt.Println("All ze posts have been upvoted, m'Lord!")
	return
}
