//
class Thread4 extends Thread
{
	int count;
	volatile boolean flag;
	Thread4(int priority)
	{
		super();	// naming to thread object
		setPriority(priority);
		count = 0;
	}
	public void tstart()
	{
		flag = true;
		start();
	}
	public void tstop() { flag = false; }
	public void run()
	{
		while(flag)
			count++;
	}
}
public class Thread4App
{
	public static void main(String[] args)
	{
		System.out.println("Main starts");
		Thread4 a = new Thread4(1);
		Thread4 b = new Thread4(5);
		Thread4 c = new Thread4(10);
		a.tstart();
		b.tstart();
		c.tstart();
		try
		{
			Thread.sleep(1000);
		}
		catch(Exception e){}
		a.tstop();
		b.tstop();
		c.tstop();
		try
		{
			a.join();
			b.join();
			c.join();
		}catch(Exception e){}
		System.out.println(a.count);
		System.out.println(b.count);
		System.out.println(c.count);
		System.out.println("Main ends");
	}
}