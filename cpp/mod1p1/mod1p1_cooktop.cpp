#include <iostream>
#include <vector>
#include <string>
#include <array>

using namespace std;

#define FOREVER 1
// https://softwareengineering.stackexchange.com/questions/260183/in-tdd-should-i-have-to-write-test-first-or-interface-first?newreg=94ab41824629433e96eb1d9e8104a0ed
// https://www.geeksforgeeks.org/c-classes-and-objects/
namespace Mod1 {
    using namespace std;
    class P1_cooktop {
        // protected
        public:
        
        // Needed variables for class object
        enum string_code {
            eQuit = 0,
            eButtonPressed = 1,
            eTimerButtonPressed = 2,
            eUpDownButtonPressed = 3,
            eErrorFound = 99,
        };


        // vector<string> inputV;
        string input;

        string_code hashit (string const& inString) {
            if (inString == "quit") return eQuit;
            else if (inString == "button") return eButtonPressed;
            else if (inString == "timer") return eTimerButtonPressed;
            else if (inString == "updown") return eUpDownButtonPressed;
            else return eErrorFound;
        }

        // public:
        P1_cooktop() {
            
        }

        // ~p1_cooktop() override {

        // }

        int getInput(void) {
            getline(cin, input);
            switch (hashit(input)) {
                case eQuit:
                    cout << "found quit" << endl;
                    return -1;
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
            return 0;
        }

    };

}



int consoleMain(int argc, char **argv)
{
    // Md1::P1_cooktop p1;
    Mod1::P1_cooktop p1;

    while (FOREVER)
    {
        if (p1.getInput() != 0) return 0;

///////// NNNNNNEED UNIT FRAMEWORK
    }

    // Should never hit this point
    return -1;
} 

// https://users.rust-lang.org/t/solved-how-to-step-into-std-source-code-when-debugging-in-vs-code/25319/5
// https://github.com/vadimcn/vscode-lldb/blob/master/MANUAL.md#source-path-remapping