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
#include <string.h>

int main() {
    char first_name[50], last_name[50];

    // รับชื่อจากผู้ใช้
    printf("First Name: ");
    scanf("%s", first_name);
    printf("Last Name: ");
    scanf("%s", last_name);

    // ประกาศและกำหนดค่าให้ที่อยู่
    char address[] = "TC, RMUTL, Chiang Mai, Thailand";

    // แปลงนามสกุลให้เป็นรูปแบบที่ต้องการ
    int last_name_length = strlen(last_name);
    last_name[last_name_length - 1] = 's';

    // แสดงผลลัพธ์
    printf("Output:\n");
    printf("%s %s %s\n", first_name, last_name, address);

    return 0;
}//end function


