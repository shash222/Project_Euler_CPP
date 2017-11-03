#include <iostream>
#include <sstream>
#include <string>
using namespace std;

bool palindromeCheck(string productString){
    int length=productString.length();
    int j=length-1;
    bool palindrome=true;
    for (int i=0;i<length;i++){
        if (productString.at(i)!=productString.at(j)){
            palindrome=false;
            break;
        }
        j--;
    }  
    return palindrome;
}

int main(){
    int largestPalindromeProduct=0;
    int product=0;
    string productString="";
    for (int i=100;i<1000;i++){
        for (int j=100;j<1000;j++){
            product=i*j;
            productString=to_string(product);
            if (palindromeCheck(productString)&&largestPalindromeProduct<product){
                largestPalindromeProduct=product;
            }
        }
    }
    cout<<largestPalindromeProduct<<endl;
}