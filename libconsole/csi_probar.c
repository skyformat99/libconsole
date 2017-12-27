#include "csi_probar.h" 

void csi_probar_init(csi_probar_t bar, char chr, const char* title, int max, int style)
{
    bar->chr    = chr;
    bar->title  = title;
    bar->style  = style;
    bar->max    = max;
    bar->offset = 100 / (float)max;
    bar->probar = (char *)csi_malloc(max+1);
    
    if(style == CSI_PROBAR_BGC_STYLE)
    {
        csi_memset(bar->probar, 0x00, max+1);
    }
    else 
    {
        csi_memset(bar->probar, 32, max);
        csi_memset(bar->probar+max, 0x00, 1);
    }
}

void csi_probar_show(csi_probar_t bar, float bit)
{
    int val = (int)(bit * bar->max);
    
    switch(bar->style) 
    {
        case CSI_PROBAR_NUM_STYLE:
        {
            csi_printf(CSI_HIDE_CUR);
            csi_printf(CSI_FG_RED);
            csi_printf(CSI_BOLD);
            csi_printf("%s%d%%\r", bar->title, (int)(bar->offset*val));
            csi_printf(CSI_CLOSE);
        }
        break;
        
        case CSI_PROBAR_CHR_STYLE:
        {
            csi_memset(bar->probar, bar->chr, val);
            csi_printf(CSI_HIDE_CUR);
            csi_printf(CSI_FG_RED);
            csi_printf(CSI_BOLD);
            csi_printf("%s[%-s] %d%%\r", bar->title, bar->probar, (int)(bar->offset*val));
            csi_printf(CSI_CLOSE);
        }
        break;
        
        case CSI_PROBAR_BGC_STYLE:
        {
            csi_memset(bar->probar, 32, val);
            csi_printf(CSI_HIDE_CUR);
            csi_printf(CSI_FG_RED);
            csi_printf(CSI_BOLD);
            csi_printf("%s", bar->title);
            csi_printf(CSI_BG_RED);
            csi_printf(" %d%% %s", (int)(bar->offset*val), bar->probar);
            csi_printf(CSI_CLOSE);
            csi_printf("\r");
        }
        break;
    }
}

void csi_probar_destroy(csi_probar_t bar)
{
    csi_printf(CSI_SHOW_CUR);
    csi_free(bar->probar);
}
