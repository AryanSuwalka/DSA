// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int maxProduct1(vector<int>& arr){
    int maxprod = arr[0];
    int minprod = arr[0];
    int result = arr[0];

    for( int i= 1; i<arr.size() ; i++){
        if( arr[i] < 0){
            int temp = maxprod;
            maxprod = minprod;
            minprod = temp;
        }

        maxprod = max( arr[i], arr[i]*maxprod);
        minprod = min( arr[i], arr[i]*minprod);

        result = max(result, maxprod);

    }
    return result;
}

int maxProduct2(vector<int>& arr){
    int pre = 1; int suf = 1;
    int ans = INT_MIN;
    int n =arr.size();

     for( int i= 0; i< n ; i++){
        if( pre == 0 ) pre =1;
        if( suf == 0 ) suf = 1;

        pre= pre * arr[i];
        suf = suf * arr[n-i-1];

        ans= max(ans , max(pre,suf));
     }
     return ans;
}

int main(){
    vector<int>arr = { 1,2,-3,0,-4,-5};
    int ans = maxProduct2(arr);
    cout<<"the max product of a subarray is : "<<ans;
    return 0;
}