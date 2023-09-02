//Inputting marks of subjects with roll no. and displaying it with total.
//Dynamic Array

import javax.swing.*;
import java.util.*;
//import java.io.*;
class Result2
{
	int rno;
	ArrayList<Integer>mrk;
	Result2()
	{
		rno=0;
		mrk=new ArrayList<Integer>();
	}
	void setData(int n)
	{
		rno=n;
		int val=0;
		while(true)
		{
			try
			{
				val=Integer.parseInt(JOptionPane.showInputDialog(null,"Marks:"));
			}
			catch(Exception e) {continue;}
			if(val==0)
				break;
			mrk.add(val);
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
		int tot=0,i=0,val=0;
		while(i<mrk.size())
		{
			tot+=mrk.get(i),intValue();
			i++;
		}
		return tot;
	}
	public String toString()
	{
		String s="Roll No.:"+rno+"\nMarks:"+mrk+"\nTotal:"+total();
		return s;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public static void main(String[] args)
	{
		Result2 a=new Result2();
		a.setData(123);
		a.display();
	}
}


/*
I/p:displays marks input windows upto element 0.

O/p:displays out in single window

*/