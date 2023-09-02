import java.net.*;
import java.io.*;
class Client1
{
	public static void main(String[]args)throws Exception
	{
		Socket s = new Socket("localhost",8080);
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		DataInputStream dis = new DataInputStream(s.getInputStream());
		String str = dis.readUTF(); //reds msg send by server
		System.out.println("Message from server : "+str);
		str = "Thank You";
		dos.writeUTF(str);
		s.close();
		dos.close();
		dis.close();
	}
};