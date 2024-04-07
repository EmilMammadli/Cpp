#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*
    You are given two strings as input. Your task is to find the longest substring that is common to all of the given strings. This problem has applications in DNA sequence alignment and plagiarism detection.
*/

int main()
{
    string text;
    getline(cin, text);
    string text2;
    getline(cin, text2);
    string max_text = "";
    string common_text;

    int counter;
    int maximum = 0;

    for (size_t i = 0; i < text.length(); i++)
    {
        counter = 0;
        common_text = "";
        for (size_t j = 0; j < text2.length(); j++)
        {
            counter = 0;
            common_text = "";
            if (text[i] == text2[j])
            {
                counter++;
                common_text += text[i];
                int newi = i + 1;
                int newj = j + 1;
                while (newi < text.length() && newj < text2.length() && text[newi] == text2[newj])
                {
                    counter++;
                    common_text += text[newi];
                    newi++;
                    newj++;
                }
                maximum = max(maximum, counter);
                if (common_text.length() > max_text.length())
                {
                    max_text = common_text;
                }
            }
        }
    }

    cout << "Longest Common Substring: " << max_text << endl;

    return 0;
}
