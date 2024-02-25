#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int> res;
    for(int i = 0 ; i < str.size() ; i++){
        int n = str[i]-'0';
        if(n % 2 == 1 ) res.push_back(n*n);
    }
    for(int i = 0 ; i < res.size() ; i++){
        cout<<res[i];
    }
}