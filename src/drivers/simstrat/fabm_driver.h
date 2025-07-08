! model dimension
#define _FABM_DIMENSION_COUNT_ 1
#define _FABM_DEPTH_DIMENSION_INDEX_ 1
#define _FABM_VECTORIZED_DIMENSION_INDEX_ 1

! vertical index is ordered from bottom to surface
#define _FABM_VERTICAL_BOTTOM_TO_SURFACE_

! pass if all arrays passed to FABM are contiguous in memory
! #define _FABM_CONTIGUOUS_

#include "fabm.h"