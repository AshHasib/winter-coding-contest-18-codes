#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int d[101];
bool visited[1001];
bool pushed[101];
bool p[101];
vector <int> G[100];
void init(){
    memset(d,0,MAX);
    memset(visited,false,MAX);
    memset(p,true,MAX);
}

void sieve()
{
    p[1]=false;

    int root=sqrt(MAX);

    for(int i=2;i<=root;i++)
    {
        if(p[i])
        {
            for(int j=2*i;j<=MAX;j+=i)
            {
                p[j]=false;
            }
        }
    }
}

void bfs(int n,int source)
{
	queue<int>Q;
	d[source]=0;
	visited[source]=true;

	Q.push(source);

	while(!Q.empty())
	{
		int a=Q.front();
		Q.pop();
		for(int i=0;i<G[a].size();i++)
		{
			int b=G[a][i];

			if(!visited[b])
			{
				visited[b]=true;
				d[b]=d[a]+1;
				Q.push(b);
			}
		}
	}
}

int main()
{
    //freopen("input.txt","r",stdin);
    //ofstream myFile;
    //myFile.open("output.txt");

    init();
    int N,M;
    int a,b;
    sieve();
    scanf("%d%d",&N,&M);

    for(int i=1;i<=M;i++)
    {
        scanf("%d%d",&a,&b);
        G[a].push_back(b);
        G[b].push_back(a);
    }
    bfs(N,1);

    for(int i=1;i<=N;i++)
    {
        if(p[i])
        {
            printf("Favorite %d= %d\n",i,d[i]);
            //myFile<<"Favorite "<<i<<"= "<<d[i]<<endl;
        }
    }
    return 0;
}
