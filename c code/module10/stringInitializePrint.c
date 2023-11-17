#include <stdio.h>
int main()
{
    char a[]="jakaria";//same as char a[8]='jakaria';
    //aivabe dile string automatic null character ke boshiye dey
    //null holo /0 
    // tai amake char er main size theke 1 size boro rakhte hobe jate she null input nite pare


    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%c",a[i]);
    // }
    int sz=sizeof(a)/sizeof(char);
    printf("%d\n",sz);
    printf("%s",a);
    return 0;
}