//function call by passing value.
void swap(int p,int q)
{
	int r=p;
	p=q;
	q=r;
}
void menu()
{
	int x,y;
	cout<<"\nEnter 2 Nos.:";
	cin>>x>>y;
	cout<<"\nX:"<<x<<"\nY:"<<y;
	swap(x,y);
	cout<<"\nX:"<<x<<"\nY:"<<y;
}