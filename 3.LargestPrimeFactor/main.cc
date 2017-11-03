#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int factor){
    bool prime=true;
    for (int i=2;i<=sqrt(factor);i++){
        if (factor%i==0){
            prime=false;
            break;
        }
    }
    return prime;
}

int main(){
    long long number=600851475143;
    int largestPrimeFactor=1;
    double num=sqrt(number);//created this variable
    if (number%2==0){
        largestPrimeFactor=2;
    }
    for (int i=3;i<num;i+=2){//changed from number to num
        if (number%i==0){
            if (isPrime(i)&&i>largestPrimeFactor){
                largestPrimeFactor=i;
            }
        }
    }
    cout<<largestPrimeFactor<<endl;
}