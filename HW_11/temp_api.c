#include <stdio.h>
#include "temp_api.h"

float average_month_temp(const struct temp_record *records, int count, int month, int year) {
    printf("%d %d\n",month,year);
    return 0.0f;
}

float min_temp_in_month(const struct temp_record *records, int count, int month, int year) {
    printf("%d %d\n",month,year);
    return 0.0f;
}

float max_temp_in_month(const struct temp_record *records, int count, int month, int year) {
    printf("%d %d\n",month,year);
    return 0.0f;
}

float average_temp_in_year(const struct temp_record *records, int count, int year) {
    printf("%d\n",year);
    return 0.0f;
}


float min_temp_in_year(const struct temp_record *records, int count, int year) {
    printf("%d\n",year);
    return 0.0f;
}

float max_temp_in_year(const struct temp_record *records, int count, int year) {
    printf("%d\n",year);
    return 0.0f;
}