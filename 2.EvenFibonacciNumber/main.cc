#include <iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    int total=2;
    while (a<=4000000&&b<=4000000){
        a+=b;
        b+=a;
        cout<<a<<"  "<<b<<"  ";
        if (a%2==0){
            total+=a;
        }
        if (b%2==0){
            total+=b;
        }
    }
    cout<<total<<endl;
}