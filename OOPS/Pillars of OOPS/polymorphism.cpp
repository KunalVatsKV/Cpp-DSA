#include<iostream>
using namespace std;

//existing in many forms.

//notes - https://bit.ly/3tMl5mZ

class A {

    public:
    void sayHello() {
        cout << "Hello Kunal" << endl;
    }
    
    int sayHello(char name) {
        cout << "Hello Kunal" << endl;
        return 1;
    }

    void sayHello(string name) {
        cout << "Hello " << name  << endl;
    }

};

class B {
    public:
    int a;
    int b;

    public: 
    int add() {
        return a+b;
    }

    void operator+ (B &obj) {
        // int value1 = this -> a;
        // int value2 = obj.a;
        // cout << "output " << value2 - value1 << endl; 
        
       cout << "Hello Babbar" << endl;
    }

    void operator() () {
        cout << "main Bracket hu " << this->a << endl;
    }

};

class Animal {
    public:
    void speak() {
        cout << "Speaking "<< endl;
    }
};

class Dog: public Animal {

    public:
    void speak() {
        cout << "Barking " << endl;
    }


};



int main() {

    Dog obj;
    obj.speak();



    // B obj1, obj2;

    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;
    // obj1();





    // A obj;
    // obj.sayHello();
    


    return 0;
}