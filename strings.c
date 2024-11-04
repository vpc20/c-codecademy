#include <stdio.h>
#include <string.h>

int main() {
  char comp[] = {'C', 'o', 'm', 'p', 'u', 't', 'e', 'r', '\0'};
  char compCode[] = "Computer Code";

  printf("%s\n", comp);
  printf("%s\n", compCode);

  //   char p[] = "procezzor";

  //   printf("%c\n", p[2]);

  //   p[5] = 's';
  //   p[6] = 's';
  //   printf("%s", p);

  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";

  for (int i = 0; i < strlen(s); i++) {
    s[i] = '*';
  }
  printf("%s\n", s);

  for (int i = 0; i < strlen(p) / 2; i++) {
    p[i] = '#';
  }
  printf("%s\n", p);

  strcpy(p, "asdfjkl;");
  printf("%s\n", p);

  //-----------------------------------------------------------
  char s1[] = "London";
  char s2[] = " Bridge";

  char n[] = "New";
  char y[] = " York";
  char c[] = " City";

  strcat(s1, s2);
  printf("%s\n", s1);

  strcat(n, y);
  strcat(n, c);

  // strcat(n, strcat(y, c)); incorrect
  printf("%s\n", n);

  // printf("%s\n", strcat(n, strcat(y, c))); // incorrect

  //-----------------------------------------------------------
  char src[] = "banana";
  char dst[7];

  char pan[] = "How vexingly quick daft zebras jump!";
  int len = strlen(pan) + 1;  // add 1 for null char ('\0')
  char dst2[len];

  strcpy(dst, src);

  printf("%s\n", dst);

  strcpy(dst2, pan);

  printf("%s", dst2);
}