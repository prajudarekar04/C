import java.io.*;
class KBD5 //Input 10 nos. & compute sum
{
	public static void main(String[]avgs)
	{
		InputStreamReader isr=null;
	        BufferedReader br=null;
		int no=0,i=1,cnt=0;
		String str="Table\n";
        	try
		{
        		isr= new InputStreamReader(System.in);
        		br = new BufferedReader(isr);
        	}
		catch (Exception e) {}
	        System.out.println("Enter No:");
        	while(i<=10)
		{
			try
			{
				no=Integer.parseInt(br.readLine());
			}
			catch (Exception e)
			{
				no=0;
			}
			cnt=cnt+no;
			i++;
		}	
	        System.out.println("Total:"+cnt);
	}
}

/*
I/p:
Enter No:
1
2
3
4
5
6
7
8
9
10

O/p:
Total:55
*/