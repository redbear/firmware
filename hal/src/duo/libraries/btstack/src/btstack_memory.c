/*
 * Copyright (C) 2014 BlueKitchen GmbH
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the copyright holders nor the names of
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 * 4. Any redistribution, use, or modification is done solely for
 *    personal benefit and not for any commercial purpose or for
 *    monetary gain.
 *
 * THIS SOFTWARE IS PROVIDED BY BLUEKITCHEN GMBH AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL MATTHIAS
 * RINGWALD OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
 * THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Please inquire about commercial licensing options at 
 * contact@bluekitchen-gmbh.com
 *
 */


/*
 *  btstsack_memory.h
 *
 *  @brief BTstack memory management via configurable memory pools
 *
 *  @note code semi-atuomatically generated by tools/btstack_memory_generator.py
 *
 */

#include "btstack_memory.h"
#include "btstack_memory_pool.h"

#include <stdlib.h>



// MARK: hci_connection_t
#ifdef MAX_NO_HCI_CONNECTIONS
#if MAX_NO_HCI_CONNECTIONS > 0
static hci_connection_t hci_connection_storage[MAX_NO_HCI_CONNECTIONS];
static btstack_memory_pool_t hci_connection_pool;
hci_connection_t * btstack_memory_hci_connection_get(void){
    return (hci_connection_t *) btstack_memory_pool_get(&hci_connection_pool);
}
void btstack_memory_hci_connection_free(hci_connection_t *hci_connection){
    btstack_memory_pool_free(&hci_connection_pool, hci_connection);
}
#else
hci_connection_t * btstack_memory_hci_connection_get(void){
    return NULL;
}
void btstack_memory_hci_connection_free(hci_connection_t *hci_connection){
    // silence compiler warning about unused parameter in a portable way
    (void) hci_connection;
};
#endif
#elif defined(HAVE_MALLOC)
hci_connection_t * btstack_memory_hci_connection_get(void){
    return (hci_connection_t*) malloc(sizeof(hci_connection_t));
}
void btstack_memory_hci_connection_free(hci_connection_t *hci_connection){
    free(hci_connection);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_HCI_CONNECTIONS for struct hci_connection is defined. Please, edit the config file."
#endif



// MARK: l2cap_service_t
#ifdef MAX_NO_L2CAP_SERVICES
#if MAX_NO_L2CAP_SERVICES > 0
static l2cap_service_t l2cap_service_storage[MAX_NO_L2CAP_SERVICES];
static btstack_memory_pool_t l2cap_service_pool;
l2cap_service_t * btstack_memory_l2cap_service_get(void){
    return (l2cap_service_t *) btstack_memory_pool_get(&l2cap_service_pool);
}
void btstack_memory_l2cap_service_free(l2cap_service_t *l2cap_service){
    btstack_memory_pool_free(&l2cap_service_pool, l2cap_service);
}
#else
l2cap_service_t * btstack_memory_l2cap_service_get(void){
    return NULL;
}
void btstack_memory_l2cap_service_free(l2cap_service_t *l2cap_service){
    // silence compiler warning about unused parameter in a portable way
    (void) l2cap_service;
};
#endif
#elif defined(HAVE_MALLOC)
l2cap_service_t * btstack_memory_l2cap_service_get(void){
    return (l2cap_service_t*) malloc(sizeof(l2cap_service_t));
}
void btstack_memory_l2cap_service_free(l2cap_service_t *l2cap_service){
    free(l2cap_service);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_L2CAP_SERVICES for struct l2cap_service is defined. Please, edit the config file."
#endif


// MARK: l2cap_channel_t
#ifdef MAX_NO_L2CAP_CHANNELS
#if MAX_NO_L2CAP_CHANNELS > 0
static l2cap_channel_t l2cap_channel_storage[MAX_NO_L2CAP_CHANNELS];
static btstack_memory_pool_t l2cap_channel_pool;
l2cap_channel_t * btstack_memory_l2cap_channel_get(void){
    return (l2cap_channel_t *) btstack_memory_pool_get(&l2cap_channel_pool);
}
void btstack_memory_l2cap_channel_free(l2cap_channel_t *l2cap_channel){
    btstack_memory_pool_free(&l2cap_channel_pool, l2cap_channel);
}
#else
l2cap_channel_t * btstack_memory_l2cap_channel_get(void){
    return NULL;
}
void btstack_memory_l2cap_channel_free(l2cap_channel_t *l2cap_channel){
    // silence compiler warning about unused parameter in a portable way
    (void) l2cap_channel;
};
#endif
#elif defined(HAVE_MALLOC)
l2cap_channel_t * btstack_memory_l2cap_channel_get(void){
    return (l2cap_channel_t*) malloc(sizeof(l2cap_channel_t));
}
void btstack_memory_l2cap_channel_free(l2cap_channel_t *l2cap_channel){
    free(l2cap_channel);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_L2CAP_CHANNELS for struct l2cap_channel is defined. Please, edit the config file."
#endif



// MARK: rfcomm_multiplexer_t
#ifdef MAX_NO_RFCOMM_MULTIPLEXERS
#if MAX_NO_RFCOMM_MULTIPLEXERS > 0
static rfcomm_multiplexer_t rfcomm_multiplexer_storage[MAX_NO_RFCOMM_MULTIPLEXERS];
static btstack_memory_pool_t rfcomm_multiplexer_pool;
rfcomm_multiplexer_t * btstack_memory_rfcomm_multiplexer_get(void){
    return (rfcomm_multiplexer_t *) btstack_memory_pool_get(&rfcomm_multiplexer_pool);
}
void btstack_memory_rfcomm_multiplexer_free(rfcomm_multiplexer_t *rfcomm_multiplexer){
    btstack_memory_pool_free(&rfcomm_multiplexer_pool, rfcomm_multiplexer);
}
#else
rfcomm_multiplexer_t * btstack_memory_rfcomm_multiplexer_get(void){
    return NULL;
}
void btstack_memory_rfcomm_multiplexer_free(rfcomm_multiplexer_t *rfcomm_multiplexer){
    // silence compiler warning about unused parameter in a portable way
    (void) rfcomm_multiplexer;
};
#endif
#elif defined(HAVE_MALLOC)
rfcomm_multiplexer_t * btstack_memory_rfcomm_multiplexer_get(void){
    return (rfcomm_multiplexer_t*) malloc(sizeof(rfcomm_multiplexer_t));
}
void btstack_memory_rfcomm_multiplexer_free(rfcomm_multiplexer_t *rfcomm_multiplexer){
    free(rfcomm_multiplexer);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_RFCOMM_MULTIPLEXERS for struct rfcomm_multiplexer is defined. Please, edit the config file."
#endif


// MARK: rfcomm_service_t
#ifdef MAX_NO_RFCOMM_SERVICES
#if MAX_NO_RFCOMM_SERVICES > 0
static rfcomm_service_t rfcomm_service_storage[MAX_NO_RFCOMM_SERVICES];
static btstack_memory_pool_t rfcomm_service_pool;
rfcomm_service_t * btstack_memory_rfcomm_service_get(void){
    return (rfcomm_service_t *) btstack_memory_pool_get(&rfcomm_service_pool);
}
void btstack_memory_rfcomm_service_free(rfcomm_service_t *rfcomm_service){
    btstack_memory_pool_free(&rfcomm_service_pool, rfcomm_service);
}
#else
rfcomm_service_t * btstack_memory_rfcomm_service_get(void){
    return NULL;
}
void btstack_memory_rfcomm_service_free(rfcomm_service_t *rfcomm_service){
    // silence compiler warning about unused parameter in a portable way
    (void) rfcomm_service;
};
#endif
#elif defined(HAVE_MALLOC)
rfcomm_service_t * btstack_memory_rfcomm_service_get(void){
    return (rfcomm_service_t*) malloc(sizeof(rfcomm_service_t));
}
void btstack_memory_rfcomm_service_free(rfcomm_service_t *rfcomm_service){
    free(rfcomm_service);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_RFCOMM_SERVICES for struct rfcomm_service is defined. Please, edit the config file."
#endif


// MARK: rfcomm_channel_t
#ifdef MAX_NO_RFCOMM_CHANNELS
#if MAX_NO_RFCOMM_CHANNELS > 0
static rfcomm_channel_t rfcomm_channel_storage[MAX_NO_RFCOMM_CHANNELS];
static btstack_memory_pool_t rfcomm_channel_pool;
rfcomm_channel_t * btstack_memory_rfcomm_channel_get(void){
    return (rfcomm_channel_t *) btstack_memory_pool_get(&rfcomm_channel_pool);
}
void btstack_memory_rfcomm_channel_free(rfcomm_channel_t *rfcomm_channel){
    btstack_memory_pool_free(&rfcomm_channel_pool, rfcomm_channel);
}
#else
rfcomm_channel_t * btstack_memory_rfcomm_channel_get(void){
    return NULL;
}
void btstack_memory_rfcomm_channel_free(rfcomm_channel_t *rfcomm_channel){
    // silence compiler warning about unused parameter in a portable way
    (void) rfcomm_channel;
};
#endif
#elif defined(HAVE_MALLOC)
rfcomm_channel_t * btstack_memory_rfcomm_channel_get(void){
    return (rfcomm_channel_t*) malloc(sizeof(rfcomm_channel_t));
}
void btstack_memory_rfcomm_channel_free(rfcomm_channel_t *rfcomm_channel){
    free(rfcomm_channel);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_RFCOMM_CHANNELS for struct rfcomm_channel is defined. Please, edit the config file."
#endif



// MARK: db_mem_device_name_t
#ifdef MAX_NO_DB_MEM_DEVICE_NAMES
#if MAX_NO_DB_MEM_DEVICE_NAMES > 0
static db_mem_device_name_t db_mem_device_name_storage[MAX_NO_DB_MEM_DEVICE_NAMES];
static btstack_memory_pool_t db_mem_device_name_pool;
db_mem_device_name_t * btstack_memory_db_mem_device_name_get(void){
    return (db_mem_device_name_t *) btstack_memory_pool_get(&db_mem_device_name_pool);
}
void btstack_memory_db_mem_device_name_free(db_mem_device_name_t *db_mem_device_name){
    btstack_memory_pool_free(&db_mem_device_name_pool, db_mem_device_name);
}
#else
db_mem_device_name_t * btstack_memory_db_mem_device_name_get(void){
    return NULL;
}
void btstack_memory_db_mem_device_name_free(db_mem_device_name_t *db_mem_device_name){
    // silence compiler warning about unused parameter in a portable way
    (void) db_mem_device_name;
};
#endif
#elif defined(HAVE_MALLOC)
db_mem_device_name_t * btstack_memory_db_mem_device_name_get(void){
    return (db_mem_device_name_t*) malloc(sizeof(db_mem_device_name_t));
}
void btstack_memory_db_mem_device_name_free(db_mem_device_name_t *db_mem_device_name){
    free(db_mem_device_name);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_DB_MEM_DEVICE_NAMES for struct db_mem_device_name is defined. Please, edit the config file."
#endif


// MARK: db_mem_device_link_key_t
#ifdef MAX_NO_DB_MEM_DEVICE_LINK_KEYS
#if MAX_NO_DB_MEM_DEVICE_LINK_KEYS > 0
static db_mem_device_link_key_t db_mem_device_link_key_storage[MAX_NO_DB_MEM_DEVICE_LINK_KEYS];
static btstack_memory_pool_t db_mem_device_link_key_pool;
db_mem_device_link_key_t * btstack_memory_db_mem_device_link_key_get(void){
    return (db_mem_device_link_key_t *) btstack_memory_pool_get(&db_mem_device_link_key_pool);
}
void btstack_memory_db_mem_device_link_key_free(db_mem_device_link_key_t *db_mem_device_link_key){
    btstack_memory_pool_free(&db_mem_device_link_key_pool, db_mem_device_link_key);
}
#else
db_mem_device_link_key_t * btstack_memory_db_mem_device_link_key_get(void){
    return NULL;
}
void btstack_memory_db_mem_device_link_key_free(db_mem_device_link_key_t *db_mem_device_link_key){
    // silence compiler warning about unused parameter in a portable way
    (void) db_mem_device_link_key;
};
#endif
#elif defined(HAVE_MALLOC)
db_mem_device_link_key_t * btstack_memory_db_mem_device_link_key_get(void){
    return (db_mem_device_link_key_t*) malloc(sizeof(db_mem_device_link_key_t));
}
void btstack_memory_db_mem_device_link_key_free(db_mem_device_link_key_t *db_mem_device_link_key){
    free(db_mem_device_link_key);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_DB_MEM_DEVICE_LINK_KEYS for struct db_mem_device_link_key is defined. Please, edit the config file."
#endif


// MARK: db_mem_service_t
#ifdef MAX_NO_DB_MEM_SERVICES
#if MAX_NO_DB_MEM_SERVICES > 0
static db_mem_service_t db_mem_service_storage[MAX_NO_DB_MEM_SERVICES];
static btstack_memory_pool_t db_mem_service_pool;
db_mem_service_t * btstack_memory_db_mem_service_get(void){
    return (db_mem_service_t *) btstack_memory_pool_get(&db_mem_service_pool);
}
void btstack_memory_db_mem_service_free(db_mem_service_t *db_mem_service){
    btstack_memory_pool_free(&db_mem_service_pool, db_mem_service);
}
#else
db_mem_service_t * btstack_memory_db_mem_service_get(void){
    return NULL;
}
void btstack_memory_db_mem_service_free(db_mem_service_t *db_mem_service){
    // silence compiler warning about unused parameter in a portable way
    (void) db_mem_service;
};
#endif
#elif defined(HAVE_MALLOC)
db_mem_service_t * btstack_memory_db_mem_service_get(void){
    return (db_mem_service_t*) malloc(sizeof(db_mem_service_t));
}
void btstack_memory_db_mem_service_free(db_mem_service_t *db_mem_service){
    free(db_mem_service);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_DB_MEM_SERVICES for struct db_mem_service is defined. Please, edit the config file."
#endif



// MARK: bnep_service_t
#ifdef MAX_NO_BNEP_SERVICES
#if MAX_NO_BNEP_SERVICES > 0
static bnep_service_t bnep_service_storage[MAX_NO_BNEP_SERVICES];
static btstack_memory_pool_t bnep_service_pool;
bnep_service_t * btstack_memory_bnep_service_get(void){
    return (bnep_service_t *) btstack_memory_pool_get(&bnep_service_pool);
}
void btstack_memory_bnep_service_free(bnep_service_t *bnep_service){
    btstack_memory_pool_free(&bnep_service_pool, bnep_service);
}
#else
bnep_service_t * btstack_memory_bnep_service_get(void){
    return NULL;
}
void btstack_memory_bnep_service_free(bnep_service_t *bnep_service){
    // silence compiler warning about unused parameter in a portable way
    (void) bnep_service;
};
#endif
#elif defined(HAVE_MALLOC)
bnep_service_t * btstack_memory_bnep_service_get(void){
    return (bnep_service_t*) malloc(sizeof(bnep_service_t));
}
void btstack_memory_bnep_service_free(bnep_service_t *bnep_service){
    free(bnep_service);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_BNEP_SERVICES for struct bnep_service is defined. Please, edit the config file."
#endif


// MARK: bnep_channel_t
#ifdef MAX_NO_BNEP_CHANNELS
#if MAX_NO_BNEP_CHANNELS > 0
static bnep_channel_t bnep_channel_storage[MAX_NO_BNEP_CHANNELS];
static btstack_memory_pool_t bnep_channel_pool;
bnep_channel_t * btstack_memory_bnep_channel_get(void){
    return (bnep_channel_t *) btstack_memory_pool_get(&bnep_channel_pool);
}
void btstack_memory_bnep_channel_free(bnep_channel_t *bnep_channel){
    btstack_memory_pool_free(&bnep_channel_pool, bnep_channel);
}
#else
bnep_channel_t * btstack_memory_bnep_channel_get(void){
    return NULL;
}
void btstack_memory_bnep_channel_free(bnep_channel_t *bnep_channel){
    // silence compiler warning about unused parameter in a portable way
    (void) bnep_channel;
};
#endif
#elif defined(HAVE_MALLOC)
bnep_channel_t * btstack_memory_bnep_channel_get(void){
    return (bnep_channel_t*) malloc(sizeof(bnep_channel_t));
}
void btstack_memory_bnep_channel_free(bnep_channel_t *bnep_channel){
    free(bnep_channel);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_BNEP_CHANNELS for struct bnep_channel is defined. Please, edit the config file."
#endif



// MARK: hfp_connection_t
#ifdef MAX_NO_HFP_CONNECTIONS
#if MAX_NO_HFP_CONNECTIONS > 0
static hfp_connection_t hfp_connection_storage[MAX_NO_HFP_CONNECTIONS];
static btstack_memory_pool_t hfp_connection_pool;
hfp_connection_t * btstack_memory_hfp_connection_get(void){
    return (hfp_connection_t *) btstack_memory_pool_get(&hfp_connection_pool);
}
void btstack_memory_hfp_connection_free(hfp_connection_t *hfp_connection){
    btstack_memory_pool_free(&hfp_connection_pool, hfp_connection);
}
#else
hfp_connection_t * btstack_memory_hfp_connection_get(void){
    return NULL;
}
void btstack_memory_hfp_connection_free(hfp_connection_t *hfp_connection){
    // silence compiler warning about unused parameter in a portable way
    (void) hfp_connection;
};
#endif
#elif defined(HAVE_MALLOC)
hfp_connection_t * btstack_memory_hfp_connection_get(void){
    return (hfp_connection_t*) malloc(sizeof(hfp_connection_t));
}
void btstack_memory_hfp_connection_free(hfp_connection_t *hfp_connection){
    free(hfp_connection);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_HFP_CONNECTIONS for struct hfp_connection is defined. Please, edit the config file."
#endif



// MARK: service_record_item_t
#ifdef MAX_NO_SERVICE_RECORD_ITEMS
#if MAX_NO_SERVICE_RECORD_ITEMS > 0
static service_record_item_t service_record_item_storage[MAX_NO_SERVICE_RECORD_ITEMS];
static btstack_memory_pool_t service_record_item_pool;
service_record_item_t * btstack_memory_service_record_item_get(void){
    return (service_record_item_t *) btstack_memory_pool_get(&service_record_item_pool);
}
void btstack_memory_service_record_item_free(service_record_item_t *service_record_item){
    btstack_memory_pool_free(&service_record_item_pool, service_record_item);
}
#else
service_record_item_t * btstack_memory_service_record_item_get(void){
    return NULL;
}
void btstack_memory_service_record_item_free(service_record_item_t *service_record_item){
    // silence compiler warning about unused parameter in a portable way
    (void) service_record_item;
};
#endif
#elif defined(HAVE_MALLOC)
service_record_item_t * btstack_memory_service_record_item_get(void){
    return (service_record_item_t*) malloc(sizeof(service_record_item_t));
}
void btstack_memory_service_record_item_free(service_record_item_t *service_record_item){
    free(service_record_item);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_SERVICE_RECORD_ITEMS for struct service_record_item is defined. Please, edit the config file."
#endif


#ifdef ENABLE_BLE

// MARK: gatt_client_t
#ifdef MAX_NO_GATT_CLIENTS
#if MAX_NO_GATT_CLIENTS > 0
static gatt_client_t gatt_client_storage[MAX_NO_GATT_CLIENTS];
static btstack_memory_pool_t gatt_client_pool;
gatt_client_t * btstack_memory_gatt_client_get(void){
    return (gatt_client_t *) btstack_memory_pool_get(&gatt_client_pool);
}
void btstack_memory_gatt_client_free(gatt_client_t *gatt_client){
    btstack_memory_pool_free(&gatt_client_pool, gatt_client);
}
#else
gatt_client_t * btstack_memory_gatt_client_get(void){
    return NULL;
}
void btstack_memory_gatt_client_free(gatt_client_t *gatt_client){
    // silence compiler warning about unused parameter in a portable way
    (void) gatt_client;
};
#endif
#elif defined(HAVE_MALLOC)
gatt_client_t * btstack_memory_gatt_client_get(void){
    return (gatt_client_t*) malloc(sizeof(gatt_client_t));
}
void btstack_memory_gatt_client_free(gatt_client_t *gatt_client){
    free(gatt_client);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_GATT_CLIENTS for struct gatt_client is defined. Please, edit the config file."
#endif


// MARK: gatt_subclient_t
#ifdef MAX_NO_GATT_SUBCLIENTS
#if MAX_NO_GATT_SUBCLIENTS > 0
static gatt_subclient_t gatt_subclient_storage[MAX_NO_GATT_SUBCLIENTS];
static btstack_memory_pool_t gatt_subclient_pool;
gatt_subclient_t * btstack_memory_gatt_subclient_get(void){
    return (gatt_subclient_t *) btstack_memory_pool_get(&gatt_subclient_pool);
}
void btstack_memory_gatt_subclient_free(gatt_subclient_t *gatt_subclient){
    btstack_memory_pool_free(&gatt_subclient_pool, gatt_subclient);
}
#else
gatt_subclient_t * btstack_memory_gatt_subclient_get(void){
    return NULL;
}
void btstack_memory_gatt_subclient_free(gatt_subclient_t *gatt_subclient){
    // silence compiler warning about unused parameter in a portable way
    (void) gatt_subclient;
};
#endif
#elif defined(HAVE_MALLOC)
gatt_subclient_t * btstack_memory_gatt_subclient_get(void){
    return (gatt_subclient_t*) malloc(sizeof(gatt_subclient_t));
}
void btstack_memory_gatt_subclient_free(gatt_subclient_t *gatt_subclient){
    free(gatt_subclient);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_GATT_SUBCLIENTS for struct gatt_subclient is defined. Please, edit the config file."
#endif


// MARK: whitelist_entry_t
#ifdef MAX_NO_WHITELIST_ENTRIES
#if MAX_NO_WHITELIST_ENTRIES > 0
static whitelist_entry_t whitelist_entry_storage[MAX_NO_WHITELIST_ENTRIES];
static btstack_memory_pool_t whitelist_entry_pool;
whitelist_entry_t * btstack_memory_whitelist_entry_get(void){
    return (whitelist_entry_t *) btstack_memory_pool_get(&whitelist_entry_pool);
}
void btstack_memory_whitelist_entry_free(whitelist_entry_t *whitelist_entry){
    btstack_memory_pool_free(&whitelist_entry_pool, whitelist_entry);
}
#else
whitelist_entry_t * btstack_memory_whitelist_entry_get(void){
    return NULL;
}
void btstack_memory_whitelist_entry_free(whitelist_entry_t *whitelist_entry){
    // silence compiler warning about unused parameter in a portable way
    (void) whitelist_entry;
};
#endif
#elif defined(HAVE_MALLOC)
whitelist_entry_t * btstack_memory_whitelist_entry_get(void){
    return (whitelist_entry_t*) malloc(sizeof(whitelist_entry_t));
}
void btstack_memory_whitelist_entry_free(whitelist_entry_t *whitelist_entry){
    free(whitelist_entry);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_WHITELIST_ENTRIES for struct whitelist_entry is defined. Please, edit the config file."
#endif


// MARK: sm_lookup_entry_t
#ifdef MAX_NO_SM_LOOKUP_ENTRIES
#if MAX_NO_SM_LOOKUP_ENTRIES > 0
static sm_lookup_entry_t sm_lookup_entry_storage[MAX_NO_SM_LOOKUP_ENTRIES];
static btstack_memory_pool_t sm_lookup_entry_pool;
sm_lookup_entry_t * btstack_memory_sm_lookup_entry_get(void){
    return (sm_lookup_entry_t *) btstack_memory_pool_get(&sm_lookup_entry_pool);
}
void btstack_memory_sm_lookup_entry_free(sm_lookup_entry_t *sm_lookup_entry){
    btstack_memory_pool_free(&sm_lookup_entry_pool, sm_lookup_entry);
}
#else
sm_lookup_entry_t * btstack_memory_sm_lookup_entry_get(void){
    return NULL;
}
void btstack_memory_sm_lookup_entry_free(sm_lookup_entry_t *sm_lookup_entry){
    // silence compiler warning about unused parameter in a portable way
    (void) sm_lookup_entry;
};
#endif
#elif defined(HAVE_MALLOC)
sm_lookup_entry_t * btstack_memory_sm_lookup_entry_get(void){
    return (sm_lookup_entry_t*) malloc(sizeof(sm_lookup_entry_t));
}
void btstack_memory_sm_lookup_entry_free(sm_lookup_entry_t *sm_lookup_entry){
    free(sm_lookup_entry);
}
#else
#error "Neither HAVE_MALLOC nor MAX_NO_SM_LOOKUP_ENTRIES for struct sm_lookup_entry is defined. Please, edit the config file."
#endif


#endif
// init
void btstack_memory_init(void){
#if MAX_NO_HCI_CONNECTIONS > 0
    btstack_memory_pool_create(&hci_connection_pool, hci_connection_storage, MAX_NO_HCI_CONNECTIONS, sizeof(hci_connection_t));
#endif
#if MAX_NO_L2CAP_SERVICES > 0
    btstack_memory_pool_create(&l2cap_service_pool, l2cap_service_storage, MAX_NO_L2CAP_SERVICES, sizeof(l2cap_service_t));
#endif
#if MAX_NO_L2CAP_CHANNELS > 0
    btstack_memory_pool_create(&l2cap_channel_pool, l2cap_channel_storage, MAX_NO_L2CAP_CHANNELS, sizeof(l2cap_channel_t));
#endif
#if MAX_NO_RFCOMM_MULTIPLEXERS > 0
    btstack_memory_pool_create(&rfcomm_multiplexer_pool, rfcomm_multiplexer_storage, MAX_NO_RFCOMM_MULTIPLEXERS, sizeof(rfcomm_multiplexer_t));
#endif
#if MAX_NO_RFCOMM_SERVICES > 0
    btstack_memory_pool_create(&rfcomm_service_pool, rfcomm_service_storage, MAX_NO_RFCOMM_SERVICES, sizeof(rfcomm_service_t));
#endif
#if MAX_NO_RFCOMM_CHANNELS > 0
    btstack_memory_pool_create(&rfcomm_channel_pool, rfcomm_channel_storage, MAX_NO_RFCOMM_CHANNELS, sizeof(rfcomm_channel_t));
#endif
#if MAX_NO_DB_MEM_DEVICE_NAMES > 0
    btstack_memory_pool_create(&db_mem_device_name_pool, db_mem_device_name_storage, MAX_NO_DB_MEM_DEVICE_NAMES, sizeof(db_mem_device_name_t));
#endif
#if MAX_NO_DB_MEM_DEVICE_LINK_KEYS > 0
    btstack_memory_pool_create(&db_mem_device_link_key_pool, db_mem_device_link_key_storage, MAX_NO_DB_MEM_DEVICE_LINK_KEYS, sizeof(db_mem_device_link_key_t));
#endif
#if MAX_NO_DB_MEM_SERVICES > 0
    btstack_memory_pool_create(&db_mem_service_pool, db_mem_service_storage, MAX_NO_DB_MEM_SERVICES, sizeof(db_mem_service_t));
#endif
#if MAX_NO_BNEP_SERVICES > 0
    btstack_memory_pool_create(&bnep_service_pool, bnep_service_storage, MAX_NO_BNEP_SERVICES, sizeof(bnep_service_t));
#endif
#if MAX_NO_BNEP_CHANNELS > 0
    btstack_memory_pool_create(&bnep_channel_pool, bnep_channel_storage, MAX_NO_BNEP_CHANNELS, sizeof(bnep_channel_t));
#endif
#if MAX_NO_HFP_CONNECTIONS > 0
    btstack_memory_pool_create(&hfp_connection_pool, hfp_connection_storage, MAX_NO_HFP_CONNECTIONS, sizeof(hfp_connection_t));
#endif
#if MAX_NO_SERVICE_RECORD_ITEMS > 0
    btstack_memory_pool_create(&service_record_item_pool, service_record_item_storage, MAX_NO_SERVICE_RECORD_ITEMS, sizeof(service_record_item_t));
#endif
#ifdef ENABLE_BLE
#if MAX_NO_GATT_CLIENTS > 0
    btstack_memory_pool_create(&gatt_client_pool, gatt_client_storage, MAX_NO_GATT_CLIENTS, sizeof(gatt_client_t));
#endif
#if MAX_NO_GATT_SUBCLIENTS > 0
    btstack_memory_pool_create(&gatt_subclient_pool, gatt_subclient_storage, MAX_NO_GATT_SUBCLIENTS, sizeof(gatt_subclient_t));
#endif
#if MAX_NO_WHITELIST_ENTRIES > 0
    btstack_memory_pool_create(&whitelist_entry_pool, whitelist_entry_storage, MAX_NO_WHITELIST_ENTRIES, sizeof(whitelist_entry_t));
#endif
#if MAX_NO_SM_LOOKUP_ENTRIES > 0
    btstack_memory_pool_create(&sm_lookup_entry_pool, sm_lookup_entry_storage, MAX_NO_SM_LOOKUP_ENTRIES, sizeof(sm_lookup_entry_t));
#endif
#endif
}