#include<iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Please enter two integers.\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    if (a>b)
    {
        cout << a<<" is greater than "<<b<<endl;
        cout << a<<" is "<<a/b<< " times greater than "<<b<<endl;
    }
    else if (a<b)
    {
        cout << a<<" is less than "<<b<<endl;
        cout << a<<" is "<<a/b<< " times less than "<<b<<endl;
    }
    else
    {
        cout << "Integers are equal!\n";
    }
    return 0;
}


