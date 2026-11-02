#include<iostream>
int main(){
    int n, sum=0;
    std::cout<<"enter the no.: ";
    std::cin>>n;
    while(n>=1){
        sum= sum+n;
        n--;
    }
    std::cout<<sum;

    
    return 0;
}