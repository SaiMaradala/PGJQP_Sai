import java.util.Scanner;
class Calcu
 {
  public static void main(String[] args) 
{
double a,b,result;
char operator;
    System.out.print("Enter two numbers: ");
 Scanner r = new Scanner(System.in);
    a = r.nextDouble();
    b= r.nextDouble();
    System.out.print("Enter an operator (+, -, *, /): ");
    operator = r.next().charAt(0);
    switch (operator) {
      case '+':
        result = a+ b;
        break;
      case '-':
        result = a - b;
        break;
      case '*':
        result = a* b;
        break;
      case '/':
        result = a/ b;
        break;
      default:
        System.out.printf("Error! operator is not correct");
        return;
    }
    System.out.println(a + " " + operator + " " + b + " = " + result);
  }
}