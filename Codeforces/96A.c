#include <stdio.h>
#include <string.h>

    int main() {
        char s[101];
        int i;
        int count = 1;


        scanf("%s", s);

        for (i = 0; i < strlen(s) - 1; i++)
            {
            if (s[i] == s[i + 1])
            {
                count++;
                if (count >= 7)
                {
                    printf("YES\n");
                    return 0;
                }
            }
        else {

                count = 1;
            }
        }

        printf("NO\n");

        return 0;
    }
