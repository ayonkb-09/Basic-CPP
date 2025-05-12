/*if(condition1)
{
statement1;
}
else if(condition2){
statement2;
}
else{
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout<< "Enter the age:";
    cin>>age;
    if(age<=20)
    {
        cout<< "A Young Guy";
    }
    else if(20<=age<=40)
    {
        cout<< "Middle Age";
    }
    else{
        cout<< "An Old Guy";
    }
    return 0;
}