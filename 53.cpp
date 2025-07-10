#include<iostream>
#include<vector>
#include<climits>
using namespace std ; 


/*int maxSubArray(vector<int>& nums) {
    int n =nums.size() ;
    int max_sum = INT_MIN;

    for (int i = 0 ;i <n ; i++){
        for(int j = 0 ; j < n ; j++){
            int sum = 0 ; 
            for (int k = i ; k <=j;k++){
                sum = sum + nums[k] ;


            }
            max_sum = max(max_sum,sum) ;
        }

    }
    return max_sum;
}*/

/*int maxSubArray(vector<int>& nums){
    int n = nums.size(); 
    int max_sum = INT_MIN;

    for (int i = 0 ; i < n ; i++){
        int sum = 0 ; 
        for (int j =i ; j<n ; j++){
            sum = sum +nums[j]; 
            max_sum = max(max_sum,sum) ;
        }

    }
    return max_sum;
}
*/

int maxSubArray(vector<int>&nums){
    int n = nums.size();
    int max_sum = INT_MIN;  
    int current_sum = 0 ;


    for (int i = 0 ; i <n ; i++){
        current_sum= current_sum+nums[i];
        max_sum = max(max_sum,current_sum) ;

        if(current_sum<0){
            current_sum = 0 ;
        }
        
    }
    return max_sum;
}




int main (){

    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4} ;
    cout << maxSubArray(nums) << endl ;
    return 0 ;

}