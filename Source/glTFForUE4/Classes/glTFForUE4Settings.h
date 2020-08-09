// Copyright 2016 - 2020 Code 4 Game, Org. All Rights Reserved.

#pragma once

#include "glTFForUE4PublicPCH.h"
#include "glTFForUE4Settings.generated.h"

/*!
 * \class UglTFForUE4Settings
 *
 * \brief The settings of the `glTFForUE4`
 */
UCLASS(config = glTFForUE4Settings, defaultconfig, Category = glTFForUE4)
class GLTFFORUE4_API UglTFForUE4Settings : public UObject
{
    GENERATED_UCLASS_BODY()

public:
    //UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, config, Category = Prefix)
    //FString PrefixStaticMesh;

    //UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, config, Category = Prefix)
    //FString PrefixSkeletalMesh;
};
