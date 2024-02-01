#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3;
    printf("enter the value of x1,x2,x3,y1,y2,y3 \n");
    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);

    if((y3-y2)/(x3-x2)==(y2-y1)/x2-x1)

    printf("(%d,%d),(%d,%d),(%d,%d) all three points fall on one straight line",x1,x2,x3,y1,y2,y3);

    else
    printf("all three points does not fall on one straight line");
    return 0;

}