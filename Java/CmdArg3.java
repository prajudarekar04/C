class CmdArg3
{
  	public static void main(String args[])
  	{
    	int n=args.length,i=1;
		if(n!=1)
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
		while(i<=10)
		{
			str=str+" "+(n*i);
			i++;
		}
		System.out.println(str);
	}
}