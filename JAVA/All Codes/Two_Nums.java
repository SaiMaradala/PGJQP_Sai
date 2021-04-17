import java.util.Scanner;
class Two_Nums
{
public static void main(String args[])
{
int num1,num2;
boolean result;
System.out.println("Enter Two Numbers :");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
result=(num1%num2==0);
if(result)
{
System.out.println("Divisible by Number_2 :"+result);
}
else
{
System.out.println("Not  divisible by Number_2  :"+result);
}
}
}