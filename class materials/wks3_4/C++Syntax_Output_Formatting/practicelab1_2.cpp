#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  cout<<fixed<<showpoint;
  double number=1349.9431;

  cout<<number<<endl;
  cout<<setprecision(3)<<number<<endl;
  cout<<setprecision(2)<<number<<endl;
  cout<<setprecision(1)<<number<<endl;



  cout<<1234<<setw(10)<<1234<<endl;
  cout<<45<<setw(12)<<45<<endl;
  cout<<7<<setw(13)<<7<<endl;
  cout<<87<<setw(12)<<87<<endl;
  cout<<99999<<setw(9)<<99999<<endl;


 return 0;
}
