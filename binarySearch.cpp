#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>& nums,int target,int s , int e){

        if(s > e){

            return -1;
        }
        int mid = s+(e-s)/2;
        if(nums[mid]==target) {
            return mid;
        }
        else if(nums[mid]>target){
            return binary(nums,target,s,mid-1);
        }
        else{
            return binary(nums,target,mid+1,e);
        }
    }
int main(){

        vector<int> nums={-1,2,5,7,12,17,19};
        int target = 7;
        cout<< binary( nums , target , 0 , nums.size()-1 );

    }

    