import java.util.Scanner;
class Calculator
{
public static void main(String args[])
{
int num1,num2,result,choice;
System.out.println("Enter your choice 1.Add 2.Sub....");
Scanner sc=new Scanner(System.in);
choice=sc.nextInt();
System.out.println("Enter Two Numbers:");
num1=sc.nextInt();
num2=sc.nextInt();
switch(choice)
{
case 1:result=num1+num2;
System.out.println("Result:"+result);
break;
case 2:result=num1-num2;
System.out.println("Result:"+result);
break;
case 3:default:
System.out.println("Invalid choice");
}
}
}
