/*-----------------------------------------------------------------------------
 *
 * COPYRIGHT (C) 2019 Arrive Technologies Inc.
 * 
 * The information contained herein is confidential property of Arrive Technologies.
 * The use, copying, transfer or disclosure of such information 
 * is prohibited except by express written agreement with Arrive Technologies.
 * 
 * Module      : TODO module name
 * 
 * File        : LvObjectInternal.h
 * 
 * Created Date: Jan 2, 2019
 *
 * Description : TODO Description
 * 
 * Notes       : 
 *----------------------------------------------------------------------------*/

#ifndef _DRIVER_SRC_GENERIC_COMMON_LVOBJECTINTERNAL_H_
#define _DRIVER_SRC_GENERIC_COMMON_LVOBJECTINTERNAL_H_

/*--------------------------- Includes ---------------------------------------*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*--------------------------- Define -----------------------------------------*/
#ifdef __cplusplus
extern "C" {
#endif

/*--------------------------- Macros -----------------------------------------*/

/*--------------------------- Typedefs ---------------------------------------*/
typedef struct tLvObject * LvObject;

typedef struct tLvObjectMethods
    {
    char (*ObjectNameGet)(LvObject object);
    }tLvObjectMethods;

typedef struct tLvObject
    {
    const tLvObjectMethods * methods;
    }tLvObject;

/*--------------------------- Forward declarations ---------------------------*/

/*--------------------------- Entries ----------------------------------------*/
#ifdef __cplusplus
}
#endif
#endif /* _DRIVER_SRC_GENERIC_COMMON_LVOBJECTINTERNAL_H_ */

