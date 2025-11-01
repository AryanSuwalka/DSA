#include<iostream>
#include<limits.h>

using namespace std;

int find2NDsmallest( int arr[], int size){
    int maxi = INT_MAX;
    int maxi2 = INT_MAX;
    for( int i = 0 ; i < size ; i++){
        if( arr[i] < maxi ){
            maxi2 = maxi;
            maxi = arr[i];   
        }
        else if ( arr[i] < maxi2 && arr[i] != maxi){
            maxi2 = arr[i];
        }
    }
    return maxi2 == INT_MAX ? -1 : maxi2;
}

int findsmallest( int arr[], int size){
    int maxi = INT_MAX;
    for( int i = 0 ; i < size ; i++){
        if( arr[i] < maxi ){
            maxi = arr[i];
        }
    }
    return maxi;
}

int main(){
    int arr[] = {-1,1};
    int size = 2;
    int smallest = find2NDsmallest(arr,size);

    if(smallest == -1){
        cout<<"no second smallest present"<<endl;
    }else{
        cout<<"the 2nd smallest is the "<<smallest;
    }

    return 0;
}