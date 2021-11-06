#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

#define FOREVER 1

enum string_code {
    eQuit = 0,
    eButtonPressed = 1,
    eTimerButtonPressed = 2,
    eUpDownButtonPressed = 3,
    eErrorFound = 99,
};

string_code hashit (string const& inString) {
    if (inString == "quit") return eQuit;
    else if (inString == "button") return eButtonPressed;
    else if (inString == "timer") return eTimerButtonPressed;
    else if (inString == "updown") return eUpDownButtonPressed;
    else return eErrorFound;
}

int main()
{
    vector<string> inputV;
    string input;
    
    // char input;

    while (FOREVER)
    {
        // 1 - https://stackoverflow.com/questions/8377660/how-to-cin-values-into-a-vector
        // while ((cin >> input) && input != "") {
        //     inputV.push_back(input);
        // }
        // 1 - https://stackoverflow.com/questions/40234801/c-iterate-through-a-vector-of-strings
        // for (vector<string>::iterator s = inputV.begin(); s != inputV.end(); ++s) {
        //     cout << *s << endl;
        // }
        // inputV.clear();

        // 2 - https://stackoverflow.com/questions/150726/c-having-cin-read-a-return-character
        // getline( cin, input);
        // if (input == "quit") {
        //     return 0;
        // } 
        // else {
        //     cout << input << endl;
        // }

        // 3 - https://stackoverflow.com/questions/650162/why-the-switch-statement-cannot-be-applied-on-strings
    
    getline(cin, input);
    switch (hashit(input)) {
        case eQuit:
            cout << "found quit" << endl;
            return 0;
            break;
        case eButtonPressed:
            cout << "found button" << endl;
            break;
        case eTimerButtonPressed:
            cout << "found timer" << endl;
            break;
        case eUpDownButtonPressed:
            cout << "found updown" << endl;
            break;
        case eErrorFound:
            cout << "found error" << endl;
            break;
    }


///////// NNNNNNEED UNIT FRAMEWORK
    }

    // Should never hit this point
    return -1;
} 

// https://users.rust-lang.org/t/solved-how-to-step-into-std-source-code-when-debugging-in-vs-code/25319/5
// https://github.com/vadimcn/vscode-lldb/blob/master/MANUAL.md#source-path-remapping