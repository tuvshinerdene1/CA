#include<stdio.h>

int toBin(int num){
    int pow = 1;
    int s = 0;
    int temp = num;
    while(temp>0){
        s += (temp%2)*pow;
        pow *= 10;
        temp = temp/2;
    }

    return s;
}
void to16bit(int* arr, int bin){
    for(int i = 15 ; i >= 0; i--){
        arr[i] = bin%10;
        bin /= 10;
    }
}
int main(){

    printf("\n");

    int arr[16] = {0};
    printf("Test1: 24 ->");
    to16bit(arr, toBin(24));for(int i =0; i < 16; i++){printf("%d", arr[i]);}printf("\n");

    printf("Test2: 46 ->");
    to16bit(arr, toBin(46));for(int i =0; i < 16; i++){printf("%d", arr[i]);}printf("\n");

    printf("Test3: 100 ->");
    to16bit(arr, toBin(100));for(int i =0; i < 16; i++){printf("%d", arr[i]);}printf("\n");

    return 0;
}

