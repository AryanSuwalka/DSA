#include <bits/stdc++.h>
using namespace std;

void smallestSubarrayWithAllElements(vector<int> &arr, vector<int> &ans){
    unordered_set<int>Unique_elements (arr.begin(), arr.end());
    int uniques = Unique_elements.size();

    unordered_map<int,int>freq;
    int left = 0; int formed = 0;
    int minLen = INT_MAX;

    for( int right  = 0; right < arr.size(); right++){
        freq[arr[right]]++;

        if( freq[arr[right]] == 1){
            formed++;
        }

        while(formed == uniques){
            if(right - left + 1 < minLen){
                minLen = right - left +1;
                ans[0] = left;
                ans[1] = right;
            }

            freq[arr[left]]--;
            if(freq[arr[left]] == 0){
                formed--;
            }
            left++;
        }
    }
}

int main(){
    vector<int> arr = {3,3,3,3,3,3,3};
    vector<int>ans(2);
    smallestSubarrayWithAllElements(arr,ans);
    cout<<"The Smallest Subarray with all the Elements : ("<<ans[0]<<", "<<ans[1]<<")";
    return 0;
}