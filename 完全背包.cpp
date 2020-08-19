#include<iostream>
using namespace std;
int w[31],c[31],f[201];
int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
		cin>>w[i]>>c[i];
	for(int i=1;i<=n;i++)
		for(int v=1;v<=m;v++) 
			if(w[i]<=v)
				f[v]=max(f[v],f[v-[i]]+[i]);   
	cout<<"max="<<f[m];
	return 0;
}
