#include<iostream>
#include<ctime>
void input_arr(int *arr, int n);
int check_arr(int *arr, int n, int  b, int c);
double av_arr(int *arr, int n, int  b, int c);
using namespace std;
int main()
{
    const int n=10;
    int a[n], b, c;
    input_arr(a, n);
    cout << "Please enter starting point: ";
    cin >> b;
    cout << "Please enter ending point: ";
    cin >> c;
    if (check_arr(a,n, b, c)>0)
        cout << "The average of elements with values that belongs to the interval ["<<b<<","<<c<<"], is "<<av_arr(a, n, b, c);
}
void input_arr(int *arr, int n)
{
    cout << "Please enter the values of array: \n";
    for(int i=0; i<n; ++i)
    {
        cout << "#"<<i+1<<".";
        cin >> arr[i];
    }
}
int check_arr(int *arr, int n, int  b, int c)
{
    int counter=0;
    for(int i=0; i<n; ++i)
    {
        if(arr[i]>=b && arr[i]<=c)
        {
            counter++;
        }
    }
    return counter;
}
double av_arr(int *arr, int n, int  b, int c)
{
    double sum=0.00, counter=0;
    for(int i=0; i<n; ++i)
    {
        if(arr[i]>=b && arr[i]<=c)
        {
            counter++;
            sum+=arr[i];
        }
    }
    return sum/counter;
}
