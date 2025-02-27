#include <stdio.h>

void to16bit(int *arr, int num)
{
    int isNegative = 0;
    if(num < 0){
        num = -num;
        isNegative = 1;

    }
    // resetting arr
    for (int i = 0; i < 16; i++)
    {
        arr[i] = 0;
    }

    int temp = num;
    int current = 15;

    while (temp > 0)
    {
        arr[current] = temp % 2;
        current--;
        temp /= 2;
    }

    int start = 15;

    if(isNegative){
        for(int i = 15; i >= 0; i--){
            if(arr[i] == 1){
                start = i;
            }
        }
        for(int i = start-1; i>=0; i--){
            
        }
    }
}
void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[16];

    printf("test1: 25-> ");
    to16bit(arr, 25);
    print(arr, 16);

    printf("\n");

    printf("test2: 108-> ");
    to16bit(arr, 108);
    print(arr, 16);

    printf("\n");

    printf("test3: 197-> ");
    to16bit(arr, 197);
    print(arr, 16);

    printf("\n");

    printf("test3: 0-> ");
    to16bit(arr, 0);
    print(arr, 16);

    printf("\n");

    return 0;
}