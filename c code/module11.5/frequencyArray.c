#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&m);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[100000]={0};
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
    }
    for(int i=1;i<m+1;i++){
        printf("%d\n",cnt[i]);
    }
    return 0;
}