// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                                        /*Update Interval*/ /*Update Signal*/
    {"BAT: ", "acpi | awk -F '[ ,%]+' '{print $4 \"%\"}'",       30,                  0},
    {"VOL: ", "pamixer --get-volume-human",                       0,                   10},
    {"",      "date '+%b %d (%a) %H:%M'",                        60,                  0},
    // CHANGED: Update interval increased from 5 to 30 seconds
    {"",      "/home/bread/.local/suckless/bin/sb-wifi",         30,                  5}, 
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
// CRITICAL FIX 2: Corrected length for " | " is 3 (space, pipe, space).
static unsigned int delimLen = 3;
