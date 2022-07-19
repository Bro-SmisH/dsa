#include <array>
#include <iostream>
using namespace std;

void len(char name[])
{
    int ans = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {   
        ans++;
    }
    // return ans;  
    cout << ans;  
}

int main()
{
    char name[] = "shivanshmishra";
    cout << sizeof(name)-1;
    // len(name);
}