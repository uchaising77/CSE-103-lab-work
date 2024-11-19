#include<stdio.h>
int main(){
    int a,b,c;
    int highest , lowest ,difference;
    printf("Enter three number:");
    scanf("%d%d%d",&a,&b,&c);

    highest = a;
    if(b > highest) highest = b;
    if(c > highest) highest = c;


     lowest = a;
     if(b <lowest) lowest = b;
     if(c < lowest) lowest =c;

    difference = highest-lowest;
    printf("difference between highest and lowest:%d\n",difference);

    return 0;
}

