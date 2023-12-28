#ifndef __vector___
#define __vector___

template <class T>
class Vec_ite
{
    T *cur;
    public:
        Vec_ite(T *c = 0) {cur = c;}
        Vec_ite<T>&operator=(Vec_ite<T> &it ) {cur=it.cur; return *this;}
        bool operator!=(Vec_ite<T> &it)  {return cur != it.cur;}
        T &operator*() {return *cur;}
        Vec_ite<T> operator++(int )
        {
            Vec_ite<T> t=cur;
            cur = cur-1;
            return t;
        }
        Vec_ite<T> operator++()
        {
            cur = cur-1;
            return *this;
        }

};

template <class T>
class Vector
{
    T *buf=0;
    int n,cap;
    void extend(int newcap)
    {
        cap = newcap;
        T *tem = new T[cap];
        for (int i=0; i<n; i++)
            tem[i] = buf[i];
        if(buf) delete[]buf;
        buf = tem;
    }
      
    public:
        Vector() {buf = 0; n = cap = 0;}
        Vector(int m, T x) 
        {
            n = cap = m;
            buf = new T[n];
            for (int i=0; i<n; i++)
                buf[i]=x;
        }
        ~Vector() {if(buf) delete []buf;}
        void clear() {n=0;}
        int size() {return n;}
        int capacity() {return cap;}
        bool empty() { return n == 0;}

        T &front() {return buf[0];}
        T &back() {return buf[n-1];}
        T &operator[](int k) {return buf[k];}
    
        void push_back(T x)
        {
            if (n==cap) extend(cap?cap*2:1);
            buf[n++] = x;
        }
        void pop_back() {n--;}
        void resize(int num)
        {
            if(num > cap) extend(num);
            n = num;
        }
        void resize(int num, T x)
        {
            if (num > cap) extend(num);
            for (int i=n; i<num; i++)  buf[i]=x;
            n = num;
        }
        Vector(Vector<T> &V) // toan tu copy
        {
            this->cap = V.cap;
            this->n = V.n;
            if(this->cap == 0) this->buf;
            else 
            {
                if (this->buf) delete []this->buf;
                this->buf = new T[cap];
                for(int i=0; i<n; i++)
                    this->buf[i] = V.buf[i];
            }
        }
        Vector<T>&operator=(Vector<T> &V)  // toan tu gan
        {
            this->cap = V.cap;
            this->n = V.n;
            if(this->cap == 0) this->buf;
            else 
            {
                if (this->buf) delete []this->buf;
                this->buf = new T[cap];
                for(int i=0; i<n; i++)
                    this->buf[i] = V.buf[i];
            }
            return *this;
            
        }

        typedef T *iterator;
        iterator begin() {return buf;}
        iterator end() {return buf+n;}
        
        void insert(iterator it, T x)
        {
            if(n==cap)
            {
                int k = it - buf;
                extend(cap*2);
                it = buf + k;
            }
            for(T *p=buf+n; p>it; p--) *p = *(p-1);
            *it = x;
            n++;
        }
        void erase(iterator it)
        {
            while(it<buf+n) 
            {
                *it = *(it+1);
                it++;
            }
            n--;
        }
        typedef Vec_ite<T> reverse_iterator;
        reverse_iterator rbegin() {return buf+n-1;}
        reverse_iterator rend() {return buf-1;}
        
};

#endif