#include <stdio.h>
#include <errno.h>

int main() {
  FILE *file = fopen("File.txt", "r");

    if (file == NULL) {
        switch (errno) {
            case ENOENT:
                printf("No such file or directory.\n");
                break;
            case EACCES:
                printf("Permission denied.\n");
                break;
            case ENOMEM:
                printf("Not enough memory.\n");
                break;
            case EINVAL:
                printf("Invalid argument.\n");
                break;
            default:
                printf("Error for other reason.\n");
                break;
        }
        return 1;
    }

  fclose(file);
  
  return 0;
}