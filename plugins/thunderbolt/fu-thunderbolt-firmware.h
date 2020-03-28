/*
 * Copyright (C) 2017 Intel Corporation.
 * Copyright (C) 2020 Richard Hughes <richard@hughsie.com>
 *
 * SPDX-License-Identifier: LGPL-2.1+
 */

#pragma once

#include "fu-firmware.h"

#define FU_TYPE_THUNDERBOLT_FIRMWARE (fu_thunderbolt_firmware_get_type ())
G_DECLARE_FINAL_TYPE (FuThunderboltFirmware, fu_thunderbolt_firmware, FU,THUNDERBOLT_FIRMWARE, FuFirmware)

/* byte offsets in firmware image */
#define FU_TBT_OFFSET_NATIVE		0x7B
#define FU_TBT_CHUNK_SZ			0x40

FuFirmware	*fu_thunderbolt_firmware_new			(void);

//FIXME: remove -- move to parse
gboolean	 fu_thunderbolt_firmware_validate		(GBytes  *controller_fw,
								 GBytes  *blob_fw,
								 GError **error);

//FIXME: take a FuFirmware instead
gboolean	 fu_thunderbolt_firmware_controller_is_native	(GBytes    *controller_fw,
								 gboolean  *is_native,
								 GError   **error);
