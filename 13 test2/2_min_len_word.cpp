#include <iostream>
using namespace std;

string min_word_len(string words)
{
    string temp = "";
    string ans = words;
    for (int i = 0; i < words.size(); i++)
    {
        if (words[i] == ' ')
        {
            if (ans.size() > temp.size())
                ans = temp;
            temp = "";
        }
        else
            temp += words[i];
    }
    return ans;
}

string remove_extra_spaces(string words)
{
    bool start = false;
    string ans = "";
    for (int i = 0; i < words.size(); i++)
    {
        if (!start and words[i] != ' ')
        {
            start = true;
            ans += words[i];
        }
        else if (start)
        {
            if (words[i] == ' ' and ans.back() == ' ')
                continue;
            else
                ans += words[i];
        }
    }
    if(ans.back()==' ') ans.pop_back();
    return ans;
}

int main()
{
    // string words = "this is test string";
    string words = "           abc de         ghihjk a   uvw            h j               ";
    words = remove_extra_spaces(words);
    cout << words << ":" << endl;
    cout << min_word_len(words) << endl;
    return 0;
}