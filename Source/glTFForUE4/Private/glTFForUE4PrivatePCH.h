// Copyright 2016 - 2020 Code 4 Game, Org. All Rights Reserved.

#pragma once

#include "Runtime/Launch/Resources/Version.h"

#if ENGINE_MINOR_VERSION <= 14
#include <Core.h>
#include <CoreUObject.h>
#include <Engine.h>
#else
#include <CoreMinimal.h>
#endif

DECLARE_LOG_CATEGORY_EXTERN(LogglTFForUE4, Log, All);
