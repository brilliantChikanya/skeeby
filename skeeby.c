#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

#include"skeeby.h"

char *get_string(char s[]) {

char string[100];
int c = 0, i = 0, len = 0;
char *str;

printf("%s ", s);
while (true) {
  c = getchar();
  if (c == '\n') break;
  string[i++] = c;  // assign c to string and increment i
  string[i] = '\0'; // add the null terminator
}
len = strlen(string);
/* There is no need to use len + 1 since we already added
   the null terminator in line 28 above.*/
str = (char*) malloc(sizeof(char) * len);  
strcpy(str, string);

return str;


}
