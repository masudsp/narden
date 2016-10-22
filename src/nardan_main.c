
#define _GNU_SOURCE
#include <pthread.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdarg.h>
#include <errno.h>
#include <unistd.h>

#include <rte_common.h>
#include <rte_eal.h>
#include <rte_lcore.h>
#include <rte_mbuf.h>
#include <rte_ether.h>
#include <rte_ethdev.h>


int
main(int argc, char **argv)
{
    int ret;
    unsigned nb_ports;

    ret = rte_eal_init(argc, argv);
    if (ret < 0) {
        rte_exit(EXIT_FAILURE, "Error with EAL initialization\n");
    }

    /* Check that there is an even number of ports to send/receive on. */
    nb_ports = rte_eth_dev_count();
    if (nb_ports < 1) {
        rte_exit(EXIT_FAILURE, "Error: number of ports must be more than 0\n");
    }

    return 0;
}
