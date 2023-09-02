//creating Array List.(simliar to Linked List.)
import java.util.*;
import javax.swing.*;
class ArrayList1
{
	public static void main(String[]args)
	{
		ArrayList<Integer>ls=new ArrayList<Integer>();
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