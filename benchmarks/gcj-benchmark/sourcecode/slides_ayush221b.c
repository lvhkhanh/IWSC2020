#include<stdio.h>
int main()
{
	int tt;
long long m;
	long long  s;
	
int T;
int n;
	int arr[60][60], i, j;
	scanf("%d", &T);
	for(tt=1; tt<=T; ++tt)
	{
		scanf("%d %lld", &n, &m);
		s=1;
		for(i=1; i<=n-2; ++i) s*=2;
		if(m>s) { printf("Case #%d: IMPOSSIBLE\n", tt); continue; }
		printf("Case #%d: POSSIBLE\n", tt);
		for(i=1; i<=n; ++i)
		{
			for(j=1; j<=i; ++j) arr[i][j]=0;
			for(j=i+1; j<n; ++j) arr[i][j]=1;
		}
		if(m==s)
		{
			for(i=1; i<n; ++i) arr[i][n]=1;
		}
		else
		{
			arr[1][n]=0;
			for(i=2; i<n; ++i)
			{
				arr[i][n]=(m%2);
				m/=2;
			}
		}
		for(i=1; i<=n; ++i)
		{
			for(j=1; j<=n; ++j)
			{
				printf("%d", arr[i][j]);
			}
			

printf("\n");
		}
	}
}