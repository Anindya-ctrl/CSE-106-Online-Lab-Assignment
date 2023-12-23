#include <stdio.h>

int main() {
    // take basic pay as input
    float basic_pay, da, hra, cca, pf, lic, gross_salary, net_salary;
    printf("Enter the amount of basic pay: ");
    scanf("%f", &basic_pay);

    // calculate da, hra, cca, pf and lic using given info
    da = 0.45 * basic_pay;
    hra = 0.14 * basic_pay;
    cca = 0.1 * basic_pay;

    pf = 0.12 * basic_pay;
    lic = 0.15 * basic_pay;

    // calculate gross salary and net salary and display net salary
    gross_salary = basic_pay + da + hra + cca;
    net_salary = gross_salary - pf - lic;
    printf("Net salary: %.2f\nf", net_salary);
    return 0;
}
