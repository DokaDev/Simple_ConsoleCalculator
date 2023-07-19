#include <stdio.h>

int main() {
    char op;
    double num1, num2;

    printf("사칙연산 중 하나를 입력하세요 (+, -, *, /): ");
    scanf("%c", &op);

    printf("두 수를 입력하세요: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
            break;

        default:
            printf("입력한 연산자가 잘못되었습니다.");
            break;
    }
    printf("\n");
    return 0;
}