
#include <dirent.h> // for opendir
#include <stdio.h> // for printf, NULL

int main() {
    // step1: open current directory
    // step2: walk through all the files
        // step2.1: print the file name
    DIR* d;
    // `.` is equivalent to current directory full path. ex: /home/gbhat/cs_discussions/os/lab/01-unix-commands
    d = opendir(".");
    struct dirent* de;
    while((de = readdir(d)) != NULL) {
        printf("%s \t", de->d_name);
    }
}