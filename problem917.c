//problem 917
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double A[n];
    for (int i=0; i<n; i++){
        scanf("%lf",&A[i]);
    }
    double min_eded = A[0];
    for (int i=1; i<n; i++){ //minimum ededi tapaq
        if(min_eded>A[i]){
            min_eded=A[i];
        }
    }
    double twice_min = 2 * min_eded;
    printf("%.2f", twice_min);
    return 0;
}
