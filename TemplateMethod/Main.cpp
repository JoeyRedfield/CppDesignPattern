#include "MainTemplate.h"
using namespace std;

int main() {
    MainTemplate* app1 = new Application1();
    app1->run(); // 1
    cout << "-------------" << endl;
    MainTemplate* app2 = new Application2();
    app2->run(); // 2
    delete app1;
    delete app2;
}