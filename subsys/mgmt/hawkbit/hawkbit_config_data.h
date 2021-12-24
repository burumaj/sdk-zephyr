/*
 * Copyright (c) 2021 Advanced Climate Systems
 *
 * SPDX-License-Identiier: Apache-2.0
 */

#ifndef __HAWKBIT_CONFIG_DATA_H__
#define __HAWKBIT_CONFIG_DATA_H__

#include <data/json.h>
#include <autoconf.h>

#if defined(CONFIG_HAWKBIT_CUSTOM_CONFIG_DATA)
#include <mgmt/hawkbit/custom_config_data.h>
#else

struct hawkbit_cfg_data {
	const char *VIN;
	const char *hwRevision;
};

static const struct json_obj_descr json_cfg_data_descr[] = {
	JSON_OBJ_DESCR_PRIM(struct hawkbit_cfg_data, VIN, JSON_TOK_STRING),
	JSON_OBJ_DESCR_PRIM(struct hawkbit_cfg_data, hwRevision, JSON_TOK_STRING),
};

#endif

#include <mgmt/hawkbit/config_data.h>

#endif /* __HAWKBIT_CONFIG_DATA_H__ */
