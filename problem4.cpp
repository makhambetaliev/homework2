#include <iostream>

using namespace std;
int main(){

    int n1,n2,n3,n4,UniqueNumbers;

    UniqueNumbers = 4;

    cin >>n1>>n2>>n3>>n4;

    if (n1==n2){UniqueNumbers = UniqueNumbers - 1;}
    if (n1==n3){UniqueNumbers = UniqueNumbers - 1;}
    if (n1==n4){UniqueNumbers = UniqueNumbers - 1;}
    if (n2 == n3 && n2 != n1){UniqueNumbers = UniqueNumbers - 1;}
    if (n2 == n4 && n2 != n1){UniqueNumbers = UniqueNumbers - 1;}
    if (n3 == n4 && n3 != n1 && n3 != n2){UniqueNumbers = UniqueNumbers - 1;}

    cout<<4-UniqueNumbers;
    return 0;
}
