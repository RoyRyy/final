#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
   double  a[200];
     int k=0,j=0;
   if(argc<=1){
    printf("The program needs at least one integer parameter to run!\n") ;
    return 0;}
   if(argc<=2){
    printf("Min parameter is:%s\n",argv[1]);
    return 0;
   }

    for(k=1;k<argc;k++,j++)
    {   if((argv[k]<'0')&&(argv[k]>'9')){
          printf("The parameter has to be an integer format!\n");
          return 0;}
        
        a[j]=atof(argv[k]);
        }
    int i;
    double min=a[1];
    for(i=0;i<argc-1;i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
   printf("the minimum number is:");   
   printf(" %1.1f\n",min);
}