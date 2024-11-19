#include<stdio.h>
int main(){
    float side1,side2,side3;
    printf("Enter three side:");
    scanf("%f%f%f",&side1,&side2,&side3);
    if(side1 <= 0 || side2 <= 0 || side3 <= 0){
        printf("Invalid input. Side lengths must be positive\n");
    }
    if(side1==side2 && side2==side3){
        printf("triangle is equilateral\n");
    }
    else if(side1==side2||side2==side3||side1==side3){
        printf("triangle is isosceles");
    }
    else{
        printf("triangle is scalene");
    }
    return 0;


}
