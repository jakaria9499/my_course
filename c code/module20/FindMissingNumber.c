#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        long long int m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        long long int ml= a*b*c;

        if(m==0)
        {
            printf("0\n");
        }
        else if(ml>m)
        {
            printf("-1\n");
        }
        else{
            if(m%ml==0){
                long long int x=m/ml;
                printf("%lld\n",x);
            }else{
                printf("-1\n");
            }
        }
    
        
        
    }
    
    return 0;
}