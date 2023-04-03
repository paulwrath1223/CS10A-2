#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int perimeter=0,length=0,width=0,base=0,height=0,radius=0;
  double area1=0,area2=0, pi=3.14159;
  cout<<"To calculate perimeter of a rectangle, enter length and width."<<endl;
  cin>>length>>width;

  perimeter=2*(length+width);
  cout<<"The perimeter of a rectangle is "<<perimeter<<endl;

  cout<<"To calculate the area of a circle, enter radius."<<endl;
  cin>>radius;
  area1=pi * pow(radius,2);
  cout<<"The area of a circle is "<<area1<<endl;

  cout<<"To calculate area of a triangle, enter base and height."<<endl;
  cin>>base>>height;
  area2=base*height * 0.5;
  cout<<"The area of a triangle is "<<area2<<endl;


 return 0;
}
