#include<stdio.h>
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
                break;
            }
        }
        for(int i = start-1; i>=0; i--){
            if(arr[i]==0){
                arr[i] = 1;
            }
            else{
                arr[i] = 0;
            }
        }
    }
}
void add16bit(int * arr1, int * arr2){
    int carry = 0;
    int sum;
    for(int i = 15 ; i >= 0; i--){
        sum = arr1[i]+arr2[i]+carry;
        if(carry == 1){
            carry = 0;
        }
        if(sum == 0){
            arr1[i] = 0;
        }
        else if(sum == 1){
            arr1[i] = 1;
        }
        else if(sum == 2){
            arr1[i] = 0;
            carry = 1;
        }
        else{
            arr1[i] = 1;
            carry = 1;
        }
    }
}
void printbin(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
void printdec(int *arr, int size){
    int sum = 0;
    int pow = 1;
    for(int i = size-1; i>=0 ;i--){
        sum += arr[i]*pow;
        pow *= 2;
    }
    printf(" (%d) ", sum);
}
int main(){
    int arr1[16];
    int arr2[16];

    printf("15 +  12 = ");
    to16bit(arr1, 15);
    to16bit(arr2, 12);
    add16bit(arr1, arr2);
    printbin(arr1,16);printdec(arr1,16);

    printf("\n");

    printf("21 +  3 = ");
    to16bit(arr1, 21);
    to16bit(arr2, 3);
    add16bit(arr1, arr2);
    printbin(arr1,16);printdec(arr1,16);

    printf("\n");

    printf("2 +  10 = ");
    to16bit(arr1, 2);
    to16bit(arr2, 10);
    add16bit(arr1, arr2);
    printbin(arr1,16);printdec(arr1,16);



    return 0;
}