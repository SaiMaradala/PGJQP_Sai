import java.util.Scanner;  
class Greaterthan
{ 
public static void main(String args[])
{
int num1,num2,sum,mul,Greater; 
System.out.println("Enter the First Number:");
Scanner s=new Scanner(System.in); 
num1=s.nextInt();
System.out.println("Enter the Second Number:");
num2=s.nextInt();
sum=num1+num2;
mul=num1*num2;
System.out.println("Addition is:"+sum);
System.out.println("Multiplication is:"+mul);
if(mul > sum )
{ 
System.out.println("................................\n");
System.out.println("Multiplication of Two Numbers is Greater");
}
else
{
System.out.println("................................\n");
System.out.println("Addition of Two Numbers is Greater");
} 
} 
}