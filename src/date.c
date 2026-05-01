#include "date.h"

int is_leap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int days_in_month(int m, int y) {
    int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (m == 2 && is_leap(y)) return 29;
    return days[m-1];
}

int days_from_1970(int d, int m, int y) {
    int days = 0;

    for (int year = 1970; year < y; year++) {
        days += is_leap(year) ? 366 : 365;
    }

    for (int month = 1; month < m; month++) {
        days += days_in_month(month, y);
    }

    days += d;

    return days;
}