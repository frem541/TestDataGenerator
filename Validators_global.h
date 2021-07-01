#ifndef VALIDATORS_GLOBAL_H
#define VALIDATORS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(VALIDATORS_LIBRARY)
#  define VALIDATORS_EXPORT Q_DECL_EXPORT
#else
#  define VALIDATORS_EXPORT Q_DECL_IMPORT
#endif

#endif // VALIDATORS_GLOBAL_H
