#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
void ans()
{
    // cout<<"NO"<<endl;
    int n,k;
    cin>>n>>k;
    vector<int> a(n,0);
    map<int,int> div;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        div[(a[i]%k)]++;
    }
    for(int i=0;i<n;i++)
    {
        if(div[(a[i]%k)]==1)
        {
            cout<<"YES"<<endl;
            cout<<i+1;
             return;
        }
    }
    cout<<"NO";
    return;
}
void solve(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    ans();
    cout<<endl;
}    
}
int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    solve();
    return 0;
}