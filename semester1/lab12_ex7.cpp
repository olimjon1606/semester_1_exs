#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    const int length=20;
    char sentence[length];
    cout << "Please enter a word: ";
    cin.get(sentence, length);
    for ( sentence[i]!=0; )
    {
         cout << sentence[i];
    }
    for(int j=length-1; j<=0; --j)
    {
        int i=0;
        if (sentence[j]==sentence[i])
            cout << "Your word is Polindrom";
        else
            cout << "Your word is not Polindrom";
    }
}
