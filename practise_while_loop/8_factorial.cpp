#include<iostream>
int main(){
    int n, factorial=1;
    std::cout<<"enter the no: ";
    std::cin>>n;
    while(n>=1){
        factorial=factorial*n;
        n--;
    }
    std::cout<<factorial;


    return 0;
}