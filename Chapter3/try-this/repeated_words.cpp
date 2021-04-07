#include "../../std_lib_facilities.h"

int main() {
    string previous = " ";      // previous word; initialized to "not a word"
    string current;                 // current word
    while (cin >> current) {        // read a stream of words
        if (previous == current)    //check if the word is the same as last
            cout << "repeated word: " << current << "\n";
        previous = current;
    } 
}

/*
With the sentence
    She she laughed He He He because what he did did not look very very good good
the program finds 5 repetitions. Reason being that the == operator in the
if-statement is case-sensitive and thus She and she is not equal.

Therefore the definition of a "repeated word" is a word that comes atleast twice
in a row and is case-sensitive the same!
*/
