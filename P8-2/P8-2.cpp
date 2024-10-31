// counts the number of words in given string.  

#include <iostream> 
#include <string> 

using namespace std;  
//functions
int countWords(string str); 


int main(void) { 

    string input;
    while (true) {
        cout << "Enter a string or Q to quit: ";
        getline(cin, input);
        if (input == "Q") break;
        cout << "Word count is " << countWords(input) << endl; 
    }
    return 0;

}


//function definition
int countWords(string str) {

    int count = 0;
    bool word = false;

    for (char ch : str) {
        if (ch != ' ') {
            if (!word) {
                count++;
                word = true;
            }
        }
        else {
            word = false;
        }
    }

    return count;


}