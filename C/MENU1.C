#include<stdio.h>
#include<conio.h>
void main()
{
	int opt, no, tmp, flg=0,rev,i,res;
	clrscr();
	do
	{
		printf("\nMenu\n1.Enter No\n2.Table\n3.Digsum\n4.Reverse\n5.OddEven\n6.prime\n7.Exit\nOption:");
		scanf("%d",&opt);
		if(opt>6)
			break;
		switch(opt)
		{
			case 1:
				printf("\nEnter No:");
				scanf("%d",&no);
				flg=1;
				break;
			default:
				if(flg==0)
				{
					printf("\nInvalid Data");
					continue;
				}
				switch(opt)
				{
					case 2:
						printf("\nTable\n");
						for(i=1;i<=10;i++)
							printf("\n%4d", no*i);
						break;
					case 3:
						res=0; tmp=no;
						while(tmp>0)
						{
							res=res+(tmp%10);
							tmp/=10;
						}
						printf("\nDigsum:%d",res);
						break;
					case 4:
						res=0;tmp=no;
						while(tmp>0)
						{
							res=res*10+(tmp%10);
							tmp/=10;
						}
						printf("\n Reverse No:%d",res);
						break;
					case 5:
						if(no%2==1)
							printf("\n Odd No");
						else
							printf("\n Even No");
						break;
					case 6:
						i=2;
						while(i<no)
						{
							if(no%i==0)
								break;
							i++;
						}
						if(i==no)
							printf("\nPrime No");
						else
							printf("\nNot Prime");
				}
		}
	}while(1);
	getch();
	return;
}


