//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	// {"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",				30,		0}, 
	{" 🐧 ", "sb-kernel",										1800,		0},
	{"🔔 ", "sb-pacupdate",										1800,		0},
	{"🔉 ", "sb-volume",										1,		0},
 	{"🔋 ", "echo $(cat /sys/class/power_supply/BAT0/capacity)%",					60,		0},
	{"🕖 ", "date '+%d.%m. (%I:%M)%p'   ",								10,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
