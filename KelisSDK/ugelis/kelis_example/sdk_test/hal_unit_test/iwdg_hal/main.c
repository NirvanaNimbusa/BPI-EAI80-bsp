/*
 * Copyright (c) 2016 Intel Corporation
 * Copyright (c) 2018 Nordic Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/**
 * @addtogroup t_driver_wdt
 * @{
 * @defgroup t_wdt_basic test_wdt_basic_operations
 * @}
 */

#include <ugelis.h>
#include <ztest.h>
#include "gm_test_iwdg.h"


void test_main(void)
{
    ztest_test_suite(gm_hal_iwdg_basic_test,
                     ztest_unit_test(gm_test_iwdg));
    ztest_run_test_suite(gm_hal_iwdg_basic_test);
}