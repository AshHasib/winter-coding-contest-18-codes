#include<bits/stdc++.h>
using namespace std;


void init(int f[])
{
    for(int i=0;i<26;i++)
    {
        f[i]=0;
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    //ofstream m;
    //m.open("output.txt");
    char S[100];
    int T;
    int p=-1,Q;
    int flag[27];


    scanf("%d",&T);
    while(T--)
    {
        p=-1;
        init(flag);
        scanf("%s %d",&S,&Q);
        //fflush(stdin);
        //printf("%s",S);
        int len=strlen(S);

        for(int i=0;i<len;i++)
        {
            flag[S[i]-'a']++;

            if(flag[S[i]-'a']==Q)
            {
                p=i;
                break;
            }
        }
        if(p==-1)
        {
            printf("%d\n",p);
            //m<<p<<endl;
        }
        else {
            printf("%c\n",S[p]);
            //m<<S[p]<<endl;
        }
    }
    return 0;
}
