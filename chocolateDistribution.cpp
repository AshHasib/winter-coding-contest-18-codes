#include<bits/stdc++.h>
using namespace std;



bool canBeDistributed(string s)
{
    int len=s.size();

    int sum=0;

    for(int i=0;i<len;i++)
    {
        sum+=(s[i]-'0');
    }

    if(sum%3==0)
    {
        return true;
    }
    else return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    while(1){
        cin>>s;

        if(s=="0") return 0;

        if(canBeDistributed(s)){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
}
