#include <iostream>
#include <map>
#include <string>

class Scrabble {
    public: 
        std::map<char,int> getLetters() {
            std::map<char, int> letters;
            letters['A'] = 1;
            letters['E'] = 1;
            letters['I'] = 1;
            letters['O'] = 1;
            letters['U'] = 1;
            letters['L'] = 1;
            letters['N'] = 1;
            letters['R'] = 1;
            letters['S'] = 1;
            letters['T'] = 1;
            letters['D'] = 2;
            letters['G'] = 2;
            letters['B'] = 3;
            letters['C'] = 3;
            letters['M'] = 3;
            letters['P'] = 3;
            letters['F'] = 4;
            letters['H'] = 4;
            letters['V'] = 4;
            letters['W'] = 4;
            letters['Y'] = 4;
            letters['K'] = 5;
            letters['J'] = 8;
            letters['X'] = 8;
            letters['Q'] = 10;
            letters['Z'] = 10;
            return letters;
        }
        int calcScore(std::string word)
        {
            int wordValue = 0;
            for (int i = 0; i < word.length(); ++i) {
                char character = std::toupper(word[i]);
                wordValue += getLetters()[character];
            }
            return wordValue;
        }
};



int main(int argc, char *argv[])
{
    Scrabble *scrabbler = new Scrabble();
    std::string word;

    std::cin >> word;

    std::cout << scrabbler->calcScore(word) << std::endl;

    return 0;
}
