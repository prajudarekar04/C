#include<iostream.h>
#include<conio.h>
class Matrix
{
	int x[3][3];
	public:
	void init();
	void set();
	void display();
	Matrix add(Matrix&);
	Matrix sub(Matrix&);
	Matrix mul(Matrix&);
	void transpose();
};
void main()
{
	Matrix d,p,a;
	clrscr();
	d.set();
	p.set();
	a=d.add(p);
	d.display();
	p.display();
	a.display();
	a.transpose();
	a.display();
	getch();
	return;
}
void Matrix::init()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			x[i][j]=0;
		}
	}
}
void Matrix::set()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nData:"<<i<<j<<":";
			cin>>x[i][j];
		}
	}
}
void Matrix::display()
{
	int i,j;
	cout<<"\nData:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<x[i][j];
		}
		cout<<"\n";
	}
}
void Matrix::transpose()
{
	int i=0,j=0,tmp;
	while(i<3)
	{
		j=0;
		while(j<i)
		{
			tmp=x[i][j];
			x[i][j]=x[j][i];
			x[j][i]=tmp;
			j++;
		}
		i++;
	}
}
Matrix Matrix::add(Matrix &p)
{
	Matrix m;
	int i,j;
	m.init();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			m.x[i][j]=x[i][j]+p.x[i][j];
	}
	return m;
}
Matrix Matrix::sub(Matrix &p)
{
	Matrix m;
	int i,j;
	m.init();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			m.x[i][j]=x[i][j]-p.x[i][j];
	}
	return m;
}
Matrix Matrix::mul(Matrix &p)
{
	Matrix m;
	int i,j,k,tot=0;
	m.init();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				tot+=(x[i][k]*p.x[k][j]);
			}
			m.x[i][j]=tot;
			tot=0;
		}
	}
	return m;
}