// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<limits.h>
#include<map>
#include<algorithm>

using namespace std;

// brute force 
void findRanks(vector<int>& arr){
    cout<<"\nprinting the ranks "<<endl;
    for(int i = 0 ; i < arr.size() ; i++){
        int count = 1;
        for( int j=0 ;j < arr.size() ; j++){
            if(arr[i] > arr[j]){
                count++;
            }
        }
        cout<<count<<"  ";
    }
}

void findRanks2(vector<int>& arr){
    
    map<int, int>mp;
    vector<int>brr;

    for(int i = 0 ; i < arr.size() ; i++){
        brr.push_back(arr[i]);
    }

    sort(brr.begin(), brr.end());
    cout<<"\nsorting array "<<endl;
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<brr[i]<<"  ";
    }
    int temp =1;

    for(int i = 0 ; i < brr.size() ; i++){
        if(mp[brr[i]] == 0){
            mp[brr[i] ] = temp;
            temp++;
        }
    }
    cout<<"\nprinting the ranks "<<endl;
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<mp[arr[i]]<<"  ";
    }
    
}



int main(){
    vector<int>arr = {20, 15, 26, 2, 98, 6};
    for(int i = 0 ; i < arr.size() ; i++){
        cout<<arr[i]<<"  ";
    }

    findRanks2(arr);

    return 0;
}