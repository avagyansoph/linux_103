#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string>

typedef struct msg_buffer {
	long msg_type;
	string msg_text;
} message_t;

int main()
{
	key_t key = ftok("progfile", 65);
	int msgid = msgget(key, 0666 | IPC_CREAT);
 
	int bytes_count = msgrcv(msgid, &PING, sizeof(PING), 1, 0);
        if(bytes_count != -1){
            printf(" %s \n", PING.msg_text);
            message_t PONG;
            PONG.msg_type = 1;
            PONG.msg_type = "PONG";
            msgsnd(msgid, &PONG, sizeof(PONG), 0);
            sleep(2);
        }

	return 0;
}
