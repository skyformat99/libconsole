#ifndef __CSI_PROBAR_H_ 
#define __CSI_PROBAR_H_ 

#include "csi_def.h" 
#include "csi_cfg.h" 

typedef struct csi_probar
{
    char        chr;        /* 提示字符 */
    const char* title;      /* 提示字符串 */
    int         style;      /* 进度条风格 */
    int         max;        /* 最大值 */
    float       offset;
    char*       probar;
} *csi_probar_t;

#define CSI_PROBAR_NUM_STYLE 0  /* 数字风格 */
#define CSI_PROBAR_CHR_STYLE 1  /* 字符风格 */
#define CSI_PROBAR_BGC_STYLE 2  /* 条块风格 */

void csi_probar_init    (csi_probar_t bar, char chr, const char* title, int max, int style);
void csi_probar_show    (csi_probar_t bar, float bit);
void csi_probar_destroy (csi_probar_t bar);

#endif
