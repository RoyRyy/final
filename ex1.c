#include<stdio.h>
int main()
{
    typedef double love;
    love a,b,c;
    printf("please input two numbers:");
    scanf("%lf %lf",&a,&b);
    printf("the result is:");
    c=(a+b)*(a+b);
    printf("%1.2f\n",c);
}