#include<iostream>
#include<limits.h>
// #include<algorithm>
#include<map>


using namespace std;


int main(){
    int arr[] = {8, 7, 1, 6, 5, 9};
    int size = 6;

    map<int,int>counts;

    for( int i = 0 ; i < size ; i++){
        counts[arr[i]]++;
    }

    for( auto i : counts){
        cout<<i.first <<"--> "<< i.second<<endl;
    }
    return 0;
}
