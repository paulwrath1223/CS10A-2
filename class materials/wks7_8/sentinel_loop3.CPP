// Program CNTCTRL3... prompts for, reads, echo prints, and sums a
// number of positive integer values.  The sum is printed when a negative integer value is input.

#include <iostream>
using namespace std;

const int  LIMIT = 10;


int main ()
{                                                            
    int  counter;                 // loop-control variable
    int  sum;                     // summing variable          
    int  dataValue;               // input value      
    counter = 1;                                               
    sum = 0; 
                 
    cout  << "Enter a positive integer value.  Press return."  
       << endl;
        cin  >> dataValue;
        
   /* while(dataValue<0) 
    {
      cout<<"Value can't be negative."
      <<"Enter a positive integer value.  Press return."  
       << endl;
        cin  >> dataValue;
    }
    */     
                                   
    // Input and sum integer data values. 
    while (dataValue!=0)                                  
    {

        sum = sum + dataValue;
        dataValue--;
    }
    cout  << "Sum is "  << sum  << endl;
    system("PAUSE");
    return 0;
}
