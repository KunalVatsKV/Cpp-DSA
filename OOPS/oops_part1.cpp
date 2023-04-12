#include<iostream>
using namespace std;



class Hero{

    //properties
    public:
    int health;
    char level;


};

int main(){

    Hero kunal;
    kunal.health = 100;
    kunal.level = 'S';


    cout<<"Health is: "<<kunal.health<<endl;   
                                            //we can access the properties of a class using a . 
    cout<<"Level is: "<<kunal.level<<endl;
    

    //there are 3 types of acess modifiers :- 
    //  (i) - public
    //  (ii) - private
    //  (iii) - protetcted
    
    // by default access modifies in a  class is private in cpp
    


    return 0;

}