#include<iostream>
int main(){
    int n, i=10, multiply=1;
    std::cout<<"enter the no: ";
    std::cin>>n;
    while(i>=1){
        multiply= n*i;
        std::cout<<n<<" * "<<i<<" = "<< multiply<<'\n';
        i--;
        
    }

    return 0;
}