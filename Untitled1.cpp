#include<iostream>
#include<conio.h>
class funoverload
{
     public:
int volume(int a) // Volume of Cube
   {
      return a*a*a;
   }
double volume(double r,double h) // Volume of Cone
   {
     return (0.33*3.14*r*r*h);
   }
 double volume(double l,int h,double b) // Volume of Rectangle
 {
     return (l*b*h);
void main()

   cirscr();
   funoverload f1;
   cout<<"\nVolume of the Cube :::\t"<<f1.volume(10);
   cout<<"\n\nVolume of the Cone :::\t"<<f1.volume(2.0,3.0);
    cout<<"\n\nVolume of the rectangle :\t"<<f1.volume(2.0,4,3);
   getch();

