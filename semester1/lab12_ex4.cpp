#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    const int length=50;
    char sentence[length];
    cout << "Please enter your sentence: ";
    cin.get(sentence,length);
    int con=0;

    for (int i=0; sentence[i]!=0; ++i)
    {
        if(sentence[i]!='\0')
            con++;
    }

    cout << "pppp "<< con << endl;
    for (int i=0; i<con; ++i)
    {
        if (sentence[i]!='\0' || sentence[i]!=0){
            int counter=1;
            for(int j=i+1; j<con; ++j)
            {
                if(sentence[i]==sentence[j])
                {
                    counter++;
                    sentence[j]='\0';
                }

        }
    cout << sentence[i] << "-- " <<counter << endl;}
    }

}
