import java.util.Scanner;
class DecisionEx
{
public static void main(String args[])
{
int num;
System.out.println("Enter a Number:");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
if (num>0)
{
System.out.println("Number is Positive");
}
else if(num<0)
{
System.out.println("Number is Negative");
}
else
{
System.out.println("Zero");
}
}
}