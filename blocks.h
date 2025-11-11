// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/    /*Command*/                                       /*Update Interval*/ /*Update Signal*/
    {"BAT: ", "acpi | awk -F '[ ,%]+' '{print $4 \"%\"}'",      30,                 0},
    {"VOL: ", "pamixer --get-volume-human",                      0,                 10},
    {"",      "date '+%b %d (%a) %H:%M'",                       60,                 0},
};

// sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
