import java.util.Scanner;
public class Main
{
    public static void main(String[] args) {
    System.out.println("enter u r value :");
    Scanner sc =new Scanner(System.in);
		double x = sc.nextDouble();
          
        for (double z = 2; z*z <= x; z++) {

            if (x%z == 0) {

                System.out.println(z + "PRIME FACTOR");

            }

        }

    }
}
