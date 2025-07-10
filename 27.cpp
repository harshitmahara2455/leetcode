#include<iostream>
#include<vector>
using namespace std ;




//remove duplicate  brute force approach 

/*vector<int>removeElement(vector<int> &nums,int val ){

    vector<int>res ; 
    for (int i = 0 ; i<nums.size(); i++){
        if(nums[i]!=val){
            res.push_back(nums[i]); 
            
        }
        
    }
    return res ; 
}*/

//optimised two pointer approach


vector<int>removeElement(vector<int>&nums ,int val ){
    int k = 0 ; 
    for (int i = 0 ; i <nums.size();i++){
        if(nums[i]!=val){
            nums[k]=nums[i];
            k++ ; 
        }
    }
    return k ; 

  

}





int main (){

}