import java.util.Scanner;
class Multiply
{
public static void main(String args[])
{
int num1,num2,num3,mul;

Scanner A=new Scanner(System.in);
System.out.println("&  &  & Program Starts &  &  &");
System.out.println("First number is:");
num1=A.nextInt();
System.out.println(".................................");
System.out.println("Second number is:");
num2=A.nextInt();
System.out.println(".................................");
System.out.println("Third number is:");
num3=A.nextInt();
mul=num1*num2*num3;
System.out.println(".................................");
System.out.println("Multiplication of three numbers are :"+mul);
System.out.println("&  &  &  Program Ends &  &  &  ");

}
}
