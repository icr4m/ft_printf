
# 🖨️ FT PRINTF 🖨️

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
```
int main()
{
    int fd;
    char *line;
    int ret;

    fd = open("example.txt", O_RDONLY);
    if (fd == -1)
        return (1);
    while ((ret = get_next_line(fd, &line)) > 0)
    {
        printf("%s\n", line);
        free(line);
    }
    if (ret == -1)
        printf("Error reading the file\n");
    close(fd);
    return (0);
}
```