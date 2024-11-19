#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    int sqrtnum=(int)sqrt(number);
    if(sqrtnum*sqrtnum==number){
        printf("perfect square\n");
    }
    else{
        printf("not perfect square\n");
    }
    return 0;

 }
