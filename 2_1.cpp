#include <iostream>

using namespace std;

int main() {
    for (int n = 1; n <=4 ; n++ ){
        for (int i = 0; i<(n-1); i++ ){
            cout << ' ';
        }
        for (int j = 0; j<(8-2*(n-1)); j++){
            cout << '#';
        }
        cout << '\n';
    }
    return 0;
}