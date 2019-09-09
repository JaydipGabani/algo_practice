#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,cost;
	//clrscr();
	int p[100];
	int s[20][20];
	int mat_ch(int s[20][20],int p[],int i,int j);
	void dis_mat_or(int s[20][20],int i,int j);

	printf("\n numbers of mat");
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		printf("dim");
		scanf("%d",&p[i]);
	}
	cost=mat_ch(s,p,1,n);
	printf("\n optimal:%d",cost);
	printf("\n order");
	dis_mat_or(s,1,n);
	getch();

}
int mat_ch(int s[20][20],int p[],int i,int j)
{
	if(i==j)
	return 0;
	int k,count;
	int min=1000000;
	for(k=i;k<j;k++)
	{
		count=mat_ch(s,p,i,k)+mat_ch(s,p,k+1,j)+p[i-1]*p[k]*p[j];
		if(count<min)
		{
			min=count;
			s[i][j]=k;
		}
	}
	return min;
}
void dis_mat_or(int s[20][20],int i,int j)
{
	if(i==j)
	printf("A%d",i);
	else
	{
		printf("(");
		dis_mat_or(s,i,s[i][j]);
		dis_mat_or(s,s[i][j]+1,j);
		printf(")");
	}
}
