// Linked List + networking + threads
import java.net.*;
import java.io.*;
import java.util.*;

class Client5
{
	public static void main(String []args) throws Exception
	{
		Socket s= new Socket("localhost",4041);
		DataInputStream dis = new DataInputStream(s.getInputStream());
		String str = "";
		while(true)
		{
			str = dis.readUTF();	//reads msg by server
			System.out.println("Message from Server : " + str);
			if(str.equals("exit"))
				break;
			Thread.sleep(1000);
		}
		dis.close();
		s.close();
	}
}