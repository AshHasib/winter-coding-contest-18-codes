#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    //ofstream m;
    //m.open("output.txt");
    int m1,m2;

    int T;

    scanf("%d",&T);

    for(int k=1;k<=T;k++)
    {
        scanf("%d%d",&m1,&m2);

        int x1=m1*m2;
        int x2=m1+m2;

        int i=2;
        while(i<=x1 ||i<=x2){
            if(x1%i==0 && x2%i==0)
            {
                x1/=i;
                x2/=i;
            }
            else
            {
                i++;
            }
        }

        printf("Case %d: %d/%d\n",k,x1,x2);
        //m<<"Case "<<k<<": "<<x1<<"/"<<x2<<endl;
    }

    return 0;
}
