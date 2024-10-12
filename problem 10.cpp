#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, n_of_days=0;
    double m=0;
    cin>>N;
    for (int i = N; i >= 1; --i){
        m = m + (1.0 / i);
        if (m> 0.5) {
            break;
        }
        n_of_days++;
    }
    std::cout<<N - n_of_days<<"\n";
}
