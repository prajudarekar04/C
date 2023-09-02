import java.net.*;
import java.io.*;
class Server2
{
	public static void main(String[]args)throws Exception
	{
		ServerSocket ss = new ServerSocket(8020);
		System.out.println("Server started...");
		Socket s = ss.accept();	//
		DataInputStream dis = new DataInputStream(s.getInputStream());
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String cnm = dis.readUTF();	//reads 
		String str = "Welcome" + cnm;
		dos.writeUTF(str);	//sends msg to client
		while(true)
		{
			str = dis.readUTF();	//msg from client
			System.out.println("Message from "+ cnm + " : " + str);
			if(str.equals("bye"))
				break;
			System.out.println("Message to "+ cnm + " : ");
			str = br.readLine();
			dos.writeUTF(str);
			if(str.equals("bye"))
				break;
		}
		s.close();
		dos.close();
		dis.close();
	}
};