#include <iostream>

long long int n, d;

int main()
{
    std::cin>>n>>d;

    if(n/d>0){
        std::cout<<n/d<<" ";
    }

    if(n%d!=0){
        std::cout<<n%d<<"/"<<d<<std::endl;
    }
    return 0;
}
