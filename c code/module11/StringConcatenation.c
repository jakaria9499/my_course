#include <stdio.h>
#include <string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    strcat(a,b);//for real use
    //////////////////////////////////
    //for logic
    // int k=strlen(a);
    // for(int i=0;i<=strlen(b);i++){
    //     a[k]=b[i];
    //     k++;
    // }  
    ////////////////////////////////////
    printf("%s",a); 
    return 0;
}