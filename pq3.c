#include<stdio.h>
int main(){
    int package_height,package_width,package_length,box_length,box_width,box_height;
    printf("Enter package height: ");
    scanf("%d",&package_height);
    printf("Enter package width: ");
    scanf("%d",&package_width);
    printf("Enter package length: ");
    scanf("%d",&package_length);
    printf("Enter box height: ");
    scanf("%d",&box_height);
    printf("Enter box width: ");
    scanf("%d",&box_width);
    printf("Enter box length: ");
    scanf("%d",&box_length);
    int pVolume = package_height*package_length*package_width;
    int bVolume = box_height*box_length*box_width;
    printf("Package vol %d\n",pVolume);
    printf("Box volume %d\n",bVolume);
    double check = (float)pVolume/bVolume;
    int intCheck = (int)check;
    if (intCheck==check)
    {
        printf("\nY");
    }
    else
    {
        printf("\nN");
    }
    


}