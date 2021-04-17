import java.util.Scanner;
public class Addition
{
public static void main(String[] args)
{
System.out.println("Enter 3 numbers:");
Scanner s=new Scanner(System.in);
int num1=s.nextInt();
int num2=s.nextInt();
int num3=s.nextInt();
s.close();
System.out.println("Sum is:"+Addition(num1,num2,num3));


}}