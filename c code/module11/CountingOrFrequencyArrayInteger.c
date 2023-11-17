#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[10]={0};//a[]er value ke count kore cnt[] value ke increment store korar jonno
    for(int i=0;i<n;i++){
        cnt[a[i]]++;/// cnt[i] array er moddhe a[i] array er value e count kore cnt[] er 0-9 porjonto increment kortece.
    }
    for(int i=0;i<n;i++){
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;
}