#include <stdio.h>

int main() {
    float basicSalary, hra, da, totalSalary;


    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);


    if (basicSalary <= 10000) {
        hra = 0.20 * basicSalary;
        da = 0.80 * basicSalary;
    }
    else if (basicSalary <= 20000) {
        hra = 0.25 * basicSalary;
        da = 0.90 * basicSalary;
    }
    else {
        hra = 0.30 * basicSalary;
        da = 0.95 * basicSalary;
    }


    totalSalary = basicSalary + hra + da;


    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Total Salary: %.2f\n", totalSalary);

    return 0;
}








