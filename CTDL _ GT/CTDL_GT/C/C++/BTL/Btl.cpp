//#include <bits/stdc++.h>
#include <iostream> 
#include <vector>  
#include <list> 
#include <string>
#include <fstream>
#include <conio.h>

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

    void consoleInput() 
    {
        string st;
        cout << "enter English word: ";
        fflush(stdin);
        getline(cin, this->eng);

        cout << "enter Vietnamese mean: ";
        getline(cin, this->viet);
        cout << endl;
    }

    // c out
    friend ostream& operator<< (ostream& os, Word w)
    {
        cout << w.eng << "\t" << w.viet;
        return os;
    }

    string original() 
    {
        return this->eng;
    }

    string mean() 
    {
        return this->viet;
    }

    void updateW(string newMean) 
    {
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

    void saveFile(string fileName) 
    {
        ofstream myfile;
        myfile.open(fileName);

        for (auto ngan : all) // vong qua cac ngan
            for (auto w : ngan) 
            {
                myfile << w.original() << "\t" << w.mean() << endl; /// read a line
            }

        myfile.close();
    }

    void readFile(string fileName) 
    {
        string line;
        ifstream myfile(fileName);

        if (myfile.is_open())
        {
            while (getline(myfile, line))
            {
                int pos_t = line.find(":");
                int len = line.length();

                string eng = line.substr(0, pos_t);
                string viet = line.substr(pos_t + 2, len);

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
    Dictionary d(997);
   
    d.readFile("tudien.txt");
    int option;

    do{
        cout << "Tu dien gom cac chuc nang:\n";
        cout << "1. Them cap tu tieng Anh va tu tieng Viet vao tu dien\n";
        cout << "2. Lay nghia cua tu tieng Viet voi dau vao la mot tu tieng Anh\n";
        cout << "3. Xoa cap tu khoi tu dien\n";
        cout << "4. Cap nhat mot tu da co trong tu dien\n";
        cout << "5. Thoat\n";
        cout << "------------------------------------------------------------------";
        cout << "\nMoi ban chon: ";

        cin >> option;

        switch(option)
        {
            case 1:
            {
                cout << "Ban da chon them cap tu vao Tu Dien!\n";
                cout << "Nhap cap tu ban muon them:\n";
                Word w;
                // fflush(stdin);
                w.consoleInput();
                d.insert(w);
                d.travel();
                break;
            }
            case 2:
            {
                cout << "Ban da chon lay nghia tieng Viet voi dau vao la tieng Anh!\n";
                cout << "Nhap tu tieng Anh ban muon tim:\n";

                string engl;
                fflush(stdin);
                getline(cin, engl);

                cout << d.find(engl) << endl;
                d.travel();
                break;
            }
            case 3:
            {
                cout << "Ban da chon xoa cap tu khoi Tu Dien!\n";
                cout << "Nhap cap tu ban muon xoa:\n";
                Word w1;
                w1.consoleInput();
                d.deleteWord(w1);
                d.travel();
                break;
            }
            case 4:
            {
                cout << "Ban da chon cap nhat tu da co trong Tu Dien!\n";
                cout << "Nhap tu ban muon cap nhat:\n";

                string oldWord, newWord;
                fflush(stdin);
                getline(cin, oldWord);

                cout << "Nhap nghia moi:\n";
                getline(cin, newWord);

                d.updateWord(oldWord, newWord);  
                d.travel();                     
                break;
            }
            case 5:
            {
                cout << "Ban da chon thoat khoi chuong trinh!";	
				return 0;
            }

        }
        getch();
        system("cls");

    } 
    while(option > 0 && option < 6);

    d.travel();

    d.saveFile("tudien1.txt");

    return 0;

}