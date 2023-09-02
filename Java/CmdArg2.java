class CmdArg2
{
	public static void main(String args[])
	{
    	int n=args.length;	//no of elements of array args
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
	  	System.out.println("No:"+n);
	}
}