# include <iostream>
#include <vector>
using namespace std;
vector<int> pairSum(vector<int> nums , int target ) {
    int n = nums.size();
    vector<int> ans;
    int i = 0 ; int j = n-1 ;
    while(i<j) {
        int sum = nums[i] + nums[j] ;
        if(target > sum ) {
            i++;
        } else if(target < sum) {
            j--;
        } else {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
int main() {
    vector<int> nums = {23 , 45 , 56 , 89, 109 ,789};
    int target = 845 ; 
    vector<int> ans = pairSum(nums, target);
    cout<<ans[0]<<" , "<<ans[1]<<endl;
    return 0;

}