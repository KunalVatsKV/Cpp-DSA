//definition - inherit the properties of one class to another
// ----- class which has the origin properties is called - parent class/super class
// ----- class which inherits the properties is called sub-class/child class

//  Base/parent:    child/class:   result:
//  class

//  public          public         public
//  public          private        private
//  public          protetcted     protected

//  protected       public         protetcted
//  protected       protected      protected
//  protected       private        private

//  private         public         not accessible
//  private         protected      not accessible  //this means that private properties of a parent class cannot be accessed
//  private         private        not accessible

//types of inheritance-

// 1 - single inheritance = one class inherits the properties of only one parent class
// 2 - multilevel inheritance = b inherits a and c inherits b. 
// 3 - multiple inheritance = one class inherits the properties of more the one parent class, eg - c inherits both a and bS
// 4 - Hierarchical inheritance = one class is the parent class for multiple child classes.


#include<iostream>
using namespace std;


class Human{

    public:
        int weight;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;

        }
        void setWeight(int w){
            this->weight=w;
        }

};

class Male: public Human{  //inheritance

    //we cannot access private properties in a public way

    public:
    string color;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }

};

int main(){

    Male object1;

    cout<<object1.weight<<endl;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;

    object1.setWeight(100);
    cout<<object1.weight<<endl;

    


    return 0;


}
    