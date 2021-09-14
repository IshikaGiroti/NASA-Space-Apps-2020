#include<stdio.h>
int main()
{
    int co,year,tree, tree2;
    float co2;
    printf("HELLO!,\nThe Earth is being damaged by the release of large amounts of carbon,\nTracing the amount of carbon being released and taking suitable actions accordingly\nis one of the best solutions to save earth.\n");
    printf("This program tells us the exact number of trees required to balance \nthe excess amount of carbon released in an area, \nFill in the following details to find out the number of trees you need to plant:\n\n");
    printf("i)Enter the amount of CO2 being released around your area in a day(in KGs): ");
    scanf("%f",&co2);
    printf("\nii)Enter the amount of CO being released around your area in PPM: ");
    scanf("%d",&co);
    year=(co2)*365;
    tree=year/20.5;
    tree2 = tree*2;
    printf("\nTo reduce the excessive carbon emission in your area you should have '%d' trees in your area",tree);
    if(co<=51)
    printf("\nNOTE:\nCarbon monoxide is in low level, \nif you plant the above mentioned number of trees then the carbon released will get balanced.");
    else if(co>51 && co<=100)
    printf("\nNOTE:\nCarbon monoxide is in mid level, \nif you plant a few more trees than the required number of trees, then the carbon released will get balanced.");
    else if(co>100)
    printf("\nNOTE:\nCarbon monoxide is in high level, \nif you plant twice as many as trees (%d) than the required number of trees, then the carbon released will get balanced.",tree2);
    else
    printf("Invalid Input");
    printf("\n\nDid You Know");
    printf("\nA baby tree absorbs 5.9kg CO2 per year, while a 10 year old tree absorbs 22kg CO2 per year.");
    return 0;
}