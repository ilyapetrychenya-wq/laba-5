#include <iostream>
using namespace std;
void sendPackage(int& inStock)
{
    if (inStock > 0) {
        inStock--;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int packages = 2;

    sendPackage(packages);
    cout << "Осталось посылок: " << packages << "\n";

    sendPackage(packages);
    cout << "Осталось посылок: " << packages << "\n";

    return 0;
}
