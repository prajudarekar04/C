class thread1
{
	public static void main(String[] args)
	{
		Thread th = Thread.currentThread();
		System.out.println("name:"+th.getName());
		System.out.println("alive:"+th.isAlive());
		System.out.println("Priority"+th.getPriority());
		for(int i=1;i<=10;i++)
			System.out.println(th.getName()+":"+i);
		System.out.println("main ends");
	}
}