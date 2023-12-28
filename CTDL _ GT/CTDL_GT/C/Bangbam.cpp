//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <class T>
class hashtable
{
    vector< list<T> > buf;
    int n, cap;
    int myhash(T x)
    {
        hash<T> H;
        return H(x)/cap%cap;

    }
    public:
        hashtable(int _cap = 113)
        {
            cap = _cap;
            buf.resize(cap);
            n=0;
        }
        void insert(T x)
        {
            int k = myhash(x);
            buf[k].push_back(x);
            n++;
        }
        bool find(T x)
        {
            int k = myhash(x);
            for(auto z:buf[k]) if(z==x) return true;
            return false;
        }
        void erase(T x)
        {
            int k = myhash(x);
            auto p = buf[k].begin();
            while(p != buf[k].end() && *p != x) p++;
            if(p != buf[k].end()) 
            {
                buf[k].erase(p);
                n--;
            }
            
        }
        void travel()
        {
            for (auto z : buf)
            for (auto x:z) cout << x << " ";
        }

};

int main()
{
    hashtable<int> H(1001);
    for(int x:{325353, 64412, 83862, 837, 9819, 255, 731, 72})
    H.insert(x);
    cout << "Bang: "; H.travel();
}