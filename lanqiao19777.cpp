#include<stdio.h>
#include<math.h>
int main()
{
	int t,x,y,k,b=0;
	scanf("%d",&t);
	int a[t];
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d",&x,&y,&k);
		if(x>=(y*k))
		{
			a[i]=(x-y*k);
		}
		else
		{
			b=x/y;
			x = x-(y*b);
			b = k-b;
			for(int j=0;j<b;j++)
			{
				x=-(x-y);
			}
			a[i]=x;
		}
		
	}
	for(int i=0;i<t;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
