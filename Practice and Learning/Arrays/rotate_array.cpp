#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>

using namespace std;

 void rotateArray( int arr[], int size, int k ){
    reverse(arr, arr + k);
    reverse(arr + k , arr + size);
    reverse(arr, arr + size);
 }

int main(){
    int size;
    cin>>size;

    int arr[size];
    for( int i = 0; i < size ; i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;

    rotateArray(arr,size, k);
    cout<<"Printing result"<<endl;
    for( int i = 0; i < size ; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}