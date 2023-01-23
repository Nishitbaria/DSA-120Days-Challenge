#include<iostream>
using namespace std;
vector<int> separateNegativeAndPositive(vector<int> &nums){
 int l=0;
int r = nums.size()-1;
 while (l < r)
  {
if(nums[l]<0 && nums[r]>0){
  l++;
  r--;
}
else if(nums[l] > 0 && nums[r]< 0){
 swap(nums[l],nums[r]);
 l++;
 r--;
} 
else if(nums[l]<0 && nums[r]<0){
      l++;
}
else {
r--; 
}
    }
    return nums;
}
