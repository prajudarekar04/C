class CmdArg1   //Command Line Argument
{
    public static void main(String[]args)
    {
        int n=args.length;
        if(n==0)
            System.out.println("No Arguments");
        else
        {
            int i=0;
            while(i<=n)
            {
                System.out.println(args[i]);
                i++;
            }
        }
    }
}