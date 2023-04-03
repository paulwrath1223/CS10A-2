// Program ISP provides a menu driven interface to cost out three 
// Internet Service Providers subscription packages.

#include<iostream>
#include<cstdlib>

using namespace std;

int main ()
{

int menuChoice;
cout<<"Select a subscription package:"<<endl;
cout<<"1. Package A"<<endl;
cout<<"2. Package B"<<endl;
cout<<"3. Package C"<<endl;
cout<<"4. Quit"<<endl;
cin>>menuChoice;
    
    switch(menuChoice)
    {
        
        case 1: cout  <<  "Processing for Package A "  << endl;
                 //your code here
                break;       
        case 2: cout  <<  "Processing for Package B "  << endl; 
		//your code here                
                 break;
        case 3: cout  <<  "Processing for Package C "  << endl;
                //your code here
                 break;       
        case 4: cout  <<  "Exiting program "  << endl;
                 break;                        
      default:
         cout << "The valid choices are 1 or 4. Run the\n";
         cout << "program again and select one of those.\n";
        
     }
    return 0;
}


