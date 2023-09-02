//creating Linked List & display individual element & sum of those element.
//use of Iterator(always iterates in unidirection)
//but tried for reverse sequence.
import java.util.*;
import javax.swing.*;
class UseList4
{
	public static void main(String[]args)
	{
		LinkedList<Integer>ls=new LinkedList<Integer>();
		int no=0;
		while(true)
		{
			try
			{
				no=Integer.parseInt(JOptionPane.showInputDialog(null,"Data"));
			}
			catch(Exception e) {continue;}
			if(no==0)
				break;
			ls.add(no);
		}
		JOptionPane.showMessageDialog(null,"Data:"+ls);
		int i=0,n=ls.size();
		while(i<n)
		{
			JOptionPane.showMessageDialog(null,"Data:"+ls.get(i));
			i++;
		}
		int sum=0;
		for(i=0;i<n;i++)
		{
			no=(ls.get(i)).intValue();
			sum+=no;
		}
		JOptionPane.showMessageDialog(null,"Total:"+sum);
		Iterator it=ls.iterator();
		while(it.hasNext())	//displays in sequential order.
		{
			System.out.println(it.next());
		}
		ListIterator ait=ls.listIterator();
		while(ait.hasNext())	//displays in sequential(forword) order.
		{
			System.out.println(ait.next());
		}
		while(ait.hasPrevious())	//displays in sequential(backword) order.
		{
			System.out.println(ait.previous());
		}
	}
}

/*
I/p:
dialog box asks data one by one
(Lastly enter 0)

O/p:(In Dialog box)
Data:[12,43,85,70,66]
Data:12
Data:43
Data:85
Data:70
Data:66
Total:276
(On command Prompt)
12
43
85
70
66
12
43
85
70
66
66
70
85
43
12
*/