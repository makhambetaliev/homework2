#include <iostream>

using namespace std;
int main() {

    long long a;
    cin >> a;

    if (a >= -2147483647 && a <= 2147483647) {
        std::cout << "YES" << std::endl;}
    else {
        std::cout << "NO" << std::endl;}

    return 0;
}
