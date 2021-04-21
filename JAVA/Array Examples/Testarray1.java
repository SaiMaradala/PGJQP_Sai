package com.array.examples;

public class Testarray1 {

	public static void main(String[] args)
	{
		int a[]= {10,20,30};
		for(int i=0;i<a.length;i++)
		{
			System.out.println(a[i]);
		}
		System.out.println("Program starts here :");
		System.out.println("Using For each loop :");
		for(int i:a)
			System.out.println(i);
	}

}
