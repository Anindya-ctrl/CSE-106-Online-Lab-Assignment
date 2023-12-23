#include <stdio.h>

int main() {
    // take number of units as input
    int units;
    float total_charge = 0.0;
    printf("Enter the number of units: ");
    scanf("%d", &units);

    // calculate total charge following the given conditions
    if(units >= 1 && units <= 100)
        total_charge = units * 1.50;
    else if(units > 100 && units <= 300)
        total_charge = (units - 100) * 2.00 + 100 * 1.50;
    else if (units > 300 && units <= 500)
        total_charge = (units - 300) * 2.50 + 200 * 2.00 + 100 * 1.50;
    else
        total_charge = (units - 500) * 3.25 + 200 * 2.50 + 200 * 2.00 + 100 * 1.50;

    // display number of units and total charge
    printf("Units = %d\nTotal charge = %.2f\n", units, total_charge);
    return 0;
}
