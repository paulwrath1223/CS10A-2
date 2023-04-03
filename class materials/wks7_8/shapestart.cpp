//shape start with sample slope
#include <iostream>
using namespace std;

int main()
{
  int width=11;
  int maxRows=width/2;
  int rowCount=0;
  int spaceCount=0;

  while(rowCount<=maxRows)
  {
      spaceCount=rowCount;

      while(spaceCount<maxRows)
      {
          cout<<" ";
          spaceCount++;
      }
      cout<<"*"<<endl;

      rowCount++;
  }
  return 0;
}
