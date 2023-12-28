// Cai dat stack
#ifndef __stack__cpp___
#define __stack__cpp___

template<class T>
class Stack
{
    int n, cap; // n so ptu hien chua, cap suc chua cua mang
    T *buff;   // con tro luu tru du lieu cua stack
    public:
        Stack() {n = cap = 0; buff = 0;}
        ~Stack(){if(buff) delete []buff;}
        void push(T x)
        {
            if(n==cap)
            {
                cap = cap * 2 + 1;  // mo rong
                //cap = cap + 100;
                T *tem = new T[cap];
                for (int i = 0; i < n; i++) tem[i] = buff[i];
                if (buff) delete []buff;
                buff = tem;
            }
            buff[n++] = x;
        }
        void pop(){if(n) n--;}
        int size() {return n;}
        bool empty() {return n==0;}
        T &top() {return buff[n-1];} // & de vua doc vua ghi

};

#endif