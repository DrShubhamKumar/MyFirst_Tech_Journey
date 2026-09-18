#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    // fork() ek naya child process create karta hai
    pid = fork();

    if (pid < 0) {
        // Agar fork fail ho jaye
        fprintf(stderr, "Fork Failed\n");
        return 1;
    }
    else if (pid == 0) {
        // Child process hamesha 0 return karta hai
        printf("Hello from Child Process!\n");
        printf("Child Process ID: %d\n", getpid());
    }
    else {
        // Parent process ko child ka actual PID milta hai
        printf("Hello from Parent Process!\n");
        printf("Parent Process ID: %d, My Child's ID: %d\n", getpid(), pid);
    }

    return 0;
}