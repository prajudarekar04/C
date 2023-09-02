//App
//Login Form, New Page, Modify Page, Exit Button
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.*;
import javax.swing.*;

class LoginData implements Serializable
{
	String id;
	String pwd;
	LoginData()
	{
		id = "";
		pwd = "";
	}
	LoginData(String a, String b)
	{
		id = a;
		pwd = b;
	}
	//pwd min.8 ch: includes atleast 1UC ,1LC, 1DC, 1SC
	static boolean isValidPassword(String str)
	{
		int n = str.length();
		if(n<8)
			return false;
		int i = 0, uc=0, lc=0, dc=0, sc=0;
		while(i<n)
		{
			char ch = str.charAt(i);	//returns ith pos. char from string
			if(ch>=65&&ch<=90)
			{
				uc++;
			}
			else
			{
				if(ch>=97&&ch<=122)
					lc++;	
				else
				{
					if(ch>=48&&ch<=57)
						dc++; 
					else
						sc++;
				}
			}
			i++;
		}
		return (uc>=0)&&(lc>=0)&&(dc>=0)&&(sc>=0) ;
	}
}
class IPD //
{
	LinkedList<LoginData> ls;
	LoginData obj;
	IPD()
	{
		ls = new LinkedList<LoginData>();
	}
	void load()
	{
		FileInputStream fis = null;
		ObjectInputStream ois = null;
		try
		{
			fis = new FileInputStream("Login.dat");
			ois = new ObjectInputStream(fis);
			ls = (LinkedList<LoginData>) ois.readObject();
			fis.close();
			ois.close();
		}
		catch(Exception e){}
	}
	void save()
	{
		FileOutputStream fos = null;
		ObjectOutputStream oos = null;
		try
		{
			fos = new FileOutputStream("Login.dat");
			oos = new ObjectOutputStream(fos);
			oos.writeObject(ls);
			fos.close();
			oos.close();
		}
		catch(Exception e){}
	}
	void search(String sid)
	{
		int i = 0, n = ls.size();
		while(i<n)
		{
			obj = ls.get(i);
			if(sid.equals(obj.id) == true)
				break;
			i++;
		}
		if(i == n)
		{
			obj = null;
		}
	}
	boolean isValidUser(String id)
	{
		search(id);
		if(obj==null)
			return false;
		if(id.equals(obj.id))
			return true;
		else 
			return false;
	}
	boolean isValidUserPassword(String id, String pwd)
	{
		search(id);
		if(obj==null)
			return false;
		if(id.equals(obj.id)&&pwd.equals(obj.pwd))
			return true;
		else 
			return false;
	}
}
class NewUser extends JDialog implements ActionListener, FocusListener
{
	JLabel l1,l2,l3,l4,l5;
	JTextField t1,t2,t5;
	JPasswordField t4;
	JButton b1,b2;
	Choice year;
	String fnm, lnm, byear, id;
	IPD upobj;	//userpassword obj
	NewUser(JFrame frm, String title, boolean state, IPD aobj)
	{
		super(frm, title, state);
		upobj = aobj;
		l1 = new JLabel("First Name:");
		l2 = new JLabel("Last Name:");
		l3 = new JLabel("Birth Year:");
		l4 = new JLabel("Entre Password:");
		l5 = new JLabel("Re-entre Password:");
		t1 = new JTextField(20);
		t2 = new JTextField(20);
		t4 = new JPasswordField(20);
		t5 = new JTextField(20);
		year = new Choice();
		for(int i=1923;i<=2023;i++)
		{
			year.add(""+i); //nullString
		}
		t1.addFocusListener(this);
		t2.addFocusListener(this);
		t4.addFocusListener(this);
		t5.addFocusListener(this);
		b1 = new JButton("add");
		b2 = new JButton("Back");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(6,2,5,5));
		add(l1);	add(t1);
		add(l2);	add(t2);
		add(l3);	add(year);
		add(l4);	add(t4);
		add(l5);	add(t5);
		add(b1);	add(b2);
		setSize(300,500);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b= (JButton)e.getSource();
		if(b == b1)
		{
			id = fnm + lnm ;
			if(year.getSelectedIndex()== -1)	//not matches with selecetd
			{
				year.requestFocus();
				return;
			}
			byear = "" + year.getSelectedItem() ;
			id += byear;
			if(upobj.isValidUser(id))
			{
				JOptionPane.showMessageDialog(null, "Record Exists");
			}
			else
			{
				String pwd = t4.getText();
				LoginData obj = new LoginData(id,pwd);
				upobj.ls.add(obj);
			}
		}
		setVisible(false);
	}
	public void focusGained(FocusEvent e){}
	public void focusLost(FocusEvent e)
	{
		JTextField t = (JTextField)e.getSource();
		if(t == t1)
		{
			fnm = (t1.getText()).trim();
		}
		if(t == t2)
		{
			lnm = (t2.getText()).trim();
		}
		if(t == t4)
		{
			String a = t4.getText();
			if(! LoginData.isValidPassword(a))
			{
				t4.requestFocus();
				return;
			}
		}
		if(t == t5)
		{
			String a = t4.getText();
			String b = t5.getText();
			if(a.equals(b) == false)
			{
				t5.requestFocus();
				return;
			}
		}
	}
}
class LoginUser extends JDialog implements ActionListener
{
	JLabel l1, l2;
	JTextField t1;
	JPasswordField t2;
	JButton b1, b2;
	IPD upobj;
	LoginData obj;
	String id, pwd;
	LoginUser(JFrame frm, String title, boolean state, IPD tobj)
	{
		super(frm, title, state);
		upobj = tobj ;
		obj = null ;
		l1 = new JLabel("ID:");
		l2 = new JLabel("Password:");
		t1 = new JTextField(20);
		t2 = new JPasswordField(20);
		b1 = new JButton("Login");
		b2 = new JButton("Back");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(3,2,5,5));
		add(l1);	add(t1);
		add(l2);	add(t2);
		add(b1);	add(b2);
		setSize(300,400);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b = (JButton)e.getSource();
		if(b == b1)
		{
			id = t1.getText();
			pwd = t2.getText();
			if(upobj.isValidUserPassword(id,pwd))
				JOptionPane.showMessageDialog(null,"Login Valid.");
			else
				JOptionPane.showMessageDialog(null,"Login In-valid.");
		}
		setVisible(false);
	}
}
class modifyPassword extends JDialog implements FocusListener, ActionListener
{
	JLabel l1, l2,l3;
	JTextField t1, t3;
	JPasswordField t2;
	JButton b1,b2;
	String s1,s2,s3;
	IPD upobj;
	LoginData obj;
	modifyPassword(JFrame frm, String title, boolean state, IPD iobj)
	{
		super(frm, title, state);
		upobj = iobj;
		obj = null;
		l1 = new JLabel("ID:");
		l2 = new JLabel("Password:");
		l3 = new JLabel("Re-type Password:");
		t1 = new JTextField(20);
		t2 = new JPasswordField(20);
		t3 = new JTextField(20);
		t1.addFocusListener(this);
		t2.addFocusListener(this);
		t3.addFocusListener(this);
		b1 = new JButton("OK");
		b2 = new JButton("Back");
		b1.addActionListener(this);
		b2.addActionListener(this);
		setLayout(new GridLayout(4,2,5,5));
		add(l1);	add(t1);
		add(l2);	add(t2);
		add(l3);	add(t3);
		add(b1);	add(b2);
		setSize(300,400);
		setVisible(true);
	}
	public void focusGained(FocusEvent e){}
	public void focusLost(FocusEvent e)
	{
		JTextField t = (JTextField)e.getSource();
		if(t == t1)
		{
			s1 = t1.getText();	//collect id
			if(!upobj.isValidUser(s1))
			{
				JOptionPane.showMessageDialog(null, "Invaild User-id.");
				t1.requestFocus();
				return;
			}
		}
		if(t == t2)
		{
			s2 = t2.getText();
			if(!LoginData.isValidPassword(s2) == true)
			{
				t2.requestFocus();
				return;
			}
		}
		if(t == t3)
		{
			s2 = t2.getText();
			s3 = t3.getText();
			if(s2.equals(s3) == false)
			{
				t3.requestFocus();
				return;
			}
		}
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b = (JButton)e.getSource();
		if(b == b1)
		{
			upobj.obj.pwd = s2;
		}
		setVisible(false);
	}
}
public class app extends JFrame implements ActionListener
{
	IPD upobj;
	JButton bn, bl, bm;	// new user, login, modify
	NewUser nobj ;
	LoginUser lobj;
	modifyPassword mobj;
	app()
	{
		super("app");
		bn = new JButton("New User");
		bl = new JButton("Login");
		bm = new JButton("Modify");
		bn.addActionListener(this);
		bl.addActionListener(this);
		bm.addActionListener(this);
		setLayout(null);
		bn.setBounds(50,100,150,20);
		bl.setBounds(250,100,150,20);
		bm.setBounds(450,100,150,20);
		add(bl);	add(bn);	add(bm);
		setSize(670,270);
		upobj = new IPD();
		addWindowListener(new WindowAdapter()
		{
			public void windowOpened(WindowEvent e)
			{
				upobj.load();
			}
			public void windowClosing(WindowEvent e)
			{
				upobj.save();
				System.exit(0);
			}
		});
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		JButton b = (JButton)e.getSource();
		if(b == bn)
		{
			nobj = new NewUser(null, "New User",true, upobj);			
		}
		if(b == bl)
		{
			lobj = new LoginUser(null, "Login User",true, upobj);			
		}
		if(b == bm)
		{
			mobj = new modifyPassword(null, "Modify",true, upobj);			
		}
	}
	public static void main(String [] args)
	{
		app a = new app();
	}
}
