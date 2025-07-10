#include<iostream>
#include<vector>

using namespace std ; 


/*vector<int>removeDuplicates(vector<int> & arr){
    vector<int> res ; // initialise a vector with name res 


    for (int i = 0  ; i<arr.size(); i++){
        if(res.empty()||res.back()!=arr[i]){
            res.push_back(arr[i]);
        }
    }

    return res ; 

}*/



// what worg here is it takes a full extra array for that 
// so time complexity is o(n)
// and space complexity is o(n)

// two pointer approach 

// we will create two pointer one will move fast and one will move slow 
//one will track the position of the last unique element 
//one will scan the array

int removeDuplicates(vector<int>& arr) {
    if(arr.size() == 0) {
        return 0; 
    }
    int i = 0; 
    for(int j = 1; j < arr.size(); j++) {
        if(arr[j] != arr[i]) {
            i++; 
            arr[i] = arr[j];
        }
    }
    return i+1; 
}



int main (){
     vector<int> arr = {1, 1, 2, 2, 3, 3, 3, 4};
    int result = removeDuplicates(arr);

    cout << "Unique elements: ";
    for (int i = 0 ; i <result; i++){
        cout <<arr[i]<<" ";  // Collect elements not equal to val
    }
    
    cout << endl;

    return 0;

}




