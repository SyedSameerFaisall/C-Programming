#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}


#include <iostream>
using namespace std;

int main() {
  FILE *filePointer;
  char content[100];
  filePointer = fopen("example.txt","r");
  if (filePointer == NULL){
    printf("Error opening file");
    return 1;
  }


