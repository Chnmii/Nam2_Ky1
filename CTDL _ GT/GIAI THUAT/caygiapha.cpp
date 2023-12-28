// cay gia pha
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_cin ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

struct node
{
    string elem;
    node *far;
    vector <node *> child;
    node(string e, node *f = 0)
    {
    	far = f;
        elem = e;
    }
};

bool add(node *H, string cha, string con)
{
    if(!H)  return 0;
    if(H -> elem == cha)
    {
        H -> child.push_back(new node(con, H));
        return 1;
    }
    for(auto h : H -> child)
    {
        if(add(h, cha, con))
        	return 1;
    }
    return 0;
}

void preorder(node *H)
{
    if(!H)  return;
    cout << H -> elem << " ";
    for(auto c : H -> child)    preorder(c);
}

void postorder(node *H)
{
    if(!H)  return;
    for(auto c : H -> child)    postorder(c); 
    cout << H -> elem << " ";  
}

void inorder(node *H)
{
    if(!H)  return;
    if(H -> child.size())  inorder(H -> child[0]);
    cout << H -> elem << " "; // tham goc
    for(int i = 1; i < H -> child.size(); i++)  inorder(H -> child[i]);
}

node *find(node *H, string x)
{
	if(H->elem == x)	return H;
	for(auto h : H->child)
	{
		node *p = find(h, x);
		if(p)  return p;
	}
	return 0;
}

int main()
{
    string x, y, xx;
    ifstream fin("gp.txt");
    
    node *H = new node("A");
    while(fin >> x >> y)    add(H, x, y);

    preorder(H); cout << endl;
    inorder(H);  cout << endl;
    postorder(H);    cout << endl;

    fin.close();
    
    cout << "Nhap ten can tim: ";
    cin >> xx;
    node *p = find(H, xx);
    if(!p) cout << "\nKhong co ";
    else
    {
    	stack<node*> S;
    	while(p!=H) 
    	{
    		S.push(p); p = p->far;
		}
		cout << H->elem;
		while(S.size()) 
		{
			cout << "->" << S.top()->elem; S.pop();
		}
	}
    return 0;
}
