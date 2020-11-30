use reqwest;
use scraper::{Selector, Html};
use csv::Writer;
use std::fs;
use std::fs::File;

#[tokio::main]
async fn main() -> Result<(), Box<dyn std::error::Error>> {
    // fetching data from url
    let resp = reqwest::get("https://www.worldometers.info/coronavirus/#countries").await?;
    assert!(resp.status().is_success()); // stop if not able to fetch properly

    // fragmenting the html according to need
    let body = resp.text().await?;
    let fragment = Html::parse_document(&body);
    let countries = Selector::parse("#main_table_countries_today tbody:nth-child(2) tr:not([style*=\"display: none\"]):not(.total_row_world)").unwrap();
    let mut count = 1;

    // removing already existing .csv file
    fs::remove_file("data.csv")?;
    File::create("data.csv")?; // creating a new .csv file
    let mut wtr = Writer::from_path("data.csv")?; // creating stream to write data in the .csv file
    // writing header in the file
    wtr.write_record(&["#", "Country", "Total Cases", "Total Deaths", "Total Recovered"])?;

    // looping through each country data
    for country in fragment.select(&countries) {
        // collecting country data
        let mut country_txt = country.text().collect::<Vec<_>>();
        // removing "\n" and fields starting with "+" to avoid complexity
        country_txt.retain(|x| *x != "\n" && !x.starts_with("+"));

        // writing record with respective data
        wtr.write_record(&[country_txt[0], country_txt[1], country_txt[2], country_txt[3], country_txt[4]])?;

        // stop after taking 10 records
        if count >= 10 { break; }
        count += 1;
    }

    // flushing the csv file
    wtr.flush()?;
    Ok(())
}
