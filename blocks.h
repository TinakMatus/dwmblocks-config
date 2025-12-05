// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                                        /*Update Interval*/ /*Update Signal*/
    
    // 1. Battery
    {"BAT: ", "acpi | awk -F '[ ,%]+' '{print $4 \"%\"}'",       30,                  0},

    // 2. Volume (Signal 10)
    {"VOL: ", "pamixer --get-volume-human",                       0,                   10},
    
    // 3. Date
    {"",      "date '+%b %d (%a) %H:%M'",                        60,                  0},

    // 4. Wi-Fi (Signal 5)
    {"",      "/home/bread/.local/suckless/bin/sb-wifi",         30,                  5},

    // 5. Bluetooth (Signal 7) - ADD THIS LINE
    {"",      "/home/bread/.local/suckless/bin/sb-bluetooth",     5,                  7},
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 3;
