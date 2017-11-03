#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool isPrime(int x);

vector<int> factorsVector;
vector<int> twoThreeFiveSeven={2,3,5,7};
int maxTwos=0;
int maxThrees=0;
int maxFives=0;
int maxSevens=0;

void compositeNumbers(int x){
    int twos=0;
    int threes=0;
    int fives=0;
    int sevens=0;
    for (int i=0;i<twoThreeFiveSeven.size();i++){
        int temp=x;
        while(temp%twoThreeFiveSeven[i]==0){
            switch (twoThreeFiveSeven[i]){
                case 2:{
                    twos++;
                    break;
                }
                case 3:{
                    threes++;
                    break;
                }
                case 5:{
                    fives++;
                    break;
                }
                case 7:{
                    sevens++;
                    break;
                }
            }
            temp=temp/twoThreeFiveSeven[i];
        }
    }
    if (twos>maxTwos){
        maxTwos=twos;
    }
    if (threes>maxThrees){
        maxThrees=threes;
    }
    if (fives>maxFives){
        maxFives=fives;
    }
    if (sevens>maxSevens){
        maxSevens=sevens;
    }
}

bool isPrime(int x){
    for (int i=2;i<x;i++){
        if (x%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long total=1;
    for (int i=11;i<20;i++){
        if (isPrime(i)){
            factorsVector.push_back(i);
        }
        else{
            compositeNumbers(i);
        }
    }
    total=pow(2,maxTwos);
    total*=pow(3,maxThrees);
    total*=pow(5,maxFives);
    total*=pow(7,maxSevens);
    
    for (int j=0;j<factorsVector.size();j++){
        total*=factorsVector[j];
    }
    cout<<total<<endl;
}