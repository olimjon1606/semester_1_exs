#include<iostream>
#include<ctime>
using namespace std;
void generate_arr(int *arr, int n, int p, int q);
void display_arr(int *arr, int n);
int occur_arr(int *arr, int n, int x,int counter);
void index_arr(int *arr, int n, int x);

int main()
{
    int x=-1, n, p, q;
    int counter=0;
    cout << "PLease enter a number of elements you want: ";
    cin >> n;
    int *a=new int [n];
    if(n<=0)
    {
        cout << "Sorry you entered wrong number!";
        return 0;
    }
    cout << "Please enter starting point: ";
    cin >> p;
    cout << "Please enter ending point: ";
    cin >> q;
    generate_arr(a, n, p, q);
    display_arr(a, n);
    cout << "Please enter one number from the array: ";
    cin >> x;
    cout << "The occurence of "<<x <<" is "<< occur_arr(a, n, x, counter);
    index_arr(a, n, x);
    delete[]a;
    return 0;
}
void generate_arr(int *arr, int n, int p, int q)
{
    srand(time(nullptr));
    for(int i=0; i<n; ++i)
    {
        arr[i]=rand()%(q-p+1)+p;
    }
}
void display_arr(int *arr, int n)
{
    for(int i=0; i<n; ++i)
    {
        cout << arr[i] <<"\t";
    }
    cout << endl;
}
int occur_arr(int *arr, int n, int x, int counter)
{
     for(int i=0; i<n; ++i)
    {
        if (arr[i]==x)
            counter++;
    }
    return counter;
}
void index_arr(int *arr, int n, int x)
{
      for(int i=0; i<n; ++i)
    {
        if (arr[i]==x){
             cout<<endl<< "The first occured index is " << i;
            break;
        }
    }
}

