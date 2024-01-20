#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
    }
}

bool checkPalindrome(char a[], int n){
    int s =0;
    int e = n-1;
    while(s<e){
        if(toLowerCase(a[s]) !=toLowerCase(a[e])){
            return 0;
        }
        else{
            s++,e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s =0;
    int e = n-1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i]!=0;i++){
        count++;
    }
    return count;
}

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    // create an array of count of characters
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number =0;
        
        //lower case
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }
        else{ // Upper case
            number = ch - 'A';
        }
        arr[number]++;
    }

    // find maximum occuring character
    int maxi =-1, ans =0;
    for (int i = 0; i < 26; i++)
    {
        if(maxi< arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    return 'a' + ans;
        
}

int main(){
    /*
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    int len = getLength(name);
    cout<<"Length: "<<len<<endl;

    reverse(name,len);
    cout<<"your name is "<<endl;
    cout<<name;

    cout<<"Palindrome or Not: " <<checkPalindrome(name,len)<<endl;

    cout<<"CHARACTER is "<<toLowerCase('b')<<endl;
    cout<<"CHARACTER is "<<toLowerCase('C')<<endl;

    */

    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    
    cout<<"maxium occuring character is -> "<<getMaxOccCharacter(s)<<endl;

    return 0;
}