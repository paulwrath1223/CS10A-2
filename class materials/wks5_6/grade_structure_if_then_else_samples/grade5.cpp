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
    if(grade>=90 && grade<=100)
        letterGrade='A';
    else if (grade>100)
        {
        cout<<"Faulty data....goodbye"<<endl;
        return 1;
        }
    else if(grade>=80 && grade<=89)
    letterGrade='B';
    else if(grade>=70 && grade<=79)
    letterGrade='C';
    else if(grade>=60 && grade<=69)
    letterGrade='D';
    else if(grade<=59)
    letterGrade='F';
    cout<<"For a score of "<<grade<<" the Letter Grade is "<<letterGrade<<endl;
   
    }
    else
    cout<<"INVALID DATA....Goodbye"<<endl;
    
    system("PAUSE");
    return 0;
}
