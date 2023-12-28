
#include <bits/stdc++.h>

#include <iostream> // cout, cin
#include <vector> // 
#include <list> // 

using namespace std;

class Word {
    string eng;
    string viet;

public:
    Word(string _eng, string _viet) {
        eng = _eng;
        viet = _viet;
    }

    string original() {
        return this->eng;
    }

    string mean() {
        return this->viet;
    }

    void updateW(string newMean) {
        this->viet = newMean;
    }
};

class Dictionary {
    vector <list<Word>> all;
    int n;
    int cap = 997;


private:
    int hashFunction(string eng)
    {
        hash<string> H;
        return H(eng) % 997;  // khac A B C
    }

public:
    Dictionary(int _size = 997) {
        this->all.resize(_size);
    }


    void insert(Word w) {
        int k = hashFunction(w.original());
        all[k].push_back(w);
        n++;
    }

    string find(string eng) {
        int k = hashFunction(eng);

        for (auto z : all[k]) // duyet qua tat ca gia tri trong all[k] (list)
            if ( z.original() == eng) return z.mean();

        return "this word is not availible";
    }

    void deleteWord(string eng) {
        int k = hashFunction(eng);

        auto p = all[k].begin(); // con tro dau tien trong ngan k

        while (p != all[k].end() && (*p).original() != eng) p++;
        if (p != all[k].end())
        {
            all[k].erase(p);
            n--;
        }
    }

    void updateWord(string eng, string newMean) {
        int k = hashFunction(eng);

        auto p = all[k].begin();

        while (p != all[k].end() && (*p).original() != eng) p++;
        if (p != all[k].end())
        {
            (*p).updateW(newMean);
            n--;
        }
    }
};

int main() {
    Word a("presention", "tong thong");
    Word b("fllower", "hoa");

    Dictionary d(997);

    d.insert(a);
    d.insert(b);

    cout << d.find("flower") << "\n";


    d.updateWord("fllower", "nguyen thi hoa");

    cout << "after update: " << d.find("fllower") << "\n";



}