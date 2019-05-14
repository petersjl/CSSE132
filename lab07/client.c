/*
 * CSSE 132
 * Rose-Hulman Institute of Technology
 * Computer Science and Software Engineering
 *
 * client.c - Source file for the "thin client" you make in this lab.
 *            This program will connect to a server specified and let
 *            you issue commands.
 *
 *            This is a file you need to hand in!
 *
 * This file contains code used by labs in the CSSE 132 class.
 * When you edit this file for class, be sure to put your name(s) here!
 *
 * Edited by
 * NAMES: Joe Peters and Stephen Payne
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

/**
 * Connects to a server, handles interactions, then returns on disconnect.
 *
 * @param address: a string representing the server's address
 * @param port: the port to connect
 */
void
do_connect_to_server(const char* address, int port)
{
  // TODO: create a new socket using the address in the argument "address".
  //       If any part of the connection fails, return from this function.
  int sock;
  struct sockaddr_in addr;
  // 1. Create the socket
  memset(&addr, 0, sizeof(addr));   //zero out
  addr.sin_family = AF_INET;
  addr.sin_addr.s_addr = inet_addr(address);
  addr.sin_port = htons(port);
  sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if(sock == -1)return;
  // 2. Set the server address 
  //    Hint: convert the argument from string to address using "inet_addr(address)"
  // 3. Connect to the server and run the loop.
  if(0 != connect(sock, (struct sockaddr*) &addr, sizeof(addr))){
    printf("ERROR: Could not connect to server\n");
    return;
  }
  char tosend[512];
  char received[512];
  int bytes = 0;

  // runloop 
  for (;;) {
    // Hint: if you receive zero bytes from the server, it dropped your connection.
    // 1. read data from server (don't forget to null-terminate 
    //    the string after receiving it).
    // 2. show it to the user.
    // 3. read a line of input from the user.
    // 4. send input to the server.
    bytes = recv(sock, received, 511, 0);
    if(bytes == 0) break;
    received[bytes] = '\0';
    printf("%s", received);
    fgets(tosend, 512, stdin);
    send(sock, tosend, strlen(tosend), 0);
  }

  // 5. disconnect
  shutdown(sock, SHUT_RDWR);
  close(sock);
  return;
}

/**
 * Runloop that accepts commands from the user and prints out results.
 *
 * Commands to implement:
 *
 * q - quits the program.
 *
 * c - connects to a remote server.  After connected, all lines of input get
 *     sent to the server.
 *
 * If given a command that doesn't match one in this list, print "help" to show
 * what commands are available.
 */
void
handleLocalInput()
{
  const char* instructions = "(c)onnect or (q)uit";
  char buf[512];
  char buf2[512];

  // loop forever
  for( ;; ) {
    printf("(Local)> ");

    // read input
    fgets(buf, 512, stdin);

    // check to make sure the instruction is not a blank line
    if(strlen(buf) < 1) {
      printf("Invalid instruction.\n");
      printf(" %s\n", instructions);
      continue;
    }

    // select instruction to run
    switch(buf[0]) {
    case 'q':
    case 'x':
      return;

    case 'c': // CONNECT
      // TODO: implement this
      // 1. prompt for the address and port.
      // 2. call do_connect_to_server.
      printf("      address? ");
      fgets(buf, 512, stdin);
      buf[strlen(buf) - 1] = '\0';
      printf("      port?    ");
      fgets(buf2, 512, stdin);
      buf2[strlen(buf2) - 1] = '\0';
      do_connect_to_server(buf, atoi(buf2));
      break;

    default:
      printf("Invalid instruction.\n");
      printf(" %s\n", instructions);
      continue;
    }
  }
}

int
main(int argc, char** argv)
{
  // Uncomment the next line when you've implemented this function.
  handleLocalInput();

  return 0;
}
