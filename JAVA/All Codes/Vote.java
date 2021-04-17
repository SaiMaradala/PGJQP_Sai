import java.util.Scanner;
class Vote
{
public static void main(String args[])
{
int age;
System.out.println("Enter the age:");
Scanner s=new Scanner(System.in);
age=s.nextInt();
if(age>=18)
{
System.out.println("Eligible to vote:");
}
else
{
System.out.println("Not Eligible to vote");
} 
}
}