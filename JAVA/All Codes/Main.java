import java.util.Scanner;
class Main
{
public static void main(String args[])
{
int num;
float f;
char ch;
System.out.println("................Program Starts her..................");

System.out.println("Number is:");
Scanner s=new Scanner(System.in);
num=s.nextInt();
System.out.println("Integer type:"+num);

System.out.println("............................................");

System.out.println("Float is:");
Scanner ss=new Scanner(System.in);
f=ss.nextFloat();
System.out.println("Float type:"+f);

System.out.println("............................................");

System.out.println("Character is:");
Scanner Sc=new Scanner(System.in);
ch=Sc.next().charAt(0);
System.out.println("Character Type:"+ch);
System.out.println(".............Program Ends here...............");

}
}
