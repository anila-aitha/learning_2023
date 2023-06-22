#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box* box);

int main() {
    struct Box box;
    struct Box* boxPtr = &box;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &(boxPtr->length));

    printf("Width: ");
    scanf("%f", &(boxPtr->width));

    printf("Height: ");
    scanf("%f", &(boxPtr->height));

    calculateVolumeAndSurfaceArea(boxPtr);

    return 0;
}

void calculateVolumeAndSurfaceArea(struct Box* box) {
    float volume, surfaceArea;

    volume = box->length * box->width * box->height;
    surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
}