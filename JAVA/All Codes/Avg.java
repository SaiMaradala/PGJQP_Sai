import java.util.Scanner;
public class Avg 
{
int num,num2,num3,num4,num5,sum,avg;
public static void sum()
{
   sum=(num+num2+num3+num4+num5);
   System.out.println("Sum is :"+sum);
}
public static void average()
{
avg=(num1 + num2 + num3 + num4 + num5) / 5;
System.out.println("Average of five numbers is: " + avg);
}
public static void main(String[] args) 
{
Scanner in = new Scanner(System.in); 
  System.out.print("Input first number: ");
  int num1 = in.nextInt();
   
  System.out.print("Input second number: ");
  int num2 = in.nextInt();
   
  System.out.print("Input third number: ");
  int num3 = in.nextInt();
   
System.out.print("Input fourth number: ");
int num4 = in.nextInt();
System.out.print("Enter fifth number: ");
int num5 = in.nextInt();
 }
}
