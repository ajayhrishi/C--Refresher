#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"you there sing a song"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}