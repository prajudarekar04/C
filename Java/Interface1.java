//Interface 

import javax.swing.*;
import java.util.*;
interface Isize
{
	int size=5;
}
interface DataIO
{
	void setData(int n);
	void setData();
	void display();
}
class Result3 implements Isize,DataIO //it defines all these methods should have code
{
	int no;
	int []mrk;
	Result3()
	{
		no=0;
		mrk=new int[size];
	}
	public void setData(int n)
	{
		no=n;
		int i=0;
		while(i<size)
		{
			try
			{
				mrk[i]=Integer.parseInt(JOptionPane.showInputDialog(null,"Marks:"));
			}
			catch(Exception e){ continue;}
			i++;
		}
	}
	public void setData()
	{
		try
		{
			no=Integer.parseInt(JOptionPane.showInputDialog(null,"Roll No.:"));
		}
		catch(Exception e){}
		setData(no);
	}
	public String toString()
	{
		String s="Roll no:"+no+"\nMarks:"+Arrays.toString(mrk)+"\nTotal:"+total()+"\nAvgerage:"+avg();
		return s;
	}
	int total()
	{
		int tot=mrk[0],i=1;
		while(i<size)
			tot+=mrk[i++];
		return tot;
	}
	int avg()
	{
		return total()/size;
	}
	public void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
}
class Interface1
{
	public static void main(String[] args)
	{
		Result3 a=new Result3();
		a.setData();
		a.display();
	}
}