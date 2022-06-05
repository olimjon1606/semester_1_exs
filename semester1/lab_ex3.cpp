#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int n, a, b, lastIndex=-1, odd;
    cout << "PLease enter number of elements you want: ";
    cin >> n;
    if(n<=0)
    {
        cout << "Sorry you entered invalid value!";
        return 0;
    }
    cout << "Please enter starting point: ";
    cin >> a;
    cout << "Please enter ending point: ";
    cin >> b;
    srand(time(nullptr));
    int *array=new int [n];
    int scaling=b-a+1, shift=a;
    for (int i=0; i<n; ++i)
    {
        array[i]=rand()%scaling+a;
        cout << array[i]<< "\t";
    }
    cout << endl;
    for (int i=0; i<n; ++i)
    {
        if(array[i]%2!=0)
            {lastIndex=i;
            odd=array[i];}
    }
    cout <<"The last odd number is "<<odd<<" and is located at index "<< lastIndex <<endl;
}


