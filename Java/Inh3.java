//Hierarchical Inheritance
//Super class = Base class & Sub class = Derived class

import javax.swing.*;
class DArray
{
	int[]arr;
	DArray()
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
class Stack1 extends DArray
{
	int top;
	Stack1()
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
public class Inh3
{
	public static void main(String[] args)
	{
		Stack1 a=new Stack1();
		a.menu();
	}
}