#include<stdio.h>
#include<string.h>
int main(){
	int shuff[2][2]={{1,2},{3,4}};
	int num,i,l,tmp;
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
	int a,b;
	for(a=0;a<num;a++)
	{
		for(b=0;b<strlen(move[a]);b++)
		{
			switch(move[a][b])
			{
				case 'A':	tmp = shuff[1][0];
						 	shuff[1][0] = shuff[0][1];
						 	shuff[0][1] = tmp;
			    	break;
			    case 'B':	tmp = shuff[0][0];
						 	shuff[0][0] = shuff[1][1];
						 	shuff[1][1] = tmp;
					break;
				case 'C':	tmp = shuff[0][0];
						 	shuff[0][0] = shuff[1][0];
						 	shuff[1][0] = tmp;
						 	tmp = shuff[0][1];
						 	shuff[0][1] = shuff[1][1];
						 	shuff[1][1] = tmp;
					break;
				case 'D':	tmp = shuff[0][0];
						 	shuff[0][0] = shuff[0][1];
						 	shuff[0][1] = tmp;
						 	tmp = shuff[1][0];
						 	shuff[1][0] = shuff[1][1];
						 	shuff[1][1] = tmp;
					break;
				case 'E':	tmp = shuff[0][0];
						 	shuff[0][0] = shuff[1][1];
						 	shuff[1][1] = tmp;
						 	tmp = shuff[0][1];
						 	shuff[0][1] = shuff[1][0];
						 	shuff[1][0] = tmp;
					break;
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
