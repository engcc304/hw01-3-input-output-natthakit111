/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>

int main() {
    
    char first_name[50], last_name[50];

    printf("First Name: ");
    scanf("%s", first_name);
    printf("Last Name: ");
    scanf("%s", last_name);

    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand\n", first_name, last_name);

    return 0;
}//end function


