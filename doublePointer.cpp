#include<iostream>
using namespace std;

void update(int **p2){
    // p2 = p2 + 1;
    // kuch change hoga ?? --> NO

    // *p2 = *p2 + 1;
    //kuch change hoga ?? --> YES

    **p2 = **p2 + 1;
    // kuch change hoga ?? --> YES
}

int main(){

    /*
    int i =5;
    int *p = &i;
    int** p2 = &p;

    cout<<"Sab sahi chalra hai "<<endl<<endl;;

    // printing value of i
    cout<< i<< endl;
    cout<< *p << endl;
    cout<< **p2 <<endl;

    // printing address of i
    cout<< &i <<endl;
    cout<< p <<endl;
    cout<< *p2 <<endl;

    // printing address of p
    cout<< &p << endl;
    cout<< p2 << endl;


    cout<< endl;
    cout<<"before "<< i << endl;
    cout<<"before "<< p << endl;
    cout<<"before "<< p2 << endl<<endl;
    
    update(p2);

    cout<<"after "<< i <<endl;
    cout<<"after "<< p <<endl;
    cout<<"after "<< p2 <<endl<<endl;
    */

    

    return 0;
}