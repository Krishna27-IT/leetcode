#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(){
    string s ="   -42";
    int i=0,result=0,sign=1,digit=0;

    while(s[i] == ' '){
        i++;
    }

    if(s[i] == '+' || s[i] == '-'){
        if(s[i] == '-'){
            sign = -1;
        }
        i++;
    }

    while(s[i] >= '0' && s[i] <= '9'){
        digit = s[i] - '0';
        int limit = (sign == 1) ? 7 : 8;
        if(sign == 1){
            if(result > INT_MAX/10 || (result == INT_MAX/10 && digit > limit)){
                cout<<"String To Integer: "<<INT_MAX;
                return INT_MAX;
            }
            result = result * 10 + digit;
        }else{
            if(result < INT_MIN/10 || (result == INT_MIN/10 && digit > limit)){
                cout<<"String To Integer: "<<INT_MIN;
                return INT_MIN;
            }
            result = result * 10 - digit;
        }
        i++;
    }

    cout<<"String To Integer: "<<result;
    return 0;
}