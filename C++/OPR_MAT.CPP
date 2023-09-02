//Operator on Matrix.
#include<iostream.h>
#include<conio.h>
class Matrix
{
	int x[3][3];
	public:
	Matrix();
	Matrix(Matrix&);
	~Matrix(){}
	friend istream & operator>>(istream&,Matrix&);
	friend ostream & operator<<(ostream&,Matrix&);
	Matrix operator+(Matrix&);
	Matrix operator-(Matrix&);
	Matrix operator*(Matrix&);
	void operator-();
};
void main()
{
	Matrix a,b,c;
	cout<<"\nMatrix A:\n";
	cin>>a;
	cout<<"\nMatrix B:\n";
	cin>>b;
	c=a+b;
	cout<<a<<b<<c;
	-c;
	cout<<a<<b<<c;
}
Matrix::Matrix()
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			x[i][j]=0;
	}
}
Matrix::Matrix(Matrix&t)
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			x[i][j]=t.x[i][j];
	}
}
istream & operator >>(istream&kin,Matrix&t)
{
	int i,j;
	cout<<"\nMatrix Data:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"\nData:\n";
			kin>>t.x[i][j];
		}
	}
	return kin;
}
ostream & operator <<(ostream&kout,Matrix&t)
{
	int i,j;
	kout<<"\nMatrix Data:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			kout<<" "<<t.x[i][j];
		kout<<"\n";
	}
	return kout;
}
Matrix Matrix::operator+(Matrix&t)
{
	Matrix p;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			p.x[i][j]=x[i][j]+t.x[i][j];
	}
	return p;
}
Matrix Matrix::operator-(Matrix&t)
{
	Matrix p;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			p.x[i][j]=x[i][j]-t.x[i][j];
	}
	return p;
}
Matrix Matrix::operator*(Matrix&t)
{
	Matrix p;
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			p.x[i][j]+=(x[i][k]*t.x[k][j]);
		}
	}
	return p;
}
void Matrix::operator-()
{
	int i,j,tmp;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			tmp=x[i][j];
			x[i][j]=x[j][i];
			x[j][i]=tmp;
		}
	}
}