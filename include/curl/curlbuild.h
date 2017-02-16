#pragma once

#if defined(_WIN32)
#  include "curlbuild_win.h"
#elif defined(__APPLE__)
#  include <AvailabilityMacros.h>
#  include <TargetConditionals.h>
#  if !TARGET_OS_IPHONE
#    include "curlbuild_osx.h"
#  endif
#elif defined(__linux__)
#  include "curlbuild_linux.h"
#endif
