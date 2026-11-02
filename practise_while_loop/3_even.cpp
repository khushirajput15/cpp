#include<iostream>
int main(){
    int n, i=1;
    std::cout<<"enter the no: ";
    std::cin>>n;

    while( i<=n){
        if(i%2==0)
        std::cout<<i<<'\n';
        i++;
    }

    return 0;
}