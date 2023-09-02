import java.io.*;
class KBD4	//Generating a table of inputted no.
{
	public static void main(String[]avgs)
	{
		InputStreamReader isr=null;
        	BufferedReader br=null;
		int no=0,i=1;
		String str="Table:\n";
        	try
		{
        		isr= new InputStreamReader(System.in);
        		br = new BufferedReader(isr);
        	}
		catch (Exception e) {}
        	System.out.println("Enter No:");
        	try
		{
        		no=Integer.parseInt(br.readLine());
        	}
		catch (Exception e)
		{
			no=5;
        	}
        	while(i<=10)
		{
			str=str+(no*i++)+" ";
		}
        	System.out.println(str);	
	}
}

/*
I/p:
Enter No:
12

O/p:
Table:
12 24 36 48 60 72 84 96 108 120 
*/