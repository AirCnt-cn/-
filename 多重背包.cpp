#include<iostream>
using namespace std;
int w[501],c[501],f[6001],s[501];
int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>w[i]>>c[i]>>s[i];
	for(int i=1;i<=n;i++)
		for(int v=m;v>=1;v--)
			for(int e=1;e<=min(m,s[i]);e++)
				if(e*w[i]<=v)
					f[v]=max(f[v],f[v-(e*w[i])]+(e*c[i]));
				else
					break;
	cout<<f[m];
	return 0;
}
