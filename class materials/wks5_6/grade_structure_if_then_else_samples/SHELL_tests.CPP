// Program Shell1 prints appropriate messages based on a
// grade read from the keyboard.

#include <iostream>
using namespace std;


int main ()
{

    int grade;

    cout  << "Enter an integer grade between 50 and 100."
          << "  Press return. "  << endl;
    cin  >> grade;

    if  /* TO BE FILLED IN  */
        cout  << "Congratulations!"  << endl;
    return 0;
}                           
____________________________________________
// Program Shell1 prints appropriate messages based on a
// grade read from the keyboard.

#include <iostream>
using namespace std;


int main ()
{

    int grade;

    cout  << "Enter an integer grade between 50 and 100."
          << "  Press return. "  << endl;
    cin  >> grade;

    if  (grade>=90 && grade<=100)
        {
        cout  << "Congratulations!"  << endl;
        cout<<"Well done ...set the bar"<<endl;
        }
    if  (grade>=80 && grade<=89)
        cout  << "Try harder"  << endl;
    if  (grade>=70 && grade<=79)
        cout  << "Average"  << endl;
    if  (grade>=60 && grade<=69)
        cout  << "Need help"  << endl;
    if  (grade<=59)
        cout  << "Try again"  << endl;
    
    
    system("PAUSE");
    return 0;
}
___________________________________

// Program Shell1b prints appropriate messages based on a
// grade read from the keyboard.

#include <iostream>
using namespace std;


int main ()
{

    int grade;
    char letterGrade;

    cout  << "Enter an integer grade between 50 and 100."
          << "  Press return. "  << endl;
    cin  >> grade;

    if  (grade>=90 && grade<=100)
        {
        cout  << "Congratulations!"  << endl;
        letterGrade='A';
        }
    else if  (grade>=80 && grade<=89)
        {
        cout  << "Try harder"  << endl;
        letterGrade='B';
        }
         else if  (grade>=70 && grade<=79)
         {
        cout  << "Average"  << endl;
        letterGrade='C';
          }
              else if  (grade>=60 && grade<=69)
              {
              
              cout  << "Need help"  << endl;
              letterGrade='D';
              }
                   else if (grade <= 59)
                   {
                        
                   cout  << "Try again"  << endl;
                   letterGrade='F';
                   }    
                   else 
                   cout << "Faulty data." << endl;
  cout<<"Your letter grade is "<<letterGrade<<endl;
    
    system("PAUSE");
    return 0;
}                           
_____________________________________________
// Program Shell1c prints appropriate messages based on a
// grade read from the keyboard.

#include <iostream>
using namespace std;


int main ()
{

    int grade;
    char letterGrade;

    cout  << "Enter an integer grade between 50 and 100."
          << "  Press return. "  << endl;
 //   cin  >> grade;
 cin>>letterGrade;
/*if (cin) //to test the state of the cin stream for invalid data 
{
    if  (grade>=90 && grade<=100)
        letterGrade='A';
    else if  (grade>=80 && grade<=89)
        letterGrade='B';
         else if  (grade>=70 && grade<=79)
              letterGrade='C';
              else if  (grade>=60 && grade<=69)
                   letterGrade='D';
                   else if (grade <= 59)
                        letterGrade='F';
                   else 
                   cout << "Faulty data." << endl;*/

                   
 // cout<<"Your letter grade is "<<letterGrade<<endl;
 // letterGrade ='z';
  
  switch (letterGrade)
  {
     case 'A': cout<<"Your letter grade is "<<letterGrade<<endl;
               cout  << "Congratulations!"  << endl;
               break;   
     case 'a': cout<<"Your letter grade is "<<letterGrade<<endl;
               cout  << "Congratulations!"  << endl;
               break;   
     case 'B': cout<<"Your letter grade is "<<letterGrade<<endl;
               cout  << "Try harder"  << endl;
               break;              
     case 'C': cout<<"Your letter grade is "<<letterGrade<<endl;
              cout  << "Average"  << endl;
               break;     
     case 'D': cout<<"Your letter grade is "<<letterGrade<<endl;
               cout  << "Need help"  << endl;
               break;   
     case 'F': cout<<"Your letter grade is "<<letterGrade<<endl;
               cout  << "Try again"  << endl;
               break; 
     default : cout<<letterGrade<<" is not a valid letter grade.";
               break;              
 }
 
/*}
else
   cout << "Faulty data.....goodbye" << endl;*/
    
    system("PAUSE");
    return 0;
}                           
_________________________________________
/*Program LowScore reads data from an input file and prints three test scores.
The lowest value of the three is printed with an appropriate message.  
Assumption:  YOu are to create a data file with three scores and that the three scores are unique.*/  


#include <iostream>

using namespace std;

int main ()
{ 
    int  test1Score;
    int  test2Score;
    int  test3Score;
                                                        
   /* cout  << "Enter score for test 1; press return." << endl;
    cin  >> test1Score;
    cout  << "Enter score for test 2; press return."  << endl;
    cin  >> test2Score;
    cout  << "Enter score for test 3; press return."  << endl;
    cin  >> test3Score;*/
    
    /*WRITE CODE TO OPEN AND READ DATA FROM FILE*/
    /*VALIDATE THE INPUT FILE STREAM TO CHECK IF DATA FILE HAS BEEN 
    OPENED AND THAT THE DATA MATCHES THE VARIABLES IN WHICH THEY WILL BE STORED*/
   
   
    cout  << "The three test scores are: "  << endl;
    cout  << test1Score  << endl;
    cout  << test2Score  << endl;
    cout  << test3Score  << endl;
                            
    /*WRITE LOGICAL EXPRESSIONS IE., IF-THEN-ELSE STATEMENTS TO DETERMINE LOWEST SCORE*/
    
    
    
    
    














    
    
    system("PAUSE");
    
    return 0;
}                          
______________________________________________-
// Program HiScore reads and prints three test scores.
// The largest value of the three is printed with an
// appropriate message.  
// Assumption:  The scores are unique.                        

#include <iostream>
using namespace std;

int main ()
{ 
    int  test1Score;
    int  test2Score;
    int  test3Score;
                                                        
    cout  << "Enter score for test 1; press return."  << endl;
    cin  >> test1Score;
    cout  << "Enter score for test 2; press return."  << endl;
    cin  >> test2Score;
    cout  << "Enter score for test 3; press return."  << endl;
    cin  >> test3Score;
   
    cout  << "The three test scores are: "  << endl;
    cout  << test1Score  << endl;
    cout  << test2Score  << endl;
    cout  << test3Score  << endl;
                            
    /* TO BE FILLED IN */
    return 0;
}                          
___________________________________________________
// Program HiScore reads and prints three test scores.
// The largest value of the three is printed with an
// appropriate message.  
// Assumption:  The scores are unique.                        

#include <iostream>

using namespace std;

int main ()
{ 
    int  test1Score;
    int  test2Score;
    int  test3Score;
    
   
                                                        
    cout  << "Enter score for test 1; press return."  << endl;
    cin  >> test1Score;
  
    cout  << "Enter score for test 2; press return."  << endl;
    cin  >> test2Score;

    cout  << "Enter score for test 3; press return."  << endl;
    cin  >> test3Score;
  
   
    cout  << "The three test scores are: "  << endl;
    cout  << test1Score  << endl;
    cout  << test2Score  << endl;
    cout  << test3Score  << endl;
    
    if(test1Score>test2Score && test1Score>test3Score)
        cout<<"test1Score is the highest with a value of "<<test1Score<<endl;
    if(test2Score>test1Score && test2Score>test3Score)
        cout<<"test2Score is the highest with a value of "<<test2Score<<endl;
    if(test3Score>test1Score && test3Score>test2Score)
        cout<<"test3Score is the highest with a value of "<<test3Score<<endl;
        
                            
    /* TO BE FILLED IN */
    system("PAUSE");
    return 0;
}                          
________________________________________________
// Program HiScore reads data from a file and prints three test scores.
// The largest value of the three is printed with an
// appropriate message.  
// Assumption:  The scores are unique.                        

#include <iostream>
#include <fstream>
using namespace std;

int main ()
{ 
    int  test1Score;
    int  test2Score;
    int  test3Score;
    
    ifstream inData;
    
    inData.open("mydata.txt");
                                                        
  //  cout  << "Enter score for test 1; press return."  << endl;
 //   cin  >> test1Score;
    inData  >> test1Score;
 //   cout  << "Enter score for test 2; press return."  << endl;
 //   cin  >> test2Score;
     inData  >> test2Score;
 //   cout  << "Enter score for test 3; press return."  << endl;
 //   cin  >> test3Score;
    inData >> test3Score;
   
    cout  << "The three test scores are: "  << endl;
    cout  << test1Score  << endl;
    cout  << test2Score  << endl;
    cout  << test3Score  << endl;
    
    if(test1Score>test2Score && test1Score>test3Score)
        cout<<"test1Score is the highest with a value of "<<test1Score<<endl;
    if(test2Score>test1Score && test2Score>test3Score)
        cout<<"test2Score is the highest with a value of "<<test2Score<<endl;
    if(test3Score>test1Score && test3Score>test2Score)
        cout<<"test3Score is the highest with a value of "<<test3Score<<endl;
        
                            
    /* TO BE FILLED IN */
    system("PAUSE");
    return 0;
}                          
                           
