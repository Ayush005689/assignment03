#include <stdio.h>
int main(){
    int m,n,k;
    printf("enter marks obtained out of 100 \n");
    scanf("%d",&m);

    printf("enter number of classes attended \n");
    scanf("%d",&n);
    
    printf("enter total no of classes \n");
    scanf("%d",&k);
    
    
    int t=(m*n/k);
    printf("score is %d \n",t);

    if(t>=90)
    printf("grade=EX");

    else if(t>=80 && t<89)
    printf("grade=A");

    else if("t>=70 && t<79")
    printf("grade=B");

    else if(t>=60 && t<69)
    printf("grade=C");

    else if(t>=50 && t<59)
    printf("grade=D");
     
    else if(t>=40 && t<49)
    printf("grade=P");


    return 0;
}