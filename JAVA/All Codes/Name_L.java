import java.util.Scanner;
class Name_L
{
public static void main(String args[])
{
char ch;
System.out.println("Enter the name:");
Scanner s=new Scanner(System.in);
ch=s.next().charAt(0);
for(ch=1;ch<5;ch++)
{
System.out.println("Name is:"+ch);
}}}