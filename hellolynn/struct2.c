#include <stdio.h>
 
struct student{
  int age;
  char name[10];
};
 
student newone(){
  student one = {23, {'L', 'Y', 'N', 'N', '\0'}};
  return one;
};
 
int main(){
  student lynn = newone();
  printf("%d \n", lynn.age);
  printf("%s \n", lynn.name);
  return 0;
}