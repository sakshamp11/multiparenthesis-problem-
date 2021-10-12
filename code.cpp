#include <bits/stdc++.h>

using namespace std;

unordered_map<char, int>bracrel={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
int checker(string &s){
    stack<char>stac;
    
    for(char bracket:s){
        if(bracrel[bracket]<0){
            stac.push(bracket);
        }
        else{
            if(bracrel[bracket]+ bracrel[stac.top()]==0)
            {
                stac.top();
                stac.pop();
            }
            else {
                return -1;
            }
            
        }
    }
    if(stac.empty()){
        return 1;
        
    }
    else {
    return -1;
    }
    
    
    
    
}




int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int xio=checker(s);
        (xio==1)?cout<<"YES":cout<<"NO";
        cout<<"\n";
        
    }
   
   
}

