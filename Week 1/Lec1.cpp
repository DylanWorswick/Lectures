#include<iostream>

int main(){
    int number1=200;
    int* pointerToNumber1=&number1;
    std::cout<<"The number "<<number1<<" has address "<< pointerToNumber1<<std::endl;
    return 0;
}