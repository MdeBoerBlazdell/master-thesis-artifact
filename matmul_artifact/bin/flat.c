

/*
 *  Global Switches
 */

#define SAC_DO_PHM                               1
#define SAC_DO_APS                               1
#define SAC_DO_DAO                               1
#define SAC_DO_MSCA                              1
#define SAC_DO_COMPILE_MODULE                    0
#define SAC_DO_MULTI_GPU                         0

// -check flags (see -h rtcheck)
#ifndef SAC_DO_CHECK
#define SAC_DO_CHECK                             0
#endif
#ifndef SAC_DO_CHECK_TYPE
#define SAC_DO_CHECK_TYPE                        0
#endif
#ifndef SAC_DO_CHECK_GPU
#define SAC_DO_CHECK_GPU                         0
#endif
#ifndef SAC_DO_CHECK_BOUNDARY
#define SAC_DO_CHECK_BOUNDARY                    0
#endif
#ifndef SAC_DO_CHECK_MALLOC
#define SAC_DO_CHECK_MALLOC                      0
#endif
#ifndef SAC_DO_CHECK_ERRNO
#define SAC_DO_CHECK_ERRNO                       0
#endif
#ifndef SAC_DO_CHECK_HEAP
#define SAC_DO_CHECK_HEAP                        0
#endif
#ifndef SAC_DO_CHECK_DISTMEM
#define SAC_DO_CHECK_DISTMEM                     0
#endif
#ifndef SAC_DO_CHECK_STACKTRACE
#define SAC_DO_CHECK_STACKTRACE                  0
#endif

// -profile flags (see -h rtprofile)
#ifndef SAC_DO_PROFILE
#define SAC_DO_PROFILE                           0
#endif
#ifndef SAC_DO_PROFILE_WITH
#define SAC_DO_PROFILE_WITH                      0
#endif
#ifndef SAC_DO_PROFILE_FUN
#define SAC_DO_PROFILE_FUN                       0
#endif
#ifndef SAC_DO_PROFILE_INL
#define SAC_DO_PROFILE_INL                       0
#endif
#ifndef SAC_DO_PROFILE_LIB
#define SAC_DO_PROFILE_LIB                       0
#endif
#ifndef SAC_DO_PROFILE_MEM
#define SAC_DO_PROFILE_MEM                       0
#endif
#ifndef SAC_DO_PROFILE_OPS
#define SAC_DO_PROFILE_OPS                       0
#endif
#ifndef SAC_DO_PROFILE_CUDA
#define SAC_DO_PROFILE_CUDA                      0
#endif
#ifndef SAC_DO_PROFILE_DISTMEM
#define SAC_DO_PROFILE_DISTMEM                   0
#endif

// -trace flags (see -h rttrace)
#ifndef SAC_DO_TRACE
#define SAC_DO_TRACE                             0
#endif
#ifndef SAC_DO_TRACE_REF
#define SAC_DO_TRACE_REF                         0
#endif
#ifndef SAC_DO_TRACE_MEM
#define SAC_DO_TRACE_MEM                         0
#endif
#ifndef SAC_DO_TRACE_PRF
#define SAC_DO_TRACE_PRF                         0
#endif
#ifndef SAC_DO_TRACE_FUN
#define SAC_DO_TRACE_FUN                         0
#endif
#ifndef SAC_DO_TRACE_WL
#define SAC_DO_TRACE_WL                          0
#endif
#ifndef SAC_DO_TRACE_AA
#define SAC_DO_TRACE_AA                          0
#endif
#ifndef SAC_DO_TRACE_MT
#define SAC_DO_TRACE_MT                          0
#endif
#ifndef SAC_DO_TRACE_GPU
#define SAC_DO_TRACE_GPU                         0
#endif
#ifndef SAC_DO_TRACE_RTSPEC
#define SAC_DO_TRACE_RTSPEC                      0
#endif
#ifndef SAC_DO_TRACE_DISTMEM
#define SAC_DO_TRACE_DISTMEM                     0
#endif
#ifndef SAC_DO_TRACE_STACKTRACE
#define SAC_DO_TRACE_STACKTRACE                  0
#endif

// Cachedim flags (see -h cachedim)
#ifndef SAC_DO_CACHESIM
#define SAC_DO_CACHESIM                          0
#endif
#ifndef SAC_DO_CACHESIM_ADV
#define SAC_DO_CACHESIM_ADV                      0
#endif
#ifndef SAC_DO_CACHESIM_GLOBAL
#define SAC_DO_CACHESIM_GLOBAL                   1
#endif
#ifndef SAC_DO_CACHESIM_FILE
#define SAC_DO_CACHESIM_FILE                     0
#endif
#ifndef SAC_DO_CACHESIM_PIPE
#define SAC_DO_CACHESIM_PIPE                     0
#endif
#ifndef SAC_DO_CACHESIM_IMDT
#define SAC_DO_CACHESIM_IMDT                     1
#endif

/*
 * Setup for Multi Threaded Data Parallelism
 */
#define SAC_DO_MULTITHREAD                       1
#define SAC_DO_THREADS_STATIC                    0
#define SAC_DO_MT_CREATE_JOIN                    0
#define SAC_DO_MT_PTHREAD                        1
#define SAC_DO_MT_LPEL                           0
#define SAC_DO_MT_DYNAMIC                        0

/*
 * Setup for OMP Data Parallelism
 */
#define SAC_DO_MT_OMP                            0
#define SAC_DO_OMP_MACROS                        0

/*
 * Setup for MUTC
 */
#define SAC_MUTC_FUNAP_AS_CREATE                 0
#define SAC_MUTC_THREAD_MALLOC                   0
#define SAC_MUTC_DISABLE_THREAD_MEM              0
#define SAC_MUTC_BENCH                           0
#define SAC_MUTC_MACROS                          0
#define SAC_MUTC_RC_INDIRECT                     0
#define SAC_MUTC_SEQ_DATA_PARALLEL               0

/*
 * Setup for GPU Data Parallelism
 */
#define SAC_CUDA_MACROS                          0

/*
 * Setup for Distributed Memory Data Parallelism
 */
#define SAC_DO_DISTMEM                           0

#define SAC_DO_DISTMEM_GASNET                    0

#define SAC_DO_DISTMEM_UCX                       0

/*
 * Setup for Task Parallelism
 */
#define SAC_DO_FP                                0

/*
 * Debugging Support
 */
#ifndef SAC_DEBUG_RC
#define SAC_DEBUG_RC                             0
#endif

#define SAC_DO_CUDA_FORCE_INIT 1


/*
 *  Global Settings
 */

#define SAC_FORCE_DESC_SIZE -1

/*
 *  MUTC Backend Specific Settings
 */
#define SAC_MUTC_RC_PLACES  1
#define SAC_MUTC_FORCE_SPAWN_FLAGS

#define SAC_C_EXTERN           extern



/*
 *  Global Settings
 */

#ifndef NULL
#  ifdef __cplusplus
#    define NULL         0
#  else
#    define NULL         (void*) 0
#  endif
#endif

#define SAC_SET_TMPDIR              "/tmp"
#define SAC_SET_INITIAL_MASTER_HEAPSIZE      1048576
#define SAC_SET_INITIAL_WORKER_HEAPSIZE      65536
#define SAC_SET_INITIAL_UNIFIED_HEAPSIZE     0

#ifndef SAC_SET_RTSPEC_THREADS
#define SAC_SET_RTSPEC_THREADS              1
#endif

#ifndef SAC_SET_MTMODE
#define SAC_SET_MTMODE               2
#endif

#define SAC_SET_CPU_BIND_STRATEGY 0
#define SAC_SET_BARRIER_TYPE               0
#define SAC_SET_SMART_DECISIONS            0
#define SAC_SET_SMART_FILENAME           "default"
#define SAC_SET_SMART_ARCH               "(null)"
#define SAC_SET_SMART_PERIOD               500
#ifndef SAC_SET_THREADS_MAX
#define SAC_SET_THREADS_MAX          128
#endif

#ifndef SAC_SET_THREADS
#define SAC_SET_THREADS              0
#endif

#ifndef SAC_OMP_ACTIVE_LEVEL
#define SAC_OMP_ACTIVE_LEVEL          1
#endif

#ifndef SAC_SET_MASTERCLASS
#define SAC_SET_MASTERCLASS          0
#endif

#define SAC_SET_NUM_SCHEDULERS       1

#define SAC_SET_CACHE_1_SIZE         -1
#define SAC_SET_CACHE_1_LINE         4
#define SAC_SET_CACHE_1_ASSOC        1
#define SAC_SET_CACHE_1_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_1_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_2_SIZE         -1
#define SAC_SET_CACHE_2_LINE         4
#define SAC_SET_CACHE_2_ASSOC        1
#define SAC_SET_CACHE_2_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_2_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_3_SIZE         -1
#define SAC_SET_CACHE_3_LINE         4
#define SAC_SET_CACHE_3_ASSOC        1
#define SAC_SET_CACHE_3_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_3_MSCA_FACTOR  0.00

#define SAC_SET_CACHESIM_HOST        ""
#define SAC_SET_CACHESIM_FILE        "flat.cs"
#define SAC_SET_CACHESIM_DIR         "/tmp"
#define SAC_SET_MAXFUN               0
#define SAC_SET_MAXFUNAP             1
#define SBLOCKSZ               16
#define LBLOCKSZ               256



/*
 *  Includes
 */


#include "sac.h"


#if SAC_OMP_MACROS

#include "omp.h"

#endif

#if SAC_CUDA_MACROS

#include <stdio.h>


#include <cuda.h>


#include <cuda_runtime.h>


#include <algorithm>

#endif

/*
 *  SAC-Program flat.sac :
 */


/* Additional headers for external function declarations */
#include <math.h>
#include "libsac/essentials/message.h"
#include "libsac/essentials/thecontrollflow.h"
#include "libsac/essentials/stack.h"
#include "libsac/interface/sacarg.h"


/*
 *  type definitions
 */

SAC_ND_TYPEDEF((SACt_World__World, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Benchmarking__Benchmarking, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Interval__Interval, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Benchmarking__Interval, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_String__string, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*)

SAC_C_EXTERN SACt_String__string copy_string (SACt_String__string);
SAC_C_EXTERN SACt_String__string free_string (SACt_String__string);

SAC_ND_TYPEDEF((SACt_MTClock__MTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_Terminal__Terminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)
SAC_ND_TYPEDEF((SACt_TermFile__TermFile, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden)


/*
 *  Global Definitions
 */

SAC_PF_DEFINE()
SAC_HM_DEFINE()


/*
 *  prototypes for externals (FUNDECS)
 */

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACtostring, (char*, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 2, in_nodesc, unsigned char, (SACl_A, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in_nodesc, SAC_INT, (SACl_LENGTH, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACtostring, SAC_ND_TYPE_NT( (char*, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))),  SAC_ND_PARAM_in_nodesc( (SACl_A, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in_nodesc( (SACl_LENGTH, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACprintf_TF, , 2, in_nodesc, char*, (SACl_FORMAT, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), , ..., )
 */
SAC_ND_DECL_FUN2( SACprintf_TF, void,  SAC_ND_PARAM_in_nodesc( (SACl_FORMAT, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), char*), SAC_ND_PARAM_( , ...));



/*
 *  FFI wrap/unwrap/is function headers (TYPEDEFS)
 */



/*
 *  prototypes for locals (FUNDEFS)
 */

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionSlicer__i_S__i_S__i_S__i_S__i_S, , 9, out, SAC_INT, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_min, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_max, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_axis, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionSlicer__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_min, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_max, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_axis, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_S, , 4, out, SAC_INT, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf__MAIN_CL_ST__main, , 1, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__prod__i_S, , 2, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__prod__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_S__i_S, , 5, out, SAC_INT, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_shp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_iv, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_shp, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__b_S__b_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, byte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, byte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__b_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__s_S__s_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, short, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, short, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__s_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__i_S__i_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__l_S__l_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, long, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__l_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ll_S__ll_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, longlong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, longlong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ll_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ub_S__ub_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ubyte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, ubyte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ub_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__us_S__us_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ushort, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, ushort, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__us_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ui_S__ui_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, uint, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, uint, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ui_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ul_S__ul_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, ulong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ul_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__ull_S__ull_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulonglong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, ulonglong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__ull_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__f_S__f_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, float, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, float, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__f_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__d_S__d_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, double, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__d_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__c_S__c_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, unsigned char, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, unsigned char, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__eq__bl_S__bl_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__eq__bl_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__gridFiller__i_S__i_S__i_S__i_S__i_S, , 8, out, SAC_INT, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_wdth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_dim, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_maxwidth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__gridFiller__i_S__i_S__i_S__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_lb, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_ub, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_wdth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_dim, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_maxwidth, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionMax__i_S__i_S, , 3, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionMax__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__partitionMin__i_S__i_S, , 3, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__partitionMin__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__b_S, , 3, out, byte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, byte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__s_S, , 3, out, short, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, short, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__i_S, , 3, out, SAC_INT, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__l_S, , 3, out, long, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, long, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ll_S, , 3, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, longlong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ub_S, , 3, out, ubyte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ubyte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__us_S, , 3, out, ushort, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ushort, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ui_S, , 3, out, uint, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, uint, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ul_S, , 3, out, ulong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__ull_S, , 3, out, ulonglong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulonglong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__f_S, , 3, out, float, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, float, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__d_S, , 3, out, double, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, unsigned char, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACwf_sacprelude_p__sel__i_S__bl_S, , 3, out, bool, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACwf_sacprelude_p__sel__i_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_idx, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST__main, , 1, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * MT_SPMDFUN_DECL( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
;

SAC_C_EXTERN 
/*
 * MT_SPMDFUN_DECL( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_3308_main__d( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
;

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
 */
SAC_ND_DECL_FUN2( SACf__MAIN_CL_ST_CL_INIT__init, void, void);

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Benchmarking_CL_INIT__init_TheBenchmarkObject__SACt_Benchmarking__Benchmarking, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Benchmarking_CL_INIT__init_TheBenchmarkObject__SACt_Benchmarking__Benchmarking, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Benchmarking__getInterval__SACt_String__string__i, , 3, out, SAC_hidden, (SAC_arg_1, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), in, char*, (SACl_interval_name, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), in, SAC_INT, (SACl_interval_number, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Benchmarking__getInterval__SACt_String__string__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), SAC_hidden), SAC_ND_PARAM_in( (SACl_interval_name, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), char*), SAC_ND_PARAM_in( (SACl_interval_number, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Benchmarking__start__SACt_Benchmarking__Interval, , 1, inout, SAC_hidden, (SACl_interval, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Benchmarking__start__SACt_Benchmarking__Interval, void,  SAC_ND_PARAM_inout( (SACl_interval, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Benchmarking__end__SACt_Benchmarking__Interval, , 1, inout, SAC_hidden, (SACl_interval, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Benchmarking__end__SACt_Benchmarking__Interval, void,  SAC_ND_PARAM_inout( (SACl_interval, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Benchmarking__returnResultUnit__SACt_Benchmarking__Interval, , 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), out, char*, (SAC_arg_2, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), inout, SAC_hidden, (SACl_int1, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Benchmarking__returnResultUnit__SACt_Benchmarking__Interval, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_out( (SAC_arg_2, (SCL, (HID, (NUQ, (INT, (GLO, (FPM, (NOT, (OTH, ))))))))), char*), SAC_ND_PARAM_inout( (SACl_int1, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, void,  SAC_ND_PARAM_inout( (SACp_OI_object, (SCL, (HID, (NUQ, (INT, (GLO, (FPO, (NOT, (OTH, ))))))))), SAC_hidden));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__bl_S, , 3, out, bool, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__c_S, , 3, out, unsigned char, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, unsigned char, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__d_S, , 3, out, double, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, double, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__f_S, , 3, out, float, (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, float, (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ull_S, , 3, out, ulonglong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulonglong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ul_S, , 3, out, ulong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ulong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ui_S, , 3, out, uint, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, uint, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__us_S, , 3, out, ushort, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ushort, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ub_S, , 3, out, ubyte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, ubyte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__ll_S, , 3, out, longlong, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, longlong, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__l_S, , 3, out, long, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, long, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__i_S, , 3, out, SAC_INT, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__s_S, , 3, out, short, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, short, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__sel__i_X__b_S, , 3, out, byte, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, SAC_INT, (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, byte, (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__sel__i_X__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_idx, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__bl_S__bl_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__bl_S__bl_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__c_S__c_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, unsigned char, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), in, unsigned char, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__c_S__c_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UCH, ))))))))), unsigned char));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__d_S__d_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, double, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__d_S__d_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__f_S__f_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, float, (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), in, float, (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__f_S__f_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (FLO, ))))))))), float));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ull_S__ull_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulonglong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), in, ulonglong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ull_S__ull_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULL, ))))))))), ulonglong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ul_S__ul_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ulong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), in, ulong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ul_S__ul_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (ULO, ))))))))), ulong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ui_S__ui_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, uint, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), in, uint, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ui_S__ui_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UIN, ))))))))), uint));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__us_S__us_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ushort, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), in, ushort, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__us_S__us_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (USH, ))))))))), ushort));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ub_S__ub_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, ubyte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), in, ubyte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ub_S__ub_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (UBY, ))))))))), ubyte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__ll_S__ll_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, longlong, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), in, longlong, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__ll_S__ll_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LLO, ))))))))), longlong));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__l_S__l_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, long, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), in, long, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__l_S__l_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (LON, ))))))))), long));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__i_S__i_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__i_S__i_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__s_S__s_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, short, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), in, short, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__s_S__s_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (SHO, ))))))))), short));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__eq__b_S__b_S, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, byte, (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), in, byte, (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__eq__b_S__b_S, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte), SAC_ND_PARAM_in( (SACl_y, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BYT, ))))))))), byte));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__prod__i_X, , 2, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_arr, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__prod__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_arr, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_X, , 4, out, SAC_INT, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__adjustLacFunParams__bl_S__i_S__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_X__i_X, , 5, out, SAC_INT, (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, bool, (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, SAC_INT, (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_shp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__adjustLacFunParamsReshape__bl_S__i_S__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_p, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_i, (AUD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_iv, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_shp, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionMin__i__i, , 3, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionMin__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionMax__i__i, , 3, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionMax__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__partitionSlicer__i_X__i_X__i__i_X__i_X, , 9, out, SAC_INT, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_min, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_max, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_axis, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__partitionSlicer__i_X__i_X__i__i_X__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_4, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_min, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_max, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_axis, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p__gridFiller__i_X__i_X__i_X__i__i_X, , 8, out, SAC_INT, (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), out, SAC_INT, (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_wdth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_dim, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_maxwidth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p__gridFiller__i_X__i_X__i_X__i__i_X, void,  SAC_ND_PARAM_out( (SAC_arg_1, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_2, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_out( (SAC_arg_3, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_lb, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_ub, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_wdth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_dim, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_maxwidth, (AKD, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_ScalarArith___PL__d__d, , 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACl_A, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACl_B, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_ScalarArith___PL__d__d, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_A, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double), SAC_ND_PARAM_in( (SACl_B, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), double));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p___ST__i__i, , 3, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), in, SAC_INT, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p___ST__i__i, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT));

SAC_C_EXTERN 
/*
 * ND_FUN_DECL( SACf_sacprelude_p___AM_AM__bl__bl, , 3, out, bool, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), in, bool, (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))))
 */
SAC_ND_DECL_FUN2( SACf_sacprelude_p___AM_AM__bl__bl, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_x, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool), SAC_ND_PARAM_in( (SACl_y, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (BOO, ))))))))), bool));



/*
 *  global objects
 */

/*
 * ND_OBJDEF_EXTERN( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()

/*
 * ND_OBJDEF_EXTERN( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
 */
SAC_ND_DECL__DATA( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, extern)
SAC_ND_DECL__DESC( (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), extern)
SAC_NOTHING()



/*
 *  SPMD infrastructure
 */

SAC_MT_SPMD_FRAME_BEGIN()
/*
 * MT_SPMD_FRAME_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMD_FRAME_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d)
SAC_MT_FRAME_ELEMENT_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 1, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 2, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_SPMD_FRAME_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d)

/*
 * MT_SPMD_FRAME_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMD_FRAME_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3308_main__d)
SAC_MT_FRAME_ELEMENT_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_FRAME_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 1, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_SPMD_FRAME_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_3308_main__d)

SAC_MT_SPMD_FRAME_END()
SAC_MT_SPMD_BARRIER_BEGIN()
/*
 * MT_SPMD_BARRIER_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMD_BARRIER_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d)
SAC_MT_BARRIER_ELEMENT_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 1, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 2, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_SPMD_BARRIER_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d)

/*
 * MT_SPMD_BARRIER_ELEMENT( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMD_BARRIER_ELEMENT_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3308_main__d)
SAC_MT_BARRIER_ELEMENT_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_BARRIER_ELEMENT_in( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 1, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
SAC_MT_SPMD_BARRIER_ELEMENT_END( SACf__MAIN_CL_ST___mtspmdf_3308_main__d)

SAC_MT_SPMD_BARRIER_END()


/*
 *  function definitions (FUNDEFS)
 */



/****************************************************************************
 * Wrapper function:
 * ST function:
 * _MAIN:_ST::SACwf__MAIN_CL_ST__main(...) [ wrapper ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACwf__MAIN_CL_ST__main, , 1, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACwf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    /*
     * ND_DECL( (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 0)
     */
    SAC_ND_DECL__DATA( (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST__main, , 1, out, SAC_INT, SAC_SET_NT_USG( FAG, (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST__main,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), SAC_INT))

    /*
     * ND_REFRESH__MIRROR( (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_cwc_341, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACwf__MAIN_CL_ST__main, , 1, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * ST function:
 * _MAIN:_ST::SACf__MAIN_CL_ST__main(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST__main, , 1, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST__main, void,  SAC_ND_PARAM_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), SAC_INT))
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_ND_DECL_CONST__DATA((SACp_emal_2906__flat_289, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 1)
    SAC_ND_DECL_CONST__DATA((SACp_emal_2905__flat_288, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 5)
    /*
     * ND_DECL( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, 1, 6)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )
    const SAC_INT SAC_ND_A_MIRROR_SHAPE( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = 6;
    const SAC_INT SAC_ND_A_MIRROR_SIZE( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 6;
    const SAC_INT SAC_ND_A_MIRROR_DIM( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 1;

    SAC_ND_DECL_CONST__DATA((SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0.0)
    /*
     * ND_DECL( (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    SAC_ND_DECL_CONST__DATA((SACp_emal_2900__flat_297, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 4)
    /*
     * ND_DECL( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, 1, 5)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), unsigned char, )
    SAC_ND_DECL__DESC( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), )
    const SAC_INT SAC_ND_A_MIRROR_SHAPE( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0) = 5;
    const SAC_INT SAC_ND_A_MIRROR_SIZE( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 5;
    const SAC_INT SAC_ND_A_MIRROR_DIM( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))) = 1;

    /*
     * ND_DECL( (SACp_emal_2896__pinl_812__flat_456, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2896__pinl_812__flat_456, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_emal_2896__pinl_812__flat_456, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*, 0)
     */
    SAC_ND_DECL__DATA( (SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*, )
    SAC_ND_DECL__DESC( (SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, 0)
     */
    SAC_ND_DECL__DATA( (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), SAC_hidden, )
    SAC_ND_DECL__DESC( (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*, )
    SAC_ND_DECL__DESC( (SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*, 0)
     */
    SAC_ND_DECL__DATA( (SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), char*, )
    SAC_ND_DECL__DESC( (SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), )
    SAC_NOTHING()


    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
     */
    SAC_ND_FUNAP2( SACf__MAIN_CL_ST_CL_INIT__init, )

    SAC_ND_ALLOC_BEGIN((SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 6)
     */
    SAC_ASSURE_TYPE_LINE ("flat.sac", 1, 1, ((SAC_ND_A_DIM( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("flat.sac", 1, 1, ((SAC_ND_A_SHAPE( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0)) == 6), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 6, 98, 101, 110, 99, 104, 0, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0, 98, )
    SAC_ND_WRITE_COPY( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 101, )
    SAC_ND_WRITE_COPY( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 2, 110, )
    SAC_ND_WRITE_COPY( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 3, 99, )
    SAC_ND_WRITE_COPY( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 4, 104, )
    SAC_ND_WRITE_COPY( (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 5, 0, )

    /*
     * ND_FUN_AP( SACtostring, SACp_flat_280, 2, in_nodesc, unsigned char, SAC_SET_NT_USG( FAG, (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), in_nodesc, SAC_INT, SAC_SET_NT_USG( FAG, (SACp_emal_2905__flat_288, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
     */
    SACp_flat_280 = SACtostring( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_2905__flat_288, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), SAC_INT));

    SAC_ND_ALLOC__DESC((SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
    /*
     * ND_REFRESH__MIRROR( (SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_SET__RC((SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
    SAC_ND_DEC_RC_FREE((SACp_emal_2905__flat_288, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_2904__flat_281, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, )
    /*
     * ND_FUN_AP( SACf_Benchmarking__getInterval__SACt_String__string__i, , 3, out, SAC_hidden, SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in, char*, SAC_SET_NT_USG( FAG, (SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in, SAC_INT, SAC_SET_NT_USG( FAG, (SACp_emal_2906__flat_289, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Benchmarking__getInterval__SACt_String__string__i,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_flat_280, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), char*), SAC_ND_ARG_in( SAC_SET_NT_USG( FAG, (SACp_emal_2906__flat_289, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), SAC_INT))

    /*
     * ND_REFRESH__MIRROR( (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_FUN_AP( SACf_Benchmarking__start__SACt_Benchmarking__Interval, , 1, inout, SAC_hidden, SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Benchmarking__start__SACt_Benchmarking__Interval,  SAC_ND_ARG_inout( SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Benchmarking__end__SACt_Benchmarking__Interval, , 1, inout, SAC_hidden, SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Benchmarking__end__SACt_Benchmarking__Interval,  SAC_ND_ARG_inout( SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Benchmarking__returnResultUnit__SACt_Benchmarking__Interval, , 3, out, double, SAC_SET_NT_USG( FAG, (SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), out, char*, SAC_SET_NT_USG( FAG, (SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), inout, SAC_hidden, SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Benchmarking__returnResultUnit__SACt_Benchmarking__Interval,  SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), double), SAC_ND_ARG_out( SAC_SET_NT_USG( FAG, (SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), char*), SAC_ND_ARG_inout( SAC_SET_NT_USG( FAG, (SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_REFRESH__MIRROR( (SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_NOOP()

    /*
     * ND_REFRESH__MIRROR( (SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACl_unit, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, free_string)
    SAC_ND_DEC_RC_FREE((SACl_ibench, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1, )
    SAC_ND_ALLOC_BEGIN((SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, 0, double)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 83, 2016, ((SAC_ND_A_DIM( (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, 0, double)
    SAC_ND_PRF_SxS__DATA((SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), T_double, SAC_ND_PRF_DIV, 1728000000000.0, SAC_ND_READ((SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0))
    SAC_ND_DEC_RC_FREE((SACl_time, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
    SAC_ND_PRF_SxS__DATA((SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), T_double, SAC_ND_PRF_DIV, SAC_ND_READ((SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0), 1000000000.0)
    SAC_ND_ALLOC_BEGIN((SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
    /*
     * ND_SET__SHAPE_arr( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 5)
     */
    SAC_ASSURE_TYPE_LINE ("flat.sac", 1, 1, ((SAC_ND_A_DIM( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))))) == (1)), "Assignment with incompatible types found");
    SAC_ASSURE_TYPE_LINE ("flat.sac", 1, 1, ((SAC_ND_A_SHAPE( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0)) == 5), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 1, unsigned char)
    /*
     * ND_CREATE__ARRAY__DATA( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 5, 37, 108, 102, 10, 0, )
     */
    SAC_ND_WRITE_COPY( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 0, 37, )
    SAC_ND_WRITE_COPY( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, 108, )
    SAC_ND_WRITE_COPY( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 2, 102, )
    SAC_ND_WRITE_COPY( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 3, 10, )
    SAC_ND_WRITE_COPY( (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 4, 0, )

    /*
     * ND_FUN_AP( SACtostring, SACp_flat_290, 2, in_nodesc, unsigned char, SAC_SET_NT_USG( FAG, (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), in_nodesc, SAC_INT, SAC_SET_NT_USG( FAG, (SACp_emal_2900__flat_297, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))))
     */
    SACp_flat_290 = SACtostring( SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, )))))))))), unsigned char), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_2900__flat_297, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))), SAC_INT));

    SAC_ND_ALLOC__DESC((SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
    /*
     * ND_REFRESH__MIRROR( (SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_SET__RC((SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, ))))))))), 1)
    SAC_ND_DEC_RC_FREE((SACp_emal_2900__flat_297, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_emal_2899__flat_291, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (UCH, ))))))))), 1, )
    /*
     * ND_FUN_AP( SACprintf_TF, , 2, in_nodesc, char*, SAC_SET_NT_USG( FAG, (SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), in_nodesc, double, SAC_SET_NT_USG( FAG, (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
     */
    SAC_ND_FUNAP2( SACprintf_TF,  SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_flat_290, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), char*), SAC_ND_ARG_in_nodesc( SAC_SET_NT_USG( FAG, (SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), double))

    SAC_ND_DEC_RC_FREE((SACp_emal_2902__pinl_790__flat_305, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
    /*
     * MT_SPMDFUN_AP( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 2, out, double, SAC_SET_NT_USG( FAG, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
     */
    SAC_MT_BEGIN_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_3308_main__d);
    SAC_MT_SEND_PARAM_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, SAC_SET_NT_USG( FAG, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 1, SAC_SET_NT_USG( FAG, (SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_SPMD_EXECUTE( SACf__MAIN_CL_ST___mtspmdf_3308_main__d);
    SAC_MT_RECEIVE_RESULT_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, 0, SAC_SET_NT_USG( FAG, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, 1, SAC_SET_NT_USG( FAG, (SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_END_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_3308_main__d);

    /*
     * ND_REFRESH__MIRROR( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
    /*
     * MT_SPMDFUN_AP( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 3, out, double, SAC_SET_NT_USG( FAG, (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))), in, double, SAC_SET_NT_USG( FAG, (SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
     */
    SAC_MT_BEGIN_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d);
    SAC_MT_SEND_PARAM_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, SAC_SET_NT_USG( FAG, (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 1, SAC_SET_NT_USG( FAG, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_SEND_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 2, SAC_SET_NT_USG( FAG, (SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_SPMD_EXECUTE( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d);
    SAC_MT_RECEIVE_RESULT_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, 0, SAC_SET_NT_USG( FAG, (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, 1, SAC_SET_NT_USG( FAG, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_RECEIVE_RESULT_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, 2, SAC_SET_NT_USG( FAG, (SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, )))))))))))
    SAC_MT_END_SPMD_INVOCATION( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d);

    /*
     * ND_REFRESH__MIRROR( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_NOOP()

    SAC_ND_DEC_RC_FREE((SACp_emal_2903__pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
    SAC_ND_DEC_RC_FREE((SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
    SAC_ND_PRF_S__DATA((SACp_emal_2896__pinl_812__flat_456, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_ND_PRF_TOI, SAC_ND_READ((SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0))
    SAC_ND_DEC_RC_FREE((SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
    /*
     * ND_FUN_RET( , 1, out, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_emal_2896__pinl_812__flat_456, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
     */
    SAC_ND_RET_out( (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))), (SACp_emal_2896__pinl_812__flat_456, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST__main, , 1, out, SAC_INT, (SAC_arg_1, (SCL, (NHD, (NUQ, (INT, (GLO, (FPM, (NOT, (INT, ))))))))))
   */
}
SAC_ND_FUN_DEF_END2()



/****************************************************************************
 * SPMD function:
 * _MAIN:_ST::SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d(...) [ body ]
 ****************************************************************************/
/*
 * MT_SPMDFUN_DEF_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_multi_threaded)
  SAC_MT_RECEIVE_PARAM_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 1, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 2, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))

  { 
    /* MT parallel branch */
    /*
     * ND_DECL( (_comp_3311_SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (_comp_3311_SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (_comp_3311_SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 1, 2)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    const SAC_INT SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0) = 2;
    const SAC_INT SAC_ND_A_MIRROR_SIZE( (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 2;
    const SAC_INT SAC_ND_A_MIRROR_DIM( (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 1;


    /*
     * ND_DECL__MIRROR_PARAM( (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_NOTHING()

    /*
     * ND_DECL__MIRROR_PARAM( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_NOTHING()

    SAC_INIT_LOCAL_MEM()
    /*
     * MT_SCHEDULER_Block_INIT( 0, 2, 0, 0, 8640, 10000, 1, 1)
     */

    SAC_ND_ALLOC_BEGIN((SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, SAC_INT)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2915, ((SAC_ND_A_DIM( (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, SAC_INT)
    SAC_ND_ALLOC_BEGIN((SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, SAC_INT)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2915, ((SAC_ND_A_DIM( (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, SAC_INT)
    /*
     * ND_ASSIGN( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2951, ((SAC_ND_A_DIM( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )

    SAC_WL_COMPUTE_GLOB_UB0__BEGIN(SAC_MAX(8640, 0))
    SAC_WL_COMPUTE_GLOB_UB0__ONENODE()
    SAC_PF_BEGIN_WITH(fold)
    /*
     * WL_SCHEDULE__BEGIN( 2)
     */
    {
      SAC_INT SAC_WL_SCHEDULE_START( 0);
      SAC_INT SAC_WL_SCHEDULE_STOP( 0);
      SAC_INT SAC_WL_SCHEDULE_STRIDE_START( 0);
      SAC_INT SAC_WL_SCHEDULE_STRIDE_STOP( 0);
      SAC_INT SAC_WL_SCHEDULE_START( 1);
      SAC_INT SAC_WL_SCHEDULE_STOP( 1);
      SAC_INT SAC_WL_SCHEDULE_STRIDE_START( 1);
      SAC_INT SAC_WL_SCHEDULE_STRIDE_STOP( 1);

      /*
       * MT_SCHEDULER_Block_BEGIN( 0, 2, 0, 0, 8640, 10000, 1, 1)
       */
      {
      unsigned int SAC_MT_P0 = largest_div((unsigned int)(8640 - 0), SAC_MT_LOCAL_THREADS ());
      unsigned int SAC_MT_P1 = SAC_MT_LOCAL_THREADS () / SAC_MT_P0;      unsigned int SAC_MT_S0 = SAC_MT_SELF_LOCAL_ID () % SAC_MT_P0;      unsigned int SAC_MT_S1 = SAC_MT_SELF_LOCAL_ID () / SAC_MT_P0;      SAC_MT_SCHEDULER_Block( 0, 8640, 1, 0, SAC_MT_S0, SAC_MT_P0);
      SAC_MT_SCHEDULER_Block( 0, 10000, 1, 1, SAC_MT_S1, SAC_MT_P1);
      }

      SAC_SET_STRIDE_BOUNDS(2, 0, 0, 8640, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 8640, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_SET_STRIDE_BOUNDS(2, 1, 0, 10000, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(1, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 10000, 1)
      SAC_WL_GRID_UNROLL_BEGIN(1, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_NOOP()
      SAC_ND_ALLOC_BEGIN((SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 83, 1824, ((SAC_ND_A_DIM( (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, 0, double)
      SAC_ND_PRF_SxS__DATA((SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), T_double, SAC_ND_PRF_ADD, SAC_ND_READ((SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), 0), SAC_ND_READ((SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
      /*
       * ND_UNSHARE( (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, SAC_INT, )
       */
      SAC_NOOP()

      /*
       * ND_ASSIGN( (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2927, ((SAC_ND_A_DIM( (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (SACp_emal_2897__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2927, ((SAC_ND_A_DIM( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (SACp_ufiv_2873__pinl_811__flat_302, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )

      /*
       * WL_FOLD( (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 2, (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
       */
      SAC_TR_WL_PRINT( ("index vector [%d, %d] -- fold", SAC_ND_READ( (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0), SAC_ND_READ( (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)));
      /* fold operation */

      SAC_WL_GRID_UNROLL_END(1, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(1, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 10000, 1)
      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_801_iv, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 8640, 1)
      /*
       * MT_SCHEDULER_Block_END( 0, 2, 0, 0, 8640, 10000, 1, 1)
       */


      /*
       * WL_SCHEDULE__END( 2)
       */
    }

    SAC_PF_END_WITH(fold)
    SAC_ND_LABEL(_comp_3310_SAC_label)
    SAC_WL_COMPUTE_GLOB_UB0__END()
    SAC_ND_FREE((SACp_pinl_804__eat_329, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_ND_FREE((SACp_pinl_805__eat_330, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    /*
     * MT_SPMDFUN_RET( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 1, out, (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (_comp_3311_SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, ND, SACf_ScalarArith___PL__d__d)
     */
    SAC_MT_SYNC_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d);
      SAC_MT_SYNC_FOLD_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 0, (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (_comp_3311_SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, ND, SACf_ScalarArith___PL__d__d);
    SAC_MT_SYNC_CONT( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d);
      SAC_MT_SEND_RESULT_out( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, SAC_MT_SELF_LOCAL_ID(), 0, (SACp_pinl_794__flat_219, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))));
    SAC_MT_SYNC_END( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d);
    SAC_MT_SPMDFUN_REAL_RETURN();

    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * MT_SPMDFUN_DEF_END( SACf__MAIN_CL_ST___mtspmdf_3309_main__d__d, 3, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
   */
}



/****************************************************************************
 * SPMD function:
 * _MAIN:_ST::SACf__MAIN_CL_ST___mtspmdf_3308_main__d(...) [ body ]
 ****************************************************************************/
/*
 * MT_SPMDFUN_DEF_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
 */
SAC_MT_SPMDFUN_REAL_RETTYPE() SACf__MAIN_CL_ST___mtspmdf_3308_main__d( SAC_MT_SPMDFUN_REAL_PARAM_LIST())
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_multi_threaded)
  SAC_MT_RECEIVE_PARAM_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
  SAC_MT_RECEIVE_PARAM_in( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 1, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))

  { 
    /* MT parallel branch */
    /*
     * ND_DECL( (_comp_3313_SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (_comp_3313_SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (_comp_3313_SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, 0)
     */
    SAC_ND_DECL__DATA( (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, )
    SAC_ND_DECL__DESC( (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 0)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    SAC_NOTHING()

    /*
     * ND_DECL( (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, 1, 1)
     */
    SAC_ND_DECL__DATA( (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
    SAC_ND_DECL__DESC( (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    const SAC_INT SAC_ND_A_MIRROR_SHAPE( (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0) = 1;
    const SAC_INT SAC_ND_A_MIRROR_SIZE( (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 1;
    const SAC_INT SAC_ND_A_MIRROR_DIM( (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, )))))))))) = 1;


    /*
     * ND_DECL__MIRROR_PARAM( (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
     */
    SAC_NOTHING()

    SAC_INIT_LOCAL_MEM()
    /*
     * MT_SCHEDULER_Block_INIT( 0, 1, 0, 10000, 1)
     */

    SAC_ND_ALLOC_BEGIN((SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, SAC_INT)
    /*
     * ND_SET__SHAPE_arr( (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)
     */
    SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2915, ((SAC_ND_A_DIM( (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()

    SAC_ND_ALLOC_END((SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, 0, SAC_INT)
    /*
     * ND_ASSIGN( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, )
     */
    SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2951, ((SAC_ND_A_DIM( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
    SAC_NOOP()
    SAC_NOOP()
    SAC_NOOP()
    SAC_ND_ASSIGN__DATA( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )

    SAC_WL_COMPUTE_GLOB_UB0__BEGIN(SAC_MAX(10000, 0))
    SAC_WL_COMPUTE_GLOB_UB0__ONENODE()
    SAC_PF_BEGIN_WITH(fold)
    /*
     * WL_SCHEDULE__BEGIN( 1)
     */
    {
      SAC_INT SAC_WL_SCHEDULE_START( 0);
      SAC_INT SAC_WL_SCHEDULE_STOP( 0);
      SAC_INT SAC_WL_SCHEDULE_STRIDE_START( 0);
      SAC_INT SAC_WL_SCHEDULE_STRIDE_STOP( 0);

      /*
       * MT_SCHEDULER_Block_BEGIN( 0, 1, 0, 10000, 1)
       */
      SAC_MT_SCHEDULER_Block_DIM0( 0, 10000, 1);

      SAC_SET_STRIDE_BOUNDS(1, 0, 0, 10000, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN(0, (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 10000, 1)
      SAC_WL_GRID_UNROLL_BEGIN(0, (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_NOOP()
      SAC_ND_ALLOC_BEGIN((SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, 0, double)
      /*
       * ND_SET__SHAPE_arr( (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0)
       */
      SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ScalarArith.sac", 83, 1824, ((SAC_ND_A_DIM( (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()

      SAC_ND_ALLOC_END((SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, 0, double)
      SAC_ND_PRF_SxS__DATA((SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), T_double, SAC_ND_PRF_ADD, 1.0, SAC_ND_READ((SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0))
      SAC_ND_DEC_RC_FREE((SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 1, )
      /*
       * ND_UNSHARE( (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, SAC_INT, )
       */
      SAC_NOOP()

      /*
       * ND_ASSIGN( (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2927, ((SAC_ND_A_DIM( (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (SACp_emal_2898__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )

      /*
       * ND_ASSIGN( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, )
       */
      SAC_ASSURE_TYPE_LINE ("//home/max/Documenten/sac/Stdlib/build/src-mt_pth/structures/ArrayReduce.sac", 40, 2927, ((SAC_ND_A_DIM( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))))) == (0)), "Assignment with incompatible types found");
      SAC_NOOP()
      SAC_NOOP()
      SAC_NOOP()
      SAC_ND_ASSIGN__DATA( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (SACp_ufiv_2872__pinl_768__flat_302__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), )

      /*
       * WL_FOLD( (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), 0, (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 1, (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))))
       */
      SAC_TR_WL_PRINT( ("index vector [%d] -- fold", SAC_ND_READ( (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0)));
      /* fold operation */

      SAC_WL_GRID_UNROLL_END(0, (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 1)
      SAC_WL_STRIDE_LOOP_END(0, (SACp_pinl_761_iv__SSA17_1, (AKS, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), (SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0, 10000, 1)
      /*
       * MT_SCHEDULER_Block_END( 0, 1, 0, 10000, 1)
       */


      /*
       * WL_SCHEDULE__END( 1)
       */
    }

    SAC_PF_END_WITH(fold)
    SAC_ND_LABEL(_comp_3312_SAC_label)
    SAC_WL_COMPUTE_GLOB_UB0__END()
    SAC_ND_FREE((SACp_pinl_764__eat_333__SSA17_1, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
    /*
     * MT_SPMDFUN_RET( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 1, out, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (_comp_3313_SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, ND, SACf_ScalarArith___PL__d__d)
     */
    SAC_MT_SYNC_BEGIN( SACf__MAIN_CL_ST___mtspmdf_3308_main__d);
      SAC_MT_SYNC_FOLD_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 0, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), (_comp_3313_SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))), double, ND, SACf_ScalarArith___PL__d__d);
    SAC_MT_SYNC_CONT( SACf__MAIN_CL_ST___mtspmdf_3308_main__d);
      SAC_MT_SEND_RESULT_out( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, SAC_MT_SELF_LOCAL_ID(), 0, (SACp_pinl_754__flat_219__SSA17_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (NON, (NOT, (DOU, ))))))))));
    SAC_MT_SYNC_END( SACf__MAIN_CL_ST___mtspmdf_3308_main__d);
    SAC_MT_SPMDFUN_REAL_RETURN();

    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * MT_SPMDFUN_DEF_END( SACf__MAIN_CL_ST___mtspmdf_3308_main__d, 2, out, double, (SAC_arg_1, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))), in, double, (SACp_pinl_695__sedi_5_dzero, (SCL, (NHD, (NUQ, (FLO, (GLO, (FPM, (NOT, (DOU, ))))))))))
   */
}



/****************************************************************************
 * ST function:
 * _MAIN:_ST:_INIT::SACf__MAIN_CL_ST_CL_INIT__init(...) [ body ]
 ****************************************************************************/
/*
 * ND_FUN_DEF_BEGIN( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
 */
SAC_ND_DEF_FUN_BEGIN2( SACf__MAIN_CL_ST_CL_INIT__init, void, void)
{
  SAC_HM_DEFINE_THREAD_STATUS( SAC_HM_single_threaded)
  SAC_MT_DEFINE_ST_SELF()

  { 
    SAC_INIT_LOCAL_MEM()
    /*
     * ND_FUN_AP( SACf_World_CL_INIT__init_TheWorld__SACt_World__World, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_World_CL_INIT__init_TheWorld__SACt_World__World,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_World__TheWorld, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Benchmarking_CL_INIT__init_TheBenchmarkObject__SACt_Benchmarking__Benchmarking, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Benchmarking_CL_INIT__init_TheBenchmarkObject__SACt_Benchmarking__Benchmarking,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Benchmarking__TheBenchmarkObject, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_MTClock_CL_INIT__init_TheMTClock__SACt_MTClock__MTClock,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_MTClock__TheMTClock, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_Terminal_CL_INIT__init_TheTerminal__SACt_Terminal__Terminal,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_Terminal__TheTerminal, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_AP( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile, , 1, inout, SAC_hidden, SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))))
     */
    SAC_ND_FUNAP2( SACf_TermFile_CL_INIT__init_stdout__SACt_TermFile__TermFile,  SAC_ND_ARG_inout( SAC_SET_NT_USG( TFA, (SACo_TermFile__stdout, (SCL, (HID, (NUQ, (INT, (GLO, (NON, (NOT, (OTH, )))))))))), SAC_hidden))

    /*
     * ND_FUN_RET( , 0)
     */
    return;
    SAC_CLEANUP_LOCAL_MEM()
  }
/*
   * ND_FUN_DEF_END( SACf__MAIN_CL_ST_CL_INIT__init, , 0)
   */
}
SAC_ND_FUN_DEF_END2()



/*
 *  FFI wrap/unwrap/is functions (TYPEDEFS)
 */

int main( int __argc, char *__argv[])
{
  SAC_MT_DECL_MYTHREAD()
  SAC_ND_DECL__DATA( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), SAC_INT, )
  SAC_ND_DECL__DESC( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), )
  SAC_NOTHING()
  SAC_HWLOC_SETUP();
  SAC_MT_SETUP_INITIAL();
  SAC_RTSPEC_SETUP_INITIAL(0, " -t mt_pth -maxlur 10 -Xc -Ofast -L. src/flat.sac -o bin/flat", "sac2c");
  SAC_PF_SETUP();
  SAC_HM_SETUP();
  SAC_MT_SETUP();
  SAC_CS_SETUP();
  SAC_RTSPEC_SETUP();
  /* SAC colors */
  if (SAC_COLOR_COUNT != 13) {
    SAC_RuntimeWarning("Inconsistent color count at runtime vs compile time! %d vs 13\n", SAC_COLOR_COUNT);
  }
  if (SAC_ColorWanted()) {
    /* 0. The color used to reset the terminal to the default color */
    if (0 < SAC_COLOR_COUNT) SAC_COLORS[0] = "[m[K"; 
    /* 1. Color for error markers */
    if (1 < SAC_COLOR_COUNT) SAC_COLORS[1] = "[01;31m[K"; 
    /* 2. Color for warning markers */
    if (2 < SAC_COLOR_COUNT) SAC_COLORS[2] = "[01;33m[K"; 
    /* 3. Color for note markers */
    if (3 < SAC_COLOR_COUNT) SAC_COLORS[3] = "[01;36m[K"; 
    /* 4. Color for location information, file:line or file:line:column, line numbers etc */
    if (4 < SAC_COLOR_COUNT) SAC_COLORS[4] = "[04;34m[K"; 
    /* 5. Color for the arrows pointing to sections of source code ↑ and ^^^^, etc */
    if (5 < SAC_COLOR_COUNT) SAC_COLORS[5] = "[01m[K"; 
    /* 6. Color for information printed within quotes */
    if (6 < SAC_COLOR_COUNT) SAC_COLORS[6] = "[32m[K"; 
    /* 7. Color for names of variables, functions */
    if (7 < SAC_COLOR_COUNT) SAC_COLORS[7] = "[38;2;153;102;204m[K"; 
    /* 8. Color for titles of a section in a message like `Hint:` */
    if (8 < SAC_COLOR_COUNT) SAC_COLORS[8] = "[01m[K"; 
    /* 9. Color used for line numbers. */
    if (9 < SAC_COLOR_COUNT) SAC_COLORS[9] = "[38;5;240m[K"; 
    /* 10. Color for presenting numbers in shape information */
    if (10 < SAC_COLOR_COUNT) SAC_COLORS[10] = "[38;2;143;165;178m[K"; 
    /* 11. Color for presenting separators in shape information */
    if (11 < SAC_COLOR_COUNT) SAC_COLORS[11] = "[38;2;108;130;145m[K"; 
    /* 12. Color for presenting syntax in shape information */
    if (12 < SAC_COLOR_COUNT) SAC_COLORS[12] = "[38;2;150;150;150m[K"; 
  } else {
    for (int i = 0; i < SAC_COLOR_COUNT && i < 13; i++) 
         SAC_COLORS[i] = "";
  }

  SAC_COMMANDLINE_SET( __argc, __argv);

  SAC_INVOKE_MAIN_FUN( SACf__MAIN_CL_ST__main, SAC_ND_ARG_out( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), int));

  SAC_PF_PRINT();
  SAC_CS_FINALIZE();
  SAC_MT_FINALIZE();
  SAC_HWLOC_FINALIZE();
  SAC_HM_PRINT();

  SAC_RTSPEC_FINALIZE();

  return( SAC_ND_READ( (SAC_res, (SCL, (NHD, (NUQ, (INT, (GLO, (NON, (NOT, (INT, ))))))))), 0));
}
