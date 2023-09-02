import java.net.*;
import java.io.*;
class Server1
{
	public static void main(String[]args)throws Exception
	{
		ServerSocket ss = new ServerSocket(8080);
		System.out.println("Server started...");
		Socket s = ss.accept();	//
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		DataInputStream dis = new DataInputStream(s.getInputStream());
		String str = "Welcomes you";
		dos.writeUTF(str);	//sends msg to client
		str = dis.readUTF();
		System.out.println("Message from client : "+ str);
		s.close();
		dos.close();
		dis.close();
	}
};