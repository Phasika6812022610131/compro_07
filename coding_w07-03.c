#include <stdio.h>

int main() {
    int level;

    // รับค่าระดับจากผู้ใช้
    printf("Enter level (0-4): ");
    scanf("%d", &level);

    // ตรวจสอบเงื่อนไขพิเศษก่อน
    if (level <= 0) {
        printf("The level below 1 is not allowed\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    } else {
        // ตรวจสอบระดับและแสดงผล
        switch (level) {
            case 1: printf("Beginner\n"); break;
            case 2: printf("Intermediate\n"); break;
            case 3: printf("Advanced\n"); break;
            case 4: printf("Expert\n"); break;
            default: printf("Invalid level\n"); break;
        }
    }

    return 0;
}

/*
วิเคราะห์ผลลัพธ์แต่ละกรณี:
- ถ้า level = -4, 0: แสดง "The level below 1 is not allowed"
- ถ้า level = 1: แสดง "Beginner"
- ถ้า level = 2: แสดง "Intermediate"
- ถ้า level = 3: แสดง "Advanced"
- ถ้า level = 4: แสดง "Expert"
- ถ้า level = 10: แสดง "The level above 4 is not allowed"
- ถ้า level = 5, 6, ...: แสดง "The level above 4 is not allowed"

อธิบายการทำงาน:
1. รับค่าระดับจากผู้ใช้
2. ถ้า level <= 0 แสดงข้อความไม่อนุญาต
3. ถ้า level > 4 แสดงข้อความไม่อนุญาต
4. ถ้าอยู่ในช่วง 1-4 แสดงระดับตามที่กำหนด
*/