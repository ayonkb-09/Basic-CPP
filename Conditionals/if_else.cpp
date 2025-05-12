/*if(condition)
{
statement1;
}
else{
statement2;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int age;
   cout<< "Enter the age:";
   cin>>age;
   if(age>=18)
   {
    cout<< "Able for vote.";
   }
   else{
    cout<<"Unable";
   }
    return 0;
}