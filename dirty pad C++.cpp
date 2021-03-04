#include<stdio.h>
#include<string.h>
int main(){
	int chk,i,l;
	char que[200],c_ch;
	for(l=0;l<200;l++){
		scanf("%c",&que[l]);
		if(que[l]==32)
		{
			return 0;
		}
	}
	chk=strlen(que);
	c_ch=que[0];
	printf("%c",que[0]);
	for(i=0;i<chk-1;i++){
		if(c_ch!=que[i+1])
		{
			c_ch=que[i+1];
			printf("%c",c_ch);
		}
	}
	return 0;
}
