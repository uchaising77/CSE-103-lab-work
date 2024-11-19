#include<stdio.h>
int main(){
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>=13&&age<18){
        printf("teenager\n");
    }
    else{
        printf("not teenager\n");
    }
    return 0;
}
