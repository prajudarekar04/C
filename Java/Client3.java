import java.net.*;
import java.io.*;

public class Client3 {
	public static void main(String[]args) throws Exception
	{
		Socket s = new Socket("localhost", 8020);
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		DataInputStream dis = new DataInputStream(s.getInputStream());
		DataOutputStream dos = new DataOutputStream(s.getOutputStream());
		System.out.println("Enter file name to be copied");
		String str = br.readLine();
		dos.writeUTF(str); // sends filename to the server
		boolean result = dis.readBoolean();
		if(result == false)
		{
			System.out.println("Source file is missing");
			s.close();
			dos.close();
			dis.close();
			return;
		}
		System.out.println("Enter destination file name : ");
		str = br.readLine();
		FileOutputStream fos = new FileOutputStream(str);
		int val = 0;
		while(true)
		{
			val = dis.readInt();
			fos.write(val);
			if(val == -1)
				break;
		}
		fos.close();
		dos.close();
		dis.close();
		s.close();
	}
}