#include <iostream>
using namespace std;
int countLetters(int first, int second) {
    return first + second;
}

int countLetters(int first, int second, int third) {
    return first + second + third;
}

int main() {
 setlocale(LC_ALL, "Russian");
    cout << "Писем за 2 дня: " << countLetters(12, 18) << "\n";
    cout << "Писем за 3 дня: " << countLetters(12, 18, 25) << "\n";
    return 0;
}
    