#include <stdio.h>
int my_abs(int x)
{
  int a;
  if(x<0){
    a=x*-1;
  }else{
    a=x; 
  }
  return a;
}
int main()
{
  printf("%d",my_abs(-232));
  return 0;
}