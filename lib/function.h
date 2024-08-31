#ifndef LIB_FUNCTION_H
#define LIB_FUNCTION_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
  kUndetermined = 0x00U,
  kInitialized = 0x0FU,
  kSuccess = 0x5AU,
  kFailure = 0xFFU
} fn_t;

#ifdef __cplusplus
}
#endif

#endif
