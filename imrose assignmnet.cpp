#include<bits/stdc++.h>
#define ll long long int
#define pb  push_back
#define ios_base:: sync_with_stdio(false),cin.tie(NULL);
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    vector<int>v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    int mn=*min_element(v.begin(),v.end());
    //cout<<mn<<endl;
    int imrose=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]>mn)
        {
            v[i]=v[i]-mn;
            if(v[i]%v1[i]==0){
            imrose+=v[i]/v1[i];
            }
            else{
                imrose=-1;
                break;
            }
        }
    }
    cout<<imrose<<endl;
}
