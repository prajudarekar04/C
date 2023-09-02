//Hierarchical Inheritance
//DS :- 1)Stack 2)Queue (only using Array)
//Super class = Base class & Sub class = Derived class

import javax.swing.*;
class DArray1
{
	int[]arr;
	DArray1()
	{
		arr=new int[5];
	}
	void set(int pos,int d)
	{
		arr[pos]=d;
	}
	int get(int pos)
	{
		return arr[pos];
	}
	public String toString()
	{
		return new String();
	}
}
class Stack2 extends DArray1
{
	int top;
	Stack2()
	{
		super();
		top=-1;
	}
	boolean isFull()
	{
		return (top==arr.length-1);
	}
	boolean isEmpty()
	{
		return (top==-1);
	}
	void push(int d)
	{
		if(isFull())
		{
			JOptionPane.showMessageDialog(null,"Overflow");
			return;
		}
		set(++top,d);
	}
	void pop()
	{
		if(isEmpty())
		{
			JOptionPane.showMessageDialog(null,"Underflow");
			return;
		}
		top--;
	}
	public String toString()
	{
		String str="Stack";
		if(top==-1)
			str=str+"Empty";
		else
		{
			for(int i=top;i>=0;i--)
				str=str+" "+arr[i];
		}
		return str;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	void menu()
	{
		String[]opt=new String[]{"push","pop","display","exit"};
		while(true)
		{
			int choice=JOptionPane.showOptionDialog(null,"Choose One","Stack",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,opt,0);
			if(choice==3)
				break;
			switch(choice)
			{
				case 0:
					int d=0;
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
					display();
					break;
			}
		}
	}
}
class Queue1 extends DArray1
{
	int fr,rr;
	Queue1()
	{
		super();
		rr=-1;
		fr=0;
	}
	boolean isFull()
	{
		return (rr==arr.length-1);
	}
	boolean isEmpty()
	{
		return (rr<fr);
	}
	void insert(int d)
	{
		if(isFull())
		{
			JOptionPane.showMessageDialog(null,"Overflow");
			return;
		}
		set(++rr,d);
	}
	void remove()
	{
		if(isEmpty())
		{
			JOptionPane.showMessageDialog(null,"Underflow");
			return;
		}
		fr++;
	}
	public String toString()
	{
		String str="Queue";
		if(isEmpty())
			str=str+"Empty";
		else
		{
			for(int i=fr;i<=rr;i++)
				str=str+" "+arr[i];
		}
		return str;
	}
	void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	void menu()
	{
		String[]opt=new String[]{"insert","remove","display","exit"};
		while(true)
		{
			int choice=JOptionPane.showOptionDialog(null,"Choose One","Queue",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,opt,0);
			if(choice==3)
				break;
			switch(choice)
			{
				case 0:
					int d=0;
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
					display();
					break;
			}
		}
	}
}
public class Inh4
{
	public static void main(String[] args)
	{
		String []opt=new String[]{"Stack","Queue","exit"};
		while(true)
		{
			int choice=JOptionPane.showOptionDialog(null,"Choose One","DS",JOptionPane.YES_OPTION,JOptionPane.INFORMATION_MESSAGE,null,opt,0);
			if(choice==2)
				break;
			switch(choice)
			{
				case 0:
					(new Stack2()).menu();
					break;
				case 1:
					(new Queue1()).menu();
					break;
			}
		}
	}
}