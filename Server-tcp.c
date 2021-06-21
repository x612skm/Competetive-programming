
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/un.h>
#define MAX 2048
#define SA struct sockaddr
#define PATH    "/tmp/aa"
#define PORT 8080

//Function designed chat {client, server}
void func1(int sockfd)
{
	char buffer[MAX], buffer_2[MAX];
	int len, i;
	//infinite loop to chat
	for (;;)
	{
		memset(buffer, '\0', MAX);
		
		//read client message => copy => in buffer
		read(sockfd, buffer, sizeof(buffer));
		//EXIT => server Exit => chat ends
		if(strncmp("exit\n", buffer, 5) == 0)
		{
			printf("\nEXIT!!!...=> \n");
			break;
		}
		write(0,"\nFrom Client :=> \n", 14);
		write(0, buffer, sizeof(buffer));
	
		
		memset(buffer_2, '\0', MAX);
		len = sizeof(buffer);
		for (i = len - 1; i>=0; i--)
		{

			buffer_2[len - i - 1] = buffer[i];
		}
		write(0,"To Client :=> ", 12);
		write(0, buffer_2, sizeof(buffer_2));
		write(sockfd, buffer_2, sizeof(buffer_2));
		
		
	}
}



//Driver Function
int main()
{
	int dSocket, connfd, n;
	socklen_t addr_len;
	struct sockaddr_un addrServa, client;
	//removing stale socket, if any from previous run
	n = unlink(PATH);
	if(n== -1)
	{
		perror("unlink...");
	}
	printf("pid=%u\n",getpid());
	//socket {create, verify}
	dSocket = socket(PF_LOCAL, SOCK_STREAM, 0);
	if(dSocket == -1)//{error}
	{
		printf("socket creation failed... :(\n");
		exit(1);
	}
	else//{no error}
		printf("Socket successfully created... :)\n");
		
	printf("Socket descriptor = %u\n", dSocket);
	
	umask(0000);
	n = fchmod(dSocket, 0707);
	if(n == -1)
	{
		perror("chmod");
	}
	
	
	//assigning IP, PORT
	addrServa.sun_family = AF_UNIX;
	
	strncpy(addrServa.sun_path, PATH, sizeof(addrServa.sun_path));
	
	addr_len = SUN_LEN(&addrServa);
	
	int opt = 1;
	if (setsockopt(dSocket, SOL_SOCKET, SO_REUSEADDR, (char *)&opt, sizeof(opt)) < 0)
	{
		perror("setsockopt");exit(EXIT_FAILURE);
	}
	
	//Binding newly created socket to given IP and verification
	n = bind(dSocket, (SA*)&addrServa, addr_len);

	if (n == -1)
	{
		perror("socket bind failed...\n");
		exit(1);
	}
	else
        printf("Socket successfully binded..\n");
  
	
	POINT_A:
	// Now server is ready to listen and verification
	if((listen(dSocket, 5)) == -1)
	{
		printf("Listen failed..!\n");//error code for failure
		sleep(1000);
		goto POINT_A;
		
	}
	else 
		printf("Server listening..!\n");
		
		
	//Accept the data packet from client and verification
	connfd = accept(dSocket, (SA*)&client, &addr_len);
	if(connfd == -1)
	{
		perror("server acccept failed... :( ");
		goto POINT_A;
		
	}
	else 
		printf("server acccept the client... :)\n");

	//fucntion to chat between client and server
	func1(connfd);
	//chat complet close the socket
	close(connfd);
	//returning {check}
	goto POINT_A;
		
	
	
		
}
