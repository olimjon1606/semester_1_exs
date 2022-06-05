#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    const int  length=20;
    int lowCount=0, apperCount=0;
    char sen[length];
    cout << "Please enter a sentence! ";
    cin.get(sen, length);
    for(int i=0; i<length; ++i)
    {
        if(sen[i]>='a' && sen[i]<='z')
            lowCount++;
        else if (sen[i]>='A' && sen[i]<='Z')
            apperCount++;
    }
    cout << "The number of lower case letters are: "<<lowCount<<" , the number of appercase letters are: " << apperCount<<endl;
}
