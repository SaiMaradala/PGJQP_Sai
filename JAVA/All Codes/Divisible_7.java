import java.util.Scanner;  
class Divisible_7  
{ 
public static void main(String args[])
{
int num; 
System.out.println("Enter the Number:");
Scanner s=new Scanner(System.in); 
num=s.nextInt();
if(num%7==0)
{ 
System.out.println("................................\n");
System.out.println("Number is Divisible by 7");
}
else
{
System.out.println("................................\n");
System.out.println("Number is not Divisible by 7");
} 
} 
}