#include<bits/stdc++.h>

using namespace std;

#define gc getchar
#define sci scanint
#define scli scanlong
#define FL(i,a,b) for(int i=a;i<b;++i)
#define MOD 1e9+7
#define lli long long int
#define pb push_back
#define nline printf("\n");

void sci(int &x)
{
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}
void scli(lli &x)
{
    register lli c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
}

int main()
{
	
	int n;
	sci(n);
	int a[n+1]={0},b;
	FL(i,1,n+1)
	{
		sci(b);
		a[b]=1;
	}
	FL(i,1,n+1)
		if(!a[i])
			printf("%d ",i);
	return 0;
}