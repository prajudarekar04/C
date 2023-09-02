//Comparable Interface - compareTo(Object) method
//Comparator Interface - compare(Object,Object) method
//User Define Comparator

import javax.swing.*;
import java.util.*;
import java.io.*;

class Student6 implements Comparable<Student6>,Comparator<Student6>
{
	int rno;
	String nm;
	double mrk;
	String trade;
	Student6()
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
	public int compareTo(Student6 a)	//under Compariable Interfce
	{//for ascending order(rno-a.rno) & for descending order(a.rno-rno)
		return (rno-a.rno);
	}
	public int compare(Student6 a,Student6 b)	//under Compariator Interfce
	{//double to int type conversion
		return (int)(a.mrk-b.mrk);
	}
	public static Comparator<Student6>Trade=new Comparator<Student6>()	//Trade-wise Comparasion
	{
		public int compare(Student6 a,Student6 b)
		{
			return (a.trade).compareTo(b.trade);
		}
	};
	public static Comparator<Student6>Name=new Comparator<Student6>()	//Name-wise Comparasion
	{
		public int compare(Student6 a,Student6 b)
		{
			return (a.nm).compareTo(b.nm);
		}
	};
	public static Comparator<Student6>TradeNo=new Comparator<Student6>()	//TradeNo-wise Comparasion
	{
		public int compare(Student6 a,Student6 b)
		{
			int res = (a.trade).compareTo(b.trade);
			if(res==0)
				return (a.rno)-(b.rno);
			else	//res!=0
				return res;
		}
	};
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public static void main(String[]args)
	{
		Student6[]a=new Student6[5];
		int i=0,n;
		while(i<5)
		{
			try //rather than void setData();
			{
				n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nRoll No.:"));
			}
			catch(Exception e){continue;}
			a[i]=new Student6();
			a[i].setData(n);
			i++;
		}
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a);	//using natural ordering defined by comparable
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,new Student6());	//using natural ordering defined by comparator
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,Student6.Trade);	//using user defined by comparator - Trade-wise
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,Student6.Name);	//using user defined by comparator - Name-wise
		//JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,Student6.TradeNo);	//using user defined by comparator - TradeNo-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
	}
}