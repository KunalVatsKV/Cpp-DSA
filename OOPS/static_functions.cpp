#include<iostream>
#include<cstring>
using namespace std;



class Hero{

    public:
    int health;
   

    static int time;

    //static function
    //no "this" keyword
    //can only access static memebers

    static int random(){
        return time;
    }

    Hero(){
        cout<<"simple constructor called."<<endl;
    }

 

    
    //by default destructor is already created, but we will created it manually...
    // destructor does not need any parameters, it is just there to free up space by deleting  the object at the end of it's life cycle
   

   //destructor

    ~Hero(){
        cout<<"Destructor called."<<endl;
    }



};

//static member is initialised outside class
//it belongs to the class and should not be accessed using a object

int Hero::time =5;

int main(){


    cout<<Hero::time<<endl;

    cout<<Hero::random()<<endl;

    Hero a;




    return 0;
}