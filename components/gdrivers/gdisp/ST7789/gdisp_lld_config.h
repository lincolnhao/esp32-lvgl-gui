/*
 * Created by Oleg Gerasimov <ogerasimov@gmail.com>
 * 10.08.2016
*/

#ifndef _GDISP_LLD_CONFIG_H
#define _GDISP_LLD_CONFIG_H

#include "sdkconfig.h"
#include "ugfx_driver_config.h"

#if GFX_USE_GDISP

/*===========================================================================*/
/* Driver hardware support.                                                  */
/*===========================================================================*/

#define GDISP_HARDWARE_STREAM_WRITE     TRUE
#define GDISP_HARDWARE_CONTROL          TRUE
#define GDISP_HARDWARE_FILLS            TRUE

#define GDISP_LLD_PIXELFORMAT           GDISP_PIXELFORMAT_RGB565

#endif /* GFX_USE_GDISP */

#endif /* _GDISP_LLD_CONFIG_H */
