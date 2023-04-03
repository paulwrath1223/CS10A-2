#include<iostream>
#include<cctype>
using namespace std;

int main()
{

string word;
char letter;
cout<<"Type a single word, press enter key: ";
cin>>word;
cout<<word<<endl;


cout<<word.length()<<endl;
cout<<word[0]<<endl;
letter=word[0];
cout<<letter<<endl;
letter=tolower(letter);
cout<<letter<<endl;

for(int count=0; count<word.length();count++)
{
    letter=toupper(word[count]);
    cout<<letter;

}

cout<<endl;
for(int count=0; count<word.length();count++)
{
    letter=toupper(word[count]);


    switch(letter)
    {
        case 'A':cout<<"apple ";
        break;
        case 'n': cout<<"novel ";
        break;
        case 't': cout<<"trial ";
        break;

    }
}


  return 0;
}
