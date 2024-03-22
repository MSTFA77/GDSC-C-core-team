#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
class shape{
public:
virtual void  calcarea(){
cout<<"this is the base area ..\n";
}
};
class rectangle:public shape{
public:
void calcarea() override{
   int l,w;
   cout<<"Enter your Length & Width \n";
   cin>>l>>w;
cout<<"the area of the rectangle is : "<<l*w<<"\n";
}
};
class triangle:public shape{
public:
void calcarea()override{
    int h,b;
    cout<<"Enter your high & base \n";
    cin>>h>>b;
cout<<"the area of the triangle is : "<<(h*b)/2<<"\n";
}
};
class circle:public shape{
public:
void calcarea()override{
const float pi=3.14;
int r;
cout<<"enter your radius \n";
cin>>r;
cout<<"the area of the circle is : "<<pow(r,2)*pi<<"\n";
}
};
void area(shape* shp) {
    shp->calcarea();
}
void display(){
while (true){
rectangle rec;
triangle tri;
circle cir;

short x;
bool t;
    cout<<"select your shape : \n";
    cout<<"1- Rectangle. \n"<<"2- Triangle. \n"<<"3- Circle. \n";
    cin>>x;
    system("cls");
switch(x){
case 1:
  area(&rec);
    break;
case 2:
  area(&tri);
    break;
case 3:
  area(&cir);
    break;
default:
    cout<<"Envalid Value : \n";
}
cout<<"Do you need Agian Y=1 & N=0 :\n";
cin>>t;
system("cls");
if(t==0){break;}
else{continue;}}}
int main() {
shape* s[2];
s[0]= new rectangle;
s[1]= new triangle;
s[2]= new circle;
for (int i = 0; i < 3; ++i) {
    cout << "Shape " << i + 1 << " area: ";
    s[i]->calcarea();
    cout << endl;
}

return 0;
}
