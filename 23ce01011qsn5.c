#include <stdio.h>
int main(){
    int days;
    printf("enter number of days late to return book \n");
    scanf("%d",&days);

    if(days>=0 && days<=5)
    printf("your fine is 1 rupee");

    else if(days>=6 && days<=10)
    printf("your fine is 2 rupees");

    else if(days>=11 && days<=30)
    printf("your fine is 5 rupees");

    else 
    printf("your membership is cancelled");
    

    return 0;

}