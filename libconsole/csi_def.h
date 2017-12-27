#ifndef __CSI_DEF_H_ 
#define __CSI_DEF_H_ 

#include "stdint.h"

/* 前景色, 不同终端的颜色效果请对比源码下README.md */
#define CSI_FG_NONE             ""
#define CSI_FG_BLACK            "\033[30m"
#define CSI_FG_RED              "\033[31m"
#define CSI_FG_GREEN            "\033[32m"
#define CSI_FG_YELLOW           "\033[33m"
#define CSI_FG_BLUE             "\033[34m"
#define CSI_FG_MAGENTA          "\033[35m"
#define CSI_FG_CYAN             "\033[36m"
#define CSI_FG_WHITE            "\033[37m"

#define CSI_FG_BRIGHT_BLACK     "\033[90m"
#define CSI_FG_BRIGHT_RED       "\033[91m"
#define CSI_FG_BRIGHT_GREEN     "\033[92m"
#define CSI_FG_BRIGHT_YELLOW    "\033[93m"
#define CSI_FG_BRIGHT_BLUE      "\033[94m"
#define CSI_FG_BRIGHT_MAGENTA   "\033[95m"
#define CSI_FG_BRIGHT_CYAN      "\033[96m"
#define CSI_FG_BRIGHT_WHITE     "\033[97m"

/* 背景色, 不同终端的颜色效果请对比源码下README.md */
#define CSI_BG_NONE             ""
#define CSI_BG_BLACK            "\033[40m"
#define CSI_BG_RED              "\033[41m"
#define CSI_BG_GREEN            "\033[42m"
#define CSI_BG_YELLOW           "\033[43m"
#define CSI_BG_BLUE             "\033[44m"
#define CSI_BG_MAGENTA          "\033[45m"
#define CSI_BG_CYAN             "\033[46m"
#define CSI_BG_WHITE            "\033[47m"

#define CSI_BG_BRIGHT_BLACK     "\033[100m"
#define CSI_BG_BRIGHT_RED       "\033[101m"
#define CSI_BG_BRIGHT_GREEN     "\033[102m"
#define CSI_BG_BRIGHT_YELLOW    "\033[103m"
#define CSI_BG_BRIGHT_BLUE      "\033[104m"
#define CSI_BG_BRIGHT_MAGENTA   "\033[105m"
#define CSI_BG_BRIGHT_CYAN      "\033[106m"
#define CSI_BG_BRIGHT_WHITE     "\033[107m"

/* ANSI效果 */
#define CSI_CLOSE               "\033[0m"       /* 关闭所有属性 */
#define CSI_NORMAL              "\033[22m"      /* 设置普通 */

#define CSI_BOLD                "\033[1m"       /* 设置高亮 */
#define CSI_UNDERLINE           "\033[4m"       /* 设置下划线 */
#define CSI_REVERSE             "\033[7m"       /* 设置反显 */
#define CSI_BOLD_REVERSE        "\033[1;7m"     /* 设置高亮反显 */
#define CSI_BOLD_UNDERLINE      "\033[1;4m"     /* 设置高亮下划线 */
#define CSI_REVERSE_UNDERLINE   "\033[4;7m"     /* 设置反显下划线 */
#define CSI_BRU                 "\033[1;4;7m"   /* 设置全效果 */

/* 光标控制 */
#define CSI_CUR_UP              "\033[1A"       /* 光标上移 */
#define CSI_CUR_DOWN            "\033[1B"       /* 光标下移 */
#define CSI_CUR_LEFT            "\033[1D"       /* 光标左移 */
#define CSI_CUR_RIGHT           "\033[1C"       /* 光标右移 */

/* 屏幕控制 */
#define CSI_CLEAR_DISPLAY       "\033[2J"       /* 清屏 */
#define CSI_CLEAR_LINE          "\033[K"        /* 清除从光标到行尾的内容 */
#define CSI_SAVE_CUR            "\033[s"        /* 保存光标位置 */
#define CSI_REST_CUR            "\033[u"        /* 恢复光标位置 */
#define CSI_HIDE_CUR            "\033[?25l"     /* 隐藏光标 */
#define CSI_SHOW_CUR            "\033[?25h"     /* 显示光标 */

#endif
