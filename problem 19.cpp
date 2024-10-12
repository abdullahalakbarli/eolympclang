#include <iostream>
using namespace std;

int main(){
    int len=0, answer=0;
    char ch[12], temp;
    do {
        cin.get(temp);
        if (temp != '\n'){
            ch[len] = temp;
            len++;
        }
    } while (temp != '\n');
    
    for (int i = 0; i<= (len - 1) / 2; i++){
        if (ch[i] == ch[len-i-1]){
            answer++;
        }
    }
    cout<<answer<<endl;
    return 0;
}
