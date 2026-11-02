#include<iostream>
int main(){
    int age;
    do{
        std::cout<<"Enter your age ";
        std::cin>>age;
    }while(age<16);

    std::cout<<"welcome!";



    return 0;
}