#include <iostream>
using namespace std;




void displayCard(int rank, int suit) {
    const char* ranks[] = { "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace" };
    const char* suits[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

    if (rank < 0 || rank > 12 || suit < 0 || suit > 3) {
        std::cout << "Invalid card input." << std::endl;
    }
    else {
        std::cout << ranks[rank] << " of " << suits[suit] << std::endl;
    }
}

int main() {
    int rank, suit;

    std::cout << "Enter the rank (0-12): ";
    std::cin >> rank;
    std::cout << "Enter the suit (0-3): ";
    std::cin >> suit;

    displayCard(rank, suit);
    return 0;
}
