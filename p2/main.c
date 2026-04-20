#include <stdio.h>

int main() {
    int n;           // 문자 개수
    char str[101];  // 문자열

    scanf("%d", &n); // 문자 개수 입력
    scanf("%s", str);

    int max_alpha = 0, cur_alpha = 0; // 소문자 최대 연속 길이, 현재 연속 길이
    int max_digit = 0, cur_digit = 0; // 숫자 최대 연속 길이, 현재 연속 길이

    for (int i = 0; i < n; i++) { // 입력 받은 문자 개수 만큼 반복
        char c = str[i]; // 현재 검사할 문자

        if (c >= 'a' && c <= 'z') {
            cur_alpha++; // 소문자 등장 시 카운트 증가
            // 현재 연속 길이가 최대 연속 길이보다 크면 최대값 갱신
            if (cur_alpha > max_alpha) {
                max_alpha = cur_alpha;
            }
        }
        else {
            cur_alpha = 0; // 소문자가 아니면 연속이 끊겼으므로 0으로 초기화
        }

        // 4. 숫자 문자 연속성 검사
        if (c >= '0' && c <= '9') {
            cur_digit++; // 숫자 등장 시 카운트 증가
            // 현재 연속 길이가 최대 연속 길이보다 크면 최대값 갱신
            if (cur_digit > max_digit) {
                max_digit = cur_digit;
            }
        }
        else {
            cur_digit = 0; // 숫자가 아니면 연속이 끊겼으므로 0으로 초기화
        }
    }
    // 출력
    printf("%d\n", max_alpha);
    printf("%d\n", max_digit);

    return 0;
}
