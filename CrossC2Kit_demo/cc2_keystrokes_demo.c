#include <stdio.h>

// Function: crossc2_entry
// Purpose: This function is the entry point for the CrossC2 keystrokes demo.
// It prints the command line arguments and simulates user keyboard input.
int crossc2_entry(int argc, char **argv) {
    // Print the number of command line arguments
    printf("into crossc2_entry():\n");
    printf("\t-> argc = %d\n", argc);

    // Print each command line argument
    for (int i = 0; i < argc; ++i) {
        printf("\t->%s\n", argv[i]);
    }

    // Simulate user keyboard input
    printf("test demo\n");
    printf("User keyboard input: ssh root@10.14.11.32\n");
    printf("test_username\n");
    printf("pwd_123467aaa\n");
    printf("ifconfig\n");
    printf("[Ctrl-D]\n");

    return 1;
}
