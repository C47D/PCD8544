#include <project.h>
#include "PCD8544.h"

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    //Initialize LCD with 0x38 software contrast
    PCD8544_Init(0x38);
        
    //Go to x=14, y=3 position
    PCD8544_GotoXY(1, 2);
     
    //Print data with Pixel Set mode and Fontsize of 5x7px
    PCD8544_Puts("PSoC Rocks!", PCD8544_Pixel_Set, PCD8544_FontSize_3x5);
    
    PCD8544_DrawLine(10, 10, 20, 20, PCD8544_Pixel_Set);
    
    PCD8544_DrawFilledCircle(20, 20, 5, PCD8544_Pixel_Set);
    
    //Display data on LCD
    PCD8544_Refresh();

    for(;;)
    {
        
    }
}

/* [] END OF FILE */
