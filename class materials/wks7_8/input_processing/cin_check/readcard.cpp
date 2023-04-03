#include <iostream>
#include <cstring>
using namespace std;

const char *ranks = "23456789TJQKA";
const char *suits = "CDHS";

const char *longranks[13] = 
   { "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
   "Ten", "Jack", "Queen", "King", "Ace" };

const char *longsuits[4] = 
   { "Clubs", "Diamonds", "Hearts", "Spades" };

int main()
{
  string s;
  const char *str;
  int cnum;

  while (1) {
    cout << "Enter a card: ";
    cin >> s;
    str = s.c_str();
    if (strlen(str) != 2) {
      cout << "The card must the format 'rank-suit', such as 'AH' or '2C'\n";
    } else if (strchr(ranks, str[0]) == NULL) {
      cout << "The rank must be one of " << ranks << endl;
    } else if (strchr(suits, str[1]) == NULL) {
      cout << "The suit must be one of " << suits << endl;
    } else {
      cnum = (strchr(suits, str[1]) - suits)*13 + 
             (strchr(ranks, str[0]) - ranks);
      cout << "Good card: #" << cnum << ": The " << 
          longranks[cnum%13] << " of " << longsuits[cnum/13] << ".\n";
    }
  }
}
