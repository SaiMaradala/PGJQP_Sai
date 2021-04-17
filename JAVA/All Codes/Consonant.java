import java.util.*;
class Consonant
{
public static void main(String args[])
{
char c;
System.out.print("Enter Character: ");
Scanner s=new Scanner(System.in);
c=s.nextLine().charAt(0);
switch(c) 
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U': 
System.out.println(" is a Vowel:"+c);
break;
default:
 System.out.println("is a Consonant:"+c);
}
}
}