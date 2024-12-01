#include <stdio.h>
#include <stdlib.h>
int max(int A[],int N)
{
  int a = A[0];
  int i;
  for(i=1;i<N;i++)
  {
    if(a<=A[i])
    {
      a=A[i];
    }
  }
  return a;
}
int chazhi(int A[],int N,int b)
{
  int i;
  long long a = 0;
  for(i=0;i<N;i++)
  {
    a = a + (b-A[i]);
  }
  return a;
}
int main(int argc, char *argv[])
{
  int N,i;
  scanf("%d",&N);
  int A[N];
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  long long int a =max(A,N);
  long long int b =chazhi(A,N,a);
  if(b%N!=0)
  {
    printf("%lld",b/N+1);
  }
  else
  {
    printf("%lld",b/N);
  }
  return 0;
}
