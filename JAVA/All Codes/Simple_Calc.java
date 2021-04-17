import java.util.Scanner;
public class Simple_Calc
{
public static void main(String[] args) 
{
Scanner s= new Scanner(System.in);
System.out.println("Enter two numbers: ");
float first = s.nextFloat();
float second = s.nextFloat();
System.out.println("Enter an operator (+, -, *, /): ");
char operator = s.next().charAt(0);
float result;
switch (operator) 
{
case  '+':
result = first + second;
break;

case '-':
result = first - second;
break;

case '*':
result = first * second;
break;

case '/':
result = first / second;
break;


default:
System.out.println("Invalid");
return;
}

System.out.println(first + " " + operator + " " + second + " = " + result);
}
}
