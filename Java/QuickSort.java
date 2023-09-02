//QuickSort (using Threads)
import mypkg.Util;
/*
set CLASSPATH=d:\java23\;
*/
class QuickSort implements Runnable
{
	static int[] arr;
	int l, r;
	static
	{
		arr = new int[10];
	}
	QuickSort()
	{
		l = 0; r = 9;
	}
	QuickSort(int a, int b)
	{
		l = a; r = b;
	}
	void input()
	{
		for(int i = 0 ; i < 10 ; i++)
			arr[i] = Util.iInput("Data");
	}
	void output(int flg)
	{
		
		String str = "Sorting\n";
		if(flg == 0)
			str = "Before" + str;
		else
			str = "After" + str;
		for(int i = 0 ; i < 10 ; i++)
			str = str +  " " + arr[i] ;
		Util.display(str) ;
	}
	void pivot()
	{
		if( arr[l] > arr[r] )
		{
			int tmp = arr[l] ;
			arr[l] = arr[r] ;
			arr[r] = tmp ;
		}
	}
	synchronized int partition()
	{
		pivot() ;
		int i = l , j = r , k = arr[l] ;
		do
		{
			do i++ ; while( arr[i] < k );
			do --j ; while( arr[j] > k );
			if(i < j)
			{
				int tmp = arr[i] ;
				arr[i] = arr[j] ;
				arr[j] = tmp ;
			}
		}while( i < j );
		int tmp = arr[j] ;
		arr[j] = arr[l] ;
		arr[l] = tmp ;
		return j ;
	}
	synchronized void quick()
	{
		int k = 0 ;
		if( l < r )
		{
			k = partition();
			Thread t1 = new Thread(new QuickSort( l , k-1 ));
			t1.start();
			try
			{
				t1.join();
			}
			catch(Exception e){}
			Thread t2 = new Thread(new QuickSort( k+1 , r ));
			t2.start();
			try
			{
				t2.join();
			}
			catch(Exception e){}
		}
	}
	public void run()
	{
		quick();
	}
	public static void main(String[]args)
	{
		QuickSort a = new QuickSort();
		a.input();
		a.output(0);
		Thread th = new Thread(a);
		th.start();
		try
		{
			th.join();
		}
		catch(Exception e) {}
		a.output(1);
	}
}