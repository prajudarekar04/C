package ds;
import mypkg.Util;
import ds.ArrayData;
import ds.IStack;
import ds.IQueue;
public class DataStruct extends ArrayData implements IStack,IQueue
{
	int top,fr,rr;
	public DataStruct()
	{
		super();
		top=-1;
		rr=-1;
		fr=0;
	}
	public boolean isFull()
	{
		return(top==size-1);
	}
	public boolean isEmpty()
	{
		return(top==-1);
	}
	public void push(int d)
	{
		if(isFull())
		{
			Util.display("Overflow");
			return;
		}
		set(++top,d);
	}
	public void pop()
	{
		if(isEmpty())
		{
			Util.display("Underflow");
			return;
		}
		top--;
	}
	public void sDisplay()
	{
		String s="";
		if(isEmpty())
			s="Empty Stack";
		else
		{
			s="Stack";
			for(int i=top;i>=0;i--)
				s=s+""+get(i);
		}
		Util.display(s);
	}
	public void sMenu()
	{
		String[]choice=new String[]{"push","pop","display","exit"};
		while(true)
		{
			int opt=Util.oInput("Choss Option","Stack",choice);
			if(opt==3)
				break;
			switch(opt)
			{
				case 0:
					int d=Util.iInput("Data");
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
	//for Queue
	public boolean isQFull()
	{
		return(rr==size-1);
	}
	public boolean isQEmpty()
	{
		return(rr<fr);
	}
	public void insert(int d)
	{
		if(isQFull())
		{
			Util.display("Overflow");
			return;
		}
		set(++rr,d);
	}
	public void remove()
	{
		if(isQEmpty())
		{
			Util.display("Underflow");
			return;
		}
		fr++;
	}
	public void qDisplay()
	{
		String s="";
		if(isQEmpty())
			s="Empty Queue";
		else
		{
			s="Queue";
			for(int i=fr;i<=rr;i++)
				s=s+""+get(i);
		}
		Util.display(s);
	}
	public void qMenu()
	{
		String[]choice=new String[]{"insert","remove","display","exit"};
		while(true)
		{
			int opt=Util.oInput("Choss Option","Queue",choice);
			if(opt==3)
				break;
			switch(opt)
			{
				case 0:
					int d=Util.iInput("Data");
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