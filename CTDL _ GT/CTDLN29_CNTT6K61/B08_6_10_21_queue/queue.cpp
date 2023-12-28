//Xay dung cau truc du lieu queue bang mang
#ifndef __queue__cpp___
#define __queue__cpp___
template <class T>
class Queue
{
	private:
		T* buf;
		int n,cap,F,L;
	public:
		Queue() {buf=0;F=L=0;cap=0;n=0;}
		~Queue() {if(buf) delete[] buf;}
		int size(){return n;}
		bool empty() {return n==0;}
		T&front() {return buf[F];}
		T&back() {return buf[(L+cap-1)%cap];}
		void pop(){F=(F+1)%cap;n--;}
		void push(T x)
		{
			if(n==cap) //day -> mo rong
			{
				cap=cap*2+2;
				T *tem=new T[cap];
				for(int i=F,j=0;i<F+n;i++,j++) tem[j]=buf[i%n];
				F=0;L=n;
				if(buf) delete []buf;
				buf=tem;
			}
			buf[L]=x; L=(L+1)%cap;
			n++;
		}		
};
#endif
