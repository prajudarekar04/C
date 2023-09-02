//Result	comparable,comparator
import javax.swing.*;
import java.util.*;

interface DataIO
{
	void setData(int no);
	void display();
}
class Number2 implements DataIO
{
	int no;
	Number2()
	{
		no=0;
	}
	public void setData(int a)
	{
		no=a;
	}
	public String toString()
	{
		String s="Roll No.:"+no;
		return s;
	}
	public void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
}
class Result4 extends Number2 implements DataIO,Comparable<Result4>,Comparator<Result4>
{
	int []mrk;
	Result4()
	{
		super();
		mrk=new int[5];
	}
	int total()
	{
		int tot=mrk[0],i=1;
		while(i<5)
			tot+=mrk[i++];
		return tot;
	}
	double avg()
	{
		return (double)(total()/5);
	}
	public String toString()
	{
		String s=super.toString()+"\nMarks:"+Arrays.toString(mrk);
		return s;
	}
	public void display()
	{
		JOptionPane.showMessageDialog(null,toString());
	}
	public void setData(int n)
	{
		super.setData(n);
		for(int i=0;i<5;i++)
		{
			try
			{
				mrk[i]=Integer.parseInt(JOptionPane.showInputDialog(null,"\nMarks"));
			}
			catch(Exception e){mrk[i]=0;}
		}
	}
	public int compareTo(Result4 a)	//for roll no. wise data
	{
		return (no-a.no);
	}
	public int compare(Result4 s,Result4 t)	//for Total-wise data
	{
		return (s.total()-t.total());
	}
	public static Comparator<Result4>Avg=new Comparator<Result4>()	//for Avg-wise data
	{
		public int compare(Result4 a,Result4 b)
		{
			return (int)(a.avg()-b.avg());
		}
	};
	public static Comparator<Result4>TotalNo=new Comparator<Result4>()	//for total & rno wise data
	{
		public int compare(Result4 a,Result4 b)
		{
			int res = a.total()-b.total();
			if(res==0)
				return (a.no)-(b.no);
			else
				return res;
		}
	};
	public static void main(String[]args)
	{
		Result4[]a=new Result4[5];
		int i=0,n;
		while(i<5)
		{
			try //rather than void setData();
			{
				n=Integer.parseInt(JOptionPane.showInputDialog(null,"\nRoll No.:"));
			}
			catch(Exception e){continue;}
			a[i]=new Result4();
			a[i].setData(n);
			i++;
		}
		JOptionPane.showMessageDialog(null,Arrays.toString(a));	//as inputted

		Arrays.sort(a);	//using natural ordering defined by comparable	//roll no. wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,new Result4());	//using natural ordering defined by comparator -Total-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,Result4.Avg);	//using user defined by comparator - Avg-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));

		Arrays.sort(a,Result4.TotalNo);	//using user defined by comparator - TotalNo-wise
		JOptionPane.showMessageDialog(null,Arrays.toString(a));
	}

}