#include <stdio.h>

int main() {
    float score, total;

    // รับคะแนนสอบ midterm จากผู้ใช้
    printf("Enter your midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบเงื่อนไขและคำนวณคะแนนรวม
    if (score >= 50) {
        // ถ้าคะแนนมากกว่าหรือเท่ากับ 50 ให้เพิ่มคะแนนพิเศษ 5%
        total = score + (score * 0.05);
    } else {
        // ถ้าคะแนนน้อยกว่า 50 ไม่เพิ่มคะแนนพิเศษ
        total = score;
    }

    // แสดงคะแนนรวมหลังเพิ่มคะแนนพิเศษ (ถ้ามี)
    printf("Total score after bonus: %.2f\n", total);

    // แสดงข้อความจบการประเมินผล
    printf("End of evaluation\n");

    return 0;
}