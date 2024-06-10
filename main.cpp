#include <iostream>
using namespace std;
// (char)xxx
//spades 
// - clubs
// - hearts
// - diamonds
void play_card(int card, int suit)
{
    if (card == 2 || card == 3 || card == 4 || card == 4 || card == 5 || card == 6 || card == 7 || card == 8 || card == 9 || card == 10)
    {
        cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "\n";
        cout << (char)186 << card << "                " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "        " << (char)suit << "        " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                 " << (char)186 << "\n";
        cout << (char)186 <<  "                " << card << (char)186 << "\n";
        cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "\n";
    }
    else if (card == 11)
    {
        cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "\n";
        cout << (char)186 << "J" << "                " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "        " << (char)suit << "        " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                " << "J" << (char)186 << "\n";
        cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "\n";
    }
    else if (card == 12)
    {
        cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "\n";
        cout << (char)186 << "Q" << "                " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "        " << (char)suit << "        " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                " << "Q" << (char)186 << "\n";
        cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "\n";
    }
    else if (card == 13)
    {
        cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "\n";
        cout << (char)186 << "K" << "                " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "        " << (char)suit << "        " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                " << "K" << (char)186 << "\n";
        cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "\n";
    }
    else if (card == 14)
    {
        cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << "\n";
        cout << (char)186 << "A" << "                " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "        " << (char)suit << "        " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                 " << (char)186 << "\n";
        cout << (char)186 << "                " << "A" << (char)186 << "\n";
        cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << "\n";
    }
}


int main() 
{
    int card, suit;

    cout << "choise suit of card" << endl; 
    cout << (char)3 << "hearts(3)" << endl;
    cout << (char)4 << "diamonds(4)" << endl;
    cout << (char)5 << "clubs(5)" << endl;
    cout << (char)6 << "spades(6)" << endl;

    do {
        cout << "Enter your choice: ";
        cin >> suit;
    } while (suit < 3 || suit > 6);

    do {
        cout << "Enter your card number (2-10, J-11, Q-12, K-13, A-14): ";
        cin >> card;
    } while (card < 2 || card > 14);

    play_card(card, suit);
    





   /* for (size_t i = 0; i < 255; i++)
    {
        cout << "\t\t" << i << " - " << char(i) << endl;
    }*/

    return 0;
}
