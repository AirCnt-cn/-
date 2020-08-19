#include<iostream>
using namespace std;
int w1[101],w2[101],c[101],f[401][401];
int main()
{
	ios::sync_with_stdio(false);
	int m,n,k;
	cin>>m>>n>>k;
	for(int i=1;i<=k;i++)
		cin>>w1[i]>>w2[i]>>c[i];
	for(int i=1;i<=k;i++)
		for(int v1=m;v1>=1;v1--)
			for(int v2=n;v2>=1;v2--)
				if(w1[i]<=v1&&w2[i]<=v2)
					f[v1][v2]=max(f[v1][v2],f[v1-w1[i]][v2-w2[i]]+c[i]); 
	cout<<f[m][n];
	return 0;
}
