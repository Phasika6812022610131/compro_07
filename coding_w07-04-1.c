#include <stdio.h>

int main() {
    int level;

    // รับค่าระดับสมาชิกจากผู้ใช้
    printf("Enter membership level (1=Silver, 2=Gold, 3=Platinum, 4=Diamond): ");
    scanf("%d", &level);

    // ตรวจสอบและแสดงสิทธิประโยชน์ด้วย if-else
    if (level == 1) {
        printf("Silver Member: 5%% discount\n");
    } else if (level == 2) {
        printf("Gold Member: 10%% discount + Reward points\n");
    } else if (level == 3) {
        printf("Platinum Member: 15%% discount + Reward points + Birthday gift\n");
    } else if (level == 4) {
        printf("Diamond Member: 15%% discount + Reward points + Birthday gift + VIP events\n");
    } else {
        printf("Invalid membership level\n");
    }

    return 0;
}

/*
อธิบายการทำงาน:
1. รับค่าระดับสมาชิกจากผู้ใช้ (1-4)
2. ตรวจสอบระดับสมาชิกแต่ละระดับด้วย if-else
3. แสดงสิทธิประโยชน์ตามระดับสมาชิก
4. ถ้าไม่ตรงกับ 1-4 แสดงข้อความ Invalid
*/