#include<iostream>
using namespace std;

int main(){
    
    int amount, rs100,rs50,rs20,rs1,x=1;
    cout<<"Enter the amount"<<endl;
    cin>>amount;

    switch(x){
        case 1: 
            rs100 = amount/100;
            amount = amount%100;
            cout<<"Number of 100 ruppe notes is "<<rs100<<endl;
        case 2:
            rs50 = amount/50;
            amount = amount%50;
            cout<<"Number of 50 ruppe notes is "<<rs50<<endl;     
        case 3:
            rs20 = amount/20;
            amount = amount%20;
            cout<<"Number of 20 ruppe notes is "<<rs20<<endl;     
        case 4:
            rs1 = amount/1;
            amount = amount%1;
            cout<<"Number of 1 ruppe notes is "<<rs1<<endl;
        exit(1);

    }
    return 0;
}