import java.io.*;
import java.util.*;
class UseStatic2 //Inputting & displaying array, using static.
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
	static void display()
	{
		String s="Output:";
		for(int i=0;i<5;i++)
			s=s+" "+arr[i];
		System.out.println(s);
	}
	public static void main(String[]args)
	{
		input();
		display();
	}
}
/*
I/p:
No.:
1
2
3
4
5
O/p:
Output: 1 2 3 4 5
*/