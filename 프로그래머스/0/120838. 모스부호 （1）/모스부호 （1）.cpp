#include <sstream>
#include <string>
#include <map>

using namespace std;

string solution(string letter) {
    istringstream streamLetter(letter); //문자열 자르기 용
    string word;

    string morse[] = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
        "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--",
        "-..-","-.--","--.." };      
    map<string, char> decryption;
    map<string, char>::iterator iter;

    string answer = "";
    char c = 'a';
  
    
    //map에 페어링
    for (int i = 0; i < 26; ++i)
    {
        decryption.insert({ morse[i], c++ });
    }

    //자른 문자열인 키에 해당하는 값 찾아 answer에 붙히기.
    while (streamLetter >> word)
    {
        iter = decryption.find(word);
        answer.append(1, iter->second);
    }

    return answer;
}