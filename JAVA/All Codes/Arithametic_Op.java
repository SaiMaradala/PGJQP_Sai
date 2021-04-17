import java.util.Scanner;
class Arithametic_Op
{
public static void main(String args[])
{
int num1,num2,Sum,Sub,Mul,Div;
Scanner A=new Scanner(System.in);
System.out.println("First number is:");
num1=A.nextInt();
System.out.println("Second number is:");
num2=A.nextInt();
Sum=num1+num2;
Sub=num1-num2;
Mul=num1*num2;
Div=num1/num2;
System.out.println("Sum is:"+Sum);
System.out.println("Sub is:"+Sub);
System.out.println("Mul is:"+Mul);
System.out.println("Div is:"+Div);
}}