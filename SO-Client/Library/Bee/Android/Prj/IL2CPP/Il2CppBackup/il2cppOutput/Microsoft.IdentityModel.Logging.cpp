#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute
struct DynamicallyAccessedMembersAttribute_tF0BC446B39EAF68360151301D0F62F6D2DEE8720;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t3D04C17CA3139E7E05C4B2E2F31A6A7B7B28A688;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Microsoft.IdentityModel.Abstractions.IIdentityLogger
struct IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE;
// Microsoft.IdentityModel.Logging.IdentityModelEventSource
struct IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t5618FD7ADB6B654D4A28AC9BB841AB4D9AF409A9;
// Microsoft.IdentityModel.Abstractions.LogEntry
struct LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_tC0B7B5F2260A39481007399BABCD21A3BF84B3F1;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09FFB4D23EF148FC3959B7E2544E01B98B910C05;
IL2CPP_EXTERN_C String_t* _stringLiteral140F2A27D77FF312FFE22B8EFB20511C3B00F6D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B4E80A7C0D22844C64A826F2875FA48F14F1BC5;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6547C8E59AB2E33CAC27E276209877E750A53639;
IL2CPP_EXTERN_C String_t* _stringLiteral761A4782C8C133ABA6E914383DAD50C8397E92F7;
IL2CPP_EXTERN_C String_t* _stringLiteral7ACCB414BA29FB2F131858543BAD6544B45336C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7B84900316FE3C554F521B2D8130E55D338BF7AD;
IL2CPP_EXTERN_C String_t* _stringLiteral804C1189FA685180DBD55476B06CCE7BB082DB94;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C098F1A6DBC8EED542DED2BAF195359755B0E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB8A46138BF3F834B3F99AE50EE73519F65ABFF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDEDF80D4199B8346DDC82AB341AD2DB02F160F0;
IL2CPP_EXTERN_C String_t* _stringLiteralD3488F3D1C444870A69874AF255B46982C2A0405;
IL2CPP_EXTERN_C String_t* _stringLiteralD52235C13B845D44C37E2F097BB5FE4D59784047;
IL2CPP_EXTERN_C String_t* _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD38CBEB009DB4A70E9F4DE60109534CE183A3AB;
IL2CPP_EXTERN_C String_t* _stringLiteralEC42F591622D24EFF49367DE7270862ED6A421D4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogHelper_LogArgumentException_TisArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_mD688B1BC72E41486762A59F01D58226BEC7A80F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogHelper_RemovePII_m2955B87773C35BFD429839C94A174F6EFF582871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LogHelper_SanitizeSecurityArtifact_m470EB4F47C9C8DDD0BAFAC4E661D0016A45EB34E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t931254FEBB5A96299A018E579C39D4200A67DF0E 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Diagnostics.Tracing.EventSource
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	// System.String System.Diagnostics.Tracing.EventSource::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// Microsoft.IdentityModel.Logging.LogHelper
struct LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7  : public RuntimeObject
{
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;
};

// Microsoft.IdentityModel.Logging.LogHelper/<>O
struct U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147  : public RuntimeObject
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t3D04C17CA3139E7E05C4B2E2F31A6A7B7B28A688  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t5618FD7ADB6B654D4A28AC9BB841AB4D9AF409A9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// Microsoft.IdentityModel.Logging.NonPII
struct NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C 
{
	// System.Object Microsoft.IdentityModel.Logging.NonPII::<Argument>k__BackingField
	RuntimeObject* ___U3CArgumentU3Ek__BackingField_0;
};
// Native definition for P/Invoke marshalling of Microsoft.IdentityModel.Logging.NonPII
struct NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_pinvoke
{
	Il2CppIUnknown* ___U3CArgumentU3Ek__BackingField_0;
};
// Native definition for COM marshalling of Microsoft.IdentityModel.Logging.NonPII
struct NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_com
{
	Il2CppIUnknown* ___U3CArgumentU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.RefSafetyRulesAttribute
struct RefSafetyRulesAttribute_tC0B7B5F2260A39481007399BABCD21A3BF84B3F1  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Int32 System.Runtime.CompilerServices.RefSafetyRulesAttribute::Version
	int32_t ___Version_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Reflection.AssemblyContentType
struct AssemblyContentType_tE0A2224D247DD97616065CB0ECB16912B756D745 
{
	// System.Int32 System.Reflection.AssemblyContentType::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct AssemblyHashAlgorithm_t6202395EA0C9A01D6342348A9535DF4CA47010D1 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___2;
};

// System.Reflection.AssemblyNameFlags
struct AssemblyNameFlags_t48EB44AFB7A3310746DD78ACC3DC5AE6D3D91122 
{
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___2;
};

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct AssemblyVersionCompatibility_t1E27EE4AB4137C64EE164A25A184E844AC722159 
{
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes
struct DynamicallyAccessedMemberTypes_tFAA50C8345A01146FB6BEA3505707F9904EE72C7 
{
	// System.Int32 System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes::value__
	int32_t ___value___2;
};

// System.Diagnostics.Tracing.EventKeywords
struct EventKeywords_t9448FD3D64FEA0415CFE919FE67B797E3494DA78 
{
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;
};

// System.Diagnostics.Tracing.EventLevel
struct EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E 
{
	// System.Int32 System.Diagnostics.Tracing.EventLevel::value__
	int32_t ___value___2;
};

// Microsoft.IdentityModel.Abstractions.EventLogLevel
struct EventLogLevel_tE488BF02399223CE18E69F1170F6195B448595A3 
{
	// System.Int32 Microsoft.IdentityModel.Abstractions.EventLogLevel::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.ProcessorArchitecture
struct ProcessorArchitecture_t549C86643DDABC4E0C6DC968F0C74A707ADCAD9B 
{
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.StringComparison
struct StringComparison_tE14A55CCFA001A5AC85D754179BF2888F45CC94D 
{
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute
struct DynamicallyAccessedMembersAttribute_tF0BC446B39EAF68360151301D0F62F6D2DEE8720  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::<MemberTypes>k__BackingField
	int32_t ___U3CMemberTypesU3Ek__BackingField_0;
};

// Microsoft.IdentityModel.Logging.IdentityModelEventSource
struct IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
	// System.Diagnostics.Tracing.EventLevel Microsoft.IdentityModel.Logging.IdentityModelEventSource::<LogLevel>k__BackingField
	int32_t ___U3CLogLevelU3Ek__BackingField_11;
};

// Microsoft.IdentityModel.Abstractions.LogEntry
struct LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410  : public RuntimeObject
{
	// Microsoft.IdentityModel.Abstractions.EventLogLevel Microsoft.IdentityModel.Abstractions.LogEntry::<EventLogLevel>k__BackingField
	int32_t ___U3CEventLogLevelU3Ek__BackingField_0;
	// System.String Microsoft.IdentityModel.Abstractions.LogEntry::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.String>
struct Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Reflection.TypeInfo
struct TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D  : public Type_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// <Module>

// <Module>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.Attribute

// System.Attribute

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// System.Diagnostics.Tracing.EventSource

// System.Diagnostics.Tracing.EventSource

// Microsoft.IdentityModel.Logging.LogHelper
struct LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields
{
	// Microsoft.IdentityModel.Abstractions.IIdentityLogger Microsoft.IdentityModel.Logging.LogHelper::<Logger>k__BackingField
	RuntimeObject* ___U3CLoggerU3Ek__BackingField_0;
	// System.Boolean Microsoft.IdentityModel.Logging.LogHelper::_isHeaderWritten
	bool ____isHeaderWritten_1;
	// System.String Microsoft.IdentityModel.Logging.LogHelper::_piiOffLogMessage
	String_t* ____piiOffLogMessage_2;
	// System.String Microsoft.IdentityModel.Logging.LogHelper::_piiOnLogMessage
	String_t* ____piiOnLogMessage_3;
};

// Microsoft.IdentityModel.Logging.LogHelper

// Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger
struct NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields
{
	// Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger::<Instance>k__BackingField
	NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* ___U3CInstanceU3Ek__BackingField_0;
};

// Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Version

// System.Version

// Microsoft.IdentityModel.Logging.LogHelper/<>O
struct U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields
{
	// System.Func`2<System.Object,System.String> Microsoft.IdentityModel.Logging.LogHelper/<>O::<0>__RemovePII
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___U3C0U3E__RemovePII_0;
	// System.Func`2<System.Object,System.Object> Microsoft.IdentityModel.Logging.LogHelper/<>O::<1>__SanitizeSecurityArtifact
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___U3C1U3E__SanitizeSecurityArtifact_1;
};

// Microsoft.IdentityModel.Logging.LogHelper/<>O

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.DateTime

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// System.Runtime.CompilerServices.IsReadOnlyAttribute

// Microsoft.IdentityModel.Logging.NonPII

// Microsoft.IdentityModel.Logging.NonPII

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.Runtime.CompilerServices.RefSafetyRulesAttribute

// System.Void

// System.Void

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes

// System.Diagnostics.Tracing.EventKeywords

// System.Diagnostics.Tracing.EventKeywords

// System.Diagnostics.Tracing.EventLevel

// System.Diagnostics.Tracing.EventLevel

// Microsoft.IdentityModel.Abstractions.EventLogLevel

// Microsoft.IdentityModel.Abstractions.EventLogLevel

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringComparison

// System.StringComparison

// System.Reflection.AssemblyName

// System.Reflection.AssemblyName

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute

// System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute

// Microsoft.IdentityModel.Logging.IdentityModelEventSource
struct IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields
{
	// Microsoft.IdentityModel.Logging.IdentityModelEventSource Microsoft.IdentityModel.Logging.IdentityModelEventSource::<Logger>k__BackingField
	IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* ___U3CLoggerU3Ek__BackingField_1;
	// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::<ShowPII>k__BackingField
	bool ___U3CShowPIIU3Ek__BackingField_2;
	// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::<LogCompleteSecurityArtifact>k__BackingField
	bool ___U3CLogCompleteSecurityArtifactU3Ek__BackingField_3;
	// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::<HiddenPIIString>k__BackingField
	String_t* ___U3CHiddenPIIStringU3Ek__BackingField_4;
	// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::<HiddenSecurityArtifactString>k__BackingField
	String_t* ___U3CHiddenSecurityArtifactStringU3Ek__BackingField_5;
	// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::<HeaderWritten>k__BackingField
	bool ___U3CHeaderWrittenU3Ek__BackingField_6;
	// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::_versionLogMessage
	String_t* ____versionLogMessage_7;
	// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::_dateLogMessage
	String_t* ____dateLogMessage_8;
	// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::_piiOffLogMessage
	String_t* ____piiOffLogMessage_9;
	// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::_piiOnLogMessage
	String_t* ____piiOnLogMessage_10;
};

// Microsoft.IdentityModel.Logging.IdentityModelEventSource

// Microsoft.IdentityModel.Abstractions.LogEntry

// Microsoft.IdentityModel.Abstractions.LogEntry

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.Object>

// System.Func`2<System.Object,System.String>

// System.Func`2<System.Object,System.String>

// System.Reflection.TypeInfo

// System.Reflection.TypeInfo

// System.ArgumentNullException

// System.ArgumentNullException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// T Microsoft.IdentityModel.Logging.LogHelper::LogArgumentException<System.Object>(System.Diagnostics.Tracing.EventLevel,System.String,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogHelper_LogArgumentException_TisRuntimeObject_mC5B0D5B74ACCE664B43A09096738155059CC6108_gshared (int32_t ___0_eventLevel, String_t* ___1_argumentName, String_t* ___2_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource__ctor_mF6A1EAB3FA9F871CC44CC2690F003B834D0E651C (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::set_LogLevel(System.Diagnostics.Tracing.EventLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityModelEventSource_set_LogLevel_m841A67142BEB77A550CBC918297B17B103BFB56B_inline (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::PrepareMessage(System.Diagnostics.Tracing.EventLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788 (int32_t ___0_level, String_t* ___1_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_eventId, String_t* ___1_arg1, const RuntimeMethod* method) ;
// System.String Microsoft.IdentityModel.Logging.LogHelper::FormatInvariant(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteAlways(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Diagnostics.Tracing.EventLevel Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_LogLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteVerbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteVerbose_m16F922C3AAE09066CDD6F25BE36DAF7756DAE377 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteInformation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteInformation_mF56E1DAB6DC42573F435247C713611E5608EDBD2 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteWarning_mBF86A59CF1822DDB0278C6FDE4B7F35B965BFD4F (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteError_m23EE4F326062E0394A2E3277B88364FC83DE280E (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteCritical(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteCritical_m38511EA5B7F497D8671D6D342F856D8397361E8A (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::Write(System.Diagnostics.Tracing.EventLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_Write_m4A4D02FE87D3A88DF45BEAC720CEFB53961ACA61 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_level, Exception_t* ___1_innerException, String_t* ___2_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method) ;
// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_ShowPII()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline (const RuntimeMethod* method) ;
// System.Boolean Microsoft.IdentityModel.Logging.LogHelper::IsCustomException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogHelper_IsCustomException_m7D25A374D54997083AFFFDB9B10FDBC8A2627A41 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Type System.Exception::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09 (Exception_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_HeaderWritten()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_HeaderWritten_mE413A430660D1B0F3406F0E81D4822A60851691C_inline (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Version System.Reflection.AssemblyName::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::set_HeaderWritten(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityModelEventSource_set_HeaderWritten_m4E3C82B77473B21DE4D7985DC861706BBCB89736_inline (bool ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteAlways(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteAlways_m8F9E79D3F5F68DBB549C8C2B833F71AB0B1A3EBA (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteCritical(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteCritical_m8397CD8DFC8F1CB826525338F22D0E3FBA88A4B4 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteError_mAA3D9A768BA09D1F3166B1D0AE88D9D74511EE9B (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteWarning_mC001BBF04AD325D72AC920BB9F38347E453A0506 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteInformation(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteInformation_mD7A6C8EFB2CA780B1EDBEEE5373081EB3CF312E0 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteVerbose(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteVerbose_m95B4CD06E2C6C7648A5BA453F91BCDD8188AE525 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263 (RuntimeObject* ___0_provider, String_t* ___1_format, RuntimeObject* ___2_arg0, RuntimeObject* ___3_arg1, RuntimeObject* ___4_arg2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// Microsoft.IdentityModel.Abstractions.IIdentityLogger Microsoft.IdentityModel.Logging.LogHelper::get_Logger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline (const RuntimeMethod* method) ;
// Microsoft.IdentityModel.Logging.IdentityModelEventSource Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_Logger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline (const RuntimeMethod* method) ;
// System.Diagnostics.Tracing.EventLevel Microsoft.IdentityModel.Logging.LogHelper::EventLogLevelToEventLevel(Microsoft.IdentityModel.Abstractions.EventLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogHelper_EventLogLevelToEventLevel_m4163F6A9BC949F43E8EF9097F1699C9B6A848CA8 (int32_t ___0_eventLevel, const RuntimeMethod* method) ;
// System.Boolean System.Diagnostics.Tracing.EventSource::IsEnabled(System.Diagnostics.Tracing.EventLevel,System.Diagnostics.Tracing.EventKeywords)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, int32_t ___0_level, int64_t ___1_keywords, const RuntimeMethod* method) ;
// T Microsoft.IdentityModel.Logging.LogHelper::LogArgumentException<System.ArgumentNullException>(System.Diagnostics.Tracing.EventLevel,System.String,System.String,System.Object[])
inline ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* LogHelper_LogArgumentException_TisArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_mD688B1BC72E41486762A59F01D58226BEC7A80F5 (int32_t ___0_eventLevel, String_t* ___1_argumentName, String_t* ___2_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method)
{
	return ((  ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* (*) (int32_t, String_t*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))LogHelper_LogArgumentException_TisRuntimeObject_mC5B0D5B74ACCE664B43A09096738155059CC6108_gshared)(___0_eventLevel, ___1_argumentName, ___2_format, ___3_args, method);
}
// System.Exception Microsoft.IdentityModel.Logging.LogHelper::LogExceptionMessage(System.Diagnostics.Tracing.EventLevel,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* LogHelper_LogExceptionMessage_m0A41FC36E5C978EE6BB73005288F5ED860106FAF (int32_t ___0_eventLevel, Exception_t* ___1_exception, const RuntimeMethod* method) ;
// System.Exception System.Exception::get_InnerException()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::Write(System.Diagnostics.Tracing.EventLevel,System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_Write_mC7EB38044E1EB2987D3B6A83481D729DEC41467D (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_level, Exception_t* ___1_innerException, String_t* ___2_message, const RuntimeMethod* method) ;
// Microsoft.IdentityModel.Abstractions.EventLogLevel Microsoft.IdentityModel.Logging.LogHelper::EventLevelToEventLogLevel(System.Diagnostics.Tracing.EventLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogHelper_EventLevelToEventLogLevel_m4CA2C3FCC7A621AD427C6AD189465A60CBCD3828 (int32_t ___0_eventLevel, const RuntimeMethod* method) ;
// Microsoft.IdentityModel.Abstractions.LogEntry Microsoft.IdentityModel.Logging.LogHelper::WriteEntry(Microsoft.IdentityModel.Abstractions.EventLogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* LogHelper_WriteEntry_mE3AC51AF695B39CA1D4945053A0F5E61DD7ECC7D (int32_t ___0_eventLogLevel, Exception_t* ___1_innerException, String_t* ___2_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C (RuntimeObject* ___0_source, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75 (RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398 (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB (RuntimeObject* ___0_source, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___1_selector, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___0_source, ___1_selector, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_LogCompleteSecurityArtifact()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_LogCompleteSecurityArtifact_m53C8586F524F92B3A1940299907EC44C3C0B778E_inline (const RuntimeMethod* method) ;
// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_HiddenSecurityArtifactString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_get_HiddenSecurityArtifactString_m18E069B9EB17BB480D807B0CC588597E700B0845_inline (const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_HiddenPIIString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_get_HiddenPIIString_mCBCE742420CA089679E08FA1C0F98594A9098486_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264 (String_t* __this, String_t* ___0_value, int32_t ___1_comparisonType, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.NonPII::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPII__ctor_m7A0CE50AEEDFFC92C828C2668F94216845D3135A (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, RuntimeObject* ___0_argument, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Abstractions.LogEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogEntry__ctor_m33407EEB5041EB30F5E3EA403E6844167D6210E8 (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Abstractions.LogEntry::set_EventLogLevel(Microsoft.IdentityModel.Abstractions.EventLogLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogEntry_set_EventLogLevel_m190A4AD9B8FE5E2081119A6C890B7B21FEC05FE9_inline (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Abstractions.LogEntry::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogEntry_set_Message_m272688179C2D2CE7426CB19F489BE877F46A88B7_inline (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger Microsoft.IdentityModel.Abstractions.NullIdentityModelLogger::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* NullIdentityModelLogger_get_Instance_m3DAEDCF167C1DD6C5FD422063B12476B84F78CB1_inline (const RuntimeMethod* method) ;
// System.Object Microsoft.IdentityModel.Logging.NonPII::get_Argument()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NonPII_get_Argument_m148E388FDE93BA7CD6143D91D0EF0F5D4FD8607D_inline (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, const RuntimeMethod* method) ;
// System.Void Microsoft.IdentityModel.Logging.NonPII::set_Argument(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NonPII_set_Argument_mF2F2FE186D32CB3DB8A7A0A03A3B1E4727F8DF6A_inline (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String Microsoft.IdentityModel.Logging.NonPII::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NonPII_ToString_m1C55590A1C4A4CC2500E72F04C1FFC408C8917F3 (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m508C119F79BEC906C433F041F979BDFD701457C7 (EmbeddedAttribute_t3D04C17CA3139E7E05C4B2E2F31A6A7B7B28A688* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m148C90041E70A819CDF9F19A890EB0209E86FD7F (IsReadOnlyAttribute_t5618FD7ADB6B654D4A28AC9BB841AB4D9AF409A9* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.RefSafetyRulesAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RefSafetyRulesAttribute__ctor_m13C4437E4BF0B515B12BC2B92CCD9B9761F184A6 (RefSafetyRulesAttribute_tC0B7B5F2260A39481007399BABCD21A3BF84B3F1* __this, int32_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_p;
		__this->___Version_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.CodeAnalysis.DynamicallyAccessedMembersAttribute::.ctor(System.Diagnostics.CodeAnalysis.DynamicallyAccessedMemberTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicallyAccessedMembersAttribute__ctor_m2E29D233055FB0ED6A656B70B9C2AEBEA9150668 (DynamicallyAccessedMembersAttribute_tF0BC446B39EAF68360151301D0F62F6D2DEE8720* __this, int32_t ___0_memberTypes, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___0_memberTypes;
		__this->___U3CMemberTypesU3Ek__BackingField_0 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource__cctor_m5F28CB2FF61AEA83DCB415AD7C22D0535248DDB3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09FFB4D23EF148FC3959B7E2544E01B98B910C05);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7ACCB414BA29FB2F131858543BAD6544B45336C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B84900316FE3C554F521B2D8130E55D338BF7AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral804C1189FA685180DBD55476B06CCE7BB082DB94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C098F1A6DBC8EED542DED2BAF195359755B0E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD38CBEB009DB4A70E9F4DE60109534CE183A3AB);
		s_Il2CppMethodInitialized = true;
	}
	{
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CShowPIIU3Ek__BackingField_2 = (bool)0;
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLogCompleteSecurityArtifactU3Ek__BackingField_3 = (bool)0;
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenPIIStringU3Ek__BackingField_4 = _stringLiteralDD38CBEB009DB4A70E9F4DE60109534CE183A3AB;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenPIIStringU3Ek__BackingField_4), (void*)_stringLiteralDD38CBEB009DB4A70E9F4DE60109534CE183A3AB);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenSecurityArtifactStringU3Ek__BackingField_5 = _stringLiteralB3C098F1A6DBC8EED542DED2BAF195359755B0E8;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenSecurityArtifactStringU3Ek__BackingField_5), (void*)_stringLiteralB3C098F1A6DBC8EED542DED2BAF195359755B0E8);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHeaderWrittenU3Ek__BackingField_6 = (bool)0;
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____versionLogMessage_7 = _stringLiteral804C1189FA685180DBD55476B06CCE7BB082DB94;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____versionLogMessage_7), (void*)_stringLiteral804C1189FA685180DBD55476B06CCE7BB082DB94);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____dateLogMessage_8 = _stringLiteral7ACCB414BA29FB2F131858543BAD6544B45336C9;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____dateLogMessage_8), (void*)_stringLiteral7ACCB414BA29FB2F131858543BAD6544B45336C9);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____piiOffLogMessage_9 = _stringLiteral7B84900316FE3C554F521B2D8130E55D338BF7AD;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____piiOffLogMessage_9), (void*)_stringLiteral7B84900316FE3C554F521B2D8130E55D338BF7AD);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____piiOnLogMessage_10 = _stringLiteral09FFB4D23EF148FC3959B7E2544E01B98B910C05;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____piiOnLogMessage_10), (void*)_stringLiteral09FFB4D23EF148FC3959B7E2544E01B98B910C05);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_0 = (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7*)il2cpp_codegen_object_new(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		IdentityModelEventSource__ctor_mF6A1EAB3FA9F871CC44CC2690F003B834D0E651C(L_0, NULL);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource__ctor_mF6A1EAB3FA9F871CC44CC2690F003B834D0E651C (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, const RuntimeMethod* method) 
{
	{
		EventSource__ctor_mDF751901186604B47C80B7DCC8DCB624FE5664BC(__this, NULL);
		IdentityModelEventSource_set_LogLevel_m841A67142BEB77A550CBC918297B17B103BFB56B_inline(__this, 3, NULL);
		return;
	}
}
// Microsoft.IdentityModel.Logging.IdentityModelEventSource Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_ShowPII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CShowPIIU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_LogCompleteSecurityArtifact()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_LogCompleteSecurityArtifact_m53C8586F524F92B3A1940299907EC44C3C0B778E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLogCompleteSecurityArtifactU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_HiddenPIIString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_get_HiddenPIIString_mCBCE742420CA089679E08FA1C0F98594A9098486 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenPIIStringU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_HiddenSecurityArtifactString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_get_HiddenSecurityArtifactString_m18E069B9EB17BB480D807B0CC588597E700B0845 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenSecurityArtifactStringU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_HeaderWritten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_HeaderWritten_mE413A430660D1B0F3406F0E81D4822A60851691C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHeaderWrittenU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::set_HeaderWritten(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_set_HeaderWritten_m4E3C82B77473B21DE4D7985DC861706BBCB89736 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHeaderWrittenU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteAlways(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788(0, L_1, L_2, NULL);
		___0_message = L_3;
		String_t* L_4 = ___0_message;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 6, L_4, NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteAlways(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteAlways_m8F9E79D3F5F68DBB549C8C2B833F71AB0B1A3EBA (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_2, L_3, NULL);
		IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE(__this, L_4, NULL);
		return;
	}

IL_0019:
	{
		String_t* L_5 = ___0_message;
		IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE(__this, L_5, NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteVerbose(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteVerbose_m16F922C3AAE09066CDD6F25BE36DAF7756DAE377 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)5)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788(5, L_2, L_3, NULL);
		___0_message = L_4;
		String_t* L_5 = ___0_message;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 1, L_5, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteVerbose(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteVerbose_m95B4CD06E2C6C7648A5BA453F91BCDD8188AE525 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)5)))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_3, L_4, NULL);
		IdentityModelEventSource_WriteVerbose_m16F922C3AAE09066CDD6F25BE36DAF7756DAE377(__this, L_5, NULL);
		return;
	}

IL_0022:
	{
		String_t* L_6 = ___0_message;
		IdentityModelEventSource_WriteVerbose_m16F922C3AAE09066CDD6F25BE36DAF7756DAE377(__this, L_6, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteInformation(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteInformation_mF56E1DAB6DC42573F435247C713611E5608EDBD2 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)4)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788(4, L_2, L_3, NULL);
		___0_message = L_4;
		String_t* L_5 = ___0_message;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 2, L_5, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteInformation(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteInformation_mD7A6C8EFB2CA780B1EDBEEE5373081EB3CF312E0 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)4)))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_3, L_4, NULL);
		IdentityModelEventSource_WriteInformation_mF56E1DAB6DC42573F435247C713611E5608EDBD2(__this, L_5, NULL);
		return;
	}

IL_0022:
	{
		String_t* L_6 = ___0_message;
		IdentityModelEventSource_WriteInformation_mF56E1DAB6DC42573F435247C713611E5608EDBD2(__this, L_6, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteWarning(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteWarning_mBF86A59CF1822DDB0278C6FDE4B7F35B965BFD4F (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)3)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788(3, L_2, L_3, NULL);
		___0_message = L_4;
		String_t* L_5 = ___0_message;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 3, L_5, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteWarning(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteWarning_mC001BBF04AD325D72AC920BB9F38347E453A0506 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___1_args;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_1, L_2, NULL);
		IdentityModelEventSource_WriteWarning_mBF86A59CF1822DDB0278C6FDE4B7F35B965BFD4F(__this, L_3, NULL);
		return;
	}

IL_0011:
	{
		String_t* L_4 = ___0_message;
		IdentityModelEventSource_WriteWarning_mBF86A59CF1822DDB0278C6FDE4B7F35B965BFD4F(__this, L_4, NULL);
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteError_m23EE4F326062E0394A2E3277B88364FC83DE280E (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788(2, L_2, L_3, NULL);
		___0_message = L_4;
		String_t* L_5 = ___0_message;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 4, L_5, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteError(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteError_mAA3D9A768BA09D1F3166B1D0AE88D9D74511EE9B (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)2)))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_3, L_4, NULL);
		IdentityModelEventSource_WriteError_m23EE4F326062E0394A2E3277B88364FC83DE280E(__this, L_5, NULL);
		return;
	}

IL_0022:
	{
		String_t* L_6 = ___0_message;
		IdentityModelEventSource_WriteError_m23EE4F326062E0394A2E3277B88364FC83DE280E(__this, L_6, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteCritical(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteCritical_m38511EA5B7F497D8671D6D342F856D8397361E8A (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788(1, L_2, L_3, NULL);
		___0_message = L_4;
		String_t* L_5 = ___0_message;
		EventSource_WriteEvent_m0A746CC3F239957C62A390FE12CAEE5399C51FDE(__this, 5, L_5, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::WriteCritical(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_WriteCritical_m8397CD8DFC8F1CB826525338F22D0E3FBA88A4B4 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(__this, NULL);
		if (!L_0)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_1;
		L_1 = IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_0029;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		String_t* L_3 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_3, L_4, NULL);
		IdentityModelEventSource_WriteCritical_m38511EA5B7F497D8671D6D342F856D8397361E8A(__this, L_5, NULL);
		return;
	}

IL_0022:
	{
		String_t* L_6 = ___0_message;
		IdentityModelEventSource_WriteCritical_m38511EA5B7F497D8671D6D342F856D8397361E8A(__this, L_6, NULL);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::Write(System.Diagnostics.Tracing.EventLevel,System.Exception,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_Write_mC7EB38044E1EB2987D3B6A83481D729DEC41467D (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_level, Exception_t* ___1_innerException, String_t* ___2_message, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_level;
		Exception_t* L_1 = ___1_innerException;
		String_t* L_2 = ___2_message;
		IdentityModelEventSource_Write_m4A4D02FE87D3A88DF45BEAC720CEFB53961ACA61(__this, L_0, L_1, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::Write(System.Diagnostics.Tracing.EventLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_Write_m4A4D02FE87D3A88DF45BEAC720CEFB53961ACA61 (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_level, Exception_t* ___1_innerException, String_t* ___2_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD52235C13B845D44C37E2F097BB5FE4D59784047);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC42F591622D24EFF49367DE7270862ED6A421D4);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___1_innerException;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline(NULL);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t* L_2 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = LogHelper_IsCustomException_m7D25A374D54997083AFFFDB9B10FDBC8A2627A41(L_2, NULL);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
		L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_5 = ___2_message;
		Exception_t* L_6 = ___1_innerException;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_6, NULL);
		String_t* L_8;
		L_8 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_4, _stringLiteralD52235C13B845D44C37E2F097BB5FE4D59784047, L_5, L_7, NULL);
		___2_message = L_8;
		goto IL_0044;
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_10 = ___2_message;
		Exception_t* L_11 = ___1_innerException;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_11);
		String_t* L_13;
		L_13 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_9, _stringLiteralD52235C13B845D44C37E2F097BB5FE4D59784047, L_10, L_12, NULL);
		___2_message = L_13;
	}

IL_0044:
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = IdentityModelEventSource_get_HeaderWritten_mE413A430660D1B0F3406F0E81D4822A60851691C_inline(NULL);
		if (L_14)
		{
			goto IL_00c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_15;
		L_15 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_16 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____versionLogMessage_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		TypeInfo_tC4F59663C70D17D50BC99D53DCE74BFB9701012D* L_19;
		L_19 = IntrospectionExtensions_GetTypeInfo_mF4497C8656153A91554F7DC469CE223AF2784FF5(L_18, NULL);
		NullCheck(L_19);
		Assembly_t* L_20;
		L_20 = VirtualFuncInvoker0< Assembly_t* >::Invoke(29 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_19);
		NullCheck(L_20);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_21;
		L_21 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(21 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_20);
		NullCheck(L_21);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_22;
		L_22 = AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		String_t* L_24;
		L_24 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_15, L_16, L_23, NULL);
		IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE(__this, L_24, NULL);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_26 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____dateLogMessage_8;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_27;
		L_27 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28 = L_27;
		RuntimeObject* L_29 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(L_25, L_26, L_29, NULL);
		IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE(__this, L_30, NULL);
		bool L_31;
		L_31 = IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline(NULL);
		if (!L_31)
		{
			goto IL_00b6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_32 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____piiOnLogMessage_10;
		IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE(__this, L_32, NULL);
		goto IL_00c1;
	}

IL_00b6:
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_33 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->____piiOffLogMessage_9;
		IdentityModelEventSource_WriteAlways_mFAD0D44CA5B9552917BB6C49EB8E2018840292DE(__this, L_33, NULL);
	}

IL_00c1:
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_set_HeaderWritten_m4E3C82B77473B21DE4D7985DC861706BBCB89736_inline((bool)1, NULL);
	}

IL_00c7:
	{
		int32_t L_34 = ___0_level;
		switch (L_34)
		{
			case 0:
			{
				goto IL_00e7;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_00fb;
			}
			case 3:
			{
				goto IL_0105;
			}
			case 4:
			{
				goto IL_010f;
			}
			case 5:
			{
				goto IL_0119;
			}
		}
	}
	{
		goto IL_0123;
	}

IL_00e7:
	{
		String_t* L_35 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = ___3_args;
		IdentityModelEventSource_WriteAlways_m8F9E79D3F5F68DBB549C8C2B833F71AB0B1A3EBA(__this, L_35, L_36, NULL);
		return;
	}

IL_00f1:
	{
		String_t* L_37 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = ___3_args;
		IdentityModelEventSource_WriteCritical_m8397CD8DFC8F1CB826525338F22D0E3FBA88A4B4(__this, L_37, L_38, NULL);
		return;
	}

IL_00fb:
	{
		String_t* L_39 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = ___3_args;
		IdentityModelEventSource_WriteError_mAA3D9A768BA09D1F3166B1D0AE88D9D74511EE9B(__this, L_39, L_40, NULL);
		return;
	}

IL_0105:
	{
		String_t* L_41 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = ___3_args;
		IdentityModelEventSource_WriteWarning_mC001BBF04AD325D72AC920BB9F38347E453A0506(__this, L_41, L_42, NULL);
		return;
	}

IL_010f:
	{
		String_t* L_43 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = ___3_args;
		IdentityModelEventSource_WriteInformation_mD7A6C8EFB2CA780B1EDBEEE5373081EB3CF312E0(__this, L_43, L_44, NULL);
		return;
	}

IL_0119:
	{
		String_t* L_45 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = ___3_args;
		IdentityModelEventSource_WriteVerbose_m95B4CD06E2C6C7648A5BA453F91BCDD8188AE525(__this, L_45, L_46, NULL);
		return;
	}

IL_0123:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		int32_t L_49 = ___0_level;
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_52;
		L_52 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(_stringLiteralEC42F591622D24EFF49367DE7270862ED6A421D4, L_48, NULL);
		IdentityModelEventSource_WriteError_m23EE4F326062E0394A2E3277B88364FC83DE280E(__this, L_52, NULL);
		String_t* L_53 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = ___3_args;
		IdentityModelEventSource_WriteError_mAA3D9A768BA09D1F3166B1D0AE88D9D74511EE9B(__this, L_53, L_54, NULL);
		return;
	}
}
// System.Diagnostics.Tracing.EventLevel Microsoft.IdentityModel.Logging.IdentityModelEventSource::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLogLevelU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Microsoft.IdentityModel.Logging.IdentityModelEventSource::set_LogLevel(System.Diagnostics.Tracing.EventLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IdentityModelEventSource_set_LogLevel_m841A67142BEB77A550CBC918297B17B103BFB56B (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLogLevelU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.String Microsoft.IdentityModel.Logging.IdentityModelEventSource::PrepareMessage(System.Diagnostics.Tracing.EventLevel,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_PrepareMessage_m73DD2A58E3463D2B3407916709D280F0D168C788 (int32_t ___0_level, String_t* ___1_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6547C8E59AB2E33CAC27E276209877E750A53639);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___1_message;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___2_args;
			if (!L_2)
			{
				goto IL_004c_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___2_args;
			NullCheck(L_3);
			if (!(((RuntimeArray*)L_3)->max_length))
			{
				goto IL_004c_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_4;
			L_4 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			Il2CppFakeBox<int32_t> L_5(EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var, (&___0_level));
			String_t* L_6;
			L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
			L_7 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
			V_0 = L_7;
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_8;
			L_8 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			String_t* L_9;
			L_9 = DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50((&V_0), L_8, NULL);
			String_t* L_10 = ___1_message;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = ___2_args;
			il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
			String_t* L_12;
			L_12 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_10, L_11, NULL);
			String_t* L_13;
			L_13 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_4, _stringLiteral6547C8E59AB2E33CAC27E276209877E750A53639, L_6, L_9, L_12, NULL);
			V_1 = L_13;
			goto IL_00e7;
		}

IL_004c_1:
		{
			il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_14;
			L_14 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			Il2CppFakeBox<int32_t> L_15(EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var, (&___0_level));
			String_t* L_16;
			L_16 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_15), NULL);
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_17;
			L_17 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
			V_0 = L_17;
			CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_18;
			L_18 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
			String_t* L_19;
			L_19 = DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50((&V_0), L_18, NULL);
			String_t* L_20 = ___1_message;
			String_t* L_21;
			L_21 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(L_14, _stringLiteral6547C8E59AB2E33CAC27E276209877E750A53639, L_16, L_19, L_20, NULL);
			V_1 = L_21;
			goto IL_00e7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007e;
		}
		throw e;
	}

CATCH_007e:
	{// begin catch(System.Object)
		RuntimeObject* L_22 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0081;
	}// end catch (depth: 1)

IL_0081:
	{
	}
	try
	{// begin try (depth: 1)
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_23;
		Il2CppFakeBox<int32_t> L_25(EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var, (&___0_level));
		String_t* L_26;
		L_26 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_25), NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_26);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_24;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
		L_28 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_28;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_29;
		L_29 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_30;
		L_30 = DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50((&V_0), L_29, NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_27;
		String_t* L_32 = ___1_message;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_32);
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(_stringLiteral6547C8E59AB2E33CAC27E276209877E750A53639, L_31, NULL);
		V_1 = L_33;
		goto IL_00e7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00be;
		}
		throw e;
	}

CATCH_00be:
	{// begin catch(System.Exception)
		Exception_t* L_34 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		Il2CppFakeBox<int32_t> L_35(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EventLevel_t499F0D303B280260CB7E2A62E8BB88D1569B680E_il2cpp_TypeInfo_var)), (&___0_level));
		String_t* L_36;
		L_36 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_35), NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_37;
		L_37 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		V_0 = L_37;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var)));
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_38;
		L_38 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_39;
		L_39 = DateTime_ToString_m66457C11C42C07E2F437A9D899E6E3FB9FD77B50((&V_0), L_38, NULL);
		String_t* L_40 = ___1_message;
		String_t* L_41;
		L_41 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_36, L_39, L_40, NULL);
		V_1 = L_41;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00e7;
	}// end catch (depth: 1)

IL_00e7:
	{
		String_t* L_42 = V_1;
		return L_42;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Microsoft.IdentityModel.Abstractions.IIdentityLogger Microsoft.IdentityModel.Logging.LogHelper::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean Microsoft.IdentityModel.Logging.LogHelper::IsEnabled(Microsoft.IdentityModel.Abstractions.EventLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogHelper_IsEnabled_m0DC28F4D56BABA2F5F51FBD2C8808AC98BE982AC (int32_t ___0_level, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		int32_t L_1 = ___0_level;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.IdentityModel.Abstractions.IIdentityLogger::IsEnabled(Microsoft.IdentityModel.Abstractions.EventLogLevel) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_3;
		L_3 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		int32_t L_4 = ___0_level;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = LogHelper_EventLogLevelToEventLevel_m4163F6A9BC949F43E8EF9097F1699C9B6A848CA8(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3(L_3, L_5, ((int64_t)(-1)), NULL);
		return L_6;
	}

IL_0020:
	{
		return (bool)1;
	}
}
// System.ArgumentNullException Microsoft.IdentityModel.Logging.LogHelper::LogArgumentNullException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* LogHelper_LogArgumentNullException_mA8FD661AECEEDC4BB4972BD9CAE7318EA2486149 (String_t* ___0_argument, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_LogArgumentException_TisArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_mD688B1BC72E41486762A59F01D58226BEC7A80F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3488F3D1C444870A69874AF255B46982C2A0405);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_argument;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_argument;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4;
		L_4 = LogHelper_LogArgumentException_TisArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_mD688B1BC72E41486762A59F01D58226BEC7A80F5(2, L_0, _stringLiteralD3488F3D1C444870A69874AF255B46982C2A0405, L_2, LogHelper_LogArgumentException_TisArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_mD688B1BC72E41486762A59F01D58226BEC7A80F5_RuntimeMethod_var);
		return L_4;
	}
}
// System.Exception Microsoft.IdentityModel.Logging.LogHelper::LogExceptionMessage(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* LogHelper_LogExceptionMessage_mCC1F72ECAE89C979D59CF8E0318476ABCD42E67E (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_exception;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		Exception_t* L_1;
		L_1 = LogHelper_LogExceptionMessage_m0A41FC36E5C978EE6BB73005288F5ED860106FAF(2, L_0, NULL);
		return L_1;
	}
}
// System.Exception Microsoft.IdentityModel.Logging.LogHelper::LogExceptionMessage(System.Diagnostics.Tracing.EventLevel,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* LogHelper_LogExceptionMessage_m0A41FC36E5C978EE6BB73005288F5ED860106FAF (int32_t ___0_eventLevel, Exception_t* ___1_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Exception_t* L_0 = ___1_exception;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Exception_t*)NULL;
	}

IL_0005:
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_1;
		L_1 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		int32_t L_2 = ___0_eventLevel;
		NullCheck(L_1);
		bool L_3;
		L_3 = EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3(L_1, L_2, ((int64_t)(-1)), NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_4;
		L_4 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		int32_t L_5 = ___0_eventLevel;
		Exception_t* L_6 = ___1_exception;
		NullCheck(L_6);
		Exception_t* L_7;
		L_7 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_6, NULL);
		Exception_t* L_8 = ___1_exception;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		NullCheck(L_4);
		IdentityModelEventSource_Write_mC7EB38044E1EB2987D3B6A83481D729DEC41467D(L_4, L_5, L_7, L_9, NULL);
	}

IL_002b:
	{
		int32_t L_10 = ___0_eventLevel;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = LogHelper_EventLevelToEventLogLevel_m4CA2C3FCC7A621AD427C6AD189465A60CBCD3828(L_10, NULL);
		V_0 = L_11;
		RuntimeObject* L_12;
		L_12 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		int32_t L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.IdentityModel.Abstractions.IIdentityLogger::IsEnabled(Microsoft.IdentityModel.Abstractions.EventLogLevel) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_12, L_13);
		if (!L_14)
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_15;
		L_15 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		int32_t L_16 = V_0;
		Exception_t* L_17 = ___1_exception;
		NullCheck(L_17);
		Exception_t* L_18;
		L_18 = Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline(L_17, NULL);
		Exception_t* L_19 = ___1_exception;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_21;
		L_21 = LogHelper_WriteEntry_mE3AC51AF695B39CA1D4945053A0F5E61DD7ECC7D(L_16, L_18, L_20, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* >::Invoke(1 /* System.Void Microsoft.IdentityModel.Abstractions.IIdentityLogger::Log(Microsoft.IdentityModel.Abstractions.LogEntry) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_15, L_21);
	}

IL_005c:
	{
		Exception_t* L_22 = ___1_exception;
		return L_22;
	}
}
// System.Void Microsoft.IdentityModel.Logging.LogHelper::LogInformation(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogHelper_LogInformation_m9ED3460B91A125B342585403430AB365D98AE7D2 (String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_0;
		L_0 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3(L_0, 4, ((int64_t)(-1)), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_2;
		L_2 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		String_t* L_3 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		NullCheck(L_2);
		IdentityModelEventSource_WriteInformation_mD7A6C8EFB2CA780B1EDBEEE5373081EB3CF312E0(L_2, L_3, L_4, NULL);
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.IdentityModel.Abstractions.IIdentityLogger::IsEnabled(Microsoft.IdentityModel.Abstractions.EventLogLevel) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_5, 4);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		String_t* L_8 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___1_args;
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_10;
		L_10 = LogHelper_WriteEntry_mE3AC51AF695B39CA1D4945053A0F5E61DD7ECC7D(4, (Exception_t*)NULL, L_8, L_9, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* >::Invoke(1 /* System.Void Microsoft.IdentityModel.Abstractions.IIdentityLogger::Log(Microsoft.IdentityModel.Abstractions.LogEntry) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_7, L_10);
	}

IL_003b:
	{
		return;
	}
}
// System.Void Microsoft.IdentityModel.Logging.LogHelper::LogVerbose(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogHelper_LogVerbose_m503FBBCD06C039CC8F9CD7CD449EB40D462CDFE3 (String_t* ___0_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_0;
		L_0 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = EventSource_IsEnabled_m744D6915CB7FFC678DECA5519509ED97D342B0A3(L_0, 5, ((int64_t)(-1)), NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_2;
		L_2 = IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline(NULL);
		String_t* L_3 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___1_args;
		NullCheck(L_2);
		IdentityModelEventSource_WriteVerbose_m95B4CD06E2C6C7648A5BA453F91BCDD8188AE525(L_2, L_3, L_4, NULL);
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean Microsoft.IdentityModel.Abstractions.IIdentityLogger::IsEnabled(Microsoft.IdentityModel.Abstractions.EventLogLevel) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_5, 5);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline(NULL);
		String_t* L_8 = ___0_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = ___1_args;
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_10;
		L_10 = LogHelper_WriteEntry_mE3AC51AF695B39CA1D4945053A0F5E61DD7ECC7D(5, (Exception_t*)NULL, L_8, L_9, NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* >::Invoke(1 /* System.Void Microsoft.IdentityModel.Abstractions.IIdentityLogger::Log(Microsoft.IdentityModel.Abstractions.LogEntry) */, IIdentityLogger_tEC144730C41AB1BBE1E49E54CFC8136B0F38DFCE_il2cpp_TypeInfo_var, L_7, L_10);
	}

IL_003b:
	{
		return;
	}
}
// Microsoft.IdentityModel.Abstractions.EventLogLevel Microsoft.IdentityModel.Logging.LogHelper::EventLevelToEventLogLevel(System.Diagnostics.Tracing.EventLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogHelper_EventLevelToEventLogLevel_m4CA2C3FCC7A621AD427C6AD189465A60CBCD3828 (int32_t ___0_eventLevel, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_eventLevel;
		if ((!(((uint32_t)L_0) > ((uint32_t)5))))
		{
			goto IL_0006;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0006:
	{
		int32_t L_1 = ___0_eventLevel;
		return (int32_t)(L_1);
	}
}
// System.Diagnostics.Tracing.EventLevel Microsoft.IdentityModel.Logging.LogHelper::EventLogLevelToEventLevel(Microsoft.IdentityModel.Abstractions.EventLogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LogHelper_EventLogLevelToEventLevel_m4163F6A9BC949F43E8EF9097F1699C9B6A848CA8 (int32_t ___0_eventLevel, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_eventLevel;
		if ((!(((uint32_t)L_0) > ((uint32_t)5))))
		{
			goto IL_0006;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0006:
	{
		int32_t L_1 = ___0_eventLevel;
		return (int32_t)(L_1);
	}
}
// System.String Microsoft.IdentityModel.Logging.LogHelper::FormatInvariant(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_RemovePII_m2955B87773C35BFD429839C94A174F6EFF582871_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_SanitizeSecurityArtifact_m470EB4F47C9C8DDD0BAFAC4E661D0016A45EB34E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* G_B7_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B7_3 = NULL;
	Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* G_B6_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B6_3 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B10_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B10_1 = NULL;
	String_t* G_B10_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B10_3 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* G_B9_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B9_3 = NULL;
	{
		String_t* L_0 = ___0_format;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_0009:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___1_args;
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_3 = ___0_format;
		return L_3;
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline(NULL);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5;
		L_5 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_6 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = ___1_args;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_8 = ((U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var))->___U3C0U3E__RemovePII_0;
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_9 = L_8;
		G_B6_0 = L_9;
		G_B6_1 = L_7;
		G_B6_2 = L_6;
		G_B6_3 = L_5;
		if (L_9)
		{
			G_B7_0 = L_9;
			G_B7_1 = L_7;
			G_B7_2 = L_6;
			G_B7_3 = L_5;
			goto IL_0037;
		}
	}
	{
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_10 = (Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B*)il2cpp_codegen_object_new(Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Func_2__ctor_mD6767DE619116219CD1567BC735C4AC96B9348CF(L_10, NULL, (intptr_t)((void*)LogHelper_RemovePII_m2955B87773C35BFD429839C94A174F6EFF582871_RuntimeMethod_var), NULL);
		Func_2_t8A4E59735D50CEA34C30F6CD6B5804A38327CD0B* L_11 = L_10;
		((U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var))->___U3C0U3E__RemovePII_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var))->___U3C0U3E__RemovePII_0), (void*)L_11);
		G_B7_0 = L_11;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}

IL_0037:
	{
		RuntimeObject* L_12;
		L_12 = Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C((RuntimeObject*)G_B7_1, G_B7_0, Enumerable_Select_TisRuntimeObject_TisString_t_m4212A6B9DDC97D402346EC78AE3115A600469C8C_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13;
		L_13 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_12, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		V_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		String_t* L_15;
		L_15 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(G_B7_3, G_B7_2, L_14, NULL);
		return L_15;
	}

IL_0049:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_16;
		L_16 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_17 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = ___1_args;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_19 = ((U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var))->___U3C1U3E__SanitizeSecurityArtifact_1;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_20 = L_19;
		G_B9_0 = L_20;
		G_B9_1 = L_18;
		G_B9_2 = L_17;
		G_B9_3 = L_16;
		if (L_20)
		{
			G_B10_0 = L_20;
			G_B10_1 = L_18;
			G_B10_2 = L_17;
			G_B10_3 = L_16;
			goto IL_006b;
		}
	}
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_21 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_21, NULL, (intptr_t)((void*)LogHelper_SanitizeSecurityArtifact_m470EB4F47C9C8DDD0BAFAC4E661D0016A45EB34E_RuntimeMethod_var), NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_22 = L_21;
		((U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var))->___U3C1U3E__SanitizeSecurityArtifact_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3EO_t06C984E7C2B56B56D9D5B01191211E5A5D4E8147_il2cpp_TypeInfo_var))->___U3C1U3E__SanitizeSecurityArtifact_1), (void*)L_22);
		G_B10_0 = L_22;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}

IL_006b:
	{
		RuntimeObject* L_23;
		L_23 = Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB((RuntimeObject*)G_B10_1, G_B10_0, Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_RuntimeMethod_var);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24;
		L_24 = Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D(L_23, Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_RuntimeMethod_var);
		String_t* L_25;
		L_25 = String_Format_m447B585713E5EB3EBF5D9D0710706D01E8A56D75(G_B10_3, G_B10_2, L_24, NULL);
		return L_25;
	}
}
// System.Object Microsoft.IdentityModel.Logging.LogHelper::SanitizeSecurityArtifact(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogHelper_SanitizeSecurityArtifact_m470EB4F47C9C8DDD0BAFAC4E661D0016A45EB34E (RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B8_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B11_2 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B10_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_arg;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = IdentityModelEventSource_get_LogCompleteSecurityArtifact_m53C8586F524F92B3A1940299907EC44C3C0B778E_inline(NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_2 = ___0_arg;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var)))
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_3 = ___0_arg;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_3, ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var)));
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Microsoft.IdentityModel.Logging.ISafeLogSecurityArtifact::UnsafeToString() */, ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_3, ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var)));
		return L_4;
	}

IL_0024:
	{
		RuntimeObject* L_5 = ___0_arg;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, ISafeLogSecurityArtifact_t0F94D35A7C324A8B96514BC2F89B60DBD70CD808_il2cpp_TypeInfo_var)))
		{
			goto IL_0056;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = IdentityModelEventSource_get_HiddenSecurityArtifactString_m18E069B9EB17BB480D807B0CC588597E700B0845_inline(NULL);
		RuntimeObject* L_8 = ___0_arg;
		G_B7_0 = L_7;
		G_B7_1 = L_6;
		if (L_8)
		{
			G_B8_0 = L_7;
			G_B8_1 = L_6;
			goto IL_003c;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0047;
	}

IL_003c:
	{
		RuntimeObject* L_9 = ___0_arg;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		G_B9_0 = L_11;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0047:
	{
		String_t* L_12 = G_B9_0;
		G_B10_0 = L_12;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_12)
		{
			G_B11_0 = L_12;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0050;
		}
	}
	{
		G_B11_0 = _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
	}

IL_0050:
	{
		String_t* L_13;
		L_13 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(G_B11_2, G_B11_1, G_B11_0, NULL);
		return L_13;
	}

IL_0056:
	{
		RuntimeObject* L_14 = ___0_arg;
		return L_14;
	}
}
// System.String Microsoft.IdentityModel.Logging.LogHelper::RemovePII(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LogHelper_RemovePII_m2955B87773C35BFD429839C94A174F6EFF582871 (RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	String_t* G_B7_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B7_1 = NULL;
	String_t* G_B6_0 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B6_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B8_2 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B10_2 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B9_2 = NULL;
	{
		RuntimeObject* L_0 = ___0_arg;
		V_0 = ((Exception_t*)IsInstClass((RuntimeObject*)L_0, Exception_t_il2cpp_TypeInfo_var));
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = LogHelper_IsCustomException_m7D25A374D54997083AFFFDB9B10FDBC8A2627A41(L_2, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		return L_5;
	}

IL_0019:
	{
		RuntimeObject* L_6 = ___0_arg;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_6, NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_7 = ___0_arg;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_9;
		L_9 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = IdentityModelEventSource_get_HiddenPIIString_mCBCE742420CA089679E08FA1C0F98594A9098486_inline(NULL);
		RuntimeObject* L_11 = ___0_arg;
		G_B6_0 = L_10;
		G_B6_1 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = L_9;
			goto IL_0038;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_0043;
	}

IL_0038:
	{
		RuntimeObject* L_12 = ___0_arg;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_12, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_0043:
	{
		String_t* L_15 = G_B8_0;
		G_B9_0 = L_15;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		if (L_15)
		{
			G_B10_0 = L_15;
			G_B10_1 = G_B8_1;
			G_B10_2 = G_B8_2;
			goto IL_004c;
		}
	}
	{
		G_B10_0 = _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_004c:
	{
		String_t* L_16;
		L_16 = String_Format_m3844098E7C18576D263AAF62F69BE5C70BF9A744(G_B10_2, G_B10_1, G_B10_0, NULL);
		return L_16;
	}
}
// System.Boolean Microsoft.IdentityModel.Logging.LogHelper::IsCustomException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LogHelper_IsCustomException_m7D25A374D54997083AFFFDB9B10FDBC8A2627A41 (Exception_t* ___0_ex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral761A4782C8C133ABA6E914383DAD50C8397E92F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___0_ex;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_StartsWith_mA2A4405B1B9F3653A6A9AA7F223F68D86A0C6264(L_2, _stringLiteral761A4782C8C133ABA6E914383DAD50C8397E92F7, 4, NULL);
		return L_3;
	}
}
// System.Object Microsoft.IdentityModel.Logging.LogHelper::MarkAsNonPII(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LogHelper_MarkAsNonPII_mAC729DBCCA6020A8F39FE0E5147DD108E9E2874C (RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_arg;
		NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C L_1;
		memset((&L_1), 0, sizeof(L_1));
		NonPII__ctor_m7A0CE50AEEDFFC92C828C2668F94216845D3135A((&L_1), L_0, /*hidden argument*/NULL);
		NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C L_2 = L_1;
		RuntimeObject* L_3 = Box(NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// Microsoft.IdentityModel.Abstractions.LogEntry Microsoft.IdentityModel.Logging.LogHelper::WriteEntry(Microsoft.IdentityModel.Abstractions.EventLogLevel,System.Exception,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* LogHelper_WriteEntry_mE3AC51AF695B39CA1D4945053A0F5E61DD7ECC7D (int32_t ___0_eventLogLevel, Exception_t* ___1_innerException, String_t* ___2_message, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8A46138BF3F834B3F99AE50EE73519F65ABFF5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDEDF80D4199B8346DDC82AB341AD2DB02F160F0);
		s_Il2CppMethodInitialized = true;
	}
	LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* G_B10_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	String_t* G_B13_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B13_3 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	String_t* G_B12_2 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B12_3 = NULL;
	String_t* G_B14_0 = NULL;
	RuntimeObject* G_B14_1 = NULL;
	String_t* G_B14_2 = NULL;
	String_t* G_B14_3 = NULL;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* G_B14_4 = NULL;
	{
		String_t* L_0 = ___2_message;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410*)NULL;
	}

IL_000a:
	{
		Exception_t* L_2 = ___1_innerException;
		if (!L_2)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline(NULL);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		Exception_t* L_4 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = LogHelper_IsCustomException_m7D25A374D54997083AFFFDB9B10FDBC8A2627A41(L_4, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_7 = ___2_message;
		Exception_t* L_8 = ___1_innerException;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Exception_GetType_mAD1230385BDC06119C339187CC37F22B6A79CF09(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_6, _stringLiteralB8A46138BF3F834B3F99AE50EE73519F65ABFF5B, L_7, L_9, NULL);
		___2_message = L_10;
		goto IL_004e;
	}

IL_0036:
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_11;
		L_11 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_12 = ___2_message;
		Exception_t* L_13 = ___1_innerException;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_13);
		String_t* L_15;
		L_15 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_11, _stringLiteralB8A46138BF3F834B3F99AE50EE73519F65ABFF5B, L_12, L_14, NULL);
		___2_message = L_15;
	}

IL_004e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = ___3_args;
		if (!L_16)
		{
			goto IL_005a;
		}
	}
	{
		String_t* L_17 = ___2_message;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = ___3_args;
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_19;
		L_19 = LogHelper_FormatInvariant_m2EB9F1C64D45BF47AA7779D49993141C95D38FB6(L_17, L_18, NULL);
		G_B10_0 = L_19;
		goto IL_005b;
	}

IL_005a:
	{
		String_t* L_20 = ___2_message;
		G_B10_0 = L_20;
	}

IL_005b:
	{
		___2_message = G_B10_0;
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_21 = (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410*)il2cpp_codegen_object_new(LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		LogEntry__ctor_m33407EEB5041EB30F5E3EA403E6844167D6210E8(L_21, NULL);
		V_0 = L_21;
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_22 = V_0;
		int32_t L_23 = ___0_eventLogLevel;
		NullCheck(L_22);
		LogEntry_set_EventLogLevel_m190A4AD9B8FE5E2081119A6C890B7B21FEC05FE9_inline(L_22, L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		bool L_24 = ((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____isHeaderWritten_1;
		if (L_24)
		{
			goto IL_00d6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_25;
		L_25 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_27);
		Assembly_t* L_28;
		L_28 = VirtualFuncInvoker0< Assembly_t* >::Invoke(29 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_27);
		NullCheck(L_28);
		AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_29;
		L_29 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(21 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_28);
		NullCheck(L_29);
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_30;
		L_30 = AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_32;
		L_32 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_33 = L_32;
		RuntimeObject* L_34 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_33);
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline(NULL);
		G_B12_0 = L_34;
		G_B12_1 = L_31;
		G_B12_2 = _stringLiteralCDEDF80D4199B8346DDC82AB341AD2DB02F160F0;
		G_B12_3 = L_25;
		if (L_35)
		{
			G_B13_0 = L_34;
			G_B13_1 = L_31;
			G_B13_2 = _stringLiteralCDEDF80D4199B8346DDC82AB341AD2DB02F160F0;
			G_B13_3 = L_25;
			goto IL_00b1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_36 = ((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____piiOffLogMessage_2;
		G_B14_0 = L_36;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		G_B14_4 = G_B12_3;
		goto IL_00b6;
	}

IL_00b1:
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		String_t* L_37 = ((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____piiOnLogMessage_3;
		G_B14_0 = L_37;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
		G_B14_4 = G_B13_3;
	}

IL_00b6:
	{
		String_t* L_38;
		L_38 = String_Format_mF8E53122BE8F0F617357DFB75C3912D1242DE263(G_B14_4, G_B14_3, G_B14_2, G_B14_1, G_B14_0, NULL);
		V_1 = L_38;
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_39 = V_0;
		String_t* L_40 = V_1;
		String_t* L_41;
		L_41 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		String_t* L_42 = ___2_message;
		String_t* L_43;
		L_43 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_40, L_41, L_42, NULL);
		NullCheck(L_39);
		LogEntry_set_Message_m272688179C2D2CE7426CB19F489BE877F46A88B7_inline(L_39, L_43, NULL);
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____isHeaderWritten_1 = (bool)1;
		goto IL_00dd;
	}

IL_00d6:
	{
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_44 = V_0;
		String_t* L_45 = ___2_message;
		NullCheck(L_44);
		LogEntry_set_Message_m272688179C2D2CE7426CB19F489BE877F46A88B7_inline(L_44, L_45, NULL);
	}

IL_00dd:
	{
		LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* L_46 = V_0;
		return L_46;
	}
}
// System.Void Microsoft.IdentityModel.Logging.LogHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogHelper__cctor_mA9AE1BFB3FCF5FA38BB0C6773DE1FE07CC44E6F6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral140F2A27D77FF312FFE22B8EFB20511C3B00F6D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B4E80A7C0D22844C64A826F2875FA48F14F1BC5);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* L_0;
		L_0 = NullIdentityModelLogger_get_Instance_m3DAEDCF167C1DD6C5FD422063B12476B84F78CB1_inline(NULL);
		((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_0), (void*)L_0);
		((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____isHeaderWritten_1 = (bool)0;
		((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____piiOffLogMessage_2 = _stringLiteral4B4E80A7C0D22844C64A826F2875FA48F14F1BC5;
		Il2CppCodeGenWriteBarrier((void**)(&((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____piiOffLogMessage_2), (void*)_stringLiteral4B4E80A7C0D22844C64A826F2875FA48F14F1BC5);
		((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____piiOnLogMessage_3 = _stringLiteral140F2A27D77FF312FFE22B8EFB20511C3B00F6D8;
		Il2CppCodeGenWriteBarrier((void**)(&((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->____piiOnLogMessage_3), (void*)_stringLiteral140F2A27D77FF312FFE22B8EFB20511C3B00F6D8);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Microsoft.IdentityModel.Logging.NonPII
IL2CPP_EXTERN_C void NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshal_pinvoke(const NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C& unmarshaled, NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.___U3CArgumentU3Ek__BackingField_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___U3CArgumentU3Ek__BackingField_0))
		{
			marshaled.___U3CArgumentU3Ek__BackingField_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___U3CArgumentU3Ek__BackingField_0));
			(marshaled.___U3CArgumentU3Ek__BackingField_0)->AddRef();
		}
		else
		{
			marshaled.___U3CArgumentU3Ek__BackingField_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___U3CArgumentU3Ek__BackingField_0);
		}
	}
	else
	{
		marshaled.___U3CArgumentU3Ek__BackingField_0 = NULL;
	}
}
IL2CPP_EXTERN_C void NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshal_pinvoke_back(const NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_pinvoke& marshaled, NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U3CArgumentU3Ek__BackingField_0 != NULL)
	{
		unmarshaled.___U3CArgumentU3Ek__BackingField_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___U3CArgumentU3Ek__BackingField_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CArgumentU3Ek__BackingField_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___U3CArgumentU3Ek__BackingField_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___U3CArgumentU3Ek__BackingField_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___U3CArgumentU3Ek__BackingField_0), Il2CppIUnknown::IID, marshaled.___U3CArgumentU3Ek__BackingField_0);
		}
	}
	else
	{
		unmarshaled.___U3CArgumentU3Ek__BackingField_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CArgumentU3Ek__BackingField_0), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Microsoft.IdentityModel.Logging.NonPII
IL2CPP_EXTERN_C void NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshal_pinvoke_cleanup(NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_pinvoke& marshaled)
{
	if (marshaled.___U3CArgumentU3Ek__BackingField_0 != NULL)
	{
		(marshaled.___U3CArgumentU3Ek__BackingField_0)->Release();
		marshaled.___U3CArgumentU3Ek__BackingField_0 = NULL;
	}
}
// Conversion methods for marshalling of: Microsoft.IdentityModel.Logging.NonPII
IL2CPP_EXTERN_C void NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshal_com(const NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C& unmarshaled, NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_com& marshaled)
{
	if (unmarshaled.___U3CArgumentU3Ek__BackingField_0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___U3CArgumentU3Ek__BackingField_0))
		{
			marshaled.___U3CArgumentU3Ek__BackingField_0 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.___U3CArgumentU3Ek__BackingField_0));
			(marshaled.___U3CArgumentU3Ek__BackingField_0)->AddRef();
		}
		else
		{
			marshaled.___U3CArgumentU3Ek__BackingField_0 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.___U3CArgumentU3Ek__BackingField_0);
		}
	}
	else
	{
		marshaled.___U3CArgumentU3Ek__BackingField_0 = NULL;
	}
}
IL2CPP_EXTERN_C void NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshal_com_back(const NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_com& marshaled, NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.___U3CArgumentU3Ek__BackingField_0 != NULL)
	{
		unmarshaled.___U3CArgumentU3Ek__BackingField_0 = il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___U3CArgumentU3Ek__BackingField_0, Il2CppComObject_il2cpp_TypeInfo_var);
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CArgumentU3Ek__BackingField_0), (void*)il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___U3CArgumentU3Ek__BackingField_0, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.___U3CArgumentU3Ek__BackingField_0))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.___U3CArgumentU3Ek__BackingField_0), Il2CppIUnknown::IID, marshaled.___U3CArgumentU3Ek__BackingField_0);
		}
	}
	else
	{
		unmarshaled.___U3CArgumentU3Ek__BackingField_0 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___U3CArgumentU3Ek__BackingField_0), (void*)NULL);
	}
}
// Conversion method for clean up from marshalling of: Microsoft.IdentityModel.Logging.NonPII
IL2CPP_EXTERN_C void NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshal_com_cleanup(NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C_marshaled_com& marshaled)
{
	if (marshaled.___U3CArgumentU3Ek__BackingField_0 != NULL)
	{
		(marshaled.___U3CArgumentU3Ek__BackingField_0)->Release();
		marshaled.___U3CArgumentU3Ek__BackingField_0 = NULL;
	}
}
// System.Object Microsoft.IdentityModel.Logging.NonPII::get_Argument()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NonPII_get_Argument_m148E388FDE93BA7CD6143D91D0EF0F5D4FD8607D (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CArgumentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* NonPII_get_Argument_m148E388FDE93BA7CD6143D91D0EF0F5D4FD8607D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = NonPII_get_Argument_m148E388FDE93BA7CD6143D91D0EF0F5D4FD8607D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Microsoft.IdentityModel.Logging.NonPII::set_Argument(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPII_set_Argument_mF2F2FE186D32CB3DB8A7A0A03A3B1E4727F8DF6A (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CArgumentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void NonPII_set_Argument_mF2F2FE186D32CB3DB8A7A0A03A3B1E4727F8DF6A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C*>(__this + _offset);
	NonPII_set_Argument_mF2F2FE186D32CB3DB8A7A0A03A3B1E4727F8DF6A_inline(_thisAdjusted, ___0_value, method);
}
// System.Void Microsoft.IdentityModel.Logging.NonPII::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NonPII__ctor_m7A0CE50AEEDFFC92C828C2668F94216845D3135A (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, RuntimeObject* ___0_argument, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_argument;
		NonPII_set_Argument_mF2F2FE186D32CB3DB8A7A0A03A3B1E4727F8DF6A_inline(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void NonPII__ctor_m7A0CE50AEEDFFC92C828C2668F94216845D3135A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_argument, const RuntimeMethod* method)
{
	NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C*>(__this + _offset);
	NonPII__ctor_m7A0CE50AEEDFFC92C828C2668F94216845D3135A(_thisAdjusted, ___0_argument, method);
}
// System.String Microsoft.IdentityModel.Logging.NonPII::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NonPII_ToString_m1C55590A1C4A4CC2500E72F04C1FFC408C8917F3 (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B4_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = NonPII_get_Argument_m148E388FDE93BA7CD6143D91D0EF0F5D4FD8607D_inline(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		String_t* L_3 = G_B3_0;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_001b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA4BE0F963380DB493604E9CA0B0B54F040F58C9;
	}

IL_001b:
	{
		return G_B5_0;
	}
}
IL2CPP_EXTERN_C  String_t* NonPII_ToString_m1C55590A1C4A4CC2500E72F04C1FFC408C8917F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = NonPII_ToString_m1C55590A1C4A4CC2500E72F04C1FFC408C8917F3(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityModelEventSource_set_LogLevel_m841A67142BEB77A550CBC918297B17B103BFB56B_inline (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CLogLevelU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t IdentityModelEventSource_get_LogLevel_m6A82DD92077816B1340206509D4BA392C22A1CED_inline (IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CLogLevelU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_ShowPII_mE09F9CA2B203F3E507596B4C727FFB05FE8B60A8_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CShowPIIU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_HeaderWritten_mE413A430660D1B0F3406F0E81D4822A60851691C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHeaderWrittenU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* AssemblyName_get_Version_mC20EC1E68FA7C40120112C2E29A19C9D948B5300_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* L_0 = __this->___version_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IdentityModelEventSource_set_HeaderWritten_m4E3C82B77473B21DE4D7985DC861706BBCB89736_inline (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHeaderWrittenU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LogHelper_get_Logger_m73CCABC43B108FD9044A2B049796C61EFCE8B901_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_StaticFields*)il2cpp_codegen_static_fields_for(LogHelper_tD3DEFFA5E0E1B62D183CAFA343360F322E280F19_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* IdentityModelEventSource_get_Logger_mE0FD44B1B3C69A12CB09FC1491A6E952C9A77B38_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7* L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t* Exception_get_InnerException_m0C1BDB339C786BA4DA7D2C1AD214571CFBBB1410_inline (Exception_t* __this, const RuntimeMethod* method) 
{
	{
		Exception_t* L_0 = __this->____innerException_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool IdentityModelEventSource_get_LogCompleteSecurityArtifact_m53C8586F524F92B3A1940299907EC44C3C0B778E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		bool L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CLogCompleteSecurityArtifactU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_get_HiddenSecurityArtifactString_m18E069B9EB17BB480D807B0CC588597E700B0845_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenSecurityArtifactStringU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentityModelEventSource_get_HiddenPIIString_mCBCE742420CA089679E08FA1C0F98594A9098486_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var);
		String_t* L_0 = ((IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_StaticFields*)il2cpp_codegen_static_fields_for(IdentityModelEventSource_t25F99B385FE633921A47B82F34C5F0C0FC91A7D7_il2cpp_TypeInfo_var))->___U3CHiddenPIIStringU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogEntry_set_EventLogLevel_m190A4AD9B8FE5E2081119A6C890B7B21FEC05FE9_inline (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CEventLogLevelU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void LogEntry_set_Message_m272688179C2D2CE7426CB19F489BE877F46A88B7_inline (LogEntry_t5675E48FBB97E1D16DA1D99B9B080B5E2749B410* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CMessageU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* NullIdentityModelLogger_get_Instance_m3DAEDCF167C1DD6C5FD422063B12476B84F78CB1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var);
		NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0* L_0 = ((NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_StaticFields*)il2cpp_codegen_static_fields_for(NullIdentityModelLogger_t8AB254092A04E98F68512F25FD3E3F343D81BEB0_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* NonPII_get_Argument_m148E388FDE93BA7CD6143D91D0EF0F5D4FD8607D_inline (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CArgumentU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NonPII_set_Argument_mF2F2FE186D32CB3DB8A7A0A03A3B1E4727F8DF6A_inline (NonPII_tACEBE45B7CD40F7551CBE74E9D01DCF539E2015C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CArgumentU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CArgumentU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
