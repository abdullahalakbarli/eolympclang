#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int max;
    cin >> max; 
    string eded = "";
    if (max == 0) {
        eded = "0";
    } else {
        while (max > 0) {
            eded = to_string(max % 2) + eded; 
            max /= 2; 
        }
    }

    int dovr = eded.length();
    for (int i = 1; i < dovr; i++) {
        eded = eded.substr(1) + eded[0]; 
        int cari = stoi(eded, nullptr, 2);
        max = std::max(max, cari);
    }

    cout << max << endl;
    return 0;
}
