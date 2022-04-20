#include<bits/stdc++.h>
 
using namespace std ; 

vector<vector<int>> triplet(vector<int> arr,int target){
    int n = arr.size() ;
    vector<vector<int>> res ;
    sort(arr.begin(),arr.end());

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
 
 vector<int> arr ={2,4,7,9,4,3,6,8,1,0} ;
 int target = 7 ;
 
 vector<vector<int>> ans ;
 ans = triplet(arr,target);

 for(auto x : ans){
     cout<<"{ " ;
     for(auto y : x){
         cout<<y<<"," ;
     }
     cout<<"}"<<endl ;
 }

 
return 0  ;
}