#include <iostream>
#include <vector>
using namespace std;

int main(){
     string test="12345";
     int product=1;
     for (int i=0;i<test.length();i++){
          product*=(int)test.at(i)-'0';
          cout<<(int)test.at(i)-'0'<<"  ";
     }
     cout<<endl;
     cout<<product<<endl;
}