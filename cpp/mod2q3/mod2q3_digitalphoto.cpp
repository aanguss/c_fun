#include <iostream>
#include <vector>
#include <string>
#include <array>
// #include <gtest/gtest.h>

using namespace std;

namespace Mod2 {
    class DigitalPhoto //:public::testing::gtest
    {
    private:
        /* data */
    public:
        DigitalPhoto(/* args */);
        ~DigitalPhoto();
        // int startMenu(istream &input);
        int startMenu(void);
        int startMenuInput(istream &std_input);
    };
    
    DigitalPhoto::DigitalPhoto(/* args */)
    {
    }
    
    DigitalPhoto::~DigitalPhoto()
    {
    }

    // https://stackoverflow.com/questions/47664294/use-googletest-with-a-function-that-gets-input-from-user-via-stdcin
    // int DigitalPhoto::startMenu(istream &std_input) {
    int DigitalPhoto::startMenu(void) {        
        
        string fakestring = "";
        unique_ptr<istream> stream;
        stream = make_unique<stringstream>(istringstream{});

        (*stream) >> fakestring;
        startMenuInput(stream);

        return 0;
    }

    int DigitalPhoto::startMenuInput(istream &std_input) {
        string input;

        // while(1) {
            cout << "Menu:\n";
            // getline(cin, input);
            std_input >> input;
            if (input == "q") {
                // break;
                cout << "Menu:\n";
            }
        // }
        return 0;
    }
}

int digitalPhotoMain(int argc, char **argv) {
    return 0;
}