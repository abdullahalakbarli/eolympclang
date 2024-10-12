#include <iostream>

int main(){
    int n,count=0;
    std::cin>>n;
    if (n==0) {
        count=1;
    }
    while (n>0){
        count++;
        n=n/10;
    }
    std::cout<<count;
}
