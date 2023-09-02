//one server many client
import java.net.*;
import java.io.*;
import java.util.*;

class Client6
{
	public static void main(String []args) throws Exception
	{
		if(args.length != 1)
			return;
		Socket s= new Socket("localhost",5051);
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		DataInputStream dis = new DataInputStream(s.getInputStream());
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		dos.writeUTF(args[0]);	//sends Client name to server
		String str = "";
		while(true)
		{
			System.out.println("Message to Server : ");
			str = br.readLine();
			dos.writeUTF(str);
			if(str.equals("bye"))
				break;
			str = dis.readUTF();	//reads msg send by server
			System.out.println("Message from Server : " + str);
			if(str.equals("bye"))
				break;
			Thread.sleep(1000);
		}
		dis.close();
		s.close();
	}
}