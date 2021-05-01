//finding duplicate and duplicate characters using bit masking//
#include<bits/stdc++.h>
#define     FAST            ios_base::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define ll long long
//#define endl '\n'
using namespace std;
int main()
{
    string s;
    cin>>s;
    ll H=0,x=0;

    for(int i=0;i<s.size();i++)
    {
        x=1;

        x=(x<<(s[i]-97)); //shifting

        //cout<<(x&H)<<endl;
        //cout<<(x|H)<<endl;

        if((x&H)>0) //checking
        {
            cout<<"Duplicate found"<<endl;
        }
        else
        {
            H=(x|H); //marging
        }
    }



    return 0;
}
