#include <stdio.h>

int sum(int arr[], int n) {
    if (n <= 0) return 0;
    int result = 0;
    for(int i=0; i<n; i++)
        result += arr[i];
    return result;
}

double average(int arr[], int n) {
    if (n <= 0) return 0.0;
    double result = 0.0;
    for(int i=0; i<n; i++)
        result += arr[i];
    return result / n;
}

int max(int arr[], int n) {
    if (arr == NULL || n <= 0) return 0;
    int maxVal = arr[0];
    for(int i=1; i<n; i++)
        if(maxVal < arr[i])
            maxVal = arr[i];
    return maxVal;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("average: %.2f\n", average(arr, n));
    printf("max: %d\n", max(arr, n));

    return 0;
}
