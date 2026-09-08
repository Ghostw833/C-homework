#include <stdio.h>
#include "temp_api.h"

int main() {
    struct temp_record records[5] = {
        {2026,9,7,12,0,15.5f},
        {2026,9,6,5,1,13.0f},
        {2026,9,3,5,7,10.0f},
        {2026,9,4,6,2,15.5f},
        {2026,3,3,3,3,33.3f}
    };
float avg = 0; 
avg = average_month_temp(records, 5, 9, 2026);
}
