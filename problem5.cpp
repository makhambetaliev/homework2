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
        case '/':
            if (b != 0) {
                result = a / b;
            } else {
                cout << "Error: Division by zero!" <<endl;
                return 1; // Exit with an error code
            }
        break;
        default:
            cout << "Error: Invalid operator!" <<endl;
        return 1; 
    }


    cout << result << endl;

    return 0;
}
