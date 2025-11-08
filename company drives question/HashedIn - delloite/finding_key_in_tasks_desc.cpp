// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void findingthetask(vector<string> &tasks, string &key ){
    bool found = false;

    for( int  i = tasks.size()-1; i >= 0 ; i--){
        if(tasks[i].find(key) != string::npos){
            cout<<" the most recent task containing the key is : " <<tasks[i] << endl;
            found = true;
            break;
        }
    }

    if( !found) {
        cout<< " Not found";
    }
}

bool ContainingTheString( string current , string &key  ){
    int n = current.size();
    int m = key.size();

    for( int i = 0 ; i < n-m ; i++){
        int  j = 0;
        while( i < m && current[i+j] == key[j]){
            j++;
        }
        if(j ==m){
            return true;
        }
    }
    return false;
}

void findingthetask_meth2(vector<string> &tasks, string &key ){
    bool found = false;

    for( int  i = tasks.size()-1; i >= 0 ; i--){
        if(ContainingTheString(tasks[i],key)){
            cout<<" the most recent task containing the key is : " <<tasks[i] << endl;
            found = true;
            break;
        }
    }

    if( !found) {
        cout<< " Not found";
    }
}

int main(){
    vector<string> tasks = {
        "Initialize the system",
        "Load configuration",
        "Run diagnostics",
        "Start main process",
        "Finalize results"
    };

    string key = "Start";

    // findingthetask(tasks,key);
    findingthetask_meth2(tasks,key);

    return 0;
}