#include<iostream>
using namespace std;
long long w[20001],f[20001];
int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	f[0]=1;
	for(int i=1;i<=n;i++)
		for(int v=w[i];v<=m;v++)
			f[v]+=f[v-w[i]];
	cout<<f[m];
	return 0;
}
