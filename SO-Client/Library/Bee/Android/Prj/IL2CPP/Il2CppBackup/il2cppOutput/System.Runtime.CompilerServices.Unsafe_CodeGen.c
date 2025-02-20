#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000002 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x00000003 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000004 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlockUnaligned(System.Void*,System.Void*,System.UInt32)
extern void Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A (void);
// 0x00000005 TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x00000006 T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x00000007 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E (void);
static Il2CppMethodPointer s_methodPointers[7] = 
{
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlockUnaligned_m3433A5FAE4AA72EF30F86E5DF6C52EF12E43409A,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m0ADAC9DE3EE89069011DA00E4AF296F598A6B91E,
};
static const int32_t s_InvokerIndices[7] = 
{
	0,
	0,
	0,
	9356,
	0,
	0,
	7597,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000003, { 0, 1 } },
};
extern const uint32_t g_rgctx_T_tEBAD0940DB52DC5349543CC3BDE62C848B32B00D;
static const Il2CppRGCTXDefinition s_rgctxValues[1] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tEBAD0940DB52DC5349543CC3BDE62C848B32B00D },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	7,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	1,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
