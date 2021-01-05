/* nbase_config.h.  Generated from nbase_config.h.in by configure.  */

/***************************************************************************
 * nbase_config.h.in -- Autoconf uses this template, combined with the     *
 * configure script knowledge about system capabilities, to build the      *
 * nbase_config.h file that lets nbase (and libraries that call it) better *
 * understand system particulars.                                          *
 *                                                                         *
 ***********************IMPORTANT NMAP LICENSE TERMS************************
 *                                                                         *
 * The Nmap Security Scanner is (C) 1996-2020 Insecure.Com LLC ("The Nmap  *
 * Project"). Nmap is also a registered trademark of the Nmap Project.     *
 *                                                                         *
 * This program is distributed under the terms of the Nmap Public Source   *
 * License (NPSL). The exact license text applying to a particular Nmap    *
 * release or source code control revision is contained in the LICENSE     *
 * file distributed with that version of Nmap or source code control       *
 * revision. More Nmap copyright/legal information is available from       *
 * https://nmap.org/book/man-legal.html, and further information on the    *
 * NPSL license itself can be found at https://nmap.org/npsl. This header  *
 * summarizes some key points from the Nmap license, but is no substitute  *
 * for the actual license text.                                            *
 *                                                                         *
 * Nmap is generally free for end users to download and use themselves,    *
 * including commercial use. It is available from https://nmap.org.        *
 *                                                                         *
 * The Nmap license generally prohibits companies from using and           *
 * redistributing Nmap in commercial products, but we sell a special Nmap  *
 * OEM Edition with a more permissive license and special features for     *
 * this purpose. See https://nmap.org/oem                                  *
 *                                                                         *
 * If you have received a written Nmap license agreement or contract       *
 * stating terms other than these (such as an Nmap OEM license), you may   *
 * choose to use and redistribute Nmap under those terms instead.          *
 *                                                                         *
 * The official Nmap Windows builds include the Npcap software             *
 * (https://npcap.org) for packet capture and transmission. It is under    *
 * separate license terms which forbid redistribution without special      *
 * permission. So the official Nmap Windows builds may not be              *
 * redistributed without special permission (such as an Nmap OEM           *
 * license).                                                               *
 *                                                                         *
 * Source is provided to this software because we believe users have a     *
 * right to know exactly what a program is going to do before they run it. *
 * This also allows you to audit the software for security holes.          *
 *                                                                         *
 * Source code also allows you to port Nmap to new platforms, fix bugs,    *
 * and add new features.  You are highly encouraged to submit your         *
 * changes as a Github PR or by email to the dev@nmap.org mailing list     *
 * for possible incorporation into the main distribution. Unless you       *
 * specify otherwise, it is understood that you are offering us very       *
 * broad rights to use your submissions as described in the Nmap Public    *
 * Source License Contributor Agreement. This is important because we      *
 * fund the project by selling licenses with various terms, and also       *
 * because the inability to relicense code has caused devastating          *
 * problems for other Free Software projects (such as KDE and NASM).       *
 *                                                                         *
 * The free version of Nmap is distributed in the hope that it will be     *
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of  *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. Warranties,        *
 * indemnification and commercial support are all available through the    *
 * Npcap OEM program--see https://nmap.org/oem.                            *
 *                                                                         *
 ***************************************************************************/

/* $Id: nbase_config.h.in 38078 2020-10-02 16:12:22Z dmiller $ */
#ifndef NBASE_CONFIG_H
#define NBASE_CONFIG_H

#define HAVE_USLEEP 1

#define HAVE_NANOSLEEP 1

/* #undef HAVE_STRUCT_ICMP */

/* #undef HAVE_IP_IP_SUM */

/* #undef inline */

#define STDC_HEADERS 1

#define HAVE_STRING_H 1

#define HAVE_NETDB_H 1

#define HAVE_GETOPT_H 1

#define HAVE_UNISTD_H 1

#define HAVE_STRINGS_H 1

/* #undef HAVE_BSTRING_H */

/* #undef WORDS_BIGENDIAN */

#define HAVE_MEMORY_H 1

/* #undef HAVE_LIBIBERTY_H */

#define HAVE_FCNTL_H 1

#define HAVE_ERRNO_H 1

/* both bzero() and memcpy() are used in the source */
/* #undef HAVE_BZERO */
/* #undef HAVE_MEMCPY */
#define HAVE_STRERROR 1

#define HAVE_SYS_PARAM_H 1

#define HAVE_SYS_SELECT_H 1

/* #undef HAVE_SYS_SOCKIO_H */

#define HAVE_SYS_SOCKET_H 1

#define HAVE_SYS_WAIT_H 1

#define HAVE_NET_IF_H 1

/* #undef BSD_NETWORKING */

#define HAVE_STRCASESTR 1

#define HAVE_STRCASECMP 1

#define HAVE_STRNCASECMP 1

#define HAVE_GETTIMEOFDAY 1

#define HAVE_SLEEP 1

#define HAVE_SIGNAL 1

#define HAVE_GETOPT 1

#define HAVE_GETOPT_LONG_ONLY 1

#define HAVE_SOCKADDR_SA_LEN 1

/* #undef HAVE_NETINET_IF_ETHER_H */

#define HAVE_NETINET_IN_H 1

#define HAVE_SYS_TIME_H 1

/* #undef PWD_H */

#define HAVE_ARPA_INET_H 1

#define HAVE_SYS_RESOURCE_H 1

#define HAVE_INTTYPES_H 1

#define HAVE_MACH_O_DYLD_H 1

#define HAVE_SYS_STAT_H 1

/* #undef SPRINTF_RETURNS_STRING */

/* #undef STUPID_SOLARIS_CHECKSUM_BUG */

/* IPv6 stuff */
#define HAVE_IPV6 1
#define HAVE_AF_INET6 1
#define HAVE_SOCKADDR_IN6 1
#define HAVE_SOCKADDR_STORAGE 1
#define HAVE_GETADDRINFO 1
#define HAVE_GAI_STRERROR 1
#define HAVE_GETNAMEINFO 1
#define HAVE_INET_NTOP 1
#define HAVE_INET_PTON 1

/* #undef int8_t */
/* #undef int16_t */
/* #undef int32_t */
/* #undef int64_t */
/* #undef uint8_t */
/* #undef uint16_t */
/* #undef uint32_t */
/* #undef uint64_t */

#define HAVE_SNPRINTF 1
/* #undef HAVE_VASNPRINTF */
#define HAVE_ASPRINTF 1
#define HAVE_VASPRINTF 1
/* #undef HAVE_VFPRINTF */
#define HAVE_VSNPRINTF 1
/* #undef NEED_SNPRINTF_PROTO */
/* #undef NEED_VSNPRINTF_PROTO */

/* define if your compiler has __attribute__ */
#define HAVE___ATTRIBUTE__ 1

#define HAVE_OPENSSL 1

/* #undef HAVE_PROC_SELF_EXE */

/* #undef LINUX */
/* #undef FREEBSD */
/* #undef OPENBSD */
/* #undef SOLARIS */
/* #undef SUNOS */
/* #undef BSDI */
/* #undef IRIX */
/* #undef HPUX */
/* #undef NETBSD */

#endif /* NBASE_CONFIG_H */
