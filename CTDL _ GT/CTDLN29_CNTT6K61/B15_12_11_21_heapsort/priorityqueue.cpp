#include<bits/stdc++.h>
using namespace std;
template<class T,class Cmp=less<T> >
class pq
{
	T *buf;
	int cap,n;
	Cmp ss;
	void heapy(int k)
	{
		if(2*k+1>=n) return;
		int p=2*k+1;
		if(p+1<n && ss(buf[p],buf[p+1])) p++;
		if(ss(buf[k],buf[p])) {swap(buf[k],buf[p]);heapy(p);}
	}
	public:
		pq() {buf=0;cap=n=0;}
		~pq() {if(buf) delete[]buf;}
		int size() {return n;}
		int empty() {return n==0;}
		T top() {return buf[0];}
		void push(T x)
		{
			if(cap==n) 
			{
				cap=cap*2+1;
				T *tem=new T[cap];
				for(int i=0;i<n;i++) tem[i]=buf[i];
				if(buf) delete[]buf;
				buf=tem;
			}
			int k=n;
			buf[n++]=x;
			while(k>0 && ss(buf[(k-1)/2],buf[k])) {swap(buf[(k-1)/2],buf[k]); k=(k-1)/2;}
		}
		void pop()
		{
			n--;
			buf[0]=buf[n];
			heapy(0);
		}
};
int main()
{
	pq<int> Q;
	for(int x:{43,75,24,53,58,62,24,63,146,363,35,2,75,458,34,52,86,79,61}) Q.push(x);
	while(Q.size())
	{
		cout<<Q.top()<<" ";
		Q.pop();
	}
}


