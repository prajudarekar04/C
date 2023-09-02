#include<stdio.h>
#include<conio.h>
//fn_to input data
void input(int*a,int n)
{
	int i=0;
	printf("\nArray Data:");
	while(i<n)
	{
		scanf("%d",(a+i));
		i++;
	}
	return;
}
//fn_to display data
void display(int *a,int n)
{
	int i=0;
	printf("\nArray Data:\n");
	while(i<n)
	{
		printf("%4d",*(a+i));
		i++;
	}
	return;
}
//fn_to compute sum
int total(int *a,int n)
{
	int tot=*(a+0),i=1;
	while(i<n)
	{
		tot+=*(a+i);
		i++;
	}
	return tot;
}

//fn_to compute avg
int avg(int *a,int n)
{
	return total(a,n)/n;
}
//fn_to find max data pos
int findMax(int *a, int n)
{
	int xpos=0, i=1;
	while (i<n)
	{
		if(a[i]>a[xpos])
			xpos=i;
		i++;
	}
	return xpos;
}
//fn_to find min data pos
int findMin(int *a,int n)
{
	int npos=0,i=1;
	while(i<n)
	{
		if(a[i]<a[npos])
			npos=i;
		i++;
	}
	return npos;
}
//fn_to check array data is in ascending order
int isOrdered(int*a,int n)
{
	int i=1;
	while(i<n)
	{
		if(a[i]<a[i-1])
			break;
		i++;
	}
	if(i==n)
		return 1;
	else
		return 0;
}
//fn_to impliment find and and replace
void findReplace(int *a,int sv,int rv,int n)
{
	int i=0;
	while(i<n)
	{
		if(a[i]==sv)
			a[i]==rv;
		i++;
	}
	return;
}
//fn_to search
int search(int *a,int sv,int n)
{
	int i=0;
	while(i<n)
	{
		if(*(a+i)==sv)
			break;
		i++;
	}
	return ((i==n)?0:1);
}
int main()
{
	int x[5],sv,rv,res,opt;
	while(1)
	{
		printf("\nMenu:\n1.Input\n2.Display\n3.Total\n4.Avg\n5.Ordered\n6.Search\n7.Find & Replace\n8.Max\n9.Min\n10.Exit\nOption");
		scanf("%d",&opt);
		if(opt>9)
			break;
		switch(opt)
		{
			case 1:
				input(x,5);
				break;
			case 2:
				display(x,5);
				break;
			case 3:
				printf("\nsum:%d",total(x,5));
				break;
			case 4:
				printf("\nAvg:%d",avg(x,5));
				break;
			case 5:
				if(isOrdered(x,5)==0)
					printf("\nNot");
				printf("Ordered");
				break;
	 	 	 case 6:
				printf("\nSearch Value:");
				scanf("%d",&sv);
				if(search(x,sv,5)==0)
					printf("\nNot");
				printf("Found");
				break;
			case 7:
				printf("\nSearch Value:");
				scanf("%d",&sv);
				printf("\nReplace Value:");
				scanf("%d",&rv);
				findReplace(x,sv,rv,5);
				break;
			case 8:
				res=findMax(x,5);
				printf("\nMaxPosition:%d\nValue:%d",res,x[res]);
				break;
			case 9:
				res=findMin(x,5);
				printf("\nMinPosition:%d\nValue:%d",res,x[res]);
				break;
		}
	}
	getch();
	return 0;
}
