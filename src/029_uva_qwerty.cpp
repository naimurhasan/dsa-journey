// Author: Naimur Hasan
// Date: 19-12-22
// unsolved
#include<bits/stdc++.h>

using namespace std;

void l() {}
template<typename Head, typename ...Args>
void l(const Head& head, const Args&... args) {
    cout << head << " ";
    l(args...);
}

int main() {
  std::map<char, char> keyboard{{'1', '`'}, {'2', '1'}, {'3', '2'}, {'4', '3'}, {'5', '4'},
                                {'6', '5'}, {'7', '6'}, {'8', '7'}, {'9', '8'}, {'0', '9'},
                                {'-', '0'}, {'=', '-'}, {'W', 'Q'}, {'E', 'W'}, {'R', 'E'},
                                {'T', 'R'}, {'Y', 'T'}, {'U', 'Y'}, {'I', 'U'}, {'O', 'I'},
                                {'P', 'O'}, {'[', 'P'}, {']', '['}, {'\\', ']'}, {'S', 'A'},
                                {'D', 'S'}, {'F', 'D'}, {'G', 'F'}, {'H', 'G'}, {'J', 'H'},
                                {'K', 'J'}, {'L', 'K'}, {';', 'L'}, {'\'', ';'}, {'X', 'Z'},
                                {'C', 'X'}, {'V', 'C'}, {'B', 'V'}, {'N', 'B'}, {'M', 'N'},
                                {',', 'M'}, {'.', ','}, {'/', '.'}};

  std::string line;
  while (std::getline(std::cin, line)) {
    for (char c : line) {
      if (c == ' ' || c == '\n' || c == ':') {
        std::cout << c;
      } else {
        std::cout << keyboard[c];
      }
    }
    cout << endl;
  }

  return 0;
}
