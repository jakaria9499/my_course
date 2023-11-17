#include <stdio.h>
int main()
{
  int n,f;
  scanf("%d",&n);
  int ar[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&ar[i]);
  }
  scanf("%d",&f);
  int count=0;
  for (int i = 0; i < n-1; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if(ar[i]+ar[j]==f){
        count++;
        break;
      }
    }
    
  }
  if(count>0){
    printf("yes");
  }else{
    printf("no");
  }
  
  
  return 0;
}