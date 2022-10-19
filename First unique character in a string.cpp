#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstUniqueChar(string s){
    unordered_map<char,int>count;
    for(int i=0;i<s.size();i++){
        count[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(count[s[i]]==1){
            return i;
        }
    }
    return -1;
}

int main(){
    string s;
    cin>>s;
    cout<< firstUniqueChar(s)<<endl;
    return 0;
    
}
