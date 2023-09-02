/*
//MenuBar : Color, Shape, Exit
//describing its menu items
import java.awt.*;
import java.awt.event.*;

class Menu2 extends Frame implements ActionListener, MouseListener
{
    MenuItem mcr, mcg, mcb; // Red, Green, Blue
    MenuItem msl, msr, mso; // Line, Rectangle, Oval
    MenuItem mxy,mxn;
    Menu mc, ms, mx;	    // Color, Shape, Exit
    MenuBar mb;
    String selectedColor, selectedShape;
    Color currentColor;
    int startX, startY, endX, endY;
    boolean drawing;

    Menu2()
    {
        super("Paint");

        selectedColor = "Red";
        selectedShape = "Line";
        currentColor = Color.RED;
        drawing = false;

        mcr = new MenuItem("Red");
        mcg = new MenuItem("Green");
        mcb = new MenuItem("Blue");
        mcr.addActionListener(this);
        mcg.addActionListener(this);
        mcb.addActionListener(this);
        mc = new Menu("Color");
        mc.add(mcr);
        mc.add(mcg);
        mc.add(mcb);

        msl = new MenuItem("Line");
        msr = new MenuItem("Rectangle");
        mso = new MenuItem("Oval");
        msl.addActionListener(this);
        msr.addActionListener(this);
        mso.addActionListener(this);
        ms = new Menu("Shape");
        ms.add(msl);
        ms.add(msr);
        ms.add(mso);

        mxy = new MenuItem("Yes");
        mxn = new MenuItem("No");
        mxy.addActionListener(this);
        //mxn.addActionListener(this);	// no need
        mx = new Menu("Exit");
        mx.add(mxy);
        mx.add(mxn);

        mb = new MenuBar();
        mb.add(mc);
        mb.add(ms);
        mb.add(mx);
        setMenuBar(mb);

        addMouseListener(this);
        setSize(600, 600);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        if (e.getSource() == mcr)
        {
            selectedColor = "Red";
            currentColor = Color.RED;
        }
        else if (e.getSource() == mcg)
        {
            selectedColor = "Green";
            currentColor = Color.GREEN;
        }
        else if (e.getSource() == mcb)
        {
            selectedColor = "Blue";
            currentColor = Color.BLUE;
        }
        else if (e.getSource() == msl)
            selectedShape = "Line";
        else if (e.getSource() == msr)
            selectedShape = "Rectangle";
        else if (e.getSource() == mso)
            selectedShape = "Oval";
        else if (e.getSource() == mxy)
            System.exit(0);
    }
    public void mousePressed(MouseEvent e)
    {
        startX = e.getX();
        startY = e.getY();
        drawing = true;
    }
    public void mouseReleased(MouseEvent e)
    {
        endX = e.getX();
        endY = e.getY();
        repaint();
    	drawing = false;
    }
    public void mouseClicked(MouseEvent e) {}
    public void mouseEntered(MouseEvent e) {}
    public void mouseExited(MouseEvent e) {}
    public void paint(Graphics g)
    {
        super.paint(g);
        g.setColor(currentColor);
        if (selectedShape.equals("Line"))
            g.drawLine(startX, startY, endX, endY);
        else if (selectedShape.equals("Rectangle"))
        {
            int width = Math.abs(endX - startX);
            int height = Math.abs(endY - startY);
            int x = Math.min(startX, endX);
            int y = Math.min(startY, endY);
            g.drawRect(x, y, width, height);
        }
        else if (selectedShape.equals("Oval"))
        {
            int width = Math.abs(endX - startX);
            int height = Math.abs(endY - startY);
            int x = Math.min(startX, endX);
            int y = Math.min(startY, endY);
            g.drawOval(x, y, width, height);
        }
    }
    public static void main(String[] args)
    {
        Menu2 a = new Menu2();
    }
}
*/


//
//Directed by Sir
//MenuBar : Color, Shape, Exit
//describing its menu items
import java.awt.*;
import java.awt.event.*;

class Menu2 extends Frame implements ActionListener
{
    MenuItem mcr, mcg, mcb; // Red, Green, Blue
    MenuItem msl, msr, mso; // Line, Rectangle, Oval
    MenuItem mxy,mxn;
    Menu mc, ms, mx;	    // Color, Shape, Exit
    MenuBar mb;
    int shp,x1,y1,x2,y2,flg;
    Color cr;

    Menu2()
    {
        super("Paint");

        mcr = new MenuItem("Red");
        mcg = new MenuItem("Green");
        mcb = new MenuItem("Blue");
        mcr.addActionListener(this);
        mcg.addActionListener(this);
        mcb.addActionListener(this);
        mc = new Menu("Color");
        mc.add(mcr);
        mc.add(mcg);
        mc.add(mcb);

        msl = new MenuItem("Line");
        msr = new MenuItem("Rectangle");
        mso = new MenuItem("Oval");
        msl.addActionListener(this);
        msr.addActionListener(this);
        mso.addActionListener(this);
        ms = new Menu("Shape");
        ms.add(msl);
        ms.add(msr);
        ms.add(mso);

        mxy = new MenuItem("Yes");
        mxn = new MenuItem("No");
        mxy.addActionListener(this);
        //mxn.addActionListener(this);	//no need
        mx = new Menu("Exit");
        mx.add(mxy);
        mx.add(mxn);

        mb = new MenuBar();
        mb.add(mc);
        mb.add(ms);
        mb.add(mx);
        setMenuBar(mb);

	flg=0;
        addMouseListener(new MouseAdapter()
	{
		public void mouseClicked(MouseEvent e)
		{
			if(flg==0)
			{
				x1=e.getX();
				y1=e.getY();
				flg=1;
			}
			else
			{
				if(shp==1)
				{
					x2=e.getX();
					y2=e.getY();
				}
				else
				{
					x2=e.getX()-x1;	//Weidth
					y2=e.getY()-y1;	//Height
				}
				draw();
				flg=0;
			}
		}
	});
        setSize(600, 600);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
	MenuItem a=(MenuItem)e.getSource();
	if(a==mxy)
		System.exit(0);
        if (a == msl)
            shp = 1;
        if (a == msr)
            shp = 2;
        if (a == mso)
            shp = 3;
	if (a == mcr)
            cr = Color.RED;
        if (a == mcg)
            cr = Color.GREEN;
        if (a == mcb)
            cr = Color.BLUE;
    }    
    public void draw()
    {
	Graphics g=getGraphics();
	g.setColor(cr);
	switch(shp)
	{
		case 1:
			g.drawLine(x1,y1,x2,y2);
			break;
		case 2:
			g.drawRect(x1,y1,x2,y2);
			break;
		case 3:
			g.drawOval(x1,y1,x2,y2);
			break;
	}
    }
    public static void main(String[] args)
    {
        Menu2 a = new Menu2();
    }
}
//