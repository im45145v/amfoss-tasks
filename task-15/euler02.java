import java.util.Scanner;
public class p2 {
    public static void main(String[] args) {
        int Num1 = 0;
        int Num2 = 1;
        int sum = 0;
 Scanner sc =new Scanner(System.in);
		int b = sc.nextInt();
        do
        {
            sum = Num1 + Num2;
            Num1 = Num2;
            Num2 = sum;

            if (Num2 % 2 == 0)
                sum = sum + Num2;
        }
        while (Num2 < b);

        System.out.println(sum);
    }
}
