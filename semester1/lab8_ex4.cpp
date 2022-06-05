#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    int n, a, b, recur, counter=0;
    cout << "Please enter number of elements you want: ";
    cin >> n;
    if (n<=0)
    {
        cout << "Sorry you entered invalid value!";
        return 0;
    }
    cout << "Please enter starting point: ";
    cin>> a;
    cout << "Please enter ending point: ";
    cin >> b;
    int scaling=b-a+1;
    int *arr=new int [n];
    srand(time(nullptr));
    for (int i=0; i<n; ++i)
    {
        arr[i]=rand()%scaling+a;
        cout << arr[i]<< "\t";
    }
    for(int i=0; i<n; ++i)
    {
        recur=arr[i];
        for(int j=0; j<n; ++j)
        {
            if (recur==arr[j])
                counter++;
        }
        cout << recur<< "\t"<<  counter<<endl;
        counter=0;
    }

}
