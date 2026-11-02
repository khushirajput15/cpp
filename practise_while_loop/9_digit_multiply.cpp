#include<iostream>
 int main(){
    int n,digit, product=1;
    std::cout<<"enter the no: ";
    std::cin>>n;

    while(n>0){
        digit=n%10;
        product = product*digit;
        n=n/10;
    }
    std::cout<<product;


    return 0;
}