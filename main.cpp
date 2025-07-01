#include "Clock.hpp"
#include <iostream>
using namespace std;

int main() {
    int h, m, s;
    bool ok = false;
    while (!ok) {
        cout << "Enter hour: ";   cin >> h;
        cout << "Enter minute: "; cin >> m;
        cout << "Enter second: "; cin >> s;
        (h<24 && m<60 && s<60) ?  ok = true : system("cls");
    }
    
Clock clk(h,m,s);
    clk.run();
    return 0;
}
