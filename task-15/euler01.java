import java.util.Scanner;
public class Main
{
    public static void main(String[] args) {
        System.out.println(enter u r value:)");
        int temp = 0;
        int temp2 = 0; 
         System.out.println(enter u r value:)");
 Scanner sc =new Scanner(System.in);
		int b = sc.nextInt();
        for (int i = 0; i <= b; i++) {
            if (i % 3 == 0) {
                temp = temp + i;
            }            
        }

        for (int j = 0; j <= b; j++) {
            if (j % 5 == 0) {
                temp2 = temp2 + j;
            }
        }

        System.out.println(temp + temp2);
    }
}
