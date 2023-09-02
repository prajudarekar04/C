//Comparable Interface - compareTo(Object) method
//Comparator Interface - compare(Object,Object) method

import javax.swing.*;
import java.util.*;

class Student4 implements Comparable<Student4>
{
	int rno;
	String nm;
	String trade;
	Student4()
	{
		rno=0;
		nm=new String();
		trade=new String();
	}
	public String toString()
	{
		String s="\nRoll No.:"+rno+"\nName:"+nm+"\nTrade:"+trade;
		return s;
	}
	void setData(int a)
	{
		rno=a;
		nm=JOptionPane.showInputDialog(null,"\nName:");
		trade=JOptionPane.showInputDialog(null,"\nTrade:");
	}
	void setData()
	{
		int a=0;
		try
		{
			a=Integer.parseInt(JOptionPane.showInputDialog(null,"\nRoll No.:"));
		}
		catch(Exception e){}
		setData(a);
	}
	public int compareTo(Student4 a)
	{//for ascending order(rno-a.rno) & for decending order(a.rno-rno)
		return (rno-a.rno);
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public static void main(String[]args)
	{
		Student4[]a=new Student4[5];
		int i=0;
		while(i<5)
		{
			a[i]=new Student4();
			a[i].setData();
			i++;
		}
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
		Arrays.sort(a);
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
	}
}