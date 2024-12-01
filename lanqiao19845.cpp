#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int css(char* n)
{
	int d =strlen(n);
	for(int i=0;i<d;i++)
	{
		if(n[0]!=n[i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int N,a,c=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		char b[1000];
		scanf("%d",&a);
		sprintf(b,"%d",a);
		c=c+css(b);
	}
	printf("%d",c);
	return 0;
}
	
	

