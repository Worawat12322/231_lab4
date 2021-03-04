#include<stdio.h>
#include<string.h>
int main(){
	int shuff[2][2]={{1,2},{3,4}};
	int num,i,l,tmp;
	int a,b;
	scanf("%d",&num);
	char move[num][50];
	if(num>0&&num<100)
	{
	for(i=0;i<num;i++)
	{
		for(l=0;l<50;l++)
		{
			scanf("%c",&move[i][l]);
		}
	}

	for(a=0;a<num;a++)
	{
		for(b=0;b<strlen(move[a]);b++)
		{
			if(move[a][b]=='A')
			{
				tmp = shuff[1][0];
						 	shuff[1][0] = shuff[0][1];
						 	shuff[0][1] = tmp;
			}
			else if(move[a][b]=='B')
			{
					tmp = shuff[0][0];
						 	shuff[0][0] = shuff[1][1];
						 	shuff[1][1] = tmp;
			}
			else if(move[a][b]=='C')
			{
				tmp = shuff[0][0];
						 	shuff[0][0] = shuff[1][0];
						 	shuff[1][0] = tmp;
						 	tmp = shuff[0][1];
						 	shuff[0][1] = shuff[1][1];
						 	shuff[1][1] = tmp;
			}
			else if(move[a][b]=='D')
			{
					tmp = shuff[0][0];
						 	shuff[0][0] = shuff[0][1];
						 	shuff[0][1] = tmp;
						 	tmp = shuff[1][0];
						 	shuff[1][0] = shuff[1][1];
						 	shuff[1][1] = tmp;
			}
			else if(move[a][b]=='E')
			{
					tmp = shuff[0][0];
						 	shuff[0][0] = shuff[1][1];
						 	shuff[1][1] = tmp;
						 	tmp = shuff[0][1];
						 	shuff[0][1] = shuff[1][0];
						 	shuff[1][0] = tmp;
			}
		}
		printf("%d\n",shuff[0][0]);
		shuff[0][0]=1;
		shuff[0][1]=2;
		shuff[1][0]=3;
		shuff[1][1]=4;
	}
	}
	return 0;
}
