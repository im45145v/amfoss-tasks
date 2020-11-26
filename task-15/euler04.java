import java.util.Scanner;
public class Main
{
    public static void main(String[] args) {
                 System.out.println("enter u r value:");
 Scanner sc =new Scanner(System.in);
		int b = sc.nextInt();
        System.out.println(isPalindrome(b));
    }
    public static boolean isPalindrome(int number){
    //checks to see if a number is a palendrome. (can't start with 0)
    String numstring = Integer.toString(number);
    char[] strarr = new char[String.valueOf(number).length()+1];
    int x = 0;
    int y = String.valueOf(number).length()-1;
    for (int i=0;i<y+1;i++){
        strarr[i] = numstring.charAt(i);
    }
    for (int a=0;a<String.valueOf(number).length()-1;a++){
        if (strarr[x]!=strarr[y]){
            return(false);
        }
        x++;
        y--;
    }
    return(true);
}
public static int Problem4(){
    int pp = 0;
    for (int i=999;i>100;i--){
        for (int j=999;j>100;j--){
            pp = i*j;
            if (isPalindrome(pp)){
                return(pp);
            }
        }
    }
    return(pp);
}
}
