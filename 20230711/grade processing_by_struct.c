#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 20
#define NAME_LENGTH 100

void random_score(struct grade* g);
void sort_score(int* sort, struct grade* g);
void rank_score(int* sort, struct grade* g);
void print_score(struct grade* g);

struct grade
{
    long hakbun;
    char name[4];
    int middle;
    int final;
    int report;
    int sum;
    int rank;
};

int main(void) {
    srand((unsigned)time(NULL));
    struct grade g[ROWS];
    int sort[ROWS];
    random_score(g);
    sort_score(sort, g);
    rank_score(sort, g);
    print_score(g);
    return 0;
}

void random_score(struct grade *g) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < 3; j++) { // 이름 지정
            g[i].name[j] = rand() % 26 + 65;
        }
        g[i].name[3] = '\0'; // 문자열 종료 문자

        g[i].middle = rand() % 41; // 중간
        g[i].final = rand() % 31; // 기말
        g[i].report = rand() % 31; // 과제
        g[i].sum = g[i].middle + g[i].final + g[i].report; // 총점
        g[i].hakbun = 202332001 + i;
    }
}

void sort_score(int *sort, struct grade *g){ // 내림차순 정렬 함수
    for (int i = 0; i < ROWS; i++) { 
        sort[i] = g[i].sum;
    }

    int temp, least;
    for (int i = 0; i < ROWS - 1; i++) { 
        least = i;
        for (int j = i + 1; j < ROWS; j++)
            if (sort[j] > sort[least])
                least = j;
        temp = sort[i];
        sort[i] = sort[least];
        sort[least] = temp;
    }
}
void rank_score(int *sort, struct grade *g){ // 등수부여 함수
    int count = 0;
    int score = 1;
    for (int i = 0; i < ROWS; i++) { 
        count++;
        for (int j = 0; j < ROWS; j++) {
            if (i != 0) { // 1등을 뽑기위해
                if (sort[i] != sort[i - 1])  // 만일 전과 같다면 grade값을 증가시키지 않는다.
                    score = count;
            }
            if (g[j].sum == sort[i])
                g[j].rank = score;
        }
    }
}
void print_score(struct grade *g){ // 출력 함수
    printf("학번\t\t이름\t중간\t기말\t과제\t총점\t등수\n");
    for (int i = 0; i < ROWS; i++) { // 출력
        printf("%ld\t%s\t%d\t%d\t%d\t%d\t%d\n", g[i].hakbun, g[i].name, g[i].middle, g[i].final, g[i].report, g[i].sum, g[i].rank);
    }
}
