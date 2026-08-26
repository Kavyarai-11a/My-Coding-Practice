#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums)
{
    int ans=0;
    for(int val:nums)
    {
        ans^=val;
    }
    return ans;
}
int main()
{
    vector<int> nums={1,1,7,2,2,5,5};
    int ans=singleNumber(nums);
    cout<<ans;
    return 0;
}