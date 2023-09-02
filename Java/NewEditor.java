//Editor
//2 ScrollBar - initially disable
//AutoSave Feature (new Version of Editor Using Thread)

import java.awt.*;
import java.awt.event.*;
import java.io.*;

class NewEditor extends Frame implements ActionListener, Runnable
{
	Button bn, bo, bs, bx;
	TextArea ta;
	Panel ps;
	NewEditor()
	{
		super("Editor");
		Thread th = new Thread(this);
		ta=new TextArea("",10,70,TextArea.SCROLLBARS_BOTH);
		add(ta,BorderLayout.CENTER);
		bn=new Button("New");
		bo=new Button("Open");
		bs=new Button("Save");
		bx=new Button("Exit");
		bn.addActionListener(this);
		bo.addActionListener(this);
		bs.addActionListener(this);
		bx.addActionListener(this);
		ps=new Panel();
		ps.add(bn);
		ps.add(bo);
		ps.add(bs);
		ps.add(bx);
		add(ps,BorderLayout.SOUTH);
		setSize(400,300);
		setVisible(true);
		th.start();
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();
		if(b==bx)
			System.exit(0);
		if(b==bn)
			ta.setText(" ");
		if(b==bo)
			open();
		if(b==bs)
			save();
	}
	void open()
	{
		int val=0;
		FileReader fr=null;
		File f=null;
		FileDialog fd=null;
		String str ="";
		try
		{
			fd=new FileDialog(this,"FileOpen",FileDialog.LOAD);
			fd.setVisible(true);
			String fnm=fd.getDirectory()+fd.getFile();
			f=new File(fnm);
			fr=new FileReader(f);
			while(true)
			{
				val=fr.read();
				if(val==-1)
					break;
				str+=(char)val;
			}
			ta.setText(str);
			fr.close();
		}
		catch(Exception e){}
	}
	void save()
	{
		String str="";
		FileDialog fd=null;
		FileWriter fw=null;
		File f=null;
		try
		{
			str = ta.getText();
			char []a = new char[str.length()];
			a = str.toCharArray();
			fd = new FileDialog(this,"Save",FileDialog.SAVE);
			fd.setVisible(true);
			String fnm = fd.getDirectory() + fd.getFile();
			//f=new File(fnm);
			fw = new FileWriter(fnm);
			int i = 0, n = a.length, val = 0;
			while(i < n)
			{
				val = (int) a[i];
				fw.write(val);
				i++;
			}
			fw.close();
		}
		catch(Exception e){}
	}
	void newSave()
	{
		String str = "";
		FileWriter fw = null;
		File f = new File("tmp.text");
		try
		{
			str = ta.getText();
			char []a = new char[str.length()];
			a = str.toCharArray();
			fw = new FileWriter(f);
			int i = 0, n = a.length, val = 0;
			while(i < n)
			{
				val = (int) a[i];
				fw.write(val);
				i++;
			}
			fw.close();
		}
		catch(Exception e){}
	}
	public void run()
	{
		while(true)
		{
			try
			{
				Thread.sleep(60000);	//1 Min.
			}
			catch(Exception e) {}
			newSave();
		}
	}
	public static void main(String[] args)
	{
		NewEditor a=new NewEditor();
	}
}