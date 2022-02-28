import java.util.scanner;

public class ques
{
public
    static void main(String[] args)
    {
        int sum = 0, num = 10;
        System.out.println("Enter 10 numbers: " );

        while (num > 0)
        {
            Scanner t = new Scanner(System.in);
            int temp = t.nextInt();
            sum += temp;
            num--;
        }
        System.out.println("Sum of the given numbers is: " +sum);
        int avg = sum / 10;
        System.out.println("Average of the given numbers is: " +avg);
    }
}