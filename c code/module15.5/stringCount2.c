#include <stdio.h>
int my_len(char *a)
{ 
  int b=0;
  while(*a!='\0')
  {
    b++;
    a++;
    
  }
  return b;
}
int main()
{
  char a[100];
  scanf("%s",a);
  char *ptr = a;
  int c = my_len(ptr);
  printf("%d",c);
  return 0;
}