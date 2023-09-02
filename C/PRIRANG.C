//To display prime no. of range 10-100.
'#include<stdio.h>
#include<conio.h>
void main()
{
	int n, i;
	clrscr();
	for(n=10;n<=100;n++)
	{
		i=2;
		while(i<n)
		{
			if(n%i==0)
				break;
			i++;
		}
		if(i==n)
			printf("Prime No:%d", n);
	}
	getch();
	return;
}