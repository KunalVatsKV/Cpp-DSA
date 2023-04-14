//definition - wrapping data memebers(properties) and functions(methods)
// ----- data hiding

// Advantages - 
//     - more security
//     - if we want we can make class - "Read Only"
//     - code reusability
//     - helps in Unit testing

#include<iostream>
using namespace std;


class Student{

    private:
        string name;
        int age;
        int height;

    public:
        int getAge(){
            return this->age;

        }






};

int main(){

    Student first;

    cout<<"Sab sahi chalra hai"<<endl;


    return 0;


}
    