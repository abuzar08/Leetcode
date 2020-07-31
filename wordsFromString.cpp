// C++ program to print words in a sentence
#include <bits/stdc++.h>
using namespace std;

void removeDupWord(string str)
{
    // Used to split string around spaces.
    istringstream ss(str);

    // Traverse through all words
    do {
        // Read a word
        string word;
        ss >> word;

        // Print the read word
        cout << word << endl;

        // While there is more to read
    } while (ss);
}

// Driver function
int main()
{
    string str = "Geeks for Geeks";
    removeDupWord(str);
    return 0;
}
