#pragma once

#include "CoreMinimal.h"
#include "Shader.h"
#include "GlobalShader.h"

class FMyGlobalShader : public FGlobalShader
{
public:
	FMyGlobalShader() {}
	FMyGlobalShader(const ShaderMetaType::CompiledShaderInitializerType& Initializer);

	static bool ShouldCache(EShaderPlatform Platform) { return true; }
	static void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment) {}

private:
	// Declare shader parameter struct here
};
