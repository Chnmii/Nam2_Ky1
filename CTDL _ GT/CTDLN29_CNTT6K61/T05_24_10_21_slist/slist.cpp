#include<bits/stdc++.h>
using namespace std;
#ifndef __slist__cpp__
#define __slist__cpp__
template <class T>
class node
{
	T elem;
	node *next;
	public:
		node(T x,node<T> *N=0) {elem=x;next=N;}
		T &getsetelem() {return elem;} 
		node<T>* &getsetnext() {return next;}
};
template <class T>
class slist_ite
{
	node<T>*cur;  //tro vao vi tri hien thoi
	public:
		node<T>* getcur() {return cur;}
		slist_ite(node<T>*c=0) {cur=c;}
		T&operator*() {return cur->getsetelem();}
		slist_ite<T> &operator++(int) //it++
		{
			slist_ite<T> tem(cur);
			cur=cur->getsetnext();	
			return tem;
		}	
		slist_ite<T> &operator++()	//++it
		{
			cur=cur->getsetnext();
			return *this;
		}
		//operator=
		bool operator!=(slist_ite<T> sit) {return cur!=sit.cur;}
		bool operator==(slist_ite<T> sit) {return cur==sit.cur;}
};

template <class T>
class slist   //single list
{
	node<T>*Head,*Trai;   //Head tro den phan tu dau danh sach, Trai tro phan tu cuoi ds
	unsigned n;
		void Delete()
		{
			node<T> *p=Head;
			while(p)
			{
				p=p->getsetnext();
				delete Head;
				Head=p;
			}
		}
	public:
		typedef slist_ite<T> iterator;
		iterator begin() {return Head;}
		iterator end() {return 0;}
		slist(){Head=Trai=0;n=0;}
		slist(slist<T> &sL)
		{
			//cout<<"\ncopy\n";
			Head=Trai=0;n=0;
			for(auto z:sL) push_back(z);
		}
		slist(int k,T x)
		{
			Head=Trai=0;n=0;
			while(k--) push_back(x);
		}
		~slist()
		{
			clear();
		}
		void clear()
		{
			Delete(); n=0;
		}
		bool empty() {return n==0;}
		unsigned size() {return n;}
		T &front() {return Head->getsetelem();}
		T &back()  {return Trai->getsetelem();}
		void push_back(T x)  
		{
			Trai=(n?Trai->getsetnext():Head)=new node<T>(x);
			n++;
		}
		void push_front(T x) 
		{
			Head=new node<T>(x,Head);
			if(n==0) Trai=Head;
			n++;
		}
		void pop_back()
		{
			if(n==1) {delete Head; Head=Trai=0;}
			else
			{
				node<T>*p=Head; 
				while(p->getsetnext()!=Trai) p=p->getsetnext();
				p->getsetnext()=0;
				delete Trai;
				Trai=p;
			}
			n--;
		}
		void pop_front()
		{
			if(n==1) {delete Head; Head=Trai=0;}
			else 
			{
				node<T>*p=Head->getsetnext();
				delete Head;
				Head=p;
			}
			n--;
		}
		void travel()
		{
			for(node<T>*p=Head;p;p=p->getsetnext()) cout<<p->getsetelem()<<" ";
		}
		void insert(iterator it,T x)
		{
			if(it==begin()) return push_front(x);
			if(it==end()) return push_back(x);
			node<T>*p=Head;
			while(iterator(p->getsetnext())!=it) p=p->getsetnext();
			p->getsetnext()=new node<T>(x,it.getcur());
			n++;
		}
		void erase(iterator &it)	
		{
			if(it==end()) return;
			if(it==begin()) return pop_front();
			if(it==iterator(Trai)) return pop_back();
			node<T>*p=Head;
			while(iterator(p->getsetnext())!=it) p=p->getsetnext();
			p->getsetnext()=p->getsetnext()->getsetnext();
			delete it.getcur();
			it=p->getsetnext();
			n--;
		}
		void erase(T x)
		{
			node<T>*p=Head;
			while(p && p->getsetelem()!=x) p=p->getsetnext();
			if(p) 
			{
				iterator it=p;
				erase(it); 
			}
		}
		void sort()
		{
			for(node<T>*p=Head;p;p=p->getsetnext())
			for(node<T>*q=p->getsetnext();q;q=q->getsetnext())
			if(p->getsetelem()>q->getsetelem()) swap(p->getsetelem(),q->getsetelem());
		}
};
#endif;
/*
int main()
{
	slist<int> L(3,5);
	L.push_back(7);
	L.push_back(8);
	L.push_front(6);
	L.push_front(3);
	cout<<"\nList : ";L.travel();
	L.front()=L.back()=10;
//	cout<<"\nList : "; for(slist<int>::iterator it=L.begin();it!=L.end();++it) cout<<*it<<" ";
	for(auto &x:L) x=2;
	cout<<"\nList : "; 	for(auto x:L) cout<<x<<" ";
//	cout<<"\nTest: ";
//	while(L.size())
//	{
//		cout<<L.back()<<" ";
//		L.pop_back();
//	}
	
}
*/
//int main()
//{
//	node<int> A(3);
//	node<int> *B=new node<int>(4,&A);
//	node<int> C(5,B);
//	for(node<int> *p=&C;p;p=p->getsetnext()) cout<<p->getsetelem()<<" ";
//}


