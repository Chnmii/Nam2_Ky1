#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={4,7,2,8,1,6,9,3,5,2,6,3};
    vector<int> V(a+2,a+7);
    cout << "Size :" << V.size();
    cout << "\nCapacity: " << V.capacity();


    V.push_back(8);  // them vao cuoi
    V.front() = 2;
    cout << "\nFront: " << V.front();
    cout << "\nback: " << V.back();
    cout << "\nSize: " << V.size();
    cout << "\nCapacity: " << V.capacity();
    V.pop_back(); // xoa cuoi

    // duyet theo chi so
    cout << "\nVector: "; 
    for (int i=0; i<V.size(); i++)  cout << V[i] << " ";

    V.resize(10, 2);  // them 10 so 2
    cout << "\nVector: ";
    for (int i=0; i<V.size(); i++)  cout << V[i] << " ";

    // sx tang dan
    sort(V.begin(),V.end());
    // duyet theo bo loc xuoi
    cout << "\nVector: "; 
    for (vector<int>::iterator it = V.begin(); it != V.end(); it++)  cout << *it << " ";

    V.push_back(5);
    // duyet theo bo loc nguoc
    cout << "\nDao nguoc: ";
    for (vector<int>::reverse_iterator it = V.rbegin(); it != V.rend(); it++)  cout << *it << " ";
    
    // duyet theo auto
    cout << "\nDuyet: ";
    for(auto x:V) cout << x << " ";

    auto it = V.begin(); it++; it++; *it = 0;

    // chem them
    V.insert(it, 7);
    cout << "\nDuyet: ";
    for(auto x:V) cout << x << " ";
    it++;

    // xoa
    V.erase(it);
    cout << "\nDuyet: ";
    for(auto x:V) cout << x << " ";
}