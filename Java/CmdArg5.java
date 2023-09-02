class CmdArg5 //incomplete
{
	public static void main(String args[])
  	{
    	int n=args.length;
		int sum=0,avg=0,no=0,i=1;
		if(n==0)
		{
			System.out.println("Invalid arguments");
			return;
		}
		try
		{
			n=Integer.parseInt(args[0]);
		}
		catch(Exception e)
		{
			System.out.println("Invalid form");
			return;
		}
		String str="Table\n";
		while(i<n)
		{
			try
			{
				no=Integer.parseInt(args[0]);	// have to check
			}
			catch(Exception e){}
			str=str+" "+(n*i);
			i++;
		}
		System.out.println(str);
	}
}