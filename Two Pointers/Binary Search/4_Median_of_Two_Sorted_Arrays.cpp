#include<iostream>
#include<vector>
#include <climits>
using namespace std;

/* Brute Force
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
}*/

// Binary Search Partition
int main(){
    vector<int> num1 = {1,2};
    vector<int> num2 = {3,4,5};

    int n1 = num1.size();
    int n2 = num2.size();

    if (num1.size() > num2.size()) {
        swap(num1, num2);
    }

    n1 = num1.size();
    n2 = num2.size();

    int low=0;
    int high=n1;
    double median;

    while(low <= high){
        int partitionA = (low+high)/2;
        int leftsize = (n1+n2+1)/2;
        int partitionB = leftsize - partitionA;

        int Aleft  = (partitionA == 0)  ? INT_MIN : num1[partitionA - 1];
        int Aright = (partitionA == n1) ? INT_MAX : num1[partitionA];

        int Bleft  = (partitionB == 0)  ? INT_MIN : num2[partitionB - 1];
        int Bright = (partitionB == n2) ? INT_MAX : num2[partitionB];

        if(Aleft <= Bright && Bleft <= Aright){
            if((n1+n2)%2 == 0){
                median =(max(Aleft,Bleft) + min(Aright,Bright))/2.0;
                break;
            }else{
                median = max(Aleft, Bleft);
                break;
            }
        }else if(Aleft > Bright){
            high = partitionA - 1;
        }else{
            low = partitionA + 1;
        }
    }

    cout<<"The Median of two Sorted Arrays : "<<median<<endl;
    return 0;
}