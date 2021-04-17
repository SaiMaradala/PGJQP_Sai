import java.util.Scanner;
class Five
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
  System.out.println("Third number: ");
  int num3 = in.nextInt();
 System.out.println("......................................... ");
  System.out.println("Fourth number: ");
  int num4 = in.nextInt();
 System.out.println("......................................... ");
  System.out.println("Fifth number: ");
  int num5 = in.nextInt();
 System.out.println("......................................... ");
int Avg=(num1 + num2 + num3 + num4 + num5) / 5;
  System.out.println("Average of five numbers is: " +Avg);
if( Avg>10)
{
System.out.println("Average value is Greater than 10  :"+Avg);
 }
else
{
System.out.println("Average value is Less than 10  :"+Avg);
}
}
}