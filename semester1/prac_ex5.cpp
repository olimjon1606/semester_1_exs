#include<iostream>
#include<cmath>
bool isPositive(double a);
float area(double side1);
float circumference (double side2);
using namespace std;
int main()
{
    double a, minar=10000000000000000000000.0;
    int n;
    cout << "how many times you want to repeat: ";
    cin >> n;
    for (int i=0; i<n; ++i)
    {
        cout << "Please enter a side: ";
        cin >> a;
        if(isPositive(a)==true)
        {
            double result1=area(a);
            cout << "Area is "<< result1 <<endl;
            double result2=circumference(a);
            cout << "Circumference is "<< result2<< endl;
            if (result1<minar)
            minar=result1;
        }
    }
    cout << "Min Area is "<<minar<< endl;
}
bool isPositive(double a)
{
    if (a>0)
        return true;
    else
        return false;
}
float area(double side1)
{
    return (sqrt(3)/4)*side1*side1;
}
float circumference (double side2)
{
    return 3*side2;
}
