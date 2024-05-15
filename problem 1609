//problem 1609
#include <stdio.h>

int main(){
    long long n,integer,count=0;
    scanf("%lld",&n);
    scanf("%lld",&integer);
    if (n<0) n=-n;
    while (n>0){
        if((n%10)==integer){
            count++;
        }
        n/=10;
    }
    printf("%lld",count);
    return 0;
}
