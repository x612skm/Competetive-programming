#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/socket.h>
#include<sys/un.h>
#include<sys/types.h>
#define PORT 8080
#define MAX 2048
#define SERVER		"/tmp/aa"
#define SA struct sockaddr


//function that actually communicates with server
void func(int sockfd)
{
	char buffer[MAX];
	ssize_t a,b;
	//for the infinite chating process
	for(;;)
	{
		memset(buffer, '\0', MAX);
		write(0,"\nEnter a String: ", 16);//entering the valid string
		a = read(1, buffer, MAX);
		if(strncmp("exit", buffer, 4) == 0) break;
		//writing client message to server
		b = write(sockfd, buffer, a);
		if(b == -1)//e
		{
			perror("write");
			exit(0);
		}
		//clear the buffer
		memset(buffer, '\0', MAX);
		//reading again
		//reading from server
		a = read(sockfd, buffer, MAX);
		
		if(a == -1)
		{
			perror("read");
			exit(0);
		}
		
		write(0, "Recieved form server-> ", 23);
		b = write(0, buffer, a);
		
		if(b == -1)
		{
			perror("write-2");
			exit(0);
		}
		
	}
}



//Derived Function
int main()
{
	int scv, n;
	socklen_t length;
	struct sockaddr_un addServ;
	
	//create and verify {socket}
	scv = socket(PF_FILE, SOCK_STREAM, 0);
	if(scv == -1)//e
	{
		perror("socket creation failed...! ");
		exit(1);
	}
	else//!e
		printf("Socket successfully created..!\n");
	bzero(&addServ, sizeof(addServ));
	
	
	//PORT , aSSIGN IP
	addServ.sun_family = AF_UNIX;
	strncpy(addServ.sun_path, SERVER, sizeof(addServ.sun_path));
	length = SUN_LEN(&addServ);
	

	
	//client to server {socket}
	n = connect(scv, (SA*)&addServ, length);
	if (n == -1)//e
	{
		perror("connection with server failed.. ");
		exit(0);
	}
	else //!e
		printf("Connected to the server..\n");



	//function for chat
	func(scv);
	//close the socket
	close(scv);
}
