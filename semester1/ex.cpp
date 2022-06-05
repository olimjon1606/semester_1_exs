#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    const int lenght=50;
    char sentence[lenght];
    cout<<"Give a sentence: ";

    cin.get(sentence,lenght);
    cout<<"Your sentence is: "<<sentence<<endl;

    cout<<"Your sentence is: ";
    for(int i=0;sentence[i]!=0;++i)
    {
        cout<<sentence[i]<<' ';
    }

    return 0;
}
