import java.io.*;
class Array1 //Input values & display the Array form.
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
		for(i=0;i<x.length;i++)
		{
			s=s+x[i]+" ";
		}
		System.out.println(s);
	}
}

/*
I/p:
Data [0]:
1
Data [1]:
2
Data [2]:
3
Data [3]:
4
Data [4]:
5

O/p:
Array
1 2 3 4 5 
*/