class CmdArg4 
{
  	public static void main(String args[])
  	{
    	int n=args.length,i=0;
		if(n==0)
		{
	   		System.out.println("Invalid argument");
	   		return;
	   	}
	   	int ncnt=0,ocnt=0,no=0;
	   	while(i<n)
	   	{
	    	try
			{
				no=Integer.parseInt(args[i]);
		   		ncnt++;
		  	}
		  	catch(Exception e)
		  	{
		    	ocnt++;
		  	}
		  	i++;
		}
		System.out.println("Numbers:" +ncnt+"\nOther:"+ocnt);
		return;
	}
}