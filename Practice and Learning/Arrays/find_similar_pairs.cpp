#include<bits/stdc++.h>

using namespace std;

int main(){
    int size = 7;
    int arr[size][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}, {9, 8}, {8, 9}}; 
    cout<<"enter the size of the array u want:  ";
    // int size;
    // cin>>size;

    // int arr[size][2];
    // cout<<"\nEnter the pairs u want to test : "<<endl;  
    // for( int i = 0 ; i < size ; i++){
    //     cin>>arr[i][0]>>arr[i][1];
        
    // }
    // brute force 
    // cout << "The Symmetric Pairs are: " << endl;
    // for( int i = 0; i < size ; i++){
    //     for( int j = i +1  ; j < size ; j++){
    //         if( arr[i][0] == arr[j][1] && arr[i][1] == arr[j][0]){
    //             cout << "(" << arr[i][1] << " " << arr[i][0] << ")" << " ";
    //             break;
    //         }
    //     }
    // }

    unordered_map<int, int>mp;
    cout << "The Symmetric Pairs are: " << endl;

    for( int i = 0 ; i <size ; i++){
        int first  = arr[i][0];
        int second  = arr[i][1];

        if(mp.find(second) != mp.end() && mp[second] == first){
            cout << "(" << first << " " << second << ")" << " ";
        }
        else{
            mp[first] = second;
        }
    }


}