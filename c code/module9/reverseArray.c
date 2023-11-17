#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<size;i++){
        scanf("%d",&ar[i]);
    }
    int a=size;
    for(int i=0;i<a;i++){
        int temp=ar[i];
        ar[i]=ar[a-1];
        ar[a-1]=temp;
        a--;
    }
    for(int i =0;i<size;i++){
        printf("%d ",ar[i]);
    }
    return 0;
}