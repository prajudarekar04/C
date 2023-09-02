class CmdArg6
{
  	public static void main(String args[])
  	{
    	int n=args.length;
		int pc=0,nc=0,no=0,i=0,zc=0,oth=0;
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
		    	oth++;
				continue;
		  	}
			if(no==0)
				zc++;
			else
			{
				if(no>0)
					pc++;
				else
					nc++;
			}
		}
		System.out.println("+ve" +pc+"\n-ve"+nc+"\nzero"+zc+"\nother"+oth);
		return;
	}
}