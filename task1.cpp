#include <iostream>
using namespace std;
int packageCost(int pricePerKg, int weight) {
    return pricePerKg * weight;
}

int main() {
 setlocale(LC_ALL, "Russian");
    int price = 150;
    int weight = 4;

    cout << "Стоимость посылки: " << packageCost(price, weight) << " руб.\n";
    return 0;
}
