#include <stdio.h>
#include "date.h"
#include "person.h"

int main() {
    // часть 1
    int d1 = 1, m1 = 1, y1 = 2020;
    int d2 = 1, m2 = 1, y2 = 2021;

    int days1 = days_from_1970(d1, m1, y1);
    int days2 = days_from_1970(d2, m2, y2);

    printf("Days between: %d\n", days2 - days1);

    // часть 3
    PERSON people[2] = {
        {"Ivanov I.I.", "FPMI", "1-1", 1, 9, 2020},
        {"Petrov P.P.", "FPMI", "1-2", 2, 9, 2021}
    };

    for (int i = 0; i < 2; i++) {
        print_person(people[i]);
    }

    return 0;
}