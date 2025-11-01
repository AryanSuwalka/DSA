#include<iostream>
#include<limits.h>
#include<algorithm>

using namespace std;

void selectionsort ( int arr[], int size){
    
    // first loop for keeping track of how many we already sorted or FIRST 
    for(int i = 0 ; i < size ; i++){
        int mini = i;
        for( int j = i+1; j <size ; j++){
            if( arr[j] < arr[mini]){
                mini =  j;
            }
        }
        swap(arr[mini],arr[i]);
    }
}

void insertionsort ( int arr[], int size){
    
    // first loop for keeping track of how many we already sorted or FIRST 
    for(int i = 0 ; i < size ; i++){
        
       int j = i;
       while( j > 0 && arr[j-1] > arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
       } 
    }
}


void bubblesort ( int arr[], int size){
    
    
    for(int i = size-1 ; i >= 0 ; i--){
        int didSwap = 0;
        for( int j = 0; j < i ; j++){
            if( arr[j] > arr[j+1]){

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                didSwap= 1;
            }
        }
        if(didSwap == 0){
            break;
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
    insertionsort(arr,size);
    
    cout<<"Printing the output"<<endl;
    for( auto i : arr){
        cout<<i<<"  ";
    }
    return 0;
}