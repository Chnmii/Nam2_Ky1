//cai dat queue bang danh sach lien ket don
#ifndef ___queue__cpp__
#define ___queue__cpp__
template <class T>
struct node
{
	T elem;
	node *next;
	node(T x) {elem=x; next=0;}
};
template <class T>
class QUEUE
{
	node<T> *F,*L; //F- phan tu dau, L - phan tu cuoi
	int n;  //chua so phan tu dang co trong queue
	public:
		QUEUE() {n=0;F=L=0;}
		int size() {return n;}
		bool empty() {return n==0;}
		T &front() {return F->elem;}
		T &back()  {return L->elem;}
		void push(T x)
		{
		//	if(n==0) F=L=new node<T>(x); else {L->next=new node<T>(x); L=L->next;}
			L=(n?L->next:F)=new node<T>(x); 			
			n++;
		}
		void pop()
		{
			//node<T> *p=F; F=F->next;	delete p;  
			F=F->next;
			if(n==1) L=0; 
			n--;
		}
};
#endif
