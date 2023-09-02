//GridBagLayout
import java.awt.*;
import java.awt.event.*;
public class UseGridBagLayout extends Frame
{
	Panel pan ;
	GridBagConstraints c;
	UseGridBagLayout()
	{
		super("UseGridBagLayout ");
		pan = new Panel();
		pan.setLayout(new GridBagLayout());
		c= new GridBagConstraints();
		c.fill =  GridBagConstraints.BOTH;
		c.insets = new Insets(5,5,5,5);	//5pxl margin on all sides

		c.gridx = 0;	c.gridy = 0;
		c.gridwidth = c.gridheight = 4;
		c.weightx = c.weighty = 1.0;
		pan.add(new Button("Btn1"),c);

		c.gridx = 4;	c.gridy = 0;
		c.gridwidth = c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn2"),c);

		c.gridx = 4;	c.gridy = 1;
		c.gridwidth = c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn3"),c);

		c.gridx = 4;	c.gridy = 2;
		c.gridwidth = 1;	c.gridheight = 2;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn4"),c);

		c.gridx = 0;	c.gridy = 4;
		c.gridwidth = c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn5"),c);

		c.gridx = 2;	c.gridy = 4;
		c.gridwidth = c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn6"),c);

		c.gridx = 3;	c.gridy = 4;
		c.gridwidth = 2;	c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn7"),c);

		c.gridx = 1;	c.gridy = 5;
		c.gridwidth = c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn8"),c);

		c.gridx = 3;	c.gridy = 5;
		c.gridwidth = c.gridheight = 1;
		c.weightx = c.weighty = 0.0;
		pan.add(new Button("Btn9"),c);
		
		addWindowListener(new WindowAdapter()
		{
			public void WindowClosing(WindowListener e)
			{
				System.exit(0);
			}
		});
		add(pan);
		setSize(500,500);
		setVisible(true);
	}	
	public static void main(String[] args)
	{
		new UseGridBagLayout();
	}
}