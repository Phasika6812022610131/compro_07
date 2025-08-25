#include <stdio.h>

int main() {
    int x, y;

    // รับค่าตัวเลข 2 จำนวนจากผู้ใช้
    printf("Enter value for x: ");
    scanf("%d", &x);

    printf("Enter value for y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x กับ y
    if (x > y) {
        // ถ้า x มากกว่า y
        printf("x is greater than y\n");
    } else if (x < y) {
        // ถ้า x น้อยกว่า y
        printf("x is less than y\n");
    } else {
        // ถ้า x เท่ากับ y
        printf("x is equal to y\n");
    }

    return 0;
}

/*
อธิบายการทำงานของโปรแกรม:
1. รับค่าตัวเลข 2 จำนวนจากผู้ใช้ผ่านทางแป้นพิมพ์และเก็บไว้ในตัวแปร x และ y
2. เปรียบเทียบค่าระหว่าง x กับ y
   - ถ้า x มากกว่า y จะแสดงข้อความว่า x is greater than y
   - ถ้า x น้อยกว่า y จะแสดงข้อความว่า x is less than y
   - ถ้า x เท่ากับ y จะแสดงข้อความว่า x is equal to y
3. จบการทำงานของโปรแกรม
*/