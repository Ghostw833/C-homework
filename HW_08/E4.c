#include <stdio.h>

int main()
{
    int max_value, second_max_value;
    int arr[10];
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
        
    if (arr[0] > arr[1]) {
        max_value = arr[0];
        second_max_value = arr[1];
    } 
    else {
        max_value = arr[1];
        second_max_value = arr[0];
    }
    
    
    for (int i = 2; i < 10; i++) {
        if (arr[i] >= max_value) {
            second_max_value = max_value;
            max_value = arr[i];
        } 
        else if (arr[i] > second_max_value) {
            second_max_value = arr[i];
        }
    }
    printf("%d\n", max_value + second_max_value);
    return 0;
}
