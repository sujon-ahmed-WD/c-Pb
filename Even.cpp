#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
        }

            //    cout<<even<<endl       ;


        int dif=abs((n/2)-even);

        if(n%2 !=0)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<dif<<endl;
        }

        // int dif = abs((n / 2) - even);

        // if (n % 2 != 0)
        // {
        //     cout << -1 << endl;
        // }
        // else
        // {
        //     cout << dif << endl;
        // }
    }

    return 0;
}