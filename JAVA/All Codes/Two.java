import java.util.Scanner;
class Two
{
 public static void main(String[] args) 
{
  System.out.println("......................................... ");
  Scanner in = new Scanner(System.in);  
  System.out.println("First number: ");
  int num1 = in.nextInt();
 System.out.println("......................................... ");
  System.out.println("Second number: ");
  int num2 = in.nextInt();
 System.out.println("......................................... ");

int sum=num1 + num2;
  System.out.println("Sum of two numbers is: " +sum);
if( sum>100)
{
System.out.println("Sum is Greater than 100  :"+sum);
 }
else
{
System.out.println("Sum  is Less than 100  :"+sum);
}
}
}