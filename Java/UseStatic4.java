import java.io.*;
import java.util.*;
import javax.swing.*;
class Static1 //2D-Array - Matrix
{
	static int [][]arr;
	static
	{
		arr=new int[3][3];
	}
	static void input()
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				try
				{
					arr[i][j]=Integer.parseInt(JOptionPane.showInputDialog(null,"Data"));
				}
				catch(Exception e){continue;}
			}
		}
	}
	static void display()
	{
		int i=0,j=0;
		String s="Matrix\n";
		while(i<3)
		{
			s=s+Arrays.toString(arr[i])+"\n";
			i++;
		}
		JOptionPane.showMessageDialog(null,s);
	}
}
public class UseStatic4
{
	public static void main(String[]args)
	{
		Static1.input();
		Static1.display();
	}
}



/*
I/p:

O/p:

*/