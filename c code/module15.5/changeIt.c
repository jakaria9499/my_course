#include <stdio.h>
int change_it(int *b,int n)
{
  *(b+n-1)=100;
  
}

int main()
{
  int n;
  scanf("%d",&n);
  int in[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&in[i]);
  }
  int *a=&in[0];
  change_it(a,n);
  for (int i = 0; i < n; i++)
  {
    printf("%d ",in[i]);
    // printf(" pointer -%d ",*(a+i));
  }
  
  
  return 0;
}