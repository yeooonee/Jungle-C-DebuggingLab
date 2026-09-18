#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *src) {
    size_t len = strlen(src);      // '\0' 제외한 글자 수

    char *ms = malloc(len + 1);
    if (ms == NULL) return NULL;

    /* 빈칸 2: src 내용을 ms로 복사 */
//    strcpy(*ms, *src);
   strcpy(ms, src); // ms 에 내용이 바뀌게 됨

    return ms;
}

int main(void) {
    char *str = my_strdup("hello");
    if (str == NULL) return 1;

    printf("%s\n", str);
    free(str);
    return 0;
}