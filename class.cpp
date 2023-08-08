#include <iostream>
using namespace std;

class A {
private:
    int p_a;
    
public:
    void
    set_a(int _a)
    {
        p_a = _a;
    }
    void 
    view_a()
    {
        cout << p_a << endl;
    }
}; //뒤에 ;로 끝나는 것 기억

int main() {
    A a;
    a.set_a(3);
    a.view_a();
    return 0;
}