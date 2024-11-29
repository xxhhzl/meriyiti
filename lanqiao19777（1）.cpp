#include<stdio.h>
#include<math.h>
int main()
{
	int t,x,y,k;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d",&x,&y,&k);
		for(int j=0;j<k;j++)
		{
			x = abs(x-y);
	    } 
		a[i]=x;
	}
	for(int i=0;i<t;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
