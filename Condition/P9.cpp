#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char str[] = {'a', 'b', 'z', 'f', 'n', 'e', 'D', 'H'};
    int n = sizeof(str) / sizeof(str[0]);

    char vowel[n] ;
    char cons[n] ;
    char Nch[n] ;

    for (int i = 0; i < n; ++i) {
        str[i] = toupper(str[i]);
        char current_char = str[i];

        if (current_char >= 'A' && current_char <= 'Z') {
            Nch[i] = current_char;
            if (current_char == 'A' || current_char == 'E' || current_char == 'I' || current_char == 'O' || current_char == 'U') {
                vowel[i] = current_char;
            } else {
                cons[i] = current_char;
            }
        } else {
            Nch[i] = current_char;
        }
    }

    cout << "Vowel case: ";
    for (int i = 0; i < n; ++i) {
        if (vowel[i] != '\0') {
            cout << vowel[i] << " ";
        }
    }

    cout << endl << "Consonant case: ";
    for (int i = 0; i < n; ++i) {
        if (cons[i] != '\0') {
            cout << cons[i] << " ";
        }
    }

    cout << endl << "Not a character case: ";
    for (int i = 0; i < n; ++i) {
        if (!isalpha(Nch[i])) {
            cout << Nch[i] << " ";
        }
    }

    return 0;
}
