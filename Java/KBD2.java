import java.io.*;
class KBD2	//Enter Name & Display it.
{
    public static void main(String[]avgs)
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
        System.out.println("Enter Name:");
        try
        {
            str=br.readLine();
        }
        catch (Exception e) {}
        System.out.println("Name:"+str);
    }
}

/*
I/p:
Enter Name:
Paras Darekar.

O/p:
Name:Paras Darekar.
*/