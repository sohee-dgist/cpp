#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vt;
    for(int i=0; i<5; i++){
        vt.push_back(i);
    }
    vector<int>::iterator iter;

    //일반 iterator 사용법
    for (iter = vt.begin(); iter != vt.end(); iter++)
        cout << "vector : " << *iter << endl;
    iter = vt.begin();
    cout << iter[0] << endl;
    cout << *iter << endl;
    iter++;
    cout << *iter << endl;
    cout << iter[1] << endl;
    iter[1] = 10;
    for (iter = vt.begin(); iter != vt.end(); iter++)
        cout << "vector : " << *iter << endl;
    

    //const iterator 사용법
    vector<int>::const_iterator cIter = vt.begin();
    cIter = vt.begin();
    cout << cIter[1] << endl;
    //Iter[1] = 10;  error occured!
    

    // iterator에 const를 붙이면 가리키는 대상을 변경할 수 없다.
    const vector<int>::iterator coniter = vt.begin();
    //*coniter++; error occured!
    *coniter = 20;
   return 0;
}