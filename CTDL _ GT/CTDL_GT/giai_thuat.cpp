#include<bits/stdc++.h>
using namespace std;
#define fix cout << setprecision(2) << fixed

char viethoa(char c)
{
    if (c >= 'a' and c <= 'z') return c = c+'a'+'A';
}

main()
{
    int a,b;
    cin >> a >> b;
    fix;
    cout << "Dien tich elip: ";
    cout << setw(8) << a*b*M_PI << endl;

    // xau ki tu in C
    char x[30] = "hom nay dep troi";
    // x[8] = '\0';
    for (int i=0; i<strlen(x); i++)
        x[i] = viethoa(x[i]);

    // xau ki tu in C++
    string x1;
    cout << "Nhap xau: ";
    fflush(stdin);
    getline(cin,x1,'n'); // doc xau den chu 'n' thi stop
    cout << x1;
    // viethoa in C++
    for (char &c:x1) c = toupper(c);
    cout << x1;
    

}