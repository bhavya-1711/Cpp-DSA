#include<iostream>
#include<cstring>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char *name;
    char level;
    static int timeToComplete;

    Hero(){
        cout<<"Simple Constructor called "<<endl;
        name = new char[100];
    }

    // paramterised constructor
    Hero(int health){
        this->health = health;
    }

    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }

    //copy constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy contructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"[ "<<"name: "<< this->name <<" ,";
        cout<<"health: "<<this->health<<" ,";
        cout<<"level: "<< this->level <<" ]";
        cout<<endl<<endl;
    }

    int getHealth(){
        return health;
    }  

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void setName(char name[]){
        strcpy(this->name, name);
    }

    static int random(){
        return timeToComplete;
    }

    //Destructor
    ~Hero(){
        cout<< "Destructor called"<<endl;
    }

};

int Hero:: timeToComplete = 5;

int main(){

    // cout<<Hero::timeToComplete<< endl;
    cout<<Hero::random() << endl;

    // Hero a;
    // cout<< a.timeToComplete <<endl;








/*
    //static
    Hero a;

    //Dynamic
    Hero *b = new Hero();
    //manually destructor called
    delete b;

*/


/*
    Hero hero1;

    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);

    // hero1.print();

    //use default copy contructor
    Hero hero2(hero1);
    // hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();

    hero1 = hero2;

    hero1.print();
    hero2.print();

*/




   /* 
    // object created statically
    Hero ramesh(10);
    // cout<< "Address of ramesh "<<&ramesh << endl;
    ramesh.print();

    //dynamically
    Hero *h = new Hero(20);
    h->print();

    Hero temp(10,'B');
    temp.print();
 
   */









/*
    // static allocation
    Hero a;
    a.setLevel('B');
    a.setHealth(80);
    cout<< "level is "<<a.level<<endl;
    cout<< "health is "<<a.getHealth()<<endl;

    //dynamically allocation
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<< "level is "<<(*b).level<<endl;
    cout<< "health is "<<(*b).getHealth()<<endl;

    cout<< "level is "<< b->level <<endl;
    cout<< "health is "<< b->getHealth() <<endl;

*/

    // //creation of object
    // Hero ramesh;
    // cout<<"size: "<<sizeof(ramesh)<<endl;

    // cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
    // //use setter
    // ramesh.setHealth(70);
    // ramesh.level = 'A';

    // cout<<"health is : "<<ramesh.getHealth() <<endl;
    // cout<<"level is : "<<ramesh.level <<endl;



    return 0;
}