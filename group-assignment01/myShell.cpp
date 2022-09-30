// Group16: Abdul Tareq Khaliq, Haroon Mohammed Hussein, Matthew Mendoza,
//  Mueed Khalid, Ronaldo Ramirez, Sam Lam, and Rachel Mao
/* Interactive Shell:
Write a C/C++ program to implement an interactive shell in which users can
execute commands. Call this program myShell. Create an infinite loop (while(1))
that repeatedly prompts the user to enter a command (see example output and
input below). Consider using fgets() to read a line of input from the user.
Before executing the command entered by the user, the command must be compared
against the list of supported commands shown here: dir, help, vol, path,
tasklist, notepad, echo, color, ping

Since some commands require more than one argument (e.g. echo, color, ping),
you will need to parse the user input into its arguments.
Consider using the strtok() function
*/

/* standard library */
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // For strtok() and strcmp()
#include <sys/stat.h>
#include <sys/types.h>
/* GNU library for process */
#include <unistd.h> // For fork(), pid_t

int main(int argc, char const *argv[])
{
    printf("Welcome to myShell! Type 'help' for a list of commands. Type 'exit' to exit myShell. \n");
    return 0;
}


