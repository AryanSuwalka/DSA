#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>nums = {1,-1,4};
    int n  = nums.size();
    int E = 0;

    int left = 0;
    int right = 0;

    for( int i = 1 ;  i < n ; i++ ){
        right += nums[i];
    }

    // cout<<"left : " <<left<<endl;
    // cout<<"right : " <<right<<endl;

    while ( left != right ){
        cout<<"left : " <<left<<"    ; " ;
        cout<<"right : " <<right<<endl;

        if( E >= 0){
            left = left + nums[E];
        }
        
        right = right - nums[E+1];
        E++;
    }

    cout<<"the equillibrium index is : "<< E;
    
    return 0;
}