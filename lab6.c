#include <stdio.h>

// Function to calculate sum using do-while loop
int calculateSum(int arr[], int n) {
    int sum = 0, i = 0;
    do {
        sum += arr[i];
        i++;
    } while(i < n);
    return sum;
}

// Function to calculate average
float calculateAverage(int sum, int n) {
    return (float)sum / n;
}

int main() {
    int arr[100], n, i;
    int sum;
    float avg;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function calls
    sum = calculateSum(arr, n);
    avg = calculateAverage(sum, n);

    // Output
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
