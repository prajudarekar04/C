//one server many client
import java.net.*;
import java.io.*;
import java.util.*;

class Server6
{
	public static void main(String []args) throws Exception
	{
		ServerSocket ss= new ServerSocket(5051);
		while(true)
		{
			Socket s = ss.accept();
			DataInputStream dis = new DataInputStream(s.getInputStream());
			String str = dis.readUTF();	//reads Client name 	//
			NThread6 th = new NThread6(s, str);
		}
	}
}
class NThread6 extends Thread
{
	String str,cnm;
	Socket s ;
	DataInputStream dis;
	DataOutputStream dos;
	BufferedReader br;
	NThread6(Socket s , String cnm)throws Exception
	{	
		
		super(cnm);
		this.cnm = cnm;
		br = new BufferedReader(new InputStreamReader(System.in));
		dis = new DataInputStream(s.getInputStream());
		dos = new DataOutputStream(s.getOutputStream());
		start();
	}
	public void run()
	{
		while(true)
		{
			try
			{
				talk();
			}
			catch(Exception e){}
		}
	}
	synchronized void talk()throws Exception
	{
		str = dis.readUTF();	//reads msg send by client
		System.out.println("From "+ cnm + " : " + str);
		System.out.println("Message to "+ cnm + " : ");
		str = br.readLine();
		dos.writeUTF(str);
	}
}