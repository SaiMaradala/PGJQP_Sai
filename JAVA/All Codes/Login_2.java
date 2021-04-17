package com.niit.inner_class;
import java.util.Scanner;
public class Login_2 {
	private static  String User_Name;
	private static String Password;
	public void Login_2()
	{
		System.out.println(this.User_Name=User_Name);
		System.out.println(this.Password=Password);
	}
	class Details
	{
	void validate()
	{
		System.out.println("Valid User_Name :"+User_Name);
		System.out.println("Valid Password :"+Password);
	}}

	public static void main(String[] args) {
	    Scanner s=new Scanner(System.in);
		User_Name=s.next();
		Password=s.next();
		Login_2 L=new Login_2();
	    Login_2.Details D=L.new Details();
	    D.validate();
	    
	}

}
