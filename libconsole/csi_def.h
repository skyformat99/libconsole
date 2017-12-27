#ifndef __CSI_DEF_H_ 
#define __CSI_DEF_H_ 

#include "stdint.h"

/* ǰ��ɫ, ��ͬ�ն˵���ɫЧ����Ա�Դ����README.md */
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

/* ����ɫ, ��ͬ�ն˵���ɫЧ����Ա�Դ����README.md */
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

/* ANSIЧ�� */
#define CSI_CLOSE               "\033[0m"       /* �ر��������� */
#define CSI_NORMAL              "\033[22m"      /* ������ͨ */

#define CSI_BOLD                "\033[1m"       /* ���ø��� */
#define CSI_UNDERLINE           "\033[4m"       /* �����»��� */
#define CSI_REVERSE             "\033[7m"       /* ���÷��� */
#define CSI_BOLD_REVERSE        "\033[1;7m"     /* ���ø������� */
#define CSI_BOLD_UNDERLINE      "\033[1;4m"     /* ���ø����»��� */
#define CSI_REVERSE_UNDERLINE   "\033[4;7m"     /* ���÷����»��� */
#define CSI_BRU                 "\033[1;4;7m"   /* ����ȫЧ�� */

/* ������ */
#define CSI_CUR_UP              "\033[1A"       /* ������� */
#define CSI_CUR_DOWN            "\033[1B"       /* ������� */
#define CSI_CUR_LEFT            "\033[1D"       /* ������� */
#define CSI_CUR_RIGHT           "\033[1C"       /* ������� */

/* ��Ļ���� */
#define CSI_CLEAR_DISPLAY       "\033[2J"       /* ���� */
#define CSI_CLEAR_LINE          "\033[K"        /* ����ӹ�굽��β������ */
#define CSI_SAVE_CUR            "\033[s"        /* ������λ�� */
#define CSI_REST_CUR            "\033[u"        /* �ָ����λ�� */
#define CSI_HIDE_CUR            "\033[?25l"     /* ���ع�� */
#define CSI_SHOW_CUR            "\033[?25h"     /* ��ʾ��� */

#endif
