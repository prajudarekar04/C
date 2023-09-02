import java.util.*;
import java.io.*;
class Array3 //Sorting
{
	public static void main(String[]args)
	{
		int []x=new int[5];
		BufferedReader br=null;
		try
		{
			br=new BufferedReader(new InputStreamReader(System.in));
		}
		catch(Exception e){}
		int i=0;
		String s="Array\n";
		while(i<x.length)
		{
			System.out.println("Data ["+i+"]:");
			try
			{
				x[i]=Integer.parseInt(br.readLine());
			}
			catch(Exception e) {continue;}
			i++;
		}
		s=s+Arrays.toString(x);
		System.out.println(s);
		Arrays.sort(x);
		s="\nData\n"+Arrays.toString(x);
		System.out.println(s);
	}
}
/*
I/p:
Data [0]:
72
Data [1]:
84
Data [2]:
56
Data [3]:
38
Data [4]:
65

O/p:
Array 
[72, 84, 56, 38, 65]

Data
[38, 56, 65, 72, 84]
*/