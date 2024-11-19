#include<stdio.h>
int main(){
    float income,tax;
    printf("Enter income:");
    scanf("%f",&income);
    if(income<=150000){
        printf("no tax added\n");
        printf("the person income is:%f",income);
    }
    else if(income>=150001 && 300000>=income){
        tax=(income-150000)*0.1;
        printf("10 percent Tax added:%f\n",tax);

}
    else if(income>=300001 && 500000>=income){
        tax=(150000*0.1)+(income-300000)*0.2;
        printf("20 percent Tax added:%f\n",tax);

}
    else if(income>=500001){
        tax=(150000*0.1)+(200000*0.2)+((income-500000)*0.3);
        printf("30 percent Tax added:%f\n",tax);
}
    return 0;
}


