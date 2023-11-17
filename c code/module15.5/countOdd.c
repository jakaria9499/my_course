#include <stdio.h>
int count_odd(int n,int *a)
{ int count=0;
  for (int i = 0; i < n; i++)
  {
    
    if(*(a+i)%2!=0){
      count++;
    }
  }
  
  return count;
}
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  for (int  i = 0; i < n; i++)
  {
    scanf("%d",&a[i]);
  }
  // for (int  i = 0; i < n; i++)
  // {
  //     printf("%d ",a[i]);
  // }
  
int *x = &a[0];
// printf("%p",x);
int y = count_odd(n,x);
printf("%d",y);
  
  return 0;
}

// #include <stdio.h>

// int main() {
//   int myNumbers[4] = {25, 50, 75, 100};
//   int i;

//   for (i = 0; i < 4; i++) {
//     printf("%p\n", &myNumbers[i]);
//   }

//   return 0;
// }