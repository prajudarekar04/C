//To check inputted no. is Armstrong No.
// n   tmp  dig  cube  tot
//153  153    3    27    0
//      15    5   125   27
//	 1    1     1  152
//       0
void main()
{
	int n,tmp,dig,tot=0;
	clrscr();
	printf("\nEnter No.:");
	scanf("%d",&n);
	tmp=n;
	while(tmp>0)
	{
		dig=tmp%10;
		tot=tot+(dig*dig*dig);
		tmp/=10;
	}
	if(n==tot)
		printf("\nArmstrong No.");
	else
		printf("\nNot Armstrong No.");
	getch();
	return;
}