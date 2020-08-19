#include<iostream>
#include<cstring>
using namespace std;
int w1[11],w2[11],c[11],f1[151],f2[151];
int main()
{
	memset(f1,127,sizeof(f1));
	f1[0]=0;
	ios::sync_with_stdio(false);
	int m,n,k,r;
	cin>>n>>m>>k>>r;
	for(int i=1;i<=n;i++)
		cin>>w1[i];
	for(int i=1;i<=m;i++)
		cin>>w2[i];
	for(int i=1;i<=m;i++)
		cin>>c[i];
	for(int i=1;i<=m;i++)
		for(int v=k;v>=0;v--)
		{
			int w=v+c[i];
			w=min(w,k);
			f1[w]=min(f1[w],f1[v]+w2[i]);
		}
	r-=f1[k];
	for(int i=1;i<=n;i++)
		for(int v=r;v>=1;v--)
			if(w1[i]<=v)
				f2[v]=max(f2[v],f2[v-w1[i]]+1);
	cout<<f2[r];
	return 0;
}
