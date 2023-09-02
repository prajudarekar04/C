import java.net.*;
import java.io.*;

class Server3
{
	public static void main(String []args) throws Exception
	{
		ServerSocket ss=new ServerSocket(8020);
		System.out.println("Server Started");
		
		Socket s=ss.accept();//server waiting for client
		DataInputStream dis =new DataInputStream(s.getInputStream());
		DataOutputStream dos=new DataOutputStream(s.getOutputStream());
		
		String str=dis.readUTF();//reads source file name send by client
		File f=new File(str);
		
		boolean result=f.exists();
		
		dos.writeBoolean(result);//sends true or false for existance of for
		if(result==true)
		{
			FileInputStream fis=new FileInputStream(f);
			int val=0;
			while(true)
			{
				val=fis.read();
				dos.writeInt(val);
				if(val==-1)
					break;
			}
			fis.close();
		}
		s.close();
		dos.close();
		dis.close();
	}
}