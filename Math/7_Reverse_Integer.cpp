#include<iostream>
#include<climits>
using namespace std;


int main(){
    int num = 1534236469;
    int rev=0, digit;

    while(num != 0){
        digit = num % 10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)){
            return 0;
        }
        if(rev < INT_MIN/10 || (rev == INT_MIN / 10 && digit < -8)){
            return 0;
        }
    
        rev = rev * 10 + digit;
        num = num/10;
    }

    cout<<"The Reverse Integer is:"<<rev<<endl;
    return 0;
}