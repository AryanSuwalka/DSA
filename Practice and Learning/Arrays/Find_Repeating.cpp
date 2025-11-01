

#include<bits/stdc++.h>
#include<set>

using namespace std;

void findRepeating( int arr[], int size, unordered_map<int,int>&mp){
    for( int i =0 ; i < size ; i++){
        mp[arr[i]]++;
    }
    cout<<"Printing the output"<<endl;
    for( auto it : mp){
        if(it.second > 1){
            cout<<it.first<<"  ";
        }
    }
}

void findRepeatingWithoutMap( int arr[], int size){
    int repeats[size];
    for( int i =0 ; i < size ; i++){
        repeats[arr[i]]++;
    }

    cout<<"Printing the output"<<endl;
    for( int i = 0; i < size ; i++){
        if( repeats[i] > 1){
            cout<<i<<"  ";
        }
    }
}



int main(){
    int size;
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout<<"Printing the input"<<endl;
    for( auto i : arr){
        cout<<i<<"  ";
    }
    cout<<endl;
    unordered_map<int,int>mp;
    findRepeating(arr,size, mp);
    
    // cout<<"Printing the output"<<endl;
    // for( int i = 0; i < size ;i++){
    //     cout<<arr[i]<<"  ";
    // }
    return 0;
}