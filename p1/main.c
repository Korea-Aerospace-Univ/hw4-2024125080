#include <stdio.h>

int main() {
    int answer = 10;      // 정답
    int guess = 0;       // 추측값
    int count = 0;   // 시도 횟수

    scanf("%d", &answer); // 정답 입력

    do {
        scanf("%d", &guess); // 추측값 입력
        count++; // 시도 횟수 증가

        if (guess > answer) {
            // 추측값이 정답보다 클 경우
            printf("%d>?\n", guess);
        }
        else if (guess < answer) {
            // 추측값이 정답보다 작을 경우
            printf("%d<?\n", guess);
        }
        else {
            // 추측값과 정답이 같을 경우
            printf("%d==?\n", guess);
            printf("%d\n", count);
        }
    } while (guess != answer); // 추측값이 정답과 같이 않다면 반복

    return 0;
}
