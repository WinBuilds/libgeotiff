#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(GEOTIFFDLL_LIB)
#  define GEOTIFFDLL_EXPORT Q_DECL_EXPORT
# else
#  define GEOTIFFDLL_EXPORT Q_DECL_IMPORT
# endif
#else
# define GEOTIFFDLL_EXPORT
#endif
