#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main(void)
{
    int n1, n2;
    cout << "Input 1st number: ";
    cin >> n1;
    cout << "Input 2nd number: ";
    cin >> n2;

    cout << "Before swapping: n1 = " << n1 <<", n2 = " << n2 << endl;
    swap(n1, n2);
    cout << "After swapping: n1 = " << n1 <<", n2 = " << n2 << endl;

    return 0;
}

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}