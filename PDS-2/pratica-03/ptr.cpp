#include <iostream>
using namespace std;
int main(){
    int n=10, i=0;
    int* ptr=nullptr;//versao att do NULL
    int l[]= {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    cout << &n << endl;
    cout << *(&n) << endl;// ou n
    cout << &ptr << endl;// ou &(*ptr)
    cout << ptr << endl;
    cout << l << endl;// ou &(l[0])
    cout << l << endl;
    cout << l[0] << endl;// ou *l
    ptr= &n;
    cout << ptr << endl;
    cout << n << endl;
    cout << (ptr == &n) << endl;
    *ptr=5;
    cout << n << endl;
    *ptr == *l;
    cout << ptr << endl;
    cout << l[0] << endl;// ou *l
    ptr = l;
    cout << ptr << endl;
    cout << *ptr << endl;
return 0;
}
