/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2015-2020 Amazon.com, Inc. or its affiliates.
 * All rights reserved.
 */

#ifndef _ENA_CUSTOM_ETHDEV_H_
#define _ENA_CUSTOM_ETHDEV_H_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <rte_mbuf.h>


uint16_t  eth_ena_xmit_pkts_custom(void *tx_queue, struct rte_mbuf **tx_pkts,
                                  uint16_t nb_pkts);
uint16_t eth_ena_recv_pkts_custom(void *rx_queue,
				  struct rte_mbuf **rx_pkts, uint16_t nb_pkts);

uint16_t  ena_com_tx_sq_entries(void *tx_queue);
uint16_t  ena_com_tx_cq_entries(void *tx_queue);

#ifdef __cplusplus
}
#endif

#endif /* _ENA_CUSTOM_ETHDEV_H_ */
