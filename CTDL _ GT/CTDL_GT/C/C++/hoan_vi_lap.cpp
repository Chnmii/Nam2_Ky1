#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[20];
    scanf("%s", &s);
    char *s1 = s, *s2 = s + strlen(s);
    std::sort(s1, s2);
    do 
    {
        std::cout << s << std::endl;
    }
    while (std::next_permutation(s1, s2));

    return 0;

}
