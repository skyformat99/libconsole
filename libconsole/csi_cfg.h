#ifndef __CSI_CFG_H_ 
#define __CSI_CFG_H_ 

#include "rtthread.h" 

/* ≈‰÷√ */
#define csi_malloc      rt_malloc
#define csi_free        rt_free
#define csi_memset      rt_memset
#define csi_printf      rt_kprintf
#define csi_vsnprintf   rt_vsnprintf

#define CSI_SUPRINT_LEN 1024

#endif
