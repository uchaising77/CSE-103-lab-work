#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number %5==0){
        printf("divisible\n");
    }
    else{
        printf("not divisible\n");
    }
    return 0;
}
