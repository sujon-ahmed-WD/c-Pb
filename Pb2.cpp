#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int mark;
};
int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].mark;
    }
    reverse(a,a+n);
        for(int i=0; i<n; i++)
    {
        cout<<a[i].name<<" " <<a[i].roll<<" "<<a[i].mark<<endl;
    }
    return 0;
}
