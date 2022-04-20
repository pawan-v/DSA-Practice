#include<bits/stdc++.h>
using namespace std ; 


// https://leetcode.com/problems/two-sum/

pair<int,int> pairSum(vector<int> arr,int target){
    int n = arr.size();
    unordered_set<int> s ;
    pair<int,int> res ;

    for(int i =0 ;i<n;i++){
        int x = target - arr[i] ;
        if(s.find(x) != s.end()){
            res.first = arr[i];
            res.second = x ;
            break;
        }
        else{
            s.insert(arr[i]) ;
        }
    }
return res ;

}

 
int main() {
 vector<int> a = {5,4,3,2,1};
 int target = 7 ;
  
 pair<int,int> ans = pairSum(a,target) ;
 cout<<ans.first<<" , "<<ans.second<<endl ;

 
return 0  ;
}