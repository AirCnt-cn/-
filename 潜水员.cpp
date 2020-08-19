#include<iostream>
#include<cstring>
using namespace std;
int w[1001],c1[1001],c2[1001],f[22][80];
int main()
{
	memset(f,127,sizeof(f));
	f[0][0]=0;
	ios::sync_with_stdio(false);
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=1;i<=k;i++)
		cin>>c1[i]>>c2[i]>>w[i];
	for(int i=1;i<=k;i++)
		for(int v1=m;v1>=0;v1--)
			for(int v2=n;v2>=0;v2--)
			{
				int w1=v1+c1[i],w2=v2+c2[i];
				w1=min(w1,m);
				w2=min(w2,n);
				f[w1][w2]=min(f[w1][w2],f[v1][v2]+w[i]);
			}
	cout<<f[m][n];
	return 0;
}
