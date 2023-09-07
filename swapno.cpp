#include<iostream>
using namespace std;

int swapNum(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 5 , b = 4;
    swapNum(&a , &b);
    cout<<a<<endl<<b;
    }