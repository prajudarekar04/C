import java.util.*;
import javax.swing.*;
class UseList1 //creating Linked List.
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
	}
}

/*
I/p:
dialog box asks data one by one
(Lastly enter 0)

O/p:
Data:[12,43,85,70,66]
*/