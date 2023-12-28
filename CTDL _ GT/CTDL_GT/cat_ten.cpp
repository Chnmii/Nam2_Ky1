#include <bits/stdc++.h>
using namespace std;

string cut(string x)
{
    string t[10];
    int i=0;
    istringstream is(x); // sinput(x) --> doc tu 1 xau
    while(is>>t[i]) i++;
    return t[i-1];
}

/*bool ss(sv x, sv y)
{
    string x1=cut(x.ten), y1=cut(y1.ten);
    if (x1==y1) return x.ten>y.ten;
    else return x1<y1;
}

void sx()
{
    sort(A,A+n,ss);
}*/

string cut2(string x)
{
    while(x.size() && x.back() == ' ') x.pop_back(); // xoa cac dau trong o cuoi
    int i = x.length()-1;
    while (i>=0 && not isspace(x[i]))  i--; // tim vi tri dau cach cuoi cung
    return x.substr(i+1);
}

int main()
{
    string s = " Cong hoa xa hoi Chu nghia Viet Nam  ";
    cout << cut2(s);
}