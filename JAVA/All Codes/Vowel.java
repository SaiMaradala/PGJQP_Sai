import java.util.Scanner;
class Vowel
{
public static void main(String[ ] arg)
{
int i=0;
char ch;
Scanner sc=new Scanner(System.in);
System.out.println("Enter a character : ");
ch=sc.next( ).charAt(0);	 
switch(ch)
{
case  'a' :
case 'e'  :
case 'i'   :
case 'o'  :
case 'u'  :
case  'A' :
case 'E'  :
case 'I'   :
case 'O'  :
case 'U'  :
i++;
}
if(i==1)
{
System.out.println("Entered character "+ch+" is  Vowel");}
else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
System.out.println("Entered character "+ch+" is Consonent");
}
else
{
System.out.println("Not an alphabet");		
}
}}