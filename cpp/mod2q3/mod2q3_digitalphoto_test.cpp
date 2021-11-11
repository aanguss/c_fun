#include "mod2q3_digitalphoto.cpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h> // https://chromium.googlesource.com/external/github.com/google/googletest/+/refs/tags/release-1.8.0/googlemock/docs/ForDummies.md


// string fake_input(std::istream& input)
// {
//     string value;
//     // std::cout << "Enter a number: ";
//     input >> value;
//     return value;
// }

TEST(Mod2Test, CreateObject) 
{
    Mod2::DigitalPhoto dp;
}

TEST(Mod2Test, CheckMenuCout) {
    
    testing::internal::CaptureStdout();
    Mod2::DigitalPhoto dp;
    // stringstream fakeInput = "";
    // stringstream fake_input("");
    // dp.startMenuInput(fake_input(""));
    // string fakeIn = "";
    // string fakeIn = "";
    // istream fakeInput = &fakeIn;
    // fakeInput << fakeIn;
    // dp.startMenuInput(fakeInput);
    dp.startMenu();
    string output = testing::internal::GetCapturedStdout();
    cout << "Found output = " << output;
    ASSERT_EQ(output, "Menu:\n");
}

TEST(Mod2Test, CheckMenuPressEnter) {
    testing::internal::CaptureStdout();
    Mod2::DigitalPhoto dp;
    // stringstream fakeInput = "q";
    // stringstream fake_input("q");
    // string fakeInput = "q";
    // dp.startMenuInput(fake_input("q"));
    // string fakeIn = "q";
    // string fakeIn = "q"
    // istream fakeInput;
    // (*stream) >> fakeIn;
    // fakeInput << fakeIn;
    // fakeInput = "q";

    // string fakestring = "";
    // // istream stream = istringstream();
    // unique_ptr<istream> stream;
    // stream = make_unique<istringstream>(istringstream{});

    // dp.startMenuInput(stream);


    string fakestring = "";
    unique_ptr<istream> stream;
    stream = make_unique<stringstream>(istringstream{});
    

    (*stream) >> fakestring;
    startMenuInput(stream);

    std::string output = testing::internal::GetCapturedStdout();
    cout << "Found output = " << output;
    ASSERT_EQ(output, "Menu:\nMenu:\n");
}

// TEST(Mod2Test, CheckMenuPressQ) {
//     testing::internal::CaptureStdout();
//     Mod2::DigitalPhoto dp;
//     dp.startMenu();
//     std::string output = testing::internal::GetCapturedStdout();
//     ASSERT_EQ(output, "Menu:");
// }


int main(int argc, char **argv) 
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}


// : Define the basic functionalities of the device 
// The digital photo frame / ambient display may be stand alone device or wirelessly connected device.
// In a stand-alone device, content is stored in pendrive / SSD or internal FLASH storage of the device.
// The display can be in a menu mode where the user may be uploading contents or setting some control parameters (Such as clock, calendar, display brightness.contrast etc.)
// Or it can be in a displaying mode where it reads contents (based on some event logic) from its storage and rendering it on the screen.
// Its sensors may be detecting presence, ambient light etc. which can be input to the event logic.
// The display will have an RTC that drives a calendar which is also an input to the logic
// In a connected ambient display device, the wireless connection may trigger the UI actions remotely for settings in addition to content being uploaded wirelessly.
// More often, the display device may have a built in client application that can pull content from remote servers (Such as music, videos, news, weather etc. These actions can be triggered by calendar
// Triggers can also arrive from server push notifications and feeds
// Step2: Identify the computing requirements and power budget for each of the active functionalities
// The control operations are I/O intensive (UI buttons in stand alone device and Wireless requests in connected device)
// The content reading and rendering are Block I.O operations which change at a pre-configured frequency in granularity of minutes
// Sensor inputs are either periodic interrupts (ex. Timer) or sporadic (as in presence sensor) or polled periodically (as ambient light sensor)
// The only computationally intense part is decoding the Multimedia content. 
// Step 3: Identify the duty cycles for all the above operation bursts.
// Some duty cycles would be natural and others could be synthetically decided by the design.
// Also identify the computing dependency chains. Computational sections can be following a bunch of I/O events. 
// Decide foreground and background activities. Background activities can be tied to low priority tasks or interrupts.
// Step 4: Decide on the HW Blocks that are involved in foreground and background activities as well as idle situations
// Estimate the clock rates configurations for the HW blocks that are involved
// Estimate the wake up time delays when a HW block is powered down. This should include clock settling times and state restoration.
// Step 7: Based on the above, design the wake up events / intervals 
// Step 8: Write APIS for each module to be put into sleep and to be woken up.
// Step 9: Anchor the calls to the APIs to appropriate scheduler hooks (idle loop/task, timeout handlers etc.)
// Step 10: Profile the SW for energy footprint in various scenarios and refine the policies and fine tune the timer intervals
