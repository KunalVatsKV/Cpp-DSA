#include<iostream>
using namespace std;

int getMAX(int comp[],int size){
    int max=INT_MIN;
    
    for(int i=0;i<size;){
    if(max>comp[i]){
            i=i+1;
            }
          else{
            max=comp[i];
            i=i+1;
          }
      }return max;
}
int getMIN(int comp[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;){
    if(min>comp[i]){
            min=comp[i];
            i=i+1;}
          else{
            i=i+1;
          }
      }return min;
}



int main(){
    int size;
    cout<<"Enter the number of values you want to compare:"<<endl;
    cin>>size;

    int comp[100];
    cout<<"Enter the values:"<<endl;
    
    for(int i=0;i<size;i++){
        cin>>comp[i];
    }
         
   int x=getMAX(comp,size);
   int y=getMIN(comp,size);
   cout<<"Max element is: "<<x<<endl;
   cout<<"Min element is: "<<y<<endl;

    return 0;
}
