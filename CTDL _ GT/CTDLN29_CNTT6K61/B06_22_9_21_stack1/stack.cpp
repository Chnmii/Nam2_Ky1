//Cai dat stack
#ifndef __stack__cpp__
#define __stack__cpp__
template <class T>
class Stack
{
	int n,cap;  //n so phan tu hien chua, cap suc chua cua mang
	T	*buff;	//con tro luu du dulieu cua stack
	public:
		Stack(){n=cap=0; buff=0;}
		~Stack(){if(buff) delete[]buff;}
		void push(T x)
		{
			if(n==cap)  //day hoac chua co bo nho can mo rong
			{
				cap=cap*2+1;  
				T *tem=new T[cap];
				for(int i=0;i<n;i++) tem[i]=buff[i];
				if(buff) delete[]buff;
				buff=tem;
			}
			buff[n++]=x;
		}
		void pop() {if(n) n--;}
		int size() {return n;}
		bool empty(){return n==0;}
		T &top() {return buff[n-1];}  //ca doc ca ghi
};
#endif
