#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter the value of a,b,c : \n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    
    printf("%d,%d,%d are sides of a triangle",a,b,c);
    
    else
    printf("%d,%d,%d are not sides of a triangle",a,b,c);
    return 0;

}