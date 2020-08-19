#include<iostream>
#include<cstring>
using namespace std;
int w[100001],f[100001];
int main()
{
	memset(f,127,sizeof(f));
	f[0]=0;
	f[1]=1;
	f[2]=2;
	f[3]=3;
	f[4]=4;
	ios::sync_with_stdio(false);
	int m,pots=0;
	cin>>m;
	for(int i=1;i*i*i*i<=m;i++)
		w[++pots]=i*i*i*i;
	for(int i=1;i<=pots;i++)
		for(int v=1;v<=m;v++)
			if(w[i]<=v)
				f[v]=min(f[v],f[v-w[i]]+1);
	cout<<f[m];
	return 0;
}
