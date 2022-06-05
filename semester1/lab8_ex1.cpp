#include<iostream>
#include<ctime>
using namespace std;
int main ()
{
    int number, a, b, sum=0;
    cout << "Please enter number of elements you want! ";
    cin >> number;
    if(number<=0)
        {cout << "Sorry you entered invalid value!";
        return 0;
        }
    cout << "Please enter starting point: ";
    cin >> a ;
    cout << "Please enter ending point: ";
    cin >> b;
    srand(time(nullptr));
    int *array =new int [number];
    int scaling= b-a+1, shift =a;
    for (int i=0; i<number; ++i)
    {
        array[i]=rand()%scaling +shift;
        cout << array[i]<< "\t";
    }
    cout << endl;
    for (int i=0; i<number; ++i)
    {
        if (array[i]%2!=0)
            sum++;
    }
    cout << "There are "<<sum << " odd elements in your array!\n";
    for (int i=0; i<number; ++i)
        if (array[i]%2!=0)
            cout << array[i]<<"\t";
}
