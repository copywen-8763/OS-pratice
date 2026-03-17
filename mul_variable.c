#include "thread.h"

// int x = 0;
//because x is a global variable, it is shared among all threads.
//note that global variables and heap variables are shared among all threads

void Thello(int id) {
//if u put x inside the function, then it will become a local variable
//for different threads, they will all print hello from thread #1
    int x = 0;
    usleep(id * 100000);
    printf("thread #%d\n", id);
    printf("Hello from thread #%c\n", "123456789ABCDEF"[x++]);
 
}


int main() {
  for (int i = 0; i < 10; i++) {
    create(Thello);
  }
}
