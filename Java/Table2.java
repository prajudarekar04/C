class Table2
{
    public static void main(String[]avgs)
    {
        int no=(int)(Math.random()*100);
        String str="Table\n";
        int i=1;
        while(i<=10)
        {
            str=str+" "+(no*i);
            i++;
        }
        System.out.println(str);
    }
}
