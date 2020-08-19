#include<iostream>
using namespace std;
int w[31],c[31],p[31],f[201];
int main()
{
	ios::sync_with_stdio(false);
	int m,n;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
		cin>>w[i]>>c[i]>>p[i];
	for(int i=1;i<=n;i++)
		switch(p[i])
		{
			case 0:{
				for(int v=1;v<=m;v++)
					if(w[i]<=v)
						f[v]=max(f[v],f[v-w[i]]+c[i]); 
				break;
			}
			case 1:{
				for(int v=m;v>=1;v--)
					if(w[i]<=v)
						f[v]=max(f[v],f[v-w[i]]+c[i]);
				break;
			}
			default:{
				for(int v=m;v>=1;v--)
					for(int k=1;k<=min(m,p[i]);k++)
						if(k*w[i]<=v)
							f[v]=max(f[v],f[v-k*w[i]]+k*c[i]);
				break;
			}
		}
	cout<<f[m];
	return 0;
}
