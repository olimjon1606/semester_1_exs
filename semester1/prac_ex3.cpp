#include<iostream>
#include<ctime>
using namespace std;
void input_arr(int *arr, int n);
int check_arr(int *arr, int n);
double av_arr(int *arr, int n);
int main()
{
    const int n=10;
    int a[n];
    input_arr(a, n);
    if(check_arr(a, n)>0)
        cout << "The average of elements with values that does not belong to the interval [-5,5], is " <<av_arr(a, n);
}
void input_arr(int *arr, int n)
{
    for(int i=0; i<n; ++i)
    {
        cout << "#"<<i+1<< ".";
        cin >> arr[i];

    }
}
int check_arr(int *arr, int n)
{
    int counter=0;
    for(int i=0; i<n; ++i)
    {
        if(arr[i]<-5 || arr[i]>5)
        counter++;
    }
    return counter;
}
double av_arr(int *arr, int n)
{
    double sum=0.00, counter=0;
    for(int i=0; i<n; ++i)
    {
        if (arr[i]<-5 || arr[i]>5)
        {
            counter++;
            sum+=arr[i];
        }
    }
    return sum/counter;
}
