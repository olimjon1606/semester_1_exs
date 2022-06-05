#include<iostream>
#include<ctime>
using namespace std;
void input_array(int *arr, int n);
void count_less(int *arr, int n, int x, int counter);
void largest_less(int *arr, int n, int x,int index, int largest);
int main()
{
    int n, x, counter=0, largest,index;
    cout << "Please enter number of element you want: ";
    cin >> n;
    if (n<=0)
    {
        cout << "Sorry you entered wrong value!";
        return 0;
    }
    int *a=new int [n];
    input_array(a,n);
    cout << "Please enter a number: ";
    cin >> x;
    count_less(a,n,x, counter);
    largest_less(a,n,x, index, largest);
    delete[]a;
    return 0;
}
void input_array(int *arr, int n)
{
    for(int i=0; i<n; ++i)
    {
        cout << "#"<<i+1<<". ";
        cin >> arr[i];
    }
}
void count_less(int *arr, int n, int x , int counter)
{
    for(int i=0; i<n; ++i)
    {
        if (arr[i]<x)
        {
            counter++;
        }
    }
    cout <<endl<< "The number of elements less then "<< x<< " is "<< counter;
}
void largest_less(int *arr, int n, int x,int index, int largest)
{
    largest=arr[0];
    for(int i=1; i<n; ++i)
    {
        if (largest < arr[i] && arr[i] < x)
        {
            largest=arr[i];
            index=i;
        }
    }
    cout <<endl<< "The index is "<<index;
}
