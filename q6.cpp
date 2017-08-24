#include<iostream>
using namespace std;
main ( ) {
float radius,area,perimeter, diameter;
cout << "radius= ";
cin >> radius ;
diameter=2*radius;
area=3.14*radius*radius ;
perimeter=2*3.14*radius ;
cout<<"2*radius= "<<diameter;
cout<<", ";
cout <<"3.14*radius*radius= "<< area;
cout<<", ";
cout << "\n 2*3.14*radius= "<< perimeter;
}
