class Shared
{
	int data , flg ;
	Shared()
	{
		data = flg = 0 ;
	}
	synchronized void doWork()
	{
		if( flg == 0 )
		{
			flg = 1 ;
			try
			{
				wait();
			}
			catch(Exception e){}
		}
		try
		{
			Thread.sleep(1000);
		}
		catch(Exception e){}
		data = (int)(Math.random()+100);
		notify();
	}
	synchronized void table()
	{
		if( flg == 1 )
			notify();
		else
			flg = 1 ;
		try
		{
			wait();
		}
		catch(Exception e){}
		System.out.println("Table");
		for(int i = 1; i <= 10; i++)
			System.out.println( data * i );
	}
}
class CT1 extends Thread
{
	Shared obj;
	CT1(Shared obj)
	{
        	super();
        	this.obj=obj;
	        start();
	}
	public void run()
	{
        	obj.doWork();
	}
}
class CT2 extends Thread
{
	Shared obj ;
	CT2(Shared obj)
	{
		super();
		this.obj = obj;
		start();
	}
	public void run()
	{
		obj.table();
	}
}
class Communication extends Thread
{
	public static void main(String[]args)
	{
		Shared obj=new Shared();
		CT1 a=new CT1(obj);
		CT2 b=new CT2(obj);
	}
}