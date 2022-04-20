#include<bits/stdc++.h>
 
using namespace std ; 

vector<vector<int>> triplet(vector<int> arr,int target){
    int n = arr.size() ;
    vector<vector<int>> res ;
    for(int i =0 ;i<n-3;i++){
        int j = i+1 ;
        int k = n-1 ;

       

        while (i<k)
        {
            int curr_sum = arr[i] ;
             curr_sum += arr[j] ;
             curr_sum += arr[k] ;

             if(curr_sum == target){
                 res.push_back({arr[i],arr[j],arr[k]});
                 i++;
                 k--;
                 
             }
             else if(curr_sum < target){
                 i++ ;
             }
             else{
                 k-- ;
             }
        }
        
    }
    return res ;
}
 
int main() {
 
 
return 0  ;
}