#include <stdio.h>

int is_leap_year(int year);
int is_valid_date(int day, int month, int year);

int main() {
    int day, month, year;
    printf("Enter a date in the dd/mm/yyyy format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    is_valid_date(day, month, year) ? printf("Given date is valid\n") : printf("Given date is invalid\n");
    return 0;
}

int is_leap_year(int year) {
    return ((year % 400 == 0) || (year % 4 == 0 && year % 100 == 0)) ? 1 : 0;
}

int is_valid_date(int day, int month, int year) {
    if(day < 1 || month < 1 || year < 1 || month > 12)
        return 0;

    int days_in_month;
    if(month == 2) {
        if(is_leap_year(year))
            days_in_month = 29;
        else 
            days_in_month = 28;
    } else if(month == 4 || month == 6 || month == 9 || month == 11) {
        days_in_month = 30;
    } else {
        days_in_month = 31;
    }

    return day <= days_in_month ? 1 : 0;
}
