#include<iostream>
using namespace std;

int main()
{
    
    int grade;
    char letterGrade;
    
    cout<<"Please enter a raw score for a letter grade: ";
    cin>>grade;
    
    if(cin)
    {
    if(grade>=90)
        letterGrade='A';
    else if(grade>=80)
         letterGrade='B';
         else if(grade>=70)
              letterGrade='C';
              else if(grade>=60)
                   letterGrade='D';
                   else 
                        letterGrade='F';
    
    cout<<"For a score of "<<grade<<" the Letter Grade is "<<letterGrade<<endl;
    }
    else
    cout<<"INVLAIDE DATA....Goodbye"<<endl;
    
    system("PAUSE");
    return 0;
}
