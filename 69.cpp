#include<iostream>
using namespace std ; 

int sqrt(int n ){
    if (n == 0 || n == 1) return n ;

    int i = 1 ; 
    while (i*i <= n){
        i++ ; 
    }
    return i-1 ;

    

}
int main(){
    int x;
    cin >>x; 
    cout << sqrt(x) << endl ;
    return 0 ;
 
}