#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double c;
    int product=1;
    for (int a=1;a<1000;a++){
        for (int b=1;b<1000;b++){
            c=sqrt(pow(a,2)+pow(b,2));
            if (a+b+c==1000){
                product=a*b*c;
            }
        }
    }
    cout<<product<<endl;
}