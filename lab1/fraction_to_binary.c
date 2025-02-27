#include<stdio.h>

int main(){
    double input;
    printf("enter the number : ");
    scanf("%f",&input);

    float sum = 0;
    float weight = 0.5;

    printf("%f = ", input);
    while(sum > input){
        while(sum + weight > input){
            weight /= 2;
        }
        sum += weight;
        printf("%f + ", weight);
        weight /= 2;
    }
    return 0;
}