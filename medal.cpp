#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	int med[n][3]={0};
	int cal[n]={0};
	if(n>=3&&n<=1000)
	{
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&med[i][j]);
		}
	}
	int k,max,min,m,loca_max=1,loca_min;
	for(k=0;k<n;k++)
	{
		cal[k]=(med[k][0]*4)+(med[k][1]*2)+(med[k][2]);
	}
	max=cal[0];
	for(m=0;m<(n-1)/2;m++)
	{
		if(max<cal[m+1])
		{
			max=cal[m+1];
			loca_max=m+2;
		}
	}
	min=cal[0];
	for(m=0;m<n-1;m++)
	{
		if(min>cal[m+1])
		{
			min=cal[m+1];
			loca_min=m+2;
		}
	}
	printf("%d %d",loca_max,loca_min);
	
	}
	return 0;
}
