#include<iostream>
using namespace std;



class Hero{

    public:

    int health;


    Hero(){
        cout<<"Constructor called."<<endl;    //creating this constructor removes the default constructor
    }

    Hero(int health){ // Parameterised constructor

        this->health=health;    //here "this" is a pointer which points to the object

        cout<<"Address of this: "<<this<<endl;
        
    }



};

int main(){

    Hero kunal;   //this calls a constructor  //a defult constructor called kunal.Hero()


    Hero vats(100);
    cout<<"Address of the object 'vats': "<<&vats<<endl;
    cout<<"heath of vats: "<<vats.health<<endl;



    //object creation - constructor is invoked

  

    return 0;

}