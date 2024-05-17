#include "iostream"
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b;
    c = (60*a + b) - 45;
    
    if (c<0) {
        d = 1440 + c;
        cout << (d/60) << " " << (d%60);
    }
    else {
        cout << (c/60) << " " << (c%60); 
    }

    return 0;
}