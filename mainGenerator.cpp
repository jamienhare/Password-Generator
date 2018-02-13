//Jamie Hare

//libraries
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int findFrequency(vector<char> subset, string input){
    count = 0;
    for(int i = 0; i < input.size(); ++i){
        for(int n = 0; n < subset.size(); ++n){
            if(string.at(i) == input.at(n)){
                ++count;
            }
        }
    }
    return count;
}

string passwordInsert(int count, int position, string password){
    password = password.substr(0, position - 1) + count + password.substr(position);
    return password;
}

int main(){

    char letter;
    vector<char> subset1;
    vector<char> subset2;
    vector<char> subset3;
    string input;
    string password;

    cout << "Please enter a first subset alphabet: ";
    for(cin >> letter){
        subset1.push_back(letter);
    }

    cout << "Please enter a second subset alphabet: ";
    for(cin >> letter){
        subset1.push_back(letter);
    }

    cout << "Please enter a third subset alphabet: ";
    for(cin >> letter){
        subset1.push_back(letter);
    }

    cout << "Please enter a 2 word phrase associated with website: ";
    getline(cin, input)

    for(int i = 0; i < 3; ++i){
        int count = findFrequency(subset + i, input);
        password = passwordInsert(count, 4, input);
    }

    cout << "Password Generated: " << password;

}
