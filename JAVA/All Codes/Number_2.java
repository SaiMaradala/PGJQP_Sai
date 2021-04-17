import java.util.Scanner;
class Number_2 
{
public static void main(String[] args) 
{
int count = 0, num;
System.out.println("Enter any Integer:");
Scanner s=new Scanner(System.in);
num=s. nextInt();
while (num != 0) 
{
num /= 10;
++count;
}
System.out.println("Number of digits: " + count);
}
}