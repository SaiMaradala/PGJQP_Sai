import java.util.Scanner;  
class Divisible_9
{ 
public static void main(String args[])
{
int num; 
System.out.println("Enter the Number:");
Scanner s=new Scanner(System.in); 
num=s.nextInt();
if(num%9==0)
{ 
System.out.println("................................\n");
System.out.println("Number is Divisible by 9");
}
else
{
System.out.println("................................\n");
System.out.println("Number is not Divisible by 9");
} 
} 
}