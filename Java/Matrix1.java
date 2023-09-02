//2D Array

import javax.swing.*;
import java.util.*;
import java.io.*;
class Matrix1
{
	public static void main(String[]args)
	{
		int [][]x=new int[3][3];
		int i=0,j=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
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
Data[0][1]: 2
Data[0][2]: 3
Data[1][0]: 4
Data[1][1]: 5
Data[1][2]: 6
Data[2][0]: 7
Data[2][1]: 8
Data[2][2]: 9

O/p:
Matrix

1 2 3
4 5 6
7 8 9
*/