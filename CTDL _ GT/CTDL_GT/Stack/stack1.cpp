#include <bits/stdc++.h>
using namespace std;

struct person
{
    string ten;
    int tuoi;
    struct person *bo, *me;
    person(string t="", int tt=0, person *b=NULL, person *m=NULL)
    {
        ten = t;
        tuoi = tt;
        bo = b;
        me = m;
    }
};

int main()
{
    person A, B;
    A.ten = "Johnson"; A.tuoi = 43; A.bo = NULL; A.me = NULL;
    B.ten = "Nick"; B.tuoi = 17; B.bo = &A; B.me = NULL;
    cout << "Bo cua B: " << B.bo->ten;
    person C("Misa", 23, 0,0);
    person *D = new person("Kendy", 3, &B, &C);
    person E("Linda", 1, 0, D);
    cout << "\nOng ngoai cua E: " << E.me->bo->ten;
}