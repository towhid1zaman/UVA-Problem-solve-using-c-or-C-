#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
        while(t--)
        {
            int f;
                cin>>f;
                    int s,a,v;
                        int sum = 0;
                            for(int i = 0; i<f;i++)
                            {
                                cin>>s>>a>>v;
                                sum+= (s*v);
                            }
                        cout<<sum<<endl;
        }

    return 0;
}
