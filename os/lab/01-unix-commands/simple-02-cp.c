#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char* argv[]) {
    ssize_t bytes_read, bytes_written;
    char buffer[8192];

    int input_fd, output_fd;

    input_fd = open(argv[1], O_RDONLY);
    output_fd = open(argv[2], O_WRONLY | O_CREAT, 0644);

    while ((bytes_read = read(input_fd, &buffer, 8192)) > 0) {
        bytes_written = write(output_fd, &buffer, (ssize_t)bytes_read);
    }

    close(input_fd);
    close(output_fd);
}