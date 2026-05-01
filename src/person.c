#include <stdio.h>
#include "person.h"

void print_person(PERSON p) {
    printf("%s | %s | %s | %02d.%02d.%d\n",
           p.name, p.faculty, p.group,
           p.day, p.month, p.year);
}