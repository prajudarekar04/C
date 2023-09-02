//Class & Object - defining own class, methods,...

import javax.swing.*;
//import java.util.*;
import java.io.*;
class Student3
{
	int no;
	String nm;
	double mrk;
	Student3()
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
		Student3 []a=new Student3[5];	//array of reference class Student3
		int i=0;
		while(i<a.length)
		{
			a[i]=new Student3();
			a[i].setData();
			i++;
		}
		for(i=0;i<a.length;i++)
			a[i].display();
	}
}


/*
I/p:(in 3 separte dialog boxes)
Roll No.:12
Name:Paras
Marks:95

O/p:(in 1st window)

*/