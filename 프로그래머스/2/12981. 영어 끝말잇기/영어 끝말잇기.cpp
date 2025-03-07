#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    unordered_set <string> setDuplicate;
    string prevWord(1, words[0].front()); //첫 단어의 첫 글자로 초기화
    int count = 0;
    bool isBreak = false;

    for (const string& word : words)
    {
        //중복 체크
        if (setDuplicate.end() != setDuplicate.find(word)) 
        {
            isBreak = true;
            break;
        }

        setDuplicate.insert(word);

        //끝말잇기 체크
        if (prevWord.back() != word.front())
        {
            isBreak = true;
            break;
        }

        prevWord = word;
        ++count;
    }

    vector<int> answer;

    if (isBreak)
    {
        answer.push_back(count % n + 1); //row 
        answer.push_back(count / n + 1); //colrm
    }
    else
    {
        return { 0, 0 };
    }

    return answer;
}