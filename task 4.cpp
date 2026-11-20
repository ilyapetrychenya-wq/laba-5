#include <iostream>
using namespace std;
void showOffice(int index, int window = 1) {
    cout << "Индекс отделения: " << index << ", окно №" << window << "\n";
}

int main() {
 setlocale(LC_ALL, "Russian");
    showOffice(220030);     
    showOffice(220050, 4);
    return 0;
}
