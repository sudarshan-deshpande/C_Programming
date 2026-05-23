#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

void count_lines(const char *filename)
{
    int fd = 0;

    fd = open("filename", O_RDONLY);

    if (fd == -1)
    {
        perror("Open");
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesread;
    int lines = 0;

    while ((bytesread = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        for (int i = 0; i < bytesread; i++)
        {
            if (buffer[i] == '\n')
            {
                lines++;
            }
        }
    }

    printf("[Child PID %d] Total Lines : %d\n", getpid(), lines);

    close(fd);
}

void count_words(const char *filename)
{
    int fd = open(filename, O_RDONLY);

    if (fd < 0)
    {
        perror("open");
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;
    int words = 0;
    int inWord = 0;

    while ((bytesRead = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        for (int i = 0; i < bytesRead; i++)
        {
            char ch = buffer[i];

            if (ch == ' ' || ch == '\n' || ch == '\t')
            {
                inWord = 0;
            }
            else if (!inWord)
            {
                words++;
                inWord = 1;
            }
        }
    }

    printf("[Child PID %d] Total Words: %d\n", getpid(), words);

    close(fd);
}

void count_characters(const char *filename)
{
    int fd = open(filename, O_RDONLY);

    if (fd < 0)
    {
        perror("open");
        exit(1);
    }

    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;
    int characters = 0;

    while ((bytesRead = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        characters += bytesRead;
    }

    printf("[Child PID %d] Total Characters: %d\n", getpid(), characters);

    close(fd);
}

int main()
{
    char filename[256];

    printf("Enter filename: ");
    scanf("%255s", filename);

    pid_t pid1, pid2, pid3;

    // Child 1 - Line Count
    pid1 = fork();

    if (pid1 == 0)
    {
        count_lines(filename);
        exit(0);
    }

    // Child 2 - Word Count
    pid2 = fork();

    if (pid2 == 0)
    {
        count_words(filename);
        exit(0);
    }

    // Child 3 - Character Count
    pid3 = fork();

    if (pid3 == 0)
    {
        count_characters(filename);
        exit(0);
    }

    // Parent waits for all children
    wait(NULL);
    wait(NULL);
    wait(NULL);

    printf("\nAll child processes completed.\n");

    return 0;
}