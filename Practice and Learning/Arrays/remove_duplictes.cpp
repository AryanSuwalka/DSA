
#include<bits/stdc++.h>
#include<set>

using namespace std;
int removedups(int arr[] , int size){
    int j = 0;
    for( int i = 1 ; i < size ; i++){
        if( arr[i] != arr[i-1] ){
            j++;
            arr[j] = arr[i];
        }
    }
    return j+1;
}

int removeDupsfromUnsorted(int arr[],int size){
    set<int>st;
    for( int i = 0; i <size ; i++){
        st.insert(arr[i]);
    }

    fill(arr, arr+size, 0);

    int index = 0;
    for( int i : st){
        arr[index++] = i;
    }

    return index +1;
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
    int newsize = removeDupsfromUnsorted(arr,size);
    
    cout<<"Printing the output"<<endl;
    for( int i = 0; i < newsize ;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}