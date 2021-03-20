#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);
    print_str("Kernel loaded! Running in 64-bit mode.");
    print_newline();
    
    // print_newline();
    // print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);

    // for (int i = 1; i < 9; ++i) {
    //     for (int j = 20-(i*i); j < 20; ++j) {
    //         print_str("-");
    //     }
    //     print_str("\\");
    //     print_newline();
    // }

    // print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);
    // print_str(" Welcome, Aaditya. > RED/OS ----------------------------------- <");
    // print_newline();
    // print_set_color(PRINT_COLOR_GREEN, PRINT_COLOR_BLACK);

    // for (int i = 8; i > 0; --i) {
    //     for (int j = 20-(i*i); j < 20; ++j) {
    //         print_str("-");
    //     }
    //     print_str("/");
    //     print_newline();
    // }

    print_str("Welcome, to ");
    print_newline();
    print_newline();
    print_set_color(PRINT_COLOR_RED, PRINT_COLOR_BLACK);

    print_str("    ____  __________     ____  _____"); print_newline();   
    print_str("   / __ \\/ ____/ __ \\   / __ \\/ ___/"); print_newline();   
    print_str("  / /_/ / __/ / / / /  / / / /\\__ \\ "); print_newline();   
    print_str(" / _, _/ /___/ /_/ /  / /_/ /___/ / "); print_newline();    
    print_str("/_/ |_/_____/_____/   \\____//____/  "); print_newline();  
}
