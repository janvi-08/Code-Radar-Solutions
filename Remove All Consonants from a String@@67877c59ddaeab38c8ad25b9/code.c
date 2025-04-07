#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char ch[100];
    char result[100]; 
    int j = 0;

    scanf("%[^\n]", ch);

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || 
            ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' ||
              !(ch[i] >= 'a' && ch[i] <= 'z') && !(ch[i] >= 'A' && ch[i] <= 'Z')) {
            result[j++] = ch[i]; 
        }
    }
    result[j] = '\0'; 
    printf("%s",result);

    return 0;
}