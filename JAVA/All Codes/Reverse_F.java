import java.util.Scanner;  
public class Reverse_F   
{   
public static void reverse(int num)   
{  
if (num < 10)   
{ 
System.out.println(num);  
}  
else   
{  
System.out.print(num % 10);  
reverse(num/10);  
}  
}  
public static void main(String args[])  
{  
System.out.print("Enter the number : ");  
Scanner sc = new Scanner(System.in);  
int num2 = sc.nextInt();  
System.out.print("Reverse Number is : ");  
reverse(num2);  
}  
}  