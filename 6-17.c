#include <stdio.h>

int main() {
    float taxable_income, tax;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &taxable_income);

    if(taxable_income <= 200000)
        tax = 0;
    else if(taxable_income > 200000 && taxable_income <= 500000)
        tax = (taxable_income - 200000) * 0.1;
    else if(taxable_income > 500000 && taxable_income <= 800000)
        tax = 30000 + (taxable_income - 500000) * 0.2;
    else if(taxable_income > 800000 && taxable_income <= 1000000)
        tax = 90000 + (taxable_income - 800000) * 0.3;
    else
        tax = 150000 + (taxable_income - 1000000) * 0.4 + taxable_income * 0.02;

    printf("Income tax for provided taxable income: %.2f", tax);
    return 0;
}
