//Comparable Interface - compareTo(Object) method
//Comparator Interface - compare(Object,Object) method

import javax.swing.*;
import java.util.*;
import java.io.*;

class Student5 implements Comparable<Student5>,Comparator<Student5>
{
	int rno;
	String nm;
	double mrk;
	String trade;
	Student5()
	{
		rno=0;
		nm=new String();
		mrk=0.0;
		trade=new String();
	}
	public String toString()
	{
		String s="\nRoll No.:"+rno+"\nName:"+nm+"\nMarks:"+mrk+"\nTrade:"+trade;
		return s;
	}
	void setData(int n)
	{
		rno=n;
		nm=JOptionPane.showInputDialog(null,"\nName:");
		try
		{
			mrk=Double.parseDouble(JOptionPane.showInputDialog(null,"\nMarks:"));
		}
		catch(Exception e){}
		trade=JOptionPane.showInputDialog(null,"\nTrade:");
	}
	void setData()
	{
		int n=0;
		try
		{
			n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nRoll No.:"));
		}
		catch(Exception e){}
		setData(n);
	}
	public int compareTo(Student5 a)	//under Compariable Interfce
	{//for ascending order(rno-a.rno) & for descending order(a.rno-rno)
		return (rno-a.rno);
	}
	public int compare(Student5 a,Student5 b)	//under Compariator Interfce
	{//double to int type conversion
		return (int)(a.mrk-b.mrk);
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public static void main(String[]args)
	{
		Student5[]a=new Student5[5];
		int i=0,n;
		while(i<5)
		{
			try //rather than void setData();
			{
				n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nRoll No.:"));
			}
			catch(Exception e){continue;}
			a[i]=new Student5();
			a[i].setData(n);
			i++;
		}
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a);	//using natural ordering defined by comparable
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,new Student5());	//using natural ordering defined by comparator
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
	}
}