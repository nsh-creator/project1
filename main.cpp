#include<iostream>
using namespace std;

int swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int test01()
{
    int a = 10, b = 20;
    cout << "Before swap a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap a = " << a << ", b = " << b << endl;
}

int main() {
    cout << "my first project!" << endl;
    test01();
    return 0;
}