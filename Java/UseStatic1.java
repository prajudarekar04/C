import java.io.*;
class UseStatic1 //
{
	static int no;
	static BufferedReader br;
	static
	{
		no=0;
		try
		{
			br=new BufferedReader(new InputStreamReader(System.in));
		}
		catch(Exception e){}
	}
	static void input()
	{
		System.out.println("No.:");
		try
		{
			no=Integer.parseInt(br.readLine());
		}
		catch(Exception e){no=0;}
	}
	static void display()
	{
		System.out.println("No.:"+no);
	}
	public static void main(String[]args)
	{
		input();
		display();
	}
}

/*
I/p:
No.:
5
O/p:
No.:5
*/


/*
Use of static block, static field,static method

Syntax for static block:
static		//parallel to constructor		//statis is related with class.
{
	___;
	___;
}

Class contains 2sections.
One declares variables, other declares methods.
These variables & methods are called instance variables & instance methods.
This is because everytime the class is instant created ... the new copy of each themm is ....
They are accessed using objects with dot operator.
	Let us assume that, we want to define a member i.e. common to all the objects.
An accessed without using particular object dot. 
That is the member belongs to the class as a 'whole' rather than the objects created from the class.
Such members can be defined as follows:
static int count
static BufferedReader br;
static <type><>()
{
	___;
	___;
}
The members that are declared as above are called Static member.
Since these members are associated....
The static variables & member are often reffered to as Class variables & Class methods.
	Static variables are used when we won't have  variable common to all instances of a class.
Java creates only one 1 copy for a static variable which can be used even if the class is not actually never instant is created.
	Like static varible ,static methods can be ..... without using the object,they are also .... to use by other class.
Methods that are of general utility but donot directly affect an instance of that class are usually declared as class methods.
Static methods are called using class name.

1.They can only call other static methods.
2.They can only access static data.
3.They cannot refer to 'this'(keyword) or 'super' in any way.

	Static block is used to initialise static .....

*/