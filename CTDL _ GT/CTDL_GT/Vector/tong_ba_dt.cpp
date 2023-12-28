#include <bits/stdc++.h>
#include "vecto.cpp"
using namespace std;

class dathuc
{
    vector<double> A;
    void rutgon()
    {
        while(A.size() > 1 && A.back() == 0) A.pop_back(); 
    }
    public:
        friend istream &operator>>(istream &is, dathuc &P)
        {
            int n;
            is >> n;
            P.A.resize(n+1);
            for(auto &x:P.A) is >> x;
            return is;
        }
        friend ostream &operator<<(ostream &os, dathuc P)
        {
            for(auto x:P.A) os << setprecision(2) << fixed << x << " ";
            return os;
        }
        friend dathuc operator+(dathuc P, dathuc Q)
        {
            dathuc R;
            R.A.resize(max(P.A.size(), Q.A.size()), 0);
            for(int i=0; i<P.A.size(); i++)  R.A[i] += P.A[i];
            for(int i=0; i<Q.A.size(); i++)  R.A[i] += Q.A[i];
            R.rutgon();
            return R;
        }
};

int main()
{
    dathuc P, Q, R;
    cin >> P >> Q >> R;
    dathuc T = P+Q+R;
    cout << T;
}