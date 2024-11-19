#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=18){
        printf("voter\n");
    }
    else{
        printf("not voter\n");
    }
    return 0;

}
