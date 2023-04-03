#include<iostream>

using namespace std;

int main()
{

   int rowCount=0, spaceCount=0;
   int base = 11;
   int rows= base/2;
   char symbol= '*';

   while(rowCount<=rows)
   {
       spaceCount=rowCount;
       while(spaceCount<rows)
       {
           cout<<" ";
           spaceCount++;
       }

       cout<<symbol<<endl;
       rowCount++;
   }



return 0;
}
