#include <bits/stdc++.h>
using namespace std;

#ifndef __slist__cpp___
#define __slist__cpp___

template<class T>
class node
{
    T elem;
    node *next;
    public:
    node(T x, node<T> *N=0) {elem = x; next = N;}
        T &getsetelem() {return elem;}
        node<T> *&getsetnext() {return next;}
        
};

template<class T>
class slist_ite
{
    node<T> *cur;  // tro vao vi tri hien thoi
    public:
        node<T> *getcur() {return cur;}
        slist_ite(node<T> *c = 0) {cur = c;}  // ham tao
        T &operator*() {return cur->getsetelem();}
        slist_ite<T> &operator++(int )   // it++
        {
            slist_ite<T> tem(cur);
            cur = cur->getsetnext();
            return tem;
        }
          
        slist_ite<T> &operator++()  // ++it
        {
            cur = cur->getsetnext();
            return *this;
        }
        bool operator!=(slist_ite<T> sit)
        {
            return cur!=sit->cur;
        }
        bool operator==(slist_ite<T> sit)
        {
            return cur==sit->cur;
        }
};

template<class T>
class slist
{
    node<T> *Head, *Trail;  // Head: tro den ptu dau, Trail: tro den ptu cuoi
    unsigned n;
    void Delete()
    {
        node<T> *p=Head;
        while(p)
        {
            p = p->getsetnext();
            delete Head;
            Head = p;
        }
    }
    public:
        typedef slist_ite<T> iterator;
        iterator begin() {return Head;}
        iterator end() {return 0;}
        slist() {Head = Trail = nullptr; n = 0}

        slist(slist<T> &sl)  // toan tu copy
        {
            Head = Trail = 0;
            n = 0;
            for(auto z:sl) push_back(z);
        }
        
        slist(int k, T x) 
        {
            Head = Trail = 0; n = 0;
            while (k--)
            {
                push_back(x);
            }
        }

        ~slist() {clear();}
        void clear() {
             Delete(); n = 0;
        }

        bool empty() {return n==0;}
        unsinged size() {return n;}

        T &front() {return Head->getsetelem;}
        T &back() {return Trail->getsetelem;}

        void push_back(T x)
        {
            Trail = (n ? Trail->getsetnext : Head) = new node<T> (x);
            // if(n==0)    Trail = Head = new node<T> (x);
            // else
            // {
            //     Trail ->getsetnext() = new node<T> (x); // tao nut moi
            //     Trail = Trail->getsetnext();  
            // }
            n++;
        }

        void push_front(T x)
        {
            Head = new node<T> (x, Head);
            if(n==0)    Trail = Head;
            n++;

        }
        
        void pop_front()
        {
            if(n==1) {delete Head; Head = Trail = 0;}
            else 
            {
                node<T> *p = Head->getsetnext();
                delete Head;
                Head = p;
            }
            n--;
        }

        void pop_back()
        {
            if(n==1) {delete Head; Head = Trail = 0;}
            else 
            {
                node<T> *p = Head; 
                while(p->getsetnext() != Trail) p = p->getsetnext();  // chay den khi gap Trail
                p->getsetnext() = 0;   // gan = 0
                delete Trail;  // xoa ptu cuoi
                Trail = p;
            }
            n--;
        }

        void travel()
        {
            for (node<T> *p = Head; p ; p = p->getsetnext()) cout << p->getsetelem() << " ";
        }
        void insert(iterator it, T x)
        {
            if(it==L.begin()) return push_front(x);
            if(it==L.end()) return push_back(x);
            node<T> *p = Head;
            while(iterator(p->getsetnext())!=it) p=p->getsetnext();
            p->getsetnext() = new node<T> (x, it.getcur());
            n++;
        }
        void erase(iterator it)
        {
            if(it==end()) return;
            if(it==begin()) return pop_front(x);
            if(it==iterator(Trail)) return pop_back();
            node<T> *p = Head;
            while(iterator(p->getsetnext()) != it) p=p->getsetnext();
            p->getsetnext() = p->getsetnext()->getsetnext();
            delete it.getcur();
            it = p->getsetnext();
            n--;
        }

        void erase(T x)
        {
            node<T> *p=Head;
			while(p && p->getsetelem()!=x) p = p->getsetnext();
			if(p) 
			{
				iterator it = p;
				erase(it); 
			}
        }
        void sort()
        {
            for(node<T> *p=Head; p ; p->getsetnext() )
            for(node<T> *q = p->getsetnext(); q ; q = q->getsetnext())
            if(p->getsetelem() > q->getsetelem()) 
                swap(p->getsetelem(), q->getsetelem());
        }
};

#endif