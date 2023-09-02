//Inputting marks of 5subject with roll no. and displaying it with total.
//5subject i.e. Static Array

import javax.swing.*;
import java.util.*;
import java.io.*;
class Result1
{
	int rno;
	int []mrk;
	Result1()
	{
		rno=0;
		mrk=new int[5];
	}
	void setData(int n)
	{
		rno=n;
		int i=0;
		while(i<mrk.length)
		{
			try
			{
				mrk[i]=Integer.parseInt(JOptionPane.showInputDialog(null,"Marks:"));
			}
			catch(Exception e) {continue;}
			i++;
		}
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
	int total()
	{
		int tot=mrk[0],i=1;
		while(i<mrk.length)
			tot+=mrk[i++];
		return tot;
	}
	public String toString()
	{
		String s="Roll No.:"+rno+"\nMarks:"+Arrays.toString(mrk)+"\nTotal:"+total();
		return s;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public static void main(String[] args)
	{
		Result1 a=new Result1();
		a.setData(123);
		a.display();
	}
}


/*
I/p:displays marks input window 5 times

O/p:

*/