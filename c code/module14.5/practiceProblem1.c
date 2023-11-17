



#include <stdio.h>


int main()
{   int n;
    
    scanf("%d",&n);
    int sp1=n-1,st1=1,st2=1,sp2=2;
    start(sp1,st1,st2,sp2,n);

     
    
    
    
    

  return 0;
  
}
int start(int sp1,int st1, int st2,int sp2,int n){
    
  for (int  i = 1; i <=(2*n) +2; i++)
  { 

    for (int j = 1; j <= sp1; j++)
    {
      printf(" ");
    }
    for (int j = 1; j <= st1; j++)
    {
      printf("*");
    }
    for (int i = 1; i <= sp2; i++)
    {
      printf(" ");
    }
    for (int i = 1; i <= st2; i++)
    {
      printf("*");
    }
    for (int j = 1; j <= sp1; j++)
    {
      printf(" ");
    }
    printf("\n");
   
    if(i<n){
      sp1--;
      st1++;
      st2++;
    }else if(i==n){
      printf("\n");
    } else{
      sp1++;
      st1--;
      st2--;
      }
  }
  return 0;
}