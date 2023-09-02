import java.net.*;
import java.io.*;
class Client2
{
	public static void main(String[]args)throws Exception
	{
		if(args.length!=1)
            		return;
		Socket s = new Socket("localhost",8020);
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		DataInputStream dis = new DataInputStream(s.getInputStream());
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		dos.writeUTF(args[0]);	//sends client name to server
		while(true)
		{
			String str = dis.readUTF();	//msg from server
			System.out.println("Message from server : " + str);
			if(str.equals("bye"))
				break;
			System.out.println("Message to server : " + str);
			str = br.readLine();
			dos.writeUTF(str);	//sends msg to server
			if(str.equals("bye"))
				break;
		}
		s.close();
		dos.close();
		dis.close();
	}
};