#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num1[] = {1,2};
    int n1 = sizeof(num1)/sizeof(num1[0]);
    int num2[] = {3,4};
    int n2 = sizeof(num2)/sizeof(num2[0]);

    vector<int> merged;
    int i = 0, j = 0;

    while(i<n1 && j<n2){
        if(num1[i] <= num2[j]){
            merged.push_back(num1[i]);
            i++;
        }else{
            merged.push_back(num2[j]);
            j++;
        }
    }

    while(i<n1){
        merged.push_back(num1[i]);
        i++;
    }

    while(j<n2){
        merged.push_back(num2[j]);
        j++;
    }

    int n =  merged.size();
    double mid;

    if(n % 2 == 0){
        int mid1 = (n/2)-1;
        int mid2 = (n/2);

        mid = (merged[mid1]+merged[mid2])/2.0;
    }else{
        mid = merged[n/2];
    }

    cout<<"The Median of two Sorted Arrays : "<<mid<<endl;
}