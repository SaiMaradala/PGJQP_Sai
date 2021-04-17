#include <iostream>
using namespace std;
class vowel
{
public: void find(char *sptr)
{
    int count = 0;
    while ((*sptr) != '\0')
        if (*sptr == 'a' || *sptr == 'e' || *sptr == 'i'|| *sptr == 'o' || *sptr == 'u')
        {
            count++;
        }
        sptr++;
}
};
int main()
{
    Vowel v;
    v.find(niit);
    cout << "Vowels in above string: " <<find(niit);
    return 0;
}
