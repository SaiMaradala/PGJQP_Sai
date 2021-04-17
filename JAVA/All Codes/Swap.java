import java.util.Scanner;
class Swap  
{  
public static void main(String args[])  
{  
int a, b,temp;  
Scanner scanner = new Scanner(System.in);  
System.out.print(".................................................\n");
System.out.print("Enter the first number: ");  
a = scanner.nextInt();  
System.out.print(".................................................\n");
System.out.print("Enter the second number: ");  
b = scanner.nextInt();  
System.out.println("Before swapping:");  

System.out.println("a = " +a +", b = " +b);  
temp = a;
a = b;
b = temp;
System.out.print(".................................................\n");
System.out.println("After swapping:");  
System.out.print("a = " +a +", b = " +b);  
}  
}  