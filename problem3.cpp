#include <iostream>

using namespace std;
int main() {
    char a;
    double b;
    cin>>a>>b;
    if(int(a)==77){
        if(b<=1.70){
            cout<<"Short"<<endl;}
        else{
            if(b<=1.85){
                cout<<"Normal"<<endl;}
            else{
                cout<<"Tall"<<endl;}
        }
    }
    else{
        if(b<=1.60){
            cout<<"Short"<<endl;}
        else{
            if(b<=1.75){
                cout<<"Normal"<<endl;}
            else{
                cout<<"Tall"<<endl;}
        }
    }
    return 0;
}
