#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
//*************ARRAY******************
  int basic[3]={1,2,3};
  array<int,4> a={1,2,3,4};
  
  int size=a.size();

  for(int i=0;i<size;i++){
     cout<<a[i]<<endl;
  }
   
   cout<<"Element at 2nd index = "<<a.at(2)<<endl;
   cout<<"Empty or not = "<<a.empty()<<endl;
   cout<<"print front element = "<<a.front()<<endl;
   cout<<"print last element = "<<a.back()<<endl;


//****************VECTORS**************
   
   vector<int> v;
   
   vector<int> ayo(5,1); //  5 is the size of vector , 1 here will initialise all the elements with 1

   vector<int> last(ayo); //copies all the elements of vector ayo to vector named last
   
   
   cout<<"size = "<<v.size();
   cout<<"capacity = "<<v.capacity();
   
   v.push_back(1); //adds 1 as an element from back
   v.front();  //gives the front value of vector
   v.back(); //gives the back value of vector
   v.pop_back(); //removes the last element
   v.clear(); //removes all the elements



//****************DEQUE*****************
   
   deque<int> deez;
   
   deez.push_back(1); //adds element 1 from the back
   deez.push_front(2); //adds element 2 from the front
    
   deez.pop_back();  //removes the last element
   deez.pop_front(); //removes the first element
   
   deez.erase(deez.begin(),deez.begin()+1);  //removes the element in the given range, in this game deez.begin is the element at index 0 and deez.begin()+1 is the element at 1st index, hence 1 element will be erased
   


//****************LIST*******************
//direct access not possible

   list<int> l;

   l.push_back(1);
   l.push_front(2);

   l.erase(l.begin());  //removes the 1st element i.e 2

   //rest all the functions same as vector and deque



//*****************STACK****************

   /*  Last IN First OUT  */ 

   stack<string> s;

   s.push("hehe");
   s.push("hihi");   //pushing elements(adding) in the stack (sequence is there)
   s.push("siuu");
    
   s.pop(); //here the last in element will be removed...i.e siuu

   s.size(); //gives the size of stack

   s.top(); //gives the outermost or top element i.e hihi



//*****************QUEUE******************

   /*  First IN First OUT  */
   
   queue<string> q;
   
   q.push("hehe");
   q.push("hihi");   //pushing elements(adding) in the queue (sequence is there)
   q.push("siuu");

   q.pop(); //here the last in element will be removed...i.e hehe

   q.size(); //gives the size of queue


//*****************PRIORITY QUEUE**************

// queue with the 1st element being the highest

   //max heap
   priority_queue<int,vector<int>> max;

   //min heap
   priority_queue<int,vector<int>,greater<int>> min;

   max.push(1); 
   max.push(3);    //pushing elements in the max heap
   max.push(2);
   
   int n=max.size();
   for(int i=0;i<n;i++){
      cout<<max.top()<<" ";  // since it is a max heap it will print the value in the order - 3  2 1
      max.pop();
   }
   
   //similarly 
   for(int i=0;i<n;i++){
      cout<<min.top()<<" "; // since it is a min heap it will print the value in the order - 1  2  3
      min.pop();
   }

//*********************SET*******************

   //ALl unique elements,elements are returned in sorted order,no modification of elements
   //2 types of sets, ordered and unordered, in unordered set elements do not come out in a sorted way these are randomised
  
  set<int> set1;

  set1.insert(5);
  set1.insert(8);
  set1.insert(8);
  set1.insert(9);
  // only elements will be 5,8,9 the duplicate 8 will not be inserted as all the elements are unique

  set1.erase(set1.begin()); //removes the first element

  //now creating an iterater 

  set<int>::iterator it=set1.begin(); //it is the name of iterator here value of it is 8 i.e 0th index element (5 is already removed)
  it++;  //not it is at 1st index i.e element 9


  set1.count(9); //output is 1
  set <int>::iterator itr = set1.find(5);// value of itr will be 0 (ignoring the removed values)
  
  for(auto it=itr;it!=set1.end();it++){
   cout<<*it<<endl;   // printing all the value after 5
  }


//******************MAP************************

// data is stored in the form of key and value (just like dictionary is python)
//keys are unique, one key will only point to one value , but one value can point to different keys

   map<int,string> map1;
   map1[1]="kunal";
   map1[2]="vats";
   map1[3]="op";
   
   //or

   map1.insert({4,"siuuu"}); //another way to input

   for(auto i:map1){
      cout<<i.first<<" "<<i.second<<endl;   // printing the values out put will be 1 kunal 2 vats 3 op 4 siuuu
   }                                        // here first in i.first is the key and second is the value


   cout<<"finding 3:"<<map1.count(3)<<endl; //output will be 1 as 3 exists, if not present the gives 0

   map1.erase(1); //removes 1 kunal



//*************ALGORITHMS***********************

   vector<int> vec1;
   
   vec1.push_back(1);
   vec1.push_back(3);
   vec1.push_back(6);
   vec1.push_back(9);


   //for binary search

   cout<<binary_search(vec1.begin(),vec1.end(),5); //output will be 0, i.e FALSE because 5 is not in the vector

   //iterator or lower bound

   cout<<lower_bound(vec1.begin(),vec1.end(),6)-vec1.begin(); //output will be 2
   
   //upper bound

   cout<<upper_bound(vec1.begin(),vec1.end(),6)-vec1.begin(); //output will be 3
   
   //reverse a string
   
   string ab="abcde";

   reverse(ab.begin(),ab.end());

   //rotate
   
   rotate(vec1.begin(),vec1.begin()+1,vec1.end()); //rotates the first 2 values output will be 3 6 9 1 
      //    start,upto which element you want to rotate(that element is not included),end
   



}







