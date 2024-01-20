#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(string &s, int x, int y){
    while(x<=y){
        swap(s[x++],s[y--]);
    }
}
int main(){
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);

    int x =0,y=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            y=i-1;
            reverse(s,x,y);
            x=y+2;
        }
    }

    reverse(s,x,s.length()-1);
    cout<<s<<endl;;
    
    return 0;
}