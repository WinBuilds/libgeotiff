#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(GEOTIFF_LIB)
#  define GEOTIFF_EXPORT Q_DECL_EXPORT
# else
#  define GEOTIFF_EXPORT Q_DECL_IMPORT
# endif
#else
# define GEOTIFF_EXPORT
#endif
