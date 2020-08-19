#include<iostream>
using namespace std;
int w[10001],c[10001],f[10000001];
int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	for(int i=1;i<=n;i++)
		for(int v=m;v>=1;v--)
			if(w[i]<=v)
				f[v]=max(f[v],f[v-w[i]]+w[i]); 
	cout<<m-f[m];
	return 0;
}
