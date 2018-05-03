#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
struct suffix
{
    char *pattern;
};

std::vector<std::string> suffix(char *text, int size)
{
      struct suffix array[size];
    std::vector<std::string> v;
    for (int i = 0; i < size; i++)
    {
       array[i].pattern = text + i;
       v.push_back(array[i].&pattern);
    }
    
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