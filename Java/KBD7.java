import java.io.*;
class KBD7 //Inputted no. is prime?
{
	public static void main(String[]args)
	{
		InputStreamReader isr=null;
       		BufferedReader br=null;
		int no=0,i=2;
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
		    System.out.println("Invalid.");
			return;
       		}
       		while(i<no)
		{
			if(no%i==0)
				break;
			i++;
		}
		if(i==no)
			System.out.println("Prime");
		else
			System.out.println("Not Prime");	
	}
}

/*
I/p:
Enter No:
23

O/p:
Prime
*/