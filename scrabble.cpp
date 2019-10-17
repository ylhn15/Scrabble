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
        int calcScore(const std::string &word)
        {
            int wordValue = 0;
            for (char i : word) {
                char character = std::toupper(i);
                wordValue += getLetters()[character];
            }
            return wordValue;
        }

        void menu()
        {
            std::cout << "------------------------------------------------\n";
            std::cout << "Menu \n";
            std::cout << "------------------------------------------------\n";
            std::cout << "Type w(ord) to enter a word to get the score. \n";
            std::cout << "Type q(uit) to quit the program \n";
            std::cout << "------------------------------------------------\n";
        }

        void gameloop()
        {
            while(true) {
                menu();
                std::string op;
                std::cin >> op;
                if("quit" == op || "q" == op) {
                    return;
                } else if("word" == op || "w" == op) {
                    std::string word;
                    std::cout << "------------------------------------------------\n";
                    std::cout << "Please enter your word: " << std::endl;
                    std::cout << "------------------------------------------------\n";
                    std::cin >> word;
                    std::cout << "------------------------------------------------\n";
                    std::cout << word << " has a score of: " << calcScore(word) << std::endl;
                    std::cout << "------------------------------------------------\n";
                }
            }
        }
};



int main(int argc, char *argv[])
{
    auto *scrabbler = new Scrabble();
    scrabbler->gameloop();

    return 0;
}
