#include<iostream>
int main(){
    int n, even_sum=0, odd_sum=0;
    std::cout<<"enter the no: ";
    std::cin>>n;

    while(n>=1){
        if(n%2==0){
            even_sum= even_sum+n;
        }
        else{
            odd_sum=odd_sum+n;
        }
        n--;
    }
    std::cout<<" sum of even no: "<<even_sum<<'\n';
    std::cout<<" sum of odd no: "<<odd_sum;


    return 0;
}