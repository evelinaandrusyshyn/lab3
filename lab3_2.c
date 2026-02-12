#include <stdio.h>

int main() {
    int N;
    printf("Введіть номер школи (1-6): ");
    scanf("%d", &N);
    switch (N) {
        case 1:
            printf("Школа №1: вул. Шевченка, 12\n");
            break;
        case 2:
            printf("Школа №2: вул. Лесі Українки, 45\n");
            break;
        case 3:
            printf("Школа №3: вул. Центральна, 78\n");
            break;
        case 4:
            printf("Школа №4: вул. Мазепи, 5\n");
            break;
        case 5:
            printf("Школа №5: вул. Молодіжна, 21\n");
            break;
        case 6:
            printf("Школа №6: вул. Січових Стрільців, 78\n");
            break;
        default:
            printf("Помилка: такої школи немає. Введіть число від 1 до 6.\n");
            break;
    }
    return 0;
}
