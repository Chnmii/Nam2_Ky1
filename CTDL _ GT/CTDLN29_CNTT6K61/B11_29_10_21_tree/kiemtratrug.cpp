//Kiem tra xem trong day diem co 2 diem trung nhau khong
#include<bits/stdc++.h>
using namespace std;
int main()
{
	map< pair<int,int>, bool> M;
	int n,x,y;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&x,&y);
		if(M[make_pair(x,y)]) return !printf("YES");	
		M[{x,y}]=true;
	}
	printf("NO");
}


