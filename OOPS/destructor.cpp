#include<iostream>
#include<cstring>
using namespace std;



class Hero{

    public:
    int health;
    char grade;
    char* name;

    Hero(){
        cout<<"simple constructor called."<<endl;
        name = new char[100];
    }

    //creating copy constructor
    Hero(Hero &temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        this->grade = temp.grade;
        this->health = temp.health;
    }

    Hero(int health,char grade){
        this->health = health;
        this->grade = grade;
    }

    void setName(char *name){
        this->name = name;
    }

    void print(){
        cout<<"Name is: "<<this->name<<" , ";
        cout<<"Health is: "<<this->health<<" , ";
        cout<<"Grade is: "<<this->grade<<endl;
        cout<<endl;
    }

    
    //by default destructor is already created, but we will created it manually...
    // destructor does not need any parameters, it is just there to free up space by deleting  the object at the end of it's life cycle
   

   //destructor

    ~Hero(){
        cout<<"Destructor called."<<endl;
    }



};

int main(){

    Hero a;

    Hero *b = new Hero(); //created dynamically
    delete b; //for dynamically created objects we need to call destructor manually



    return 0;
}