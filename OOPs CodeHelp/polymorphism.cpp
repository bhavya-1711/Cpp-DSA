#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Love Babbar"<<endl;
    }

    int sayHello(string name, int n){
        cout<<"Hello Love Babbar"<<endl;
        return n;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }
};

class B{
    public:
    int a;
    int b;

    int add(){
        return a+b;
    }

    void operator + (B &obj){
        // int value1 = this-> a;
        // int value2 = obj.a;
        // cout<<"output "<<value2 - value1 << endl;

        cout<< "Hello babbar"<<endl;
    }

    void operator() () {
        cout<<"Mai bracket() hu "<< this->a <<endl;
    }
};

class Animal{

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{

    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){

    Dog d;
    d.speak();





    
    // A obj;
    // obj.sayHello();

    /*
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2; 
    obj1();
    obj2();
    */


    return 0;
}