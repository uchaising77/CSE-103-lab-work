#include<stdio.h>
int main(){
    int side1,side2,side3;
    int max , sum_of_square;
    printf("enter three sides of the triangle:");
    scanf("%d%d%d",&side1,&side2,&side3);
    if (side1>side2&&side1>side3){
        max = side1;
        sum_of_square = side2*side2+side3*side3;
    }else if(side2>side1&&side2>side3){
        max = side2;
        sum_of_square = side1*side1+side3*side3;
    }else{
        max = side3;
        sum_of_square = side1*side1+side2*side2;
    }
    if(max * max == sum_of_square){
        printf("triangle is right triangle.\n");
    } else if (max * max < sum_of_square){
        printf("triangle is acute triangle.\n");

    }else{
        printf("triangle is an obtuse triangle.\n");

    }
    return 0;

    }
