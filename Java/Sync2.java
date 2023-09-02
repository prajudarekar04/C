class Shared2
{
	 void table(int no)
	{
		System.out.println("\nTable");
		for(int i=1;i<10;i++)
			System.out.print(" "+(no*i));
	}
}
class Thread10 extends Thread
{
	Shared2 obj;
	int n;
	Thread10(Shared2 obj,int n)
	{
		super();
		this.obj=obj;
		this.n=n;
		start();
	}
	public void run()
	{
		synchronized(obj)
		{
			obj.table(n);
		}
	}
}
class Sync2
{
	public static void main(String[] args)
	{
		Shared2 k=new Shared2();
		Thread10 a=new Thread10(k,8);
		Thread10 b=new Thread10(k,3);
		try
		{
			a.join();
			b.join();
		}
		catch(Exception e){}
		System.out.println("main ends");
	}
}