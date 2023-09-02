//BOOK
//Comparable Interface - compareTo(Object) method	Comparator Interface - compare(Object,Object) method	User Define Comparator

import javax.swing.*;
import java.util.*;
import java.io.*;

class Book implements Comparable<Book>,Comparator<Book>
{
	int no;
	String nm;
	double price;
	String author;
	Book()
	{
		no=0;
		nm=new String();
		price=0.0;
		author=new String();
	}
	public String toString()
	{
		String s="\nBook No.:"+no+"\nName:"+nm+"\nPrice:"+price+"\nauthor:"+author;
		return s;
	}
	void setData(int n)
	{
		no=n;
		nm=JOptionPane.showInputDialog(null,"\nName:");
		try
		{
			price=Double.parseDouble(JOptionPane.showInputDialog(null,"\nPrice:"));
		}
		catch(Exception e){}
		author=JOptionPane.showInputDialog(null,"\nauthor:");
	}
	void setData()
	{
		int n=0;
		try
		{
			n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nBook No.:"));
		}
		catch(Exception e){}
		setData(n);
	}
	public int compareTo(Book a)	//under Compariable Interfce
	{//for ascending order(no-a.no) & for descending order(a.no-no)
		return (no-a.no);
	}
	public int compare(Book a,Book b)	//under Compariator Interfce
	{//double to int type conversion
		return (int)(a.price-b.price);
	}
	public static Comparator<Book>Author=new Comparator<Book>()	//author-wise Comparasion
	{
		public int compare(Book a,Book b)
		{
			return (a.author).compareTo(b.author);
		}
	};
	public static Comparator<Book>Name=new Comparator<Book>()	//Name-wise Comparasion
	{
		public int compare(Book a,Book b)
		{
			return (a.nm).compareTo(b.nm);
		}
	};
	public static Comparator<Book>authorNo=new Comparator<Book>()	//authorNo-wise Comparasion
	{
		public int compare(Book a,Book b)
		{
			int res = (a.author).compareTo(b.author);
			if(res==0)
				return (a.no)-(b.no);
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
		Book[]a=new Book[5];
		int i=0,n;
		while(i<5)
		{
			try //rather than void setData();
			{
				n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nBook No.:"));
			}
			catch(Exception e){continue;}
			a[i]=new Book();
			a[i].setData(n);
			i++;
		}
		JOptionPane.showMessageDialog(null,Arrays.toString(a));	//displays as it is - inputting order
		Arrays.sort(a);	//using natural ordering defined by comparable - no
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,new Book());	//using natural ordering defined by comparator - Price-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,Book.Author);	//using user defined by comparator - author-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,Book.Name);	//using user defined by comparator - Name-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a,Book.authorNo);	//using user defined by comparator - authorNo-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
	}
}