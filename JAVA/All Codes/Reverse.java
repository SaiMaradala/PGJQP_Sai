import java.util.Scanner;
class Reverse 
{
public static void main(String[] args) 
{
int number, i;
Scanner sc = new Scanner(System.in);		
System.out.print("Enter the Number: ");
number = sc.nextInt();	
for(i = number; i >= 1; i--)
{
System.out.println(i); 
}	
}
}