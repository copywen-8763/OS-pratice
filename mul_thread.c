#include"thread.h"


void Ta(){while(1) printf("A");}
void Tb(){while(1) printf("B");}

int main() {
  create(Ta);
  create(Tb);
  return 0;
}

//compie with -lpthread

/*we can see that the output is a mixture of A and B,
 which means that the two threads are running concurrently.
*/