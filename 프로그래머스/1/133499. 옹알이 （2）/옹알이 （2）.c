#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

const char* pronunciations[] = {"aya", "ye", "woo", "ma"};
const int num_pronunciations = 4;

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;

    for (size_t i = 0; i < babbling_len; i++) {
        const char* original_word = babbling[i];
        size_t len = strlen(original_word);
        
        char* word = (char*)malloc(len + 1);
        if (word == NULL) return -1;
        strcpy(word, original_word);

        bool is_valid = true;

        for (int j = 0; j < num_pronunciations; j++) {
            char repeated[7];
            strcpy(repeated, pronunciations[j]);
            strcat(repeated, pronunciations[j]);
            
            if (strstr(word, repeated) != NULL) {
                is_valid = false;
                break;
            }
        }
        
        if (!is_valid) {
            free(word);
            continue;
        }

        for (int j = 0; j < num_pronunciations; j++) {
            char* found = NULL;
            while ((found = strstr(word, pronunciations[j])) != NULL) {
                int p_len = strlen(pronunciations[j]);
                memset(found, ' ', p_len);
            }
        }

        for (size_t k = 0; k < len; k++) {
            if (word[k] != ' ') {
                is_valid = false;
                break;
            }
        }

        if (is_valid) {
            answer++;
        }

        free(word);
    }

    return answer;
}