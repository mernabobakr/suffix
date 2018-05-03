#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
struct suffix
{
    char *pattern;
};

// ana hena kont 3wza agrb bs lw 3mlt func
// bta5od lword w t3ml print ll suffixes elly momkn tkon felword deh 

std::vector<std::string> suffix(char *text, int size)
{
      struct suffix array[size];
    std::vector<std::string> v;
    for (int i = 0; i < size; i++)
    {
       array[i].pattern = text + i;
       v.push_back(array[i].&pattern[0]); //mynf3sh a3ml kda leh ? 
    }
    return v;
}
void printvector(std::vector<std::string> x)
{
    for (int i = 0; i < x.size(); i++)
    {
        std::cout << x[i] << std::endl;
    }
}
int main()
{
    int n = 6;
    char text[] = {'b', 'a', 'n', 'a', 'n', 'a'};
    std::vector<std::string> x = suffix(text, n);
    printvector(x);
    return 0;
}
