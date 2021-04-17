import java.util.Scanner;
class Ascii
{
public static void main(String args[])
{
char ch;
char ch2;
int ascii=ch;
int ascii=ch2;
Scanner sc=new Scanner(System.in);
System.out.println(".........................................................");
System.out.println("Enter the Character:");

ch=sc.next().charAt(0);
if(ch>='A' && ch<='Z')
{
System.out.println("ASCII value is:"+ch);
}
ch2=sc.next().charAt(0);
else if(ch2>= 'a' && ch2<='z')
{
System.out.println("ASCII value is:"+ch2);
}
else
{
System.out.println("Default");
}
}
}