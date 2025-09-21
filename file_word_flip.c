#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char *start, char *end) {
 while (start < end) {
 char temp = *start;
 *start++ = *end;
 *end-- = temp;
 }
}
int main() {
 FILE *fp = fopen("input.txt", "r+");
 if (!fp) return 1;
 fseek(fp, 0, SEEK_END);
 int size = ftell(fp);
 rewind(fp);
 char *buffer = calloc(size + 1, 1);
 fread(buffer, 1, size, fp);
 char *word_start = NULL;
 for (int i = 0; buffer[i]; i++) {
 if ((buffer[i] != ' ' && buffer[i] != '\n') && word_start == NULL) {
 word_start = &buffer[i];
 }
 if ((buffer[i] == ' ' || buffer[i] == '\n' || buffer[i+1] == '\0') &&
word_start) {
 reverse(word_start, &buffer[i - (buffer[i] == ' ' || buffer[i] == '\n' ? 1 :
0)]);
 word_start = NULL;
 }
 }
 rewind(fp);
 fwrite(buffer, 1, strlen(buffer), fp);
  fclose(fp);
 free(buffer);
 return 0;
}
