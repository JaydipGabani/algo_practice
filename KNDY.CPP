#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int table[5][6];
int main()
{
	int w[]={0,2,3,4,5};
	int v[]={0,3,4,5,6};
	int W=5;
	int val1,val2;
	int n=4,i;
	void dkp(int n,int W,int w[],int v[]);
	//clrscr();
	printf("w[i] v[i]");
	for(i=1;i<=n;i++)
	printf("\n %d%d",w[i],v[i]);
	printf("\n\n\t capacity=%d",W);
	printf("\n\n");
	for(i=0;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			table[i][j]=0;
		}
		dkp(n,W,w,v);
	}
}
int max(int a,int b)
{
	if(a>b)
		return a;
		else
		return b;
}
void dkp(int n,int W,int w[5],int v[5])
{
		void find_item(int,int,int[]);
		int val1,val2;
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=W;j++)
			{
				table[i][0]=0;
				table[0][j]=0;
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=W;j++)
			{
				if(j<w[i])
				table[i][j]=table[i-1][j];
				else if(j>=w[i])
				{
					val1=table[i-1][j];
					val2=v[i]+table[i-1][j-w[i]];
					table[i][j]=max(val1,val2);
				}
			}
		}
		printf("table dyn prog");
		for(int i=0;i<=n;i++)
		{
			for(int j=0;j<=W;j++)
			printf("%d ",table[i][j]);
			printf("\n");
		}
		find_item(n,W,w);
}
void find_item(int i,int k,int w[5])
{
		printf("sol ");
		while(i>0&&k>0)
		{
			if(table[i][k]!=table[i-1][k])
			{
				printf("%d is selected",i);
				i=i-1;
				k=k-w[i];
			}
			else
			i=i-1;
		}
}
