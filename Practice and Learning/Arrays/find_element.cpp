#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr =  { 1,2,3,4,5,5,6,6,7,8};
    int key = 4;
    int n = arr.size();
    int s = 0; int e = n-1;
    

    while(e >= s){
        int mid  = s + (e - s)/2;
        if( arr[mid] == key ){
            cout<<mid;
            break;
        }else if(arr[mid] > key  ){
            e = mid -1;
        }else{
            s = mid+1;
        }
    }
    return 0;
}