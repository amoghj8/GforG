#include<bits/stdc++.h>

using namespace std;

void rotateByOne(vector<int>&nums, int *maxSum) {
    int last = nums[nums.size()-1];
    int tempSum = 0;
    for(int i=nums.size()-2;i>0;i--) {
        nums[i+1] = nums[i];
        nums[i] = nums[i-1];
    }
    nums[0] = last;

    for(int i=0;i<nums.size();i++) {
        tempSum += i*nums[i];
    }

    if(tempSum>*maxSum)
        *maxSum =tempSum;
}

int main() {
    vector<int> v{10, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int maxSum = INT_MIN;
    for(int i=0;i<v.size();i++) {
        rotateByOne(v, &maxSum);
    }
    cout<<"Max sum: "<<maxSum;
}
