//Class & Object - defining own class, methods,...

import javax.swing.*;
//import java.util.*;
import java.io.*;
class Student2
{
	int no;
	String nm;
	double mrk;
	Student2()
	{
		no=0;
		mrk=0.0;
		nm=new String();
	}
	void setData(int a)
	{
		no=a;
		nm=JOptionPane.showInputDialog(null,"Name:");
		try
		{
			mrk=Double.parseDouble(JOptionPane.showInputDialog(null,"Marks:"));
		}
		catch(Exception e) {}
	}
	void setData()
	{
		int a=0;
		try
		{
			a=Integer.parseInt(JOptionPane.showInputDialog(null,"Roll No.:"));
		}
		catch(Exception e) {}
		setData(a);
	}
	public String toString()
	{
		String s="\nRoll No.:"+no+"\nName:"+nm+"\nMarks:"+mrk;
		return s;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public static void main(String[] args)
	{
		Student2 p=new Student2();
		p.setData();
		p.display();
		Student2 q=p;
		q.display();	//same o/p as of p.display();
	}
}


/*
I/p:(in 3 separte dialog boxes)
Roll No.:12
Name:Paras
Marks:95

O/p:

*/