#include<iostream>
int main(){
    int n, digit, reverse=0;
    std::cout<<"enter the no: ";
    std::cin>>n;
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    std::cout<<reverse;


    return 0;
}