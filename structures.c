#include <stdio.h>

int main(void) {
  struct Person {
    char firstName[25];
    char lastName[40];
    int age;
  };

  struct Person person1 = {"Ada", "Lovelace", 28};
  struct Person person2 = {"Marie", "Curie", 44};

  struct Table {
    int length;
    int width;
    int height;
    char color[20];
  };

  struct Table table1 = {24, 24, 20, "Dark Brown"};
  struct Table table2 = {42, 18, 32, "Matte Black"};
}