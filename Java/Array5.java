import javax.swing.*;
import java.util.*;
//import java.io.*;
class Array5 //Array of class type String
{
	public static void main(String[]args)
	{
		String []p=null;
		//p is a ref.variable,refers to an array,where every element is a ref. to a class type String.
		p=new String[5];
		//Array creation to store String class object reference.
		int i=0;
		while(i<5)	//insertion
		{
			p[i]=JOptionPane.showInputDialog(null,"City Name");
			i++;
		}
		for(i=0;i<5;i++)
		{
			JOptionPane.showMessageDialog(null,p[i]);
		}
	}
}

/*
I/p:
(receives i/p in dialog boxes.)

O/p:
(Array displays in child window,dialog box.)
*/