#include <stdio.h>
#include <limits.h>
void summation(int n, int a[], int i, long long int* re1, long long int * re2)
{
    if(i==n) return;
    if(a[i]>0)
    {
        *re1= *re1+a[i];
    }else{
        *re2 = *re2+a[i];
    }
    summation(n,a,i+1,re1,re2); 
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
    long long int result1=0,result2=-1;
    long long int*re1=&result1,*re2=&result2;
    summation(n,a,0,re1,re2);
    long long int ab= result1+(result2+1);
    printf("%lld",ab);
    
}