#include<iostream>
int main (){
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;

    if(age>=100){
        std::cout<<"Too old!";
    }
    else if(age >=18){
        std::cout<<"welcome!";
    }
    else{
        std::cout<<"underage!";
    }



    return  0;
}