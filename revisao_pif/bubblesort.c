#include <stdio.h>
#include <string.h>

void int_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void str_sort(char **strings, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(strings[j], strings[j + 1]) > 0) {
                char *temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[6] = {32, 42, 53, 31, 42, 13};
    int_sort(arr, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    char *strings[] = {"banana", "laranja", "maca", "abacaxi", "uva"};

    str_sort(strings, 5);
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
