#include <iostream>
#include <vector>
#include <string>
#include <array>

// using namespace std;

int main()
{
    // string msg = "hello,world";
    // vector<string> vct;
    // size_t pos = msg.find(',');
    // if(pos != string::npos) {
    //     ++pos;
    //     vct.push_back(msg.substr(0,pos));
    //     vct.push_back(msg.substr(pos));
    //     cout << vct[0] << '\n' << vct[1] << '\n';
    // } else {
    //     cout << "\nNo commas in your string\n";
    // }


    // for (int i = 0; i < 20; i++) {
    //     cout << "i = " << i;
    // } 

    // std::vector<std::string> stringArray {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    // std::array<std::string, 4> colour { "Blue", "Red", "Orange",
    //                                  "Yellow" };

    // for (const std::string& word : stringArray)
    // {
    //     std::cout << word << " ";
    // }


    // std::cout << std::endl;

    // return 0;


    // Initialize array
    std::array<std::string, 4> colour { "Blue", "Red", "Orange",
                                     "Yellow" };
 
    // Printing Strings stored in array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
 
    return 0;  // https://users.rust-lang.org/t/solved-how-to-step-into-std-source-code-when-debugging-in-vs-code/25319/5
} // https://github.com/vadimcn/vscode-lldb/blob/master/MANUAL.md#source-path-remapping