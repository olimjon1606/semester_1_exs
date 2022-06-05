#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    const int length=50;
    char sentence[length];
    cout << "PLease enter a sentence: ";
    cin.get(sentence, length);
    for(int i=0; sentence[i]!=0; ++i)
    {
        if (sentence[i]>='a' && sentence[i]<='z')
        {
            sentence[i]=toupper(sentence[i]);
        }
        else if (sentence[i]>='A' && sentence[i]<='Z')
            sentence[i]=tolower(sentence[i]);

        cout <<sentence[i];
    }

}
