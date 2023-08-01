#include<iostream>
#include<deque>
#include<vector>
using namespace std;
    int sumOfMinMaxOfAllWindowOfSizeK(vector<int> nums, int k) {
        deque<int> dq, dq2;
        for(int i=0;i<k;i++){
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            while(!dq2.empty() && nums[i]<=nums[dq2.back()]){
                dq2.pop_back();
            }
            dq.push_back(i);
            dq2.push_back(i);
        }
        int ans=0;
        ans+=nums[dq.front()]+nums[dq2.front()];
        for(int i=k;i<nums.size();i++){
            if(!dq.empty() && i-dq.front()>=k){
                dq.pop_front();
            }
            if(!dq2.empty() && i-dq2.front()>=k){
                dq2.pop_front();
            }
            while(!dq.empty() && nums[i]>=nums[dq.back()]){
                dq.pop_back();
            }
            while(!dq2.empty() && nums[i]<=nums[dq2.back()]){
                dq2.pop_back();
            }
            dq.push_back(i);
            dq2.push_back(i);
            ans+=nums[dq.front()]+nums[dq2.front()];
        }

        return ans;
    }
int main(){
    vector<int> v{2,5,-1,7,-3,-1,-2};
    int k=4;
    cout<<"Answer is : "<<sumOfMinMaxOfAllWindowOfSizeK(v,k)<<endl;
    return 0;
}