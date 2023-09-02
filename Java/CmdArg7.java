class CmdArg7
{
  	/**
  	 * @param args
  	 */
  	public static void main(String args[])
  	{
    	int n=args.length;
		int no=0,i=0,max=0;
		boolean first=true; //flag
		if(n==0)
		{
	   		System.out.println("Invalid argument");
	   		return;
	   	}
		for(i=0;i<n;i++)
	   	{
	    	try
			{
				no=Integer.parseInt(args[i]);
		  	}
		  	catch(Exception e)
		  	{
				continue;
		  	}
			if(first)
			{
				max=no;
				first=false;
			}
			else
			{
				if(no>max)
					max=no;
			}
		}
		System.out.println("max"+max);
		return;
	}
}