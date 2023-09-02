class Pattern3
{
    public static void main(String[]avgs)
    {
        int n=5,i=1,j=1;
        String str="Pattern\n";
        while(i<=n)
        {
            for(j=1;j<=i;j++)//triangluar
                str=str+"*";
            str=str+"\n";
            i++;
        }
        System.out.println(str);
    }
}