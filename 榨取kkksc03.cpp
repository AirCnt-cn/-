#include<iostream>
#include<cstring>
using namespace std;
int w[101],c1[101],c2[101],f[201][201];
int main()
{
	ios::sync_with_stdio(false);
	int m,n,k;
	cin>>k>>m>>n;
	for(int i=1;i<=k;i++)
		cin>>c1[i]>>c2[i];
	for(int i=1;i<=k;i++)
		for(int v1=m;v1>=0;v1--)
			for(int v2=n;v2>=0;v2--)
				if(c1[i]<=v1&&c2[i]<=v2)
					f[v1][v2]=max(f[v1][v2],f[v1-c1[i]][v2-c2[i]]+1);
	cout<<f[m][n];
	return 0;
}
