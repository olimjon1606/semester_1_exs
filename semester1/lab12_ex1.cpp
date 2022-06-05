#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    const int row=3, col=4;
    int a[row][col];
    srand(time(nullptr));
    int c, b;
    cout << "Please enter starting point: ";
    cin >> c;
    cout << "Please enter ending point: ";
    cin>> b;
    int scaling=b-c+1;
    for (int i=0; i<3; ++i)
    {
        for (int j=0; j<4; ++j)
        {
            a[i][j]=rand()%scaling+c;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Sum from rows: ";
    for (int i=0; i<3; ++i)
    {
        int sum=0;
        for (int j=0; j<4; ++j)
        {
            sum+=a[i][j];
        }
        cout << sum << "\t";
    }
}
