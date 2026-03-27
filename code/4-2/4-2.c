#include <stdio.h>

int sum(int arr[], int n) {
    int result = 0;
    for(int i=0; i<n; i++)
        result += arr[i];
    return result;
}

double average(int arr[], int n) {
    double result = 0;
    for(int i=0; i<n; i++)
        result += arr[i];
    return result / n;
}

int max(int arr[], int n) {
    int max = arr[0];
    for(int i=1; i<n; i++)
        if(max < arr[i])
            max = arr[i];
    return max;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("average: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
