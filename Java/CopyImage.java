//Pink_flower.jpg
import java.io.*;
class CopyImage
{
	public static void main(String[]args)throws Exception
	{
		FileInputStream fis=new FileInputStream("Pink_flower.jpg");
		FileOutputStream fos=new FileOutputStream("Flower.jpg");
		int val=0;
		while(true)
		{
			val=fis.read();
			if(val==-1)
				break;
			fos.write(val);
		}
		fis.close();
		fos.close();
	}
}