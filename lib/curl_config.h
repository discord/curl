#pragma once

#if defined(_WIN32)
#  include "curl_config_win.h"
#elif defined(__APPLE__)
#  include <AvailabilityMacros.h>
#  include <TargetConditionals.h>
#  if !TARGET_OS_IPHONE
#    include "curl_config_osx.h"
#  endif
#elif defined(__linux__)
#  include "curl_config_linux.h"
#endif
