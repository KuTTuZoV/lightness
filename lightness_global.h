#ifndef LIGHTNESS_GLOBAL_H
#define LIGHTNESS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIGHTNESS_LIBRARY)
#  define LIGHTNESS_EXPORT Q_DECL_EXPORT
#else
#  define LIGHTNESS_EXPORT Q_DECL_IMPORT
#endif

#endif // LIGHTNESS_GLOBAL_H
