#include<iostream>
#include<vector>

using namespace std ; 


/*vector<int> twoSum (vector<int>& numbers , int target ){
    int n = numbers.size(); 

    for (int i = 1 ; i <=n ; i++){
        int sum = 0 ; 
        for (int j = 2 ; j  <= n ; j++){
            sum = numbers[i]+numbers[j]
            if(sum == target){
                return {i , j }
            }

        }
    }
    return {}


}*/

vector<int> twoSum (vector<int>& numbers,int target){
    int rigth = numbers.size(); 
    int left = 0 ; 

    while(left<rigth){
        int sum = numbers[left-1]+numbers[rigth-1]; 

        if(sum==target){
            return {left ,rigth}; 

        }else if(sum<target){
            left++ ; 
        }else{
            rigth -- ; 
        }



}
return {}; 
}







int main (){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;




}