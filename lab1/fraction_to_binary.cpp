#include<iostream>
using namespace std;

int main(){
    float input;
    cout<<"enter number : "; cin>>input;
    float sum = 0, weight = 0.5;

    cout<<input<<" = ";

    while((sum+weight)!=input){
        while((sum+weight)>input){
            weight /= 2;
        }
        sum += weight;
        cout<<weight <<" + ";
        weight /= 2;
    }

    return 0;
}