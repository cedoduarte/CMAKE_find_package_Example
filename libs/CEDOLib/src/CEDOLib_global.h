#ifndef CEDOLIB_GLOBAL_H
#define CEDOLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CEDOLIB_LIBRARY)
#  define CEDOLIB_EXPORT Q_DECL_EXPORT
#else
#  define CEDOLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // CEDOLIB_GLOBAL_H
