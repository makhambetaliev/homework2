#include <iostream>

using namespace std;
int main() {
    double a, b;
    char c;
    cin >> a >> b >> c;

    double result;
    
    switch (c) {
        case '+':
            result = a + b;
        break;
        case '-':
            result = a - b;
        break;
        case '*':
            result = a * b;
        break;
        default : result  = a/b;
         
    }


    cout << result << endl;

    return 0;
}
