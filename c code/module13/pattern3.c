#include <stdio.h>
int main()
{
  // int n,k=1;
  // scanf("%d",&n);
  // for (int i =1; i <=n; i++)
  // {
  //   for (int j = 1; j <= k; j++)
  //   {
  //     printf("%d ",j);
  //   }
  //   printf("\n");
  //   k++;
    
  // }

  // amar kaj............
  int n,k;
  scanf("%d",&n);
  k=n;
  for (int i = 1; i <=n; i++)
  {
    for (int j = 1; j <= k; j++)
    {
      printf("%d ",j);
    }
    k--;
    printf("\n");
    
  }
  
  
  return 0;
}