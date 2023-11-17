#include <stdio.h>
long long int fac(long long int f)
{
    if(f==0){
        return 1;
    } 
    long long int ans=fac(f-1);
    return ans*f;
}



int main()
{
    long long int f;
    scanf("%lld",&f);
    long long int re = fac(f);
    printf("%lld",re);
    return 0;
}