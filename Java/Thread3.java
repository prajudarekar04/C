//
class MyThread extends Thread
{
	int no;
	String nm;
	MyThread(String m, int n)
	{
		super(m);	// naming to thread object
		no = n;
		nm = m;
 		start();
	}
	public void run()
	{
		for(int i = 1; i <= no;i++)
		{
			System.out.println(nm + " " + no*i);
			try
			{
				Thread.sleep(1000);
			}
			catch(Exception e){}
		}
	}
}
public class Thread3
{
	public static void main(String[] args)
	{
		System.out.println("Main starts");
		MyThread a = new MyThread("A",5);
		MyThread b = new MyThread("B",3);
		try
		{
			a.join();
			b.join();
		}
		catch(Exception e){}
		System.out.println("Main ends");
	}
}