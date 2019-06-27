#include <stdio.h>

int sumEven(int arr[], int size);

int sumOdd(int arr[], int size);

int main() {
    const int arraySize;
    int array[arraySize];
    int odd, even;


    printf("Enter size of array: ");
    scanf("%d", &arraySize);

    printf("\nSize: %d",arraySize);
    for (int i = 0; i < arraySize; ++i) {
        printf("\nEnter number of elements %d in array: ", i);
        scanf("%d", &array[i]);
    }

    odd = sumOdd(array, arraySize);
    even = sumEven(array, arraySize);

    printf("\nsum odd of array :%d", odd);
    printf("\nsum even of array :%d", even);
    return 0;
}

int sumOdd(int arr[], int size) {

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            sum = sum + arr[i];
        }
    }
    return sum;
}

int sumEven(int arr[], int size) {

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            sum = sum + arr[i];
        }
    }
    return sum;
}
