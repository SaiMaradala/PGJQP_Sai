import java.util.Scanner;
class Greater_of_2
{
public static void main(String args[])
{
int num1,num2;
System.out.println("Enter the Two Numbers:");
Scanner g=new Scanner(System.in);
num1=g.nextInt();
num2=g.nextInt();
if(num1>num2)
{
System.out.println("Number_1 is Greater:");
}
else
{
System.out.println("Number_2 is Greater:");
}
}
}