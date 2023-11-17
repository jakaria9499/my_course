#include <stdio.h>
int swap_it(int *a,int *b)
{
  int temp= *a;
  *a=*b;
  *b=temp;
}

int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int *ap = &a,*bp=&b;
  swap_it(ap,bp);
  printf("%d %d\n",a,b);
  
  return 0;
}