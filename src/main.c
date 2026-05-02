#include <stdio.h>
#include "date.h"
#include "person.h"

int main() {
    // ===== ЧАСТЬ 1 — ввод дат =====
    int d1, m1, y1;
    int d2, m2, y2;

    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &d2, &m2, &y2);

    int days1 = days_from_1970(d1, m1, y1);
    int days2 = days_from_1970(d2, m2, y2);

    printf("Days between: %d\n\n", days2 - days1);

    // ===== ЧАСТЬ 3 — структуры =====
    PERSON people[2] = {
        {"Ivanov I.I.", "FPMI", "1-1", 1, 9, 2020},
        {"Petrov P.P.", "FPMI", "1-2", 2, 9, 2021}
    };

    printf("Students:\n");
    for (int i = 0; i < 2; i++) {
        print_person(people[i]);
    }

    return 0;
}