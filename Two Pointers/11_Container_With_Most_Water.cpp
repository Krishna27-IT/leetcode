#include<iostream>
#include<vector>
using namespace std;

//Brute Force
/*
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxArea= 0;
    int area;

    for(int i=0; i<height.size(); i++){
        for(int j=i+1; j<height.size(); j++){
            int width = j - i;
            area = width*min(height[i],height[j]);

            if(area > maxArea){
                maxArea = area;
            }
        }
    }

    cout<<"The Area of Maximum Container: "<<maxArea<<endl;
    return 0;
}*/

//Two Pointer
int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    int maxArea= 0;
    int area;
    int i=0, j=height.size()-1;

    while(i < j){
        int width = j - i;
        area = width*min(height[i], height[j]);

        if(area > maxArea){
            maxArea = area;
        }

        if(height[i] <= height[j]){
            i++;
        }else{
            j--;
        }
    }

    cout<<"The Area of Maximum Container: "<<maxArea<<endl;
    return 0;
}