#include<iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include <iomanip>


using namespace std;

int main(){
    vector<float>arr;
    float num;

    cout<<"Enter the Elements of Array and after that press any non numerical key to stop"<<endl;

    while(cin>>num){
        arr.push_back(num);
    }

    float sum = 0;
    for( float i : arr){
        sum+= i;
    }
    
    float avg = sum / arr.size() ;
    cout << fixed << setprecision(2); // show only 2 digits after decimal
    cout<<"Printing result - "<<avg;
    // for( int i = 0; i < size ; i++){
    //     cout<<arr[i]<<"  ";
    // }

    return 0;
}