package com.niit.GUI;

import javax.swing.JButton;
import javax.swing.JFrame;

public class SetBoundDemo {

	public static void main(String[] args) {
		JFrame jf=new JFrame("Set Bounds Method Test ");
		jf.setExtendedState(jf.MAXIMIZED_BOTH);
		jf.setLayout(null);
		JButton jb=new JButton("Hello Java");
		jb.setBounds(60,60,1400,700);
		// * here setBounds() method needs four arguments.1st nd 2nd arguements are X and Y coordinates of the top_left corner 
		// of the component,3rd and 4rth arguments are WIDTH nd HEIGHT of the component SYNTAX: setBounds(int x-coordinate,int y-coordinate,int width,int height)
		jf.add(jb);
		jf.setDefaultCloseOperation(jf.EXIT_ON_CLOSE);
		jf.setVisible(true);
	}
	

}
