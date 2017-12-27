#include "csi_suprint.h" 
#include "stdarg.h" 

/* ≥¨º∂¥Ú”° */
void csi_suprint(char* fg, char* bg, char* effect, char* fmt, ...)
{
    uint8_t  flag = 0;
    va_list  args;
    uint32_t length;
    static char buffer[CSI_SUPRINT_LEN] = {0};
    
    va_start(args, fmt);
    length = csi_vsnprintf(buffer, sizeof(buffer) - 1, fmt, args);
    
    if(buffer[length-2] == '\n')
    {
        flag = 1; 
        buffer[length-2] = '\0';
    }
    
    csi_printf(fg);
    csi_printf(bg);
    csi_printf(effect);
    csi_printf("%s", buffer);
    
    if(flag == 1)
    {
        csi_printf("\n");
    }
    csi_printf(CSI_CLOSE);
    
    va_end(args); 
}
