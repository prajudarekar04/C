import java.awt.*;
import java.awt.event.*;
public class Frm14 extends Frame implements ActionListener,FocusListener
{
	Label l1,l2,l3;
	TextField t1,t2,t3;
	Panel p1,p2;
	Button b1,b2,b3,b4;
	int v1,v2,res;
	char opr;
	Frm14()
	{
		super("mini calculator");
		l1=new Label("value 1");
		l2=new Label("value 2");
		l3=new Label("result");
		t1=new TextField(10);
		t2=new TextField(10);
		t3=new TextField(10);
		
		t3.setEditable(false);
		t1.addFocusListener(this);
		t2.addFocusListener(this);
		
		p1=new Panel();
		p1.setLayout(new GridLayout(3,2,5,5));
		p1.add(l1);
		p1.add(t1);
		p1.add(l2);
		p1.add(t2);
		p1.add(l3);
		p1.add(t3);
		
		b1=new Button("+");
		b2=new Button("-");
		b3=new Button("*");
		b4=new Button("/");
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
		p2=new Panel();
		p2.add(b1);
		p2.add(b2);
		p2.add(b3);
		p2.add(b4);
		add(p1,BorderLayout.CENTER);
		add(p2,BorderLayout.SOUTH);
		setSize(400,400);
		
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent e)
			{
				System.exit(0);
			}
		});
		setVisible(true);
	}
	public void focusGained(FocusEvent e)
	{
	}
	public void focusLost(FocusEvent e)
	{
		TextField t=(TextField)e.getSource();
		if(t==t1)
		{
			try
			{
				v1=Integer.parseInt(t.getText());
			}
			catch(Exception e1)
			{
				t1.requestFocus();
				return;
			}
		}
		if(t==t2)
		{
			try{
				v2=Integer.parseInt(t2.getText());
			}
			catch(Exception e1)
			{
				t2.requestFocus();
				return;
			}
		}
				
	}
	public void actionPerformed(ActionEvent e)
	{
		Button b=(Button)e.getSource();
		if(b==b1)
			opr='+';
		if(b==b2)
			opr='-';
		if(b==b3)
			opr='*';
		if(b==b4)
			opr='/';
		switch(opr)
		{
			case '+':
				res=v1+v2;break;
			case '-':
			res=v1-v2;break;
			case '*':
			res=v1*v2;break;
			case '/':
			res=v1/v2;break;
		}
		t3.setText(" "+res);
	}
	public static void main(String[]args)
	{
		Frm14 a = new Frm14();
	}
}