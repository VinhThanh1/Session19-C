#include <stdio.h>
#include <string.h>


struct sinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[15];
};

void sortStudents(struct sinhVien sv[], int n) {
    struct sinhVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(sv[i].name, sv[j].name) > 0) { 
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

void printStudents(struct sinhVien sv[], int n) {
    printf("\nDanh sach sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n\n", sv[i].phoneNumber);
    }
}

int main() {
    struct sinhVien sv[5] = {
        {1, "Nguyen ban A", 18, "0963852741"},
        {2, "Nguyen van B", 19, "0357194826"},
        {3, "Nguyen van C", 20, "0123456789"},
        {4, "Nguyen van D", 22, "0696969966"},
        {5, "Nguyen van E", 21, "0123478965"}
    };

    int n = 5; 

    printf("Danh sach sinh vien truoc khi sap xep:\n");
    printStudents(sv, n);

    sortStudents(sv, n);

    printf("\nDanh sach sinh vien sau khi sap xep theo ten:\n");
    printStudents(sv, n);

    return 0;
}
