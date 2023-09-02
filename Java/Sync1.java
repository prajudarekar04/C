class Shared1
{
	synchronized void table(int no)
	{
		System.out.println("\nTable");
		for(int i=1;i<10;i++)
			System.out.print(" "+(no*i));
	}
}
class Thread9 extends Thread
{
	Shared1 obj;
	int n;
	Thread9(Shared1 obj,int n)
	{
		super();
		this.obj=obj;
		this.n=n;
		start();
	}
	public void run()
	{
		obj.table(n);
	}
}
class Sync1
{
	public static void main(String[] args)
	{
		Shared1 k=new Shared1();
		Thread9 a=new Thread9(k,8);
		Thread9 b=new Thread9(k,3);
		try
		{
			a.join();
			b.join();
		}
		catch(Exception e){}
		System.out.println("main ends");
	}
}