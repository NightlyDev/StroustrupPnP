//write a letter
#include "../../std_lib_facilities.h"

int main() {
    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string first_name {""};
    cin >> first_name;  // reads the first name of the recipient

    cout << "Dear " << first_name << ",\n";

    cout << "How are you? I am fine. I miss meeting my friends at the uni campus because there is a weird virus going around right now. \n";
    cout << "I hope that you will be fine during this pandemic, considering that we don't know what repurcussions this virus has once you've been sick. \n";
    cout << "(Enter a friends name you want to ask about):\n";

    string friend_name {""};
    cin >> friend_name; // reads the name of the friend of the recipient

    cout << "Have you seen " << friend_name << " lately?\n";

    cout << "(Enter the friends sex [f/m]):\n";
    char friend_sex {0};
    cin >> friend_sex;
    string pronoun {"nothing"};
    if (friend_sex == 'm') {    // checks for the friends sex and assigns the right pronoun
        pronoun = "him";
    } else if (friend_sex == 'f') {
        pronoun = "her";
    }

    cout << "If you see " << friend_name << " please ask " << pronoun << " to call me.\n";

    cout << "(Enter the age of the receipient):\n";
    int age {0};
    cin >> age;
    if (age <= 0 || age >= 110) {   // handles an unbelievable age and if applicable adds another special sentence
        simple_error("you're kidding!");
    } else if (age < 12) {
        cout << "Next year you will be " << age+1 << '\n'; 
    } else if (age == 17) {
        cout << "Next year you will be able to vote.\n";
    } else if (age >= 70) {
        cout << "I hope you are enjoying your retirement.\n";
    }

    cout << "Yours sincerly,\n\nAlexander\n";
}