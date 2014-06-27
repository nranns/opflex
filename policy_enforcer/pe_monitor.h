/*
* Copyright (c) 2014 Cisco Systems, Inc. and others.
*               All rights reserved.
*
* This program and the accompanying materials are made available under
* the terms of the Eclipse Public License v1.0 which accompanies this
* distribution, and is available at
* http://www.eclipse.org/legal/epl-v10.html
*/
#ifndef PE_MONITOR_H
#define PE_MONITOR_H 1

#include <stdbool.h>
#include "ovsdb/table.h"
#include "column.h"

/* need to variablize PE_OVSDB_* below */
#define PE_OVSDB_SOCK "unix:/var/run/openvswitch/db.sock"
#define PE_OVSDB_NAME "Open_vSwitch"

struct monitored_table {
    struct ovsdb_table_schema *table;
    struct ovsdb_column_set columns;
};


extern bool pe_monitor_quit;

void pe_monitor_init(void);

#endif //PE_MONITOR_H
