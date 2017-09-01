#include<iostream>
#include<cmath>
using namespace std;
main () {
float a,b,c,d;
cout<<"P "; 
cin >> a;
cout<<"R ";
cin>> b;
cout<<"t ";
cin>> c;
d=a*pow((1+b/100),c) -a;
cout<<"compound intrest "<<d;
}
