//MenuBar : File Edit Exit
//describing its menu items
//Basic
import java.awt.*;
import java.awt.event.*;
import mypkg.Util;

class Menu1 extends Frame implements ActionListener
{
	MenuItem mfn,mfo,mfs;	//New,Open,Save
	MenuItem mec,meu,mep;	//Cut,Copy,Paste
	MenuItem mxn,mxy;	//No,Yes
	Menu mf,me,mx;		//File,Edit,Exit
	MenuBar mb;
	Menu1()
	{
		super("Menu");

		mfn=new MenuItem("New");
		mfo=new MenuItem("Open");
		mfs=new MenuItem("Save");
		mfn.addActionListener(this);
		mfo.addActionListener(this);
		mfs.addActionListener(this);
		mf=new Menu("File");
		mf.add(mfn);
		mf.add(mfo);
		mf.add(mfs);

		mec=new MenuItem("Cut");
		meu=new MenuItem("Copy");
		mep=new MenuItem("Paste");
		mec.addActionListener(this);
		meu.addActionListener(this);
		mep.addActionListener(this);
		me=new Menu("Edit");
		me.add(mec);
		me.add(meu);
		me.add(mep);

		mxn=new MenuItem("No");
		mxy=new MenuItem("Yes");
		mxn.addActionListener(this);
		mxy.addActionListener(this);
		mx=new Menu("Exit");
		mx.add(mxn);
		mx.add(mxy);
		
		mb=new MenuBar();
		mb.add(mf);
		mb.add(me);
		mb.add(mx);
		setMenuBar(mb);
		
		setSize(400,400);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent e)
	{
		MenuItem m=(MenuItem)e.getSource();
		if(m==mxy)
			System.exit(0);
		else
			System.out.println(m.getLabel());
	}
	public static void main(String[]args)
	{
		Menu1 a=new Menu1();
	}
}