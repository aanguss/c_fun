#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <array>

using namespace std;

class Regs {
    // It is a 32 bit register
    // Bits 28-31 are reserved
    // Bits 27-24 are mutually exclusive with bits 3-0 respectively
    // Bits 15-14 are reserved.

    public:
    uint32_t val;
    Regs(uint32_t input) {
        val = input;
    }
    Regs() {
        val = 0;
    }
    ~Regs() {

    }

    void printVal() {
        cout << "val = 0x" << setfill('0') << setw(8) << hex << val << endl;
    }

    void setOneHigh(uint8_t bit) {
        if (bit == 14 || bit == 15 || bit == 28 || bit == 29 || bit == 30 || bit == 31) {
            cout << "found reserved bit - skipping bit #" << bit << endl;
        } else {
            val = val | (1 << bit);
        }
    }

    void setOneLow(uint8_t bit) {
        if (bit == 14 || bit == 15 || bit == 28 || bit == 29 || bit == 30 || bit == 31) {
            cout << "found reserved bit - skipping bit #" << bit << endl;
        } else {
            // cout << "setting one low - bit #" << bit << endl;
            // cout << "starting value: " << val << endl;
            // cout << ~(1 << bit) << endl;
            // cout << ~val << endl;
            // cout << ~(val | ~(1 << bit)) << endl;
            // cout << "0x" << setfill('0') << setw(8) << hex << (val & ~(1 << bit)) << endl;
            val = (val & ~(1 << bit));
        }
    }


};

int main(int argc, char **argv) {

    // cout << "Found this: " << argc;
    // for (int i = 0; i < argc; i++) {
    //     cout << "Arg #" << i << " = " << argv[i] << endl;
    // }

    // double dPointer = 0;
    // int iPointer = 0;
    // uint32_t uiPointer = 0;

    // cout << "&dPointer: " << &dPointer << " = 0x" << setfill('0') << setw(16) << hex << dPointer << endl;
    // cout << "&iPointer: " << &iPointer << " = 0x" << setfill('0') << setw(16) << hex << iPointer << endl;
    // cout << "&uiPointer: " << &uiPointer << " = 0x" << setfill('0') << setw(16) << hex << uiPointer << endl;

    // dPointer = 1 << 31;
    // uiPointer = 1 << 31;

    // cout << "&dPointer: " << &dPointer << " = 0x" << setfill('0') << setw(16) << hex << dPointer << endl;
    // cout << "&uiPointer: " << &uiPointer << " = 0x" << setfill('0') << setw(16) << hex << uiPointer << endl;

    Regs reg;
    cout << reg.val << endl;
    // uint32_t fake_register = 0;
    // uint32_t input_value = 0;
    // reg.setOneHigh(14);
    // reg.printVal();
    reg.setOneHigh(16);
    reg.printVal();
    reg.setOneHigh(20);
    reg.printVal();
    reg.setOneLow(20);
    reg.printVal();
    return 0;
}