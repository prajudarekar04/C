//Frm12 = Frm9/10
import java.awt.*;
import java.awt.event.*;
class Frm12 extends Frame implements FocusListener,ActionListener
{
	Label l1,l2,l3;
	TextField t1,t2,t3;
	Button b1;
	Panel pan;
	int r,g,b;
	Color cr;
	Frm12()
	{
		super("FocusListener");
		l1=new Label("Red");
		l2=new Label("Green");
		l3=new Label("Blue");
		t1=new TextField(10);
		t2=new TextField(10);
		t3=new TextField(10);
		t1.addFocusListener(this);
		t2.addFocusListener(this);
		t3.addFocusListener(this);
		b1=new Button("ok");
		b1.addActionListener(this);
		pan=new Panel();
		setLayout(new GridLayout(4,2,5,5));
		add(l1);add(t1);
		add(l2);add(t2);
		add(l3);add(t3);
		add(b1);add(pan);
		addWindowListener(new WindowAdapter()
		{
			public void WindowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setSize(400,400);
		setVisible(true);

	}
	public void actionPerformed (ActionEvent e)
	{
		try
		{
			r=Integer.parseInt(t1.getText());
			g=Integer.parseInt(t2.getText());
			b=Integer.parseInt(t3.getText());
			cr=new Color(r,g,b);
			pan.setBackground(cr);
		}
		catch(Exception e1){}
	}
	public void focusGained (FocusEvent e){}
	public void focusLost (FocusEvent e)
	{
		int val=0;
		TextField t=(TextField)e.getSource();
		try
		{
			val=Integer.parseInt(t.getText());
		}
		catch(Exception e1){t.requestFocus(); return;}
		if(val<0||val>255)
		{
			t.requestFocus(); return;
		}
	}
	public static void main(String[]args)
	{
		Frm12 a=new Frm12();
	}
}