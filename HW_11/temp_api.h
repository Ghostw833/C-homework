#ifndef TEMP_API_H
#define TEMP_API_H

struct temp_record {
    int year;
    int month;
    int day;
    int hour;
    int minute;
    float temperature;
};

float average_month_temp(const struct temp_record *records, int count, int month, int year);
float min_temp_in_month(const struct temp_record *records, int count, int month, int year);
float max_temp_in_month(const struct temp_record *records, int count, int month, int year);

float average_temp_in_year(const struct temp_record *records, int count, int year);
float min_temp_in_year(const struct temp_record *records, int count, int year);
float max_temp_in_year(const struct temp_record *records, int count, int year);

#endif
