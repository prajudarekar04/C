//2D Array - in Triangular form.

import javax.swing.*;
import java.util.*;
//import java.io.*;
class Matrix2
{
	public static void main(String[]args)
	{
		int [][]x=new int[3][3];
		int i=0,j=0;
		for(i=0;i<3;i++)
		{
			x[i]=new int[i+1];
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<x[i].length;j++)
			{
				try
				{
					x[i][j]=Integer.parseInt(JOptionPane.showInputDialog(null,"x["+i+"]["+j+"]"));
				}
				catch(Exception e){x[i][j]=0;}
			}
		}
		String str="Matrix\n";
		for(i=0;i<3;i++)
		{
			str=str+"\n"+Arrays.toString(x[i]);
		}
		JOptionPane.showMessageDialog(null,str);
	}
}


/*
I/p:
Data[0][0]: 1
Data[1][0]: 2
Data[1][1]: 3
Data[2][0]: 4
Data[2][1]: 5
Data[2][2]: 6

O/p:
Matrix

1
2 3
4 5 6
*/