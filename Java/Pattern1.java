class Pattern1
{
    public static void main(String[]avgs)
    {
        int n=5,i=1,j=1;
        String str="Pattern\n";
        while(i<=n)
        {
            for(j=1;j<=n;j++)
            {
                if(j==1||j==n||i==j)
                    str=str+"*";
                else
                    str=str+" ";
            }
            str=str+"\n";
            i++;
        }
        System.out.println(str);
    }
}