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
    cin  >> grade;

    if (cin) //to test the state of the cin stream for invalid data
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
                       cout << "Faulty data." << endl;


        cout<<"Your letter grade is "<<letterGrade<<endl;
    }


  //  cout  << "Enter your letter grade and I will provide an appropriate message."
  //  << "  Press return. "  << endl;
  //  cin>>letterGrade;

  /*
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

}*/

else
   cout << "Faulty data.....goodbye" << endl;

//    system("PAUSE");
    return 0;
}
