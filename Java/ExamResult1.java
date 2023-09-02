//Inputting marks of subjects with roll no. and displaying it with total.
//Nesting of Classes.

import javax.swing.*;
import java.util.*;
//import java.io.*;
class Marks1
{
	ArrayList<Integer>mrk;
	Marks1()
	{
		mrk=new ArrayList<Integer>();
	}
	void setData()
	{
		int val=0;
		while(true)
		{
			try
			{
				val=Integer.parseInt(JOptionPane.showInputDialog(null,"Marks:"));
			}
			catch(Exception e) {continue;}
			if(val<0)
				continue;
			if(val==0)
				break;
			mrk.add(val);
		}
	}
	int total()
	{
		int tot=0,i=0,val=0;
		while(i<mrk.size())
		{
			tot+=mrk.get(i).intValue();
			i++;
		}
		return tot;
	}
	int avg()
	{
		return total()/mrk.size();
	}
	public String toString()
	{
		String s="\nMarks:"+mrk+"\nTotal:"+total()+"\nAverage:"+avg();
		return s;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());//+this
	}	
}
class Candidate
{
	int rno;
	String nm;
	Marks1 mr;
	Candidate()
	{
		rno=0;
		nm=new String();
		mr=new Marks1();
	}
	void setData()
	{
		try
		{
			rno=Integer.parseInt(JOptionPane.showInputDialog(null,"Roll No.:"));
			nm=JOptionPane.showInputDialog(null,"Name:");
			mr.setData();
		}
		catch(Exception e) {}
	}
	public String toString()
	{
		String a="Roll No.:"+rno+"\nName:"+nm+mr;
		return a;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
}
public class ExamResult1
{
	public static void main(String[] args)
	{
		Candidate p=new Candidate();
		p.setData();
		p.display();
	}
}

/*
I/p:displays marks input windows upto element 0.

O/p:displays out in single window

*/