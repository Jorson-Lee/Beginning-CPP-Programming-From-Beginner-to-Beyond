// section 10
// challenge -
// substitution cipher

/*
a simple and very old method of sending secret messages is the substitution cipher.
you might have used this cipher with your friends when you were a kid.
basically, each letter of the alphabet gets replaced by another letter of the alphabet.
for example, every 'a' get replaced with an 'x', and every 'b' gets replaced with a 'z', etc.

write a program thats ask a user to enter a secret message.

encrypt this message using the substitution cipher and display the encrypted message.
then decryped the encrypted message back to the original message.

you may use the 2 strings below for  your subsitition.
for example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

to decrypt you can replace the character at position n in key
with the character at position n in alphabet.

have fun! and make the cipher stronger if you wish!
currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
this could also be improved.

remember, the less code you write the less code you have to test!
reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>
using namespace std;
int main() {

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message;
    int choice = 0;
    while (choice != -1) {
        cout << "Choose a function : \n1.Encryption\n2.Decryption\n-1.Exit\n";
        cin >> choice;
        cin.ignore();
        if (choice == -1) {
            break;
        } else if (choice == 1) {
            cout << "Enter your message: ";
            getline(cin, message);
            string encrypted_message;
            for (char c : message) {
                size_t position = alphabet.find(c);
                if (position != string::npos) {
                    encrypted_message += key.at(position);
                } else {
                    encrypted_message += c;
                }
            }
            cout << "Your encrypted message is :" << encrypted_message;
            cout << endl;
        } else if (choice == 2) {
            cout << "Enter your encrypted message: ";
            getline(cin, message);
            string decrypted_message;
            for (char c : message) {
                size_t position = key.find(c);
                if (position != string::npos) {
                    decrypted_message += alphabet.at(position);
                } else {
                    decrypted_message += c;
                }
            }
            cout << "Your decrypted message is: " << decrypted_message;
            cout << endl;
        } else {
            cout << "Not a valid option!" << endl;
        }
        cout << string(10, '-') << endl;
    }
    return 0;
}
