#include<iostream>
#include<ctime>
void pos_neg(int n);
void rep_neg(int n, char t);
using namespace std;
int main()
{
    int n;
    char t='y';
    rep_neg(n,t);
return 0;
}
void pos_neg(int n)
{
    cout << "Please enter an integer: ";
    cin >> n;
    if (n>0 && n%2==0)
        cout <<n  <<" is positive and even \n" ;
    else if(n<0 && n%2==0)
        cout <<n  <<" is negative and even \n" ;
    else if(n>0 && n%2!=0)
        cout <<n  <<" is positive and odd \n" ;
    else if(n<0 && n%2!=0)
        cout <<n  <<" is negative and odd \n";
        else
            cout << "zero \n";
}
void rep_neg(int n, char t)
{
    for (int i=0; t='y'; ++i)
    {
        pos_neg(n);
        cout << "Do you  want to continue pres 'y' or any key to end!"
        cin >> t;
    }
}
