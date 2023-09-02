import java.io.*;
import java.util.*;
import javax.swing.*;
class UseStatic3 //Inputting, finding min&max & Displaying Array, using Static.
{
	static int []arr;
	static BufferedReader br;
	static
	{
		arr=new int[5];
		try
		{
			br=new BufferedReader(new InputStreamReader(System.in));
		}
		catch(Exception e){}
	}
	static void input()
	{
		System.out.println("No.:");
		for(int i=0;i<5;i++)
		{
			try
			{
				arr[i]=Integer.parseInt(br.readLine());
			}
			catch(Exception e){arr[i]=0;}
		}
	}
	static int sum()
	{
		int tot=arr[0],i=1;
		while(i<arr.length)
			tot+=arr[i++];
		return tot;
	}
	static int findMaximum()
	{
		int max=arr[0],i=1;
		while(i<arr.length)
		{
			if(arr[i]>max)
				max=arr[i];
			i++;
		}
		return max;
	}
	static int findMinimum()
	{
		int min=arr[0],i=1;
		while(i<arr.length)
		{
			if(arr[i]<min)
				min=arr[i];
			i++;
		}
		return min;
	}
	static void display()
	{
		String s="Data:"+Arrays.toString(arr)+"\nTotal:"+sum()+"\nMin:"+findMinimum()+"\nMax:"+findMaximum();
		JOptionPane.showMessageDialog(null,s);
		//System.out.println(s);
	}
	static void menu()
	{
		String []choice=new String[]{"Input","Sum","Minimum","Maximum","Sort","Display","Exit"};
		int opt=0;
		while(true)
		{
			opt=JOptionPane.showOptionDialog(null,"Choice Option","Array",JOptionPane.YES_OPTION,JOptionPane.PLAIN_MESSAGE,null,choice,0);
			if(opt==6)
				break;
			switch(opt)
			{
				case 0:
					input();
					break;
				case 1:
					JOptionPane.showMessageDialog(null,"Data Sum:"+sum());
					break;
				case 2:
					JOptionPane.showMessageDialog(null,"Data Min:"+findMinimum());
					break;
				case 3:
					JOptionPane.showMessageDialog(null,"Data Max:"+findMaximum());
					break;
				case 4:
					Arrays.sort(arr);
					break;
				case 5:
					display();
					break;
			}
		}	
	}
	public static void main(String[]args)
	{
		/* 1.Without Menu:
		input();
		display();
		*/
		
		menu();
.	}
}
/*
I/p:
No.:
1
2
3
4
5
O/p (1):
Data: [1, 2, 3, 4, 5]
Total: 15
Min: 1
Max: 5
*/