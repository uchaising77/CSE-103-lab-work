#include<stdio.h>
int main(){
    float angle1,angle2,angle3;
    printf("Enter three angle:");
    scanf("%f%f%f",&angle1,&angle2,&angle3);
    if ((angle1+angle2>angle3) && (angle3+angle3>angle1) && (angle3+angle1>angle2)){
        printf("triangle is valid\n");
    }
    else{
        printf("triangle is not valid\n");
    }
    return 0;
}
