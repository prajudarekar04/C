#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	float s=0.0;
	clrscr();
	printf("\n enter the no. of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i<n)
		{
			printf("(1/%d)+",i);
			s+=1/(float)i;
		}
		if(i==n)
		{
			printf("(1/%d)",i);
			s+=1/(float)i;
		}
	}
	printf("\nSum of harmonic series upto %d terms:%f",n,s);
	getch();
	return;
}