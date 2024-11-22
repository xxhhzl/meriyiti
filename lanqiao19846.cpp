#include<stdio.h>
void css(int a[],int n)
{
	for(int i=0;i<(n-1);i++)
	{
		int c=i,d;
		for(int j=i+1;j<n;j++)
		{
			if(a[c]>=a[j])
			{
				c=j;
			}
		}
		d = a[c];
		a[c] = a[i];
		a[i] = d;
	}
	return;
}
void cas(int a[],int n)
{
	for(int i=0;i<((n*(n-1))/2);i++)
	{
		int j;
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				int b = a[j+1];
				a[j+1] = a[j];
				a[j] = b;
			}
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	css(a,n);
	int b=0;
	for(int i=0;i<n;i++)
	{
		if(a[i+1]-a[i]!=0 && a[i+1]-a[i]!=1)
		{
			b =a[i]+1;
			break;
		}
	}
	printf("%d",b);
	return 0;
}
