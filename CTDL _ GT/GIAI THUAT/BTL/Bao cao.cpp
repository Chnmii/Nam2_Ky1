#include <bits/stdc++.h>
#include <iostream> 
#include <vector>  
#include <list> 
#include <string>
#include <fstream>


using namespace std;

class Word
{
    string eng;
    string viet;

public:
    Word(string _eng, string _viet)
    {
        eng = _eng;
        viet = _viet;
    }

    Word()
    {
        this->eng = "";
        this->viet = "";
    }


    // c in
    friend istream& operator >> (istream& is, Word& w)
    {
        cout << "enter English word: ";
        is >> w.eng;

        cout << "enter Vietnamese mean: "; // chi nhap duoc mot chu lien nhau thoi
        is >> w.viet;

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // xoa ky tu dac biet
        return is;
    }

    void consoleInput() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string st;
        cout << "enter English word: ";
        getline(cin, this->eng);

        cout << "enter Vietnamese mean: ";
        getline(cin, this->viet);
        cout << endl;
    }

    // c out
    friend ostream& operator<< (ostream& os, Word w)
    {
        cout << w.eng << ": " << w.viet << " ";
        return os;
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


class Dictionary
{
    vector< list<Word> > all;
    int n, size;

private:
    int hashFunction(string eng)
    {
        int sumChar = 0;
        for (char& c : eng) {
            sumChar += int(c);
        }
        return sumChar % 997;  // khac A B C
    }

public:
    Dictionary(int _size = 997)
    {
        size = _size;
        all.resize(size);
        n = 0;
    }

    void insert(Word w)
    {
        int k = hashFunction(w.original());
        all[k].push_back(w);
        n++;
    }

    string find(string eng)
    {
        int k = hashFunction(eng);

        for (auto z : all[k]) // duyet qua tat ca gia tri trong all[k] (list)
            if (z.original() == eng) return z.mean();

        return "this word is not availible";
    }

    void deleteWord(Word eng)
    {
        int k = hashFunction(eng.original());

        auto p = all[k].begin(); // con tro dau tien trong ngan k

        while (p != all[k].end() && (*p).original() != eng.original()) p++;
        if (p != all[k].end())
        {
            all[k].erase(p);
            n--;
        }
    }

    void updateWord(string eng, string newMean)
    {
        int k = hashFunction(eng);

        auto p = all[k].begin();

        while (p != all[k].end() && (*p).original() != eng) p++;
        if (p != all[k].end())
        {
            (*p).updateW(newMean);
            n--;
        }
    }

    void travel()
    {
        for (auto z : all) // vong qua cac ngan
            for (auto x : z) cout << x << endl;  // vong qua moi tu
    }

    void saveFile(string fileName) {
        ofstream myfile;
        myfile.open(fileName);

        for (auto ngan : all) // vong qua cac ngan
            for (auto w : ngan) {
                myfile << w.original() << "\t" << w.mean() << endl; /// read a line
            }
        myfile.close();
    }

    void readFile(string fileName) {
        string line;
        ifstream myfile(fileName);

        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                int pos_t = line.find("\t");
                int len = line.length();

                string eng = line.substr(0, pos_t);
                string viet = line.substr(pos_t + 1, len);

                Word w(eng, viet);
                this->insert(w);
            }
            myfile.close();
        }

        else cout << "Unable to open file";
    }
};


int main()
{
    cout << "0: dung chuong trinh" << endl;
    cout << "1: insert a word" << endl;
    cout << "2: delete a word" << endl;
    cout << "______________________________________" << endl;

    //string fileName = "tudien.txt";
    Dictionary d(997);
    //d.readFile(fileName);

    int option;
    while (option != 0) {
        cout << "nhap tuy chon: ";
        cin >> option;

        if (option == 1) {
            Word w;
            w.consoleInput();
            d.insert(w);
        }

        if (option == 2) {
            cout << "do something" << endl; //
        }
    }

    d.travel();
    //d.saveFile(fileName);

    return 0;
}