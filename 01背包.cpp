#include<iostream>
using namespace std;
int w[10001],c[10001],f[10000001];
int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>w[i]>>c[i];
	for(int i=1;i<=n;i++)
		for(int v=m;v>=1;v--)
			if(w[i]<=v)
				f[v]=max(f[v],f[v-w[i]]+c[i]); 
	cout<<f[m];
	return 0;
}
