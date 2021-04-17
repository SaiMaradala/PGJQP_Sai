import java.util.Scanner;
class Equal 
{
public static void main(String[] args) 
{
int num1,num2;
Scanner s = new Scanner(System.in);
System.out.print(".....................................\n");

System.out.print("Enter the first number:");
num1 = s.nextInt();
System.out.print("......................................\n");

System.out.print("Enter the second number:");
num2= s.nextInt();
if(num1==num2)
{
System.out.println("Num1 and Num2 are equal ");
}
else
{
System.out.println("Num1 and Num2 are not equal ");
}
}
}