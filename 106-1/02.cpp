#include <iostream>

using namespace std;

int main()
{
    int input,maxoccur,freq=0;
    int log[10]= {0};
    
    cout<<"Enter a series of digits (0~9) and exit with -1"<<endl;
    cin>>input;
    while(input!= -1)
    {
        log[input]++;
        cin>>input;
    }
    for(int i=0; i<10; i++)
    {
        if(log[i]>=freq)
        {
            freq=log[i];
            maxoccur=i;
        }
    }

    cout<<"Digit "<<maxoccur<<" has max occurrences.";

    return 0;
}
