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

    



};

int main(){

    char name[6] = "Kunal";

    Hero h1(100,'S');  
    h1.setName(name);
    h1.print();

    //Performing shalow copy

    Hero h2(h1);
    h2.print();

    h2.name[0]='J';

    h1.print();  //here we change the firsdt letter of h2 but h1 also got modified because it also coppied the address of the "name".

    return 0;


    //now we create a deep copy constructor in the hero class
}