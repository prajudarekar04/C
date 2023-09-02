// Linked List + networking + threads
import java.net.*;
import java.io.*;
import java.util.*;

class Server5 implements Runnable
{
	LinkedList<DataOutputStream> ls;
	ServerSocket ss;
	Socket s;
	BufferedReader br;
	DataOutputStream dos;
	Server5() throws Exception
	{
		ls = new LinkedList<DataOutputStream>();
		br = new BufferedReader(new InputStreamReader(System.in));
		ss = new ServerSocket(4041);
		System.out.println("Server Started...");
		while(true)
		{
			try
			{
				s = ss.accept();
				dos = new DataOutputStream(s.getOutputStream());
				ls.add(dos);
				new Thread(this).start();
			}
			catch(Exception e){}
		}
	}
	public void run()
	{
		String str = "";
		DataOutputStream dos = null;
		while(true)
		{
			try
			{
				System.out.println("Type message:");
				str = br.readLine();
				int i =	0 , n = ls.size();
				while(i<n)
				{
					dos = ls.get(i);
					dos.writeUTF(str);
					i++;
				}
			}
			catch(Exception e1){}
			if(str.equals("exit"))
				System.exit(0);
		}
	}
	public static void main(String []args) throws Exception
	{
		new Server5(); 
	}
}