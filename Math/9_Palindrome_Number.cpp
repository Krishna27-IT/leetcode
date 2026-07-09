#include<iostream>
using namespace std;

int main(){
    int x = 12321;
    int rev=0;

    if(x < 0 || x!=0 && x%10 == 0){
        cout<<"This is not Palindrome\n";
        return 0;
    }

    while(x > rev){
        int digit = x % 10;
        rev =  rev*10 + digit;
        x /= 10;
    }

    if(x == rev){
        cout<<"This is Palindrome\n";
    }else if(x == rev/10){
        cout<<"This is Palindrome\n";
    }else{
        cout<<"This is not Palindrome\n";
    }

    return 0;
}