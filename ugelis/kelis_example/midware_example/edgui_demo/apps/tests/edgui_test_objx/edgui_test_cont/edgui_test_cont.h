/**
 * @file edgui_test_cont.h
 *
 */

#ifndef EDGUI_TEST_CONT_H
#define EDGUI_TEST_CONT_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#ifdef EDGUI_CONF_INCLUDE_SIMPLE
#include "edgui.h"
#include "edgui_conf.h"
#else
#include <edgui/edgui.h>
#include <edgui/edgui_conf.h>
#endif
	
#include "edgui_prj_conf.h"


#if EDGUI_USE_CONT && EDGUI_USE_TESTS

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Create containers to test their  basic functionalities
 */
void edgui_test_cont_1(void);

/**
 * Test nested style inheritance on padding update
 */
void edgui_test_cont_2(void);

/**********************
 *      MACROS
 **********************/

#endif /*EDGUI_USE_CONT && EDGUI_USE_TESTS*/

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*EDGUI_TEST_CONT_H*/
