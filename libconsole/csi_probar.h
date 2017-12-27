#ifndef __CSI_PROBAR_H_ 
#define __CSI_PROBAR_H_ 

#include "csi_def.h" 
#include "csi_cfg.h" 

typedef struct csi_probar
{
    char        chr;        /* ��ʾ�ַ� */
    const char* title;      /* ��ʾ�ַ��� */
    int         style;      /* ��������� */
    int         max;        /* ���ֵ */
    float       offset;
    char*       probar;
} *csi_probar_t;

#define CSI_PROBAR_NUM_STYLE 0  /* ���ַ�� */
#define CSI_PROBAR_CHR_STYLE 1  /* �ַ���� */
#define CSI_PROBAR_BGC_STYLE 2  /* ������ */

void csi_probar_init    (csi_probar_t bar, char chr, const char* title, int max, int style);
void csi_probar_show    (csi_probar_t bar, float bit);
void csi_probar_destroy (csi_probar_t bar);

#endif
