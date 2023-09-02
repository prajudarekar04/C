import java.io.*;
class KBD6 //Input 10 nos. and count even & odd separately.
{
	public static void main(String[]args)
	{
		InputStreamReader isr=null;
	        BufferedReader br=null;
		int no=0,i=0,cnt=0;
        	try
		{
            		isr= new InputStreamReader(System.in);
            		br = new BufferedReader(isr);
        	}
		catch (Exception e) {}
        	System.out.println("Enter No:");
        	while(i<10)
		{
			try
			{
				no=Integer.parseInt(br.readLine());
			}
			catch (Exception e) {no=0;}
			cnt=cnt+(no%2);
			i++;
		}
	        System.out.println("Odd Nos.:"+cnt+"\nEven Nos.:"+(10-cnt));	
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
Odd Nos.:5
Even Nos.:5
*/