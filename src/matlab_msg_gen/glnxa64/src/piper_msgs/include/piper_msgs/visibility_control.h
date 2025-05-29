#ifndef PIPER_MSGS__VISIBILITY_CONTROL_H_
#define PIPER_MSGS__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define PIPER_MSGS_EXPORT __attribute__ ((dllexport))
    #define PIPER_MSGS_IMPORT __attribute__ ((dllimport))
  #else
    #define PIPER_MSGS_EXPORT __declspec(dllexport)
    #define PIPER_MSGS_IMPORT __declspec(dllimport)
  #endif
  #ifdef PIPER_MSGS_BUILDING_LIBRARY
    #define PIPER_MSGS_PUBLIC PIPER_MSGS_EXPORT
  #else
    #define PIPER_MSGS_PUBLIC PIPER_MSGS_IMPORT
  #endif
  #define PIPER_MSGS_PUBLIC_TYPE PIPER_MSGS_PUBLIC
  #define PIPER_MSGS_LOCAL
#else
  #define PIPER_MSGS_EXPORT __attribute__ ((visibility("default")))
  #define PIPER_MSGS_IMPORT
  #if __GNUC__ >= 4
    #define PIPER_MSGS_PUBLIC __attribute__ ((visibility("default")))
    #define PIPER_MSGS_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define PIPER_MSGS_PUBLIC
    #define PIPER_MSGS_LOCAL
  #endif
  #define PIPER_MSGS_PUBLIC_TYPE
#endif
#endif  // PIPER_MSGS__VISIBILITY_CONTROL_H_
// Generated 29-May-2025 11:06:35
 