import javax.swing.*;
import java.util.*;
//import java.io.*;
class Array7 //Array of class type String - Sort
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
		JOptionPane.showMessageDialog(null,Arrays.toString(p));
		Arrays.sort(p);
		JOptionPane.showMessageDialog(null,Arrays.toString(p));
	}
}
/*
O/p:
1) in line array displays(within square bracket)
2) in sorted form
*/