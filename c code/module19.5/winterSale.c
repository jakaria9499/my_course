#include <stdio.h>
float winterSale(float x, float p)
{
    float a = (p/(100-x))*100;
    return a;
    
}
int main()
{
    float x,p;
    scanf("%f %f",&x,&p);
    float pc = winterSale(x,p);
    printf("%.2f",pc);
    return 0;
}