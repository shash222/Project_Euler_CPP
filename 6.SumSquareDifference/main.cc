#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int sumSquare=1;//sum of square of each number
    int squareSum=1;//square of sum of all numbers
    int difference=0;
    for (int i=2;i<=100;i++){
        sumSquare+=pow(i,2);
        squareSum+=i;
    }
    squareSum=pow(squareSum,2);
    difference=squareSum-sumSquare;
    cout<<difference<<endl;
}