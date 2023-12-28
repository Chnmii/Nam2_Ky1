//cai dat stack bang danh sach lien ket don
#ifndef __stack___cpp__
#define __stack___cpp__
template <class T>
struct node
{
	T elem;
	node *next;
	node(T x,node *N=0) {elem=x;next=N;}
};
template <class T>
class STACK
{
	node<T> *H;	//H quan ly dau danh sach moc noi
	int n;  	//so phan tu hien tai trong stack
	public:
		STACK() {n=0;H=0;}
		int size() {return n;}
		bool empty() {return n==0;}
		void pop() 	 {n--; H=H->next;}
		void push(T x) {n++; H=new node<T>(x,H);}
		T &top() {return H->elem;}
};
#endif
