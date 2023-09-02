//Result
//Comparable Interface - compareTo(Object) method
//Comparator Interface - compare(Object,Object) method
//User Define Comparator

import javax.swing.*;
import java.util.*;
import java.io.*;

class Result implements Comparable<Result>,Comparator<Result>
{
	int rno;
	String nm;
	ArrayList<Integer>mrk;
	String trade;
	Result()
	{
		rno=0;
		nm=new String();
		mrk=new ArrayList<Integer>();
		trade=new String();
	}
	public String toString()
	{
		String s="\nRoll No.:"+rno+"\nName:"+nm+"\nMarks:"+mrk+"\nTotal:"+total()+"\nTrade:"+trade;
		return s;
	}
	void setData(int n)
	{
		rno=n;
		nm=JOptionPane.showInputDialog(null,"\nName:");
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
	int total()
	{
		int i=0,tot=0;
		while(i<mrk.size())
		{
			tot+=mrk.get(i).intValue();
			i++;
		}
		return tot;
	}
	public int compareTo(Result a)	//under Compariable Interfce
	{//for ascending order(rno-a.rno) & for descending order(a.rno-rno)
		return (rno-a.rno);
	}
	public int compare(Result a,Result b)	//under Compariator Interfce
	{//double to int type conversion
		return (int)(a.total()-b.total());
	}
	public static Comparator<Result>Trade=new Comparator<Result>()	//Trade-wise Comparasion
	{
		public int compare(Result a,Result b)
		{
			return (a.trade).compareTo(b.trade);
		}
	};
	public static Comparator<Result>Name=new Comparator<Result>()	//Name-wise Comparasion
	{
		public int compare(Result a,Result b)
		{
			return (a.nm).compareTo(b.nm);
		}
	};
	public static Comparator<Result>TradeNo=new Comparator<Result>()	//TradeNo-wise Comparasion
	{
		public int compare(Result a,Result b)
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
		Result[]a=new Result[5];
		int i=0,n;
		while(i<5)
		{
			try //rather than void setData();
			{
				n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nRoll No.:"));
			}
			catch(Exception e){continue;}
			a[i]=new Result();
			a[i].setData(n);
			i++;
		}
		JOptionPane.showMessageDialog(null,Arrays.toString(a));	//as inputted

		Arrays.sort(a);	//using natural ordering defined by comparable
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,new Result());	//using natural ordering defined by comparator
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,Result.Trade);	//using user defined by comparator - Trade-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,Result.Name);	//using user defined by comparator - Name-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,Result.TradeNo);	//using user defined by comparator - TradeNo-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
	}
}