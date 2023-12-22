#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

int is_earlier(struct Date date1, struct Date date2);

int main() {
    struct Date date1, date2;
    printf("Enter the first date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);

    printf("Enter the second date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

    is_earlier(date1, date2) ? printf("First date is earlier than second date\n") : printf("First date is not earlier than second date\n");
    return 0;
}

int is_earlier(struct Date date1, struct Date date2) {
    if(date1.year < date2.year)
        return 1;
    if(date1.year > date2.year)
        return 0;
    if(date1.month < date2.month)
        return 1;
    if(date1.month > date2.month)
        return 0;
    if(date1.day < date2.day)
        return 1;
    if(date1.day > date2.day)
        return 0;
    return 0;
}
