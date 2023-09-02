import mypkg.Util;
class UseUtil
{
	public static void main(String[]args)
	{
		int no=Util.iInput("Roll No.:");
		String nm=Util.sInput("Name:");
		double mrk=Util.dInput("Marks:");
		String s="Roll No.:"+no+"\nName:"+nm+"\nMarks:"+mrk;
		Util.display(s);
	}
}