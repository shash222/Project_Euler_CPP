#include <iostream>
using namespace std;

bool isPrime(int x){
    for (int i=2;i<x;i++){
        if (x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int largestPrime=2;
    int count=0;
    int i=2;
    while (count<10001){
        if (isPrime(i)){
            count++;
            largestPrime=i;
        }
        i++;
    }
    cout<<largestPrime<<endl;
}