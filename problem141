//problem 141
#include <stdio.h>
int ededincemi(int, int);
int main() {
    int n,m,l;
    scanf("%d %d", &n,&m);
    l=ededincemi(n,m);
    printf("%d",l);
    return 0;
}
int ededincemi(int n,int m){
    int k,mineded, A[m], ededlerincemi,say=0,minededsay=0;
    for (int i=n;i<=m;i++){
        ededlerincemi=0;
        int temp = i;
        while (temp>0){
            ededlerincemi+=(temp%10);
            temp=temp/10;
        }
        A[say]=ededlerincemi;
        say++;
    }
    mineded=A[0];
    for (int k=0;k<say;k++){
        if(mineded>A[k]){
            mineded=A[k];
            minededsay=1;
        }
        else if (mineded==A[k]){
            minededsay++;
        }
    }
    return minededsay;
}
