class Shared
{
	void table(int no)
	{
		System.out.println("Table");
		for(int i=1;i<10;i++)
			System.out.print(" "+(no+i));
	}
}
class Thread8 extends Thread
{
	Shared obj;
	int n;
	Thread8(Shared obj,int n)
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
class Sync0
{
	public static void main(String[] args)
	{
		Shared k=new Shared();
		Thread8 a=new Thread8(k,8);
		Thread8 b=new Thread8(k,3);
		try
		{
			a.join();
			b.join();
		}
		catch(Exception e){}
		System.out.println("main ends");
	}
}