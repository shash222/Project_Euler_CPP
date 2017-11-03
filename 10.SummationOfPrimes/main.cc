#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int x){
    for (int i=3;i<=sqrt(x);i+=2){
        if (x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long sum=2;//start with two, but skipping in for loop
    for (int i=3;i<2000000;i+=2){
        if (isPrime(i)){
            sum+=i;
        }
    }
    cout<<sum<<endl;
}