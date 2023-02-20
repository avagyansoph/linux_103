
// C Program for Message Queue (Sender Process)
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
  
    message_t PING;
    PING.msg_type = 1;
    PING.msg_text = "PING";
	msgsnd(msgid, &PING, sizeof(PING), 0);

    sleep(2);
    
    int bytes_count = msgrcv(msgid, &PONG, sizeof(PONG), 1, 0);
    if(bytes_count != -1){
        printf(" %s \n", PONG.msg_text);
        msgsnd(msgid, &PING, sizeof(PING), 0);
        sleep(2);
    }
	



	return 0;
}
