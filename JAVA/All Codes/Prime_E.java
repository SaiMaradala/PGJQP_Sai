import java.util.Scanner;
public class Prime_E 
{
public static void main(String[] args) 
{

        int low, high;
System.out.println("Enter a two Numbers :");
Scanner s=new Scanner(System.in);
low=s.nextInt();
high=s.nextInt();
        while (low < high) 
{
            boolean flag = false;

            for(int i = 2; i <= low/2; ++i) 
{
               
                if(low % i == 0) 
{
                    flag = true;
                    break;
                }
            }

            if (!flag && low != 0 && low != 1)
                System.out.print(low + " ");

            ++low;
        }
}    }