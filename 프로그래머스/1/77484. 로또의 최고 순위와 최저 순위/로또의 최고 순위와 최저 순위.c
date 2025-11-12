#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_rank(int match_count) {
    switch (match_count) {
        case 6:
            return 1;
        case 5:
            return 2;
        case 4:
            return 3;
        case 3:
            return 4;
        case 2:
            return 5;
        default: // 1 or 0개 일치할 경우
            return 6;
    }
}

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 2);
    
    int zero_count = 0;     // 0 (알 수 없는 번호)의 개수
    int match_count = 0;    // 이미 일치하는 번호의 개수

    for (size_t i = 0; i < lottos_len; i++) {
        if (lottos[i] == 0) {
            zero_count++;
            continue;
        }
        
        for (size_t j = 0; j < win_nums_len; j++) {
            if (lottos[i] == win_nums[j]) {
                match_count++;
                break;
            }
        }
    }
    
    int max_matches = match_count + zero_count;
    int min_matches = match_count;
    
    answer[0] = get_rank(max_matches);
    answer[1] = get_rank(min_matches);
    
    return answer;
}