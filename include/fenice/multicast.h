#ifndef _MULTICASTH
#define _MULTICASTH
#include <fenice/xmlparser.h>
static void xml_parser_verify_and_start (xml_node_t *node,char now[35],char source[50]);
char *getMounth(char nm[5]);
int multicast(char *argv_s);
#endif
