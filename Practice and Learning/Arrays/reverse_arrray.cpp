#include<iostream>
#include<limits.h>
#include<algorithm>

using namespace std;

void reversing( int arr[], int size){
    int s= 0;
    int e = size-1;

    while(s <= e){
        swap(arr[s],arr[e]);
        s++; e--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    reversing(arr,size);

    for( int i : arr){
        cout<<i<<" ";
    }
    return 0;
}
