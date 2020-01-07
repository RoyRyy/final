
#include<stdio.h>
void love (char s[]){
    typedef int ryy;
   ryy c,j,i=0,k=0;
   while(s[k]!='\0'){
    k++;}
   j=k-(i+1);
   for(i=0;i<j;i++,j--)
     {
     if(i<j)
    c=s[i];
    s[i]=s[j];
    s[j]=c;}
}
int main(){
    printf("请输入一个字符串我来反转：");
	char *s;
    scanf("%[^\n]",*&s);  
	love(s);
    printf("%s\n",s);
	return 0 ;
}