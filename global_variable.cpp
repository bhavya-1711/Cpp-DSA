#include<iostream>
using namespace std;

int score = 15;  // global variable

void a(int& i){

    cout<< score << " in a"<<endl;
    score++;

    char ch = 'a'; // local variable of a()
    cout<< i << endl;
}

void b(int & i){

    cout<< score << " in b"<<endl;   
    cout<< i << endl;
}

int main(){
    cout<< score << " in main"<< endl;
    int i = 5;
    a(i);
    b(i);


    return 0;
}