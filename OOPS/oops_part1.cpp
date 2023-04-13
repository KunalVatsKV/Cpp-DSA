#include<iostream>
using namespace std;



class Hero{

    //properties
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;              //this is a getter
    }

    void setHealth(int h){
        health = h;                //this is a setter

    }


};

int main(){

    Hero kunal;   //statis allocation

    Hero *ramesh = new Hero;   //dynamic allocation


    kunal.level = 'S';
    kunal.setHealth(100); //we use a setter as the property is private.

    //cout<<"Health is: "<<kunal.health<<endl;   this cannot work as the health property is private therfore we use a getter
    cout<<"Health is: "<<kunal.getHealth()<<endl;
                                            //we can access the properties of a class using a . 
    cout<<"Level is: "<<kunal.level<<endl;
    

    //there are 3 types of acess modifiers :- 
    //  (i) - public
    //  (ii) - private
    //  (iii) - protetcted
    
    // by default access modifies in a  class is private in cpp
    


    return 0;

}