//Using Book package from mypkg
import mypkg.Book;
class UseBook
{
	public static void main(String[]args)
	{
		Book a=new Book();
		a.setData(23);
		a.display();
	}
}