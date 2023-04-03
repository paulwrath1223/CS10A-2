#include<iostream>
using namespace std;

int main()
{

    int grade;
    char letterGrade;

    cout<<"Please enter a raw score for a letter grade: ";
    cin>>grade;

    /*if(grade>=90)
        letterGrade='A';
    if(grade>=80)
        letterGrade='B';*/

    if(grade<=100)
        letterGrade='A';
    if(grade<=89)
        letterGrade='B';
    if(grade<=79)
        letterGrade='C';
    if(grade<=69)
        letterGrade='D';
    if(grade<=59)
        letterGrade='F';



    cout<<"For a score of "<<grade<<" the Letter Grade is "<<letterGrade<<endl;

//    system("PAUSE");
    return 0;
}
