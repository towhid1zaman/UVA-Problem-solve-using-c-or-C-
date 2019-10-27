#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll Combi[101][101];
ll C(ll a, ll b){

    if(b==0) return 1;
    if(a==b) return 1;

    if(Combi[a][b]!=-1) return Combi[a][b];

    Combi[a][b]=C(a-1,b)+C(a-1,b-1);
    return Combi[a][b];
}

int main(){

    ll n,k;
    memset(Combi,-1,sizeof(Combi));

    while( cin>>n>>k)
    {
        if(n==0 && k==0) break;

        cout<<n<<" things taken "<<k<<" at a time is "<<C(n,k)<<" exactly."<<endl;
    }

    return 0;
}
