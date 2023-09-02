//Interface
//Stack & Queue

import javax.swing.*;
import java.util.*;
interface SetGet
{
	void set(int pos, int data);
	int get(int pos);
	int size=5;
}
interface IStack
{
	void push(int d);
	void pop();
	boolean isFull();
	boolean isEmpty();
	void sDisplay();
	void sMenu();
}
interface IQueue
{
	void insert(int d);
	void remove();
	boolean isQFull();
	boolean isQEmpty();
	void qDisplay();
	void qMenu();
}
class MyArray implements SetGet,IStack,IQueue //it defines all these methods should have code
{
	int []arr;
	int top,fr,rr;
	MyArray()
	{
		arr=new int[size];
		top=-1;
		rr=-1;
		fr=0;
	}
	public void set(int pos, int d)
	{
		arr[pos]=d;
	}
	public int get(int pos)
	{
		return arr[pos];
	}
	//methods for Stack
	public boolean isFull()
	{
		return (top==size-1);
	}
	public boolean isEmpty()
	{
		return (top==-1);
	}
	public void push(int d)
	{
		if(isFull())
			JOptionPane.showMessageDialog(null,"Overflow");
		else
			set(++top,d);
	}
	public void pop()
	{
		if(isEmpty())
			JOptionPane.showMessageDialog(null,"Underflow");
		else
			top--;
	}
	public void sDisplay()
	{
		String s="Stack";
		if(isEmpty())
			s=s+"Empty";
		else
		{
			for(int i=top;i>=0;i--)
				s=s+" "+get(i);
		}
		JOptionPane.showMessageDialog(null,s);
	}
	public void sMenu()
	{
		String []option=new String[]{"push","pop","display","exit"};
		int opt=0,d=0;
		while(true)
		{
			opt=JOptionPane.showOptionDialog(null,"choose one","Stack",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,option,0);
			if(opt==3)
				break;
			switch(opt)
			{
				case 0:
					try
					{
						d=Integer.parseInt(JOptionPane.showInputDialog(null,"Data"));
					}
					catch(Exception e){}
					push(d);
					break;
				case 1:
					pop();
					break;
				case 2:
					sDisplay();
					break;
			}
		}
	}
	//methods for Queue
	public boolean isQFull()
	{
		return (rr==size-1);
	}
	public boolean isQEmpty()
	{
		return (rr<fr);
	}
	public void insert(int d)
	{
		if(isQFull())
			JOptionPane.showMessageDialog(null,"Overflow");
		else
			set(++rr,d);
	}
	public void remove()
	{
		if(isQEmpty())
			JOptionPane.showMessageDialog(null,"Underflow");
		else
			fr++;
	}
	public void qDisplay()
	{
		String s="Queue";
		if(isEmpty())
			s=s+"Empty";
		else
		{
			for(int i=fr;i<=rr;i++)
				s=s+" "+get(i);
		}
		JOptionPane.showMessageDialog(null,s);
	}
	public void qMenu()
	{
		String []option=new String[]{"insert","remove","display","exit"};
		int opt=0,d=0;
		while(true)
		{
			opt=JOptionPane.showOptionDialog(null,"choose one","Queue",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,option,0);
			if(opt==3)
				break;
			switch(opt)
			{
				case 0:
					try
					{
						d=Integer.parseInt(JOptionPane.showInputDialog(null,"Data"));
					}
					catch(Exception e){}
					insert(d);
					break;
				case 1:
					remove();
					break;
				case 2:
					qDisplay();
					break;
			}
		}
	}
}
class Interface2
{
	public static void main(String[] args)
	{
		MyArray a=new MyArray();
		a.sMenu();
		a.qMenu();
/*
		String []opt=new String[]{"Stack","Queue","exit"};
		while(true)
		{
			int choice=JOptionPane.showOptionDialog(null,"Choose One","DS",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,opt,0);
			if(choice==2)
				break;
			switch(choice)
			{
				case 0:
					a.sMenu();
					break;
				case 1:
					a.qMenu();
					break;
			}
		}
*/
	}
}