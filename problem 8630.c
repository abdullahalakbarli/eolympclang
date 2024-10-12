//problem 8630
#include <stdio.h>

int main(){
    long long n,max_num=0;
    scanf("%lld",&n);
    while(n>0){
        if ((n%10)>max_num){
            max_num=n%10;
        }
        n/=10;
    }
    printf("%d",max_num);
    return 0;
}
