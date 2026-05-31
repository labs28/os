#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

struct msg {
    long type;
    char text[20];
};

int main() {
    int id = msgget(1234, 0666 | IPC_CREAT);

    struct msg m = {1, "Hello"};

    msgsnd(id, &m, sizeof(m.text), 0);
    msgrcv(id, &m, sizeof(m.text), 1, 0);

    printf("%s\n", m.text);

    return 0;
}
