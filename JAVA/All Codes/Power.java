import java.util.Scanner;
public class Power
{
public static void main(String[] args) 
{
int number, i, exponent;
long power = 1;
Scanner sc = new Scanner(System.in);	
System.out.print("Enter any Number : ");
number = sc.nextInt();		
System.out.print("Enter the Exponent Value : ");
exponent = sc.nextInt();	
for(i = 1; i <= exponent; i++)
{
power = power * number;
}
System.out.println("Power is "+ power);
}
}