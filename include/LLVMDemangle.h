#pragma once

#ifdef __cplusplus
extern "C"
{
#endif

char* LLVMDemangle(const char* MangledName);
void LLVMDemangleFree(char* DemangledName);

#ifdef __cplusplus
}
#endif
