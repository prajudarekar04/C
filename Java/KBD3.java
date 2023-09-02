import java.io.*;
class KBD3	//
{
    public static void main(String[]args)
    {
        InputStreamReader isr=null;
        BufferedReader br=null;
        try
        {
            isr= new InputStreamReader(System.in);
            br = new BufferedReader(isr);
        }
        catch (Exception e) {}
        String str=" ";
		int no=0;
        System.out.println("Enter Name:");
        try
        {
            str=br.readLine();
        }
        catch (Exception e) {}
        try
        {
            int no=Integer.parseInt(str);
        }
        catch (Exception e)
        {
		    System.out.println("Invalid.");       
		    return;
        }
        System.out.println("Name:"+str);
    }
}


/*
import java.io.*;
class KBD3
{
	public static void main(String [] args)
	{
		InputStreamReader isr = null;
		BufferedReader br = null;
		try
		{
			isr = new InputStreamReader(System.in);
			br = new BufferedReader(isr);
		}
		catch(Exception e){}
		String str= " ";
		int no=0;
		System.out.println("Enter no: ");
		try
		{
			str=br.readLine();
		}
		catch(Exception e){}
		try
		{
			no=Integer.parseInt(str);
		}
		catch(Exception e)
		{
			System.out.println("Invalid");
			return;
		}
		System.out.println("No: "+no);
	}
}

*/