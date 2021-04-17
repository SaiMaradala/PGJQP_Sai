import java.util.Scanner;
class Greater
{
public static void main(String args[])
{
int num;
System.out.println(".........................................................");
System.out.println("Enter the Number:");
Scanner s=new Scanner(System.in);
num=s.nextInt();
if(num>=10)
{
System.out.println(".........................................................");
System.out.println("Greater than 10");
}
else
{
System.out.println(".........................................................");
System.out.println("Less than 10");
}
}
}