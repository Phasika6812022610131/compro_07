#include <stdio.h>

int main() {
    int age, vip;
    float amount;
    int discount = 0;

    // รับค่าอายุ, ระดับสมาชิก VIP, และยอดซื้อ
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip);
    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // ตรวจสอบเงื่อนไขการได้รับส่วนลด
    if ((age >= 60) || (vip >= 3)) {
        discount = 20;
    } else if ((age >= 30 && age <= 40) && (amount >= 2000)) {
        discount = 15;
    } else if ((age >= 18 && age <= 25) && (amount >= 1000)) {
        discount = 10;
    } else if ((vip == 5) || (amount >= 50000)) {
        discount = 25;
    }

    // แสดงข้อมูลลูกค้าและส่วนลดที่ได้รับ
    printf("\n-- Customer Info --\n");
    printf("Age: %d | VIP level: %d | Amount: %.2f THB\n", age, vip, amount);

    if (discount > 0) {
        printf("Discount received: %d%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("Thank you for shopping with us!\n");
    return 0;
}

/*
อธิบายการทำงาน:
1. รับค่าอายุ, VIP level, และยอดซื้อจากผู้ใช้
2. ตรวจสอบเงื่อนไขแต่ละข้อเพื่อหาส่วนลดที่เหมาะสม
   - อายุ >= 60 ปี หรือ VIP >= 3 ได้ส่วนลด 20%
   - อายุ 30-40 และยอดซื้อ >= 2000 ได้ส่วนลด 15%
   - อายุ 18-25 และยอดซื้อ >= 1000 ได้ส่วนลด 10%
   - VIP 5 หรือยอดซื้อ >= 50000 ได้ส่วนลด 25%
   - ถ้าไม่เข้าเงื่อนไขใดเลย ไม่ได้รับส่วนลด
3. แสดงข้อมูลลูกค้าและส่วนลดที่ได้รับ หรือแสดง "No discount applied"
4. แสดงข้อความขอบคุณ
*/