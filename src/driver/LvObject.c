/*------------------------------------------------------------------------------
 *
 * COPYRIGHT (C) 2019 Arrive Technologies Inc.
 *
 * The information contained herein is confidential property of The Arrive Technologies
 * The use, copying, transfer or disclosure of such information is prohibited
 * except by express written agreement with Arrive Technologies.
 *
 * Module      : TODO Module Name
 *
 * File        : LvObject.c
 *
 * Created Date: Jan 2, 2019
 *
 * Description : TODO Descriptions
 *
 * Notes       : 
 *----------------------------------------------------------------------------*/

/*--------------------------- Include files ----------------------------------*/
#include "LvObjectInternal.h"

/*--------------------------- Define -----------------------------------------*/

/*--------------------------- Macros -----------------------------------------*/

/*--------------------------- Local typedefs ---------------------------------*/

/*--------------------------- Global variables -------------------------------*/

/*--------------------------- Local variables --------------------------------*/
static char mMethodsInit = 0;
static tLvObjectMethods m_methods;

/*--------------------------- Forward declarations ---------------------------*/

/*--------------------------- Implementation ---------------------------------*/
static char ObjectNameGet(LvObject object)
    {
    printf("New object\r\n");
    return 1;
    }

static MethodsInit(LvObject self)
    {
    if (!mMethodsInit)
        {
        memset(&m_methods, 0, sizeof(m_methods));
        (m_methods.ObjectNameGet) = ObjectNameGet;
        }
    (self->methods) = &m_methods;
    }

static LvObject LvObjectInit(LvObject self)
    {
    MethodsInit(self);
    mMethodsInit = 1;
    return self;
    }

LvObject LvObjectNew()
    {
    LvObject object = malloc(sizeof(tLvObject));
    return LvObjectInit(object);
    }

void main()
    {
    LvObject newObject = LvObjectNew();
    (newObject->methods)->ObjectNameGet(newObject);
    free(newObject);
    }
