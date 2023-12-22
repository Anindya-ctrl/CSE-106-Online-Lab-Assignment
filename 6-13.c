#include <stdio.h>

int main() {
    float total_amount, interest_rate, result;
    int days;
    char is_senior_citizen;
    printf("Enter the total amount to be deposited: ");
    scanf("%f", &total_amount);
    printf("Enter the number of days: ");
    scanf("%d", &days);
    printf("Is the deposit for a senior citizen? [y/n]: ");
    scanf("%c", &is_senior_citizen);

    if(days >= 30 && days <= 60)
        interest_rate = 0.06;
    else if(days > 60 && days <= 90)
        interest_rate = 0.065;
    else if(days > 90 && days <= 180)
        interest_rate = 0.07;
    else if(days > 180 && days <= 365)
        interest_rate = 0.08;
    else
        interest_rate = 0.085;

    if(is_senior_citizen == 'y' && total_amount > 50000)
        interest_rate += 0.01;

    result = total_amount + (total_amount * interest_rate);
    printf("Amount to be given after %ddays = %.2f\n", days, result);
    
    return 0;
}
