#include<iostream>
int main(){
    int n;
    std::cout<<"enter the no ";
    std::cin>>n;
    while(n>=1)
{
    if( n%2 !=0){
        std::cout<<n<<'\n';
        
    }
    n--;
}


    return 0;
}