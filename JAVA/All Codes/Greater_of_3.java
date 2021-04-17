import java.util.Scanner;
class Greater_of_3
{
public static void main(String args[])
{
int num1,num2,num3;
System.out.println("Enter the First Number:");
Scanner g=new Scanner(System.in);
num1=g.nextInt();
System.out.println("<<<<<<<<<<<<<>>>>>>>>>>>>");
System.out.println("Enter the Second Number");
num2=g.nextInt();
System.out.println("<<<<<<<<<<<<<>>>>>>>>>>>>");
System.out.println("Enter the Third Number:");
num3=g.nextInt();
if(num1>num2)
{
System.out.println("Number_1 is Greater:");
}
else if(num2>num3)
{
System.out.println("Number_2 is Greater:");
}
else if(num3>num1)
{
System.out.println("Number_3 is Greater:");
}
else
{
System.out.println("Numbers are Equal");
}
}
}