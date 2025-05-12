/*if(condition1)
{
if(condition2){
statement1;
}
else
{
statement2;
}
}

else{
statement3; 
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cout<< "Enter an any number:";
    cin>>number;
    if(number>=0)
    {
        if(number % 2 ==0)
        {
            cout<< "Positive and Even";
        }
        else{
            cout<< "Positive and Odd";
        }
    }
    else
    {
        cout<< "Negative";
    }
}