#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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

// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3;
// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07;
// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// System.Text.Json.JsonPropertyInfoNotNullable`4<System.Object,System.Object,System.Object,System.Object>
struct JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.Json.Serialization.Converters.DefaultArrayConverter
struct DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605;
// System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter
struct DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6;
// System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter
struct DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E;
// System.Text.Json.Serialization.Converters.DefaultICollectionConverter
struct DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F;
// System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter
struct DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58;
// System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter
struct DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C;
// System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter
struct DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2;
// System.Text.Json.Serialization.JsonAttribute
struct JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5;
// System.Text.Json.JsonCamelCaseNamingPolicy
struct JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6;
// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8;
// System.Text.Json.JsonDefaultNamingPolicy
struct JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B;
// System.Text.Json.Serialization.Converters.JsonDictionaryConverter
struct JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E;
// System.Text.Json.Serialization.Converters.JsonEnumerableConverter
struct JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3;
// System.Text.Json.Serialization.JsonIgnoreAttribute
struct JsonIgnoreAttribute_t1428D9C93258F5BB795C8B650FACF63C4669B836;
// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4;
// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral36D254F59ED91804C13D501446692D41472D96E2;
IL2CPP_EXTERN_C String_t* _stringLiteral38C378162D10735E8E753443B3094057777252AC;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F;
IL2CPP_EXTERN_C String_t* _stringLiteral83078AF98C6069055A1C50A282E6E439FC320BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralB6B9449F80C0026A5DD66BBA64B81E037161067A;
IL2CPP_EXTERN_C String_t* _stringLiteralBA8C2D520707D106E80FC5954BF4068B2711A8C1;
IL2CPP_EXTERN_C String_t* _stringLiteralCD70750FE8DB60D33FA44BB075A6204E231A7117;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_CheckNotDisposed_m3023C02F6F75AB548E99526BE817223286AC82EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteBoolean_m9DBD27A489E401C44A911BC425FF8BA509AEE75A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteLiteralEscapeProperty_m137D937FC00AA3DF3D8E27C6F27A74C5C72EFA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNull_mFAFA6BBF833088F50DE2271255C1367F3B9554FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumberEscapeProperty_m5C6984D5BFBCB19538DA7E51B6786235710E0BBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumberEscapeProperty_m7851660540387DB35E8B5C06D67795B92BAE8664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumberEscapeProperty_m9EA722C9B508281880E92642AE71B93BD4EBC1DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumberEscapeProperty_mAAA68B5E56A137FB38326A210A5A9E9036EDE790_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumber_m53F8960BEC188097BC27A924F5C940B944BCC69F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumber_m9869D2EE00E301C72538F2CD35B483DD82AB39E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumber_mB4D57EB91A38F1A4137DED79C353AB6F2A62F45B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumber_mC0157CB2619F7E79C49D2FF6740DBB3C0A056E8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteNumber_mF2EA34984EDA6CAEAB9C8C03545A16BC7036F964_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WritePropertyName_m996942A298DED618DCBE28108F27E373B2E5D95F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteStartArray_m0ED1C2A6C341A50DB167BEC72977371A99859A8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteStartEscapeProperty_mF416B738D8887BAADDC3C90239D7A5C98F672D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteStringEscapeProperty_mCD08606811907E99503A17C244B37E19D66831C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteStringEscapeValue_m5F92419D0847CAF6993B1EB667B83A5DCF936007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter_WriteString_mAD191501591743B189382ACCF57DEB2373E3BFA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utf8JsonWriter__ctor_m7231BA575A72C4997FCCFFDCCB3CEE9A1549A905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var;
IL2CPP_EXTERN_C const char* U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1_StaticFields____1A373AA9A5E91C03714106E20498C6E475FEFACE_0_RVAStorage;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14;;
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com;
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com;;
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke;
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke;;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3  : public RuntimeObject
{
	// T[] System.Buffers.ArrayBufferWriter`1::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_0;
	// System.Int32 System.Buffers.ArrayBufferWriter`1::_index
	int32_t ____index_1;
};

// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07  : public RuntimeObject
{
};

// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B  : public RuntimeObject
{
};

// System.Buffers.MemoryManager`1<System.Byte>
struct MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E  : public RuntimeObject
{
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1  : public RuntimeObject
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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8  : public RuntimeObject
{
};

// System.Text.Json.Serialization.Converters.JsonDictionaryConverter
struct JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E  : public RuntimeObject
{
};

// System.Text.Json.Serialization.Converters.JsonEnumerableConverter
struct JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3  : public RuntimeObject
{
};

// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4  : public RuntimeObject
{
};

// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA  : public RuntimeObject
{
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IsPropertyPolicy>k__BackingField
	bool ___U3CIsPropertyPolicyU3Ek__BackingField_8;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<ShouldSerialize>k__BackingField
	bool ___U3CShouldSerializeU3Ek__BackingField_9;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<ShouldDeserialize>k__BackingField
	bool ___U3CShouldDeserializeU3Ek__BackingField_10;
};

// System.Text.Json.JsonWriterHelper
struct JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691  : public RuntimeObject
{
	// System.Byte[][] System.Text.Encodings.Web.TextEncoder::_asciiEscape
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____asciiEscape_0;
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

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.Text.Json.JsonPropertyInfoCommon`4<System.Object,System.Object,System.Object,System.Object>
struct JsonPropertyInfoCommon_4_t69F82F974164B25DCB2AF669533E90221667DDF6  : public JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA
{
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED 
{
	// System.UInt32[] System.Text.Internal.AllowedCharactersBitmap::_allowedCharacters
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____allowedCharacters_0;
};
// Native definition for P/Invoke marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_0;
};
// Native definition for COM marshalling of System.Text.Internal.AllowedCharactersBitmap
struct AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____allowedCharacters_0;
};

// System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 
{
	// System.Int32[] System.Text.Json.BitStack::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.UInt64 System.Text.Json.BitStack::_allocationFreeContainer
	uint64_t ____allocationFreeContainer_1;
	// System.Int32 System.Text.Json.BitStack::_currentDepth
	int32_t ____currentDepth_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____array_0;
	uint64_t ____allocationFreeContainer_1;
	int32_t ____currentDepth_2;
};
// Native definition for COM marshalling of System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____array_0;
	uint64_t ____allocationFreeContainer_1;
	int32_t ____currentDepth_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

// System.Text.Json.Serialization.Converters.DefaultArrayConverter
struct DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter
struct DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6  : public JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E
{
};

// System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter
struct DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Text.Json.Serialization.Converters.DefaultICollectionConverter
struct DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter
struct DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58  : public JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E
{
};

// System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter
struct DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C  : public JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E
{
};

// System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter
struct DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2  : public TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691
{
};

// System.Text.Json.Serialization.JsonAttribute
struct JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Text.Json.JsonCamelCaseNamingPolicy
struct JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6  : public JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4
{
};

// System.Text.Json.JsonDefaultNamingPolicy
struct JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B  : public JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4
{
};

// System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 
{
	// System.Int32 System.Text.Json.JsonWriterOptions::_optionsMask
	int32_t ____optionsMask_0;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::<Encoder>k__BackingField
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_pinvoke
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_com
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Buffers.StandardFormat
struct StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF 
{
	// System.Byte System.Buffers.StandardFormat::_format
	uint8_t ____format_0;
	// System.Byte System.Buffers.StandardFormat::_precision
	uint8_t ____precision_1;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
struct __StaticArrayInitTypeSizeU3D5_t9D0D7EC2F93A2F2DC5A0A8713D1B85165C0EB083 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t9D0D7EC2F93A2F2DC5A0A8713D1B85165C0EB083__padding[5];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225__padding[52];
	};
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.Char>
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Text.Json.JsonPropertyInfoNotNullable`4<System.Object,System.Object,System.Object,System.Object>
struct JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF  : public JsonPropertyInfoCommon_4_t69F82F974164B25DCB2AF669533E90221667DDF6
{
};

// System.Text.Encodings.Web.DefaultJavaScriptEncoder
struct DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32  : public JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2
{
	// System.Text.Internal.AllowedCharactersBitmap System.Text.Encodings.Web.DefaultJavaScriptEncoder::_allowedCharacters
	AllowedCharactersBitmap_tA1BC142B179A112F4EAA6A6BF578B0BFD58E8BED ____allowedCharacters_2;
};

// System.Text.Json.Serialization.Converters.EnumConverterOptions
struct EnumConverterOptions_t04BFD73F4179D143CBB0D6D28D643F97A75A3E35 
{
	// System.Int32 System.Text.Json.Serialization.Converters.EnumConverterOptions::value__
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

// System.Text.Json.ExceptionResource
struct ExceptionResource_t50464CD3CC27E438FFB7C76C615A6EAA8BA973E8 
{
	// System.Int32 System.Text.Json.ExceptionResource::value__
	int32_t ___value___2;
};

// System.Text.Json.Serialization.JsonIgnoreAttribute
struct JsonIgnoreAttribute_t1428D9C93258F5BB795C8B650FACF63C4669B836  : public JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5
{
};

// System.Text.Json.JsonTokenType
struct JsonTokenType_t8E1DB7069B7AAEC58356A325AC450129B95C3209 
{
	// System.Byte System.Text.Json.JsonTokenType::value__
	uint8_t ___value___2;
};

// System.Buffers.OperationStatus
struct OperationStatus_t7FC6D4B4F4C4F20BE2F52301CAD11FFF310F56DF 
{
	// System.Int32 System.Buffers.OperationStatus::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.Text.Json.Utf8JsonReader/PartialStateForRollback
struct PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF 
{
	// System.Int64 System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevTotalConsumed
	int64_t ____prevTotalConsumed_0;
	// System.Int64 System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevBytePositionInLine
	int64_t ____prevBytePositionInLine_1;
	// System.Int32 System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevConsumed
	int32_t ____prevConsumed_2;
	// System.SequencePosition System.Text.Json.Utf8JsonReader/PartialStateForRollback::_prevCurrentPosition
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____prevCurrentPosition_3;
};
// Native definition for P/Invoke marshalling of System.Text.Json.Utf8JsonReader/PartialStateForRollback
struct PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_pinvoke
{
	int64_t ____prevTotalConsumed_0;
	int64_t ____prevBytePositionInLine_1;
	int32_t ____prevConsumed_2;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke ____prevCurrentPosition_3;
};
// Native definition for COM marshalling of System.Text.Json.Utf8JsonReader/PartialStateForRollback
struct PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_com
{
	int64_t ____prevTotalConsumed_0;
	int64_t ____prevBytePositionInLine_1;
	int32_t ____prevConsumed_2;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com ____prevCurrentPosition_3;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.Char>
struct ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Char>
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
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

// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0  : public RuntimeObject
{
	// System.Buffers.IBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_output
	RuntimeObject* ____output_1;
	// System.IO.Stream System.Text.Json.Utf8JsonWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_2;
	// System.Buffers.ArrayBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_arrayBufferWriter
	ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* ____arrayBufferWriter_3;
	// System.Memory`1<System.Byte> System.Text.Json.Utf8JsonWriter::_memory
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ____memory_4;
	// System.Boolean System.Text.Json.Utf8JsonWriter::_inObject
	bool ____inObject_5;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonWriter::_tokenType
	uint8_t ____tokenType_6;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonWriter::_bitStack
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 ____bitStack_7;
	// System.Int32 System.Text.Json.Utf8JsonWriter::_currentDepth
	int32_t ____currentDepth_8;
	// System.Text.Json.JsonWriterOptions System.Text.Json.Utf8JsonWriter::_options
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 ____options_9;
	// System.Int32 System.Text.Json.Utf8JsonWriter::<BytesPending>k__BackingField
	int32_t ___U3CBytesPendingU3Ek__BackingField_10;
	// System.Int64 System.Text.Json.Utf8JsonWriter::<BytesCommitted>k__BackingField
	int64_t ___U3CBytesCommittedU3Ek__BackingField_11;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.Buffers.ArrayBufferWriter`1<System.Byte>

// System.Buffers.ArrayBufferWriter`1<System.Byte>

// System.Buffers.ArrayPool`1<System.Byte>
struct ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ___U3CSharedU3Ek__BackingField_0;
};

// System.Buffers.ArrayPool`1<System.Byte>

// System.Buffers.ArrayPool`1<System.Char>
struct ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields
{
	// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1::<Shared>k__BackingField
	ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ___U3CSharedU3Ek__BackingField_0;
};

// System.Buffers.ArrayPool`1<System.Char>

// System.Buffers.MemoryManager`1<System.Byte>

// System.Buffers.MemoryManager`1<System.Byte>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::1A373AA9A5E91C03714106E20498C6E475FEFACE
	__StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39 ___1A373AA9A5E91C03714106E20498C6E475FEFACE_0;
	// System.Int32 <PrivateImplementationDetails>::2BE88CA4242C76E8253AC62474851065032D6833
	int32_t ___2BE88CA4242C76E8253AC62474851065032D6833_1;
	// System.Int32 <PrivateImplementationDetails>::5FFE533B830F08A0326348A9160AFAFC8ADA44DB
	int32_t ___5FFE533B830F08A0326348A9160AFAFC8ADA44DB_2;
	// System.Int64 <PrivateImplementationDetails>::69ED884E7E05C208C95AD237494D414CB5BB9C47
	int64_t ___69ED884E7E05C208C95AD237494D414CB5BB9C47_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04
	__StaticArrayInitTypeSizeU3D5_t9D0D7EC2F93A2F2DC5A0A8713D1B85165C0EB083 ___7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04_4;
	// System.Int64 <PrivateImplementationDetails>::A8CA6D2B4193F7CFDB67B7BD38A880BE0EF7564D
	int64_t ___A8CA6D2B4193F7CFDB67B7BD38A880BE0EF7564D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225 ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225 ___E92B39D8233061927D9ACDE54665E68E7535635A_7;
};

// <PrivateImplementationDetails>

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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Text.Json.Serialization.JsonConverter

// System.Text.Json.Serialization.JsonConverter

// System.Text.Json.Serialization.Converters.JsonDictionaryConverter

// System.Text.Json.Serialization.Converters.JsonDictionaryConverter

// System.Text.Json.Serialization.Converters.JsonEnumerableConverter

// System.Text.Json.Serialization.Converters.JsonEnumerableConverter

// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_StaticFields
{
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonNamingPolicy::<CamelCase>k__BackingField
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ___U3CCamelCaseU3Ek__BackingField_0;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonNamingPolicy::<Default>k__BackingField
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ___U3CDefaultU3Ek__BackingField_1;
};

// System.Text.Json.JsonNamingPolicy

// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields
{
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonDerivedEnumerableConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonDerivedEnumerableConverter_0;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonArrayConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonArrayConverter_1;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonICollectionConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonICollectionConverter_2;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonImmutableEnumerableConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonImmutableEnumerableConverter_3;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::s_jsonDerivedDictionaryConverter
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___s_jsonDerivedDictionaryConverter_4;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::s_jsonIDictionaryConverter
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___s_jsonIDictionaryConverter_5;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::s_jsonImmutableDictionaryConverter
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___s_jsonImmutableDictionaryConverter_6;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonPropertyInfo::s_missingProperty
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* ___s_missingProperty_7;
};

// System.Text.Json.JsonPropertyInfo

// System.Text.Json.JsonWriterHelper
struct JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_StaticFields
{
	// System.Buffers.StandardFormat System.Text.Json.JsonWriterHelper::s_hexStandardFormat
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___s_hexStandardFormat_0;
};

// System.Text.Json.JsonWriterHelper

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.Encodings.Web.TextEncoder
struct TextEncoder_t35B2FDACE089FFCF6F1460C93866D1271356E691_StaticFields
{
	// System.Byte[] System.Text.Encodings.Web.TextEncoder::s_noEscape
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_noEscape_1;
};

// System.Text.Encodings.Web.TextEncoder

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Memory`1<System.Byte>

// System.Memory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.ReadOnlyMemory`1<System.Byte>

// System.Text.Json.BitStack

// System.Text.Json.BitStack

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

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

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Decimal

// System.Text.Json.Serialization.Converters.DefaultArrayConverter

// System.Text.Json.Serialization.Converters.DefaultArrayConverter

// System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter

// System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter

// System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter

// System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter

// System.Text.Json.Serialization.Converters.DefaultICollectionConverter

// System.Text.Json.Serialization.Converters.DefaultICollectionConverter

// System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter

// System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter

// System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter

// System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter

// System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter

// System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Text.Encodings.Web.JavaScriptEncoder

// System.Text.Encodings.Web.JavaScriptEncoder

// System.Text.Json.Serialization.JsonAttribute

// System.Text.Json.Serialization.JsonAttribute

// System.Text.Json.JsonCamelCaseNamingPolicy

// System.Text.Json.JsonCamelCaseNamingPolicy

// System.Text.Json.JsonDefaultNamingPolicy

// System.Text.Json.JsonDefaultNamingPolicy

// System.Text.Json.JsonWriterOptions

// System.Text.Json.JsonWriterOptions

// System.SequencePosition

// System.SequencePosition

// System.Single

// System.Single

// System.Buffers.StandardFormat

// System.Buffers.StandardFormat

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.Stream

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Byte>

// System.ByReference`1<System.Char>

// System.ByReference`1<System.Char>

// System.Text.Json.JsonPropertyInfoNotNullable`4<System.Object,System.Object,System.Object,System.Object>

// System.Text.Json.JsonPropertyInfoNotNullable`4<System.Object,System.Object,System.Object,System.Object>

// System.Text.Encodings.Web.DefaultJavaScriptEncoder
struct DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields
{
	// System.Text.Encodings.Web.DefaultJavaScriptEncoder System.Text.Encodings.Web.DefaultJavaScriptEncoder::Singleton
	DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* ___Singleton_3;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_b
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_b_4;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_t
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_t_5;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_n
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_n_6;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_f
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_f_7;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_r
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_r_8;
	// System.Char[] System.Text.Encodings.Web.DefaultJavaScriptEncoder::s_back
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_back_9;
};

// System.Text.Encodings.Web.DefaultJavaScriptEncoder

// System.Text.Json.Serialization.Converters.EnumConverterOptions

// System.Text.Json.Serialization.Converters.EnumConverterOptions

// System.Text.Json.ExceptionResource

// System.Text.Json.ExceptionResource

// System.Text.Json.Serialization.JsonIgnoreAttribute

// System.Text.Json.Serialization.JsonIgnoreAttribute

// System.Text.Json.JsonTokenType

// System.Text.Json.JsonTokenType

// System.Buffers.OperationStatus

// System.Buffers.OperationStatus

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Array/RawData

// System.Array/RawData

// System.Text.Json.Utf8JsonReader/PartialStateForRollback

// System.Text.Json.Utf8JsonReader/PartialStateForRollback

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Byte>

// System.ReadOnlySpan`1<System.Char>

// System.ReadOnlySpan`1<System.Char>

// System.Span`1<System.Byte>

// System.Span`1<System.Byte>

// System.Span`1<System.Char>

// System.Span`1<System.Char>

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

// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields
{
	// System.Int32 System.Text.Json.Utf8JsonWriter::s_newLineLength
	int32_t ___s_newLineLength_0;
	// System.Char[] System.Text.Json.Utf8JsonWriter::s_singleLineCommentDelimiter
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_singleLineCommentDelimiter_12;
	// System.Buffers.StandardFormat System.Text.Json.Utf8JsonWriter::s_dateTimeStandardFormat
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___s_dateTimeStandardFormat_13;
};

// System.Text.Json.Utf8JsonWriter

// System.ArgumentException

// System.ArgumentException

// System.ArgumentNullException

// System.ArgumentNullException

// System.ObjectDisposedException

// System.ObjectDisposedException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke(const SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14& unmarshaled, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_back(const SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke& marshaled, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14& unmarshaled);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_cleanup(SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_com(const SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14& unmarshaled, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com& marshaled);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_com_back(const SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com& marshaled, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14& unmarshaled);
IL2CPP_EXTERN_C void SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_com_cleanup(SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com& marshaled);

// System.Void System.Text.Json.JsonPropertyInfoNotNullable`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2_gshared (JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::Fill(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::GetPinnableReference()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5_gshared (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Advance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B_gshared (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, int32_t ___0_count, const RuntimeMethod* method) ;
// System.ReadOnlyMemory`1<T> System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenMemory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240_gshared (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<System.Byte>(System.ReadOnlyMemory`1<T>,System.ArraySegment`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_memory, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___1_segment, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_gshared_inline (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E_gshared (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Buffers.ArrayBufferWriter`1<System.Byte>::GetMemory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_gshared (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, int32_t ___0_sizeHint, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.Char>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method) ;
// System.Void System.MemoryExtensions::CopyTo<System.Byte>(T[],System.Span`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;

// System.Void System.Text.Json.Utf8JsonReader/PartialStateForRollback::.ctor(System.Int64,System.Int64,System.Int32,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialStateForRollback__ctor_m0F515AA3F80A7125D3079909A6578BD37B6EB3BB (PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF* __this, int64_t ___0_totalConsumed, int64_t ___1_bytePositionInLine, int32_t ___2_consumed, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ___3_currentPosition, const RuntimeMethod* method) ;
// System.Object System.SequencePosition::GetObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) ;
// System.Int32 System.SequencePosition::GetInteger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) ;
// System.Void System.SequencePosition::.ctor(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequencePosition__ctor_m0E3AB0095E245C4603832B729391CD9B14E3FEF4 (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, RuntimeObject* ___0_object, int32_t ___1_integer, const RuntimeMethod* method) ;
// System.SequencePosition System.Text.Json.Utf8JsonReader/PartialStateForRollback::GetStartPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 PartialStateForRollback_GetStartPosition_m57397FA90C6F268F5711E7E5131D5237E52F41B0 (PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF* __this, int32_t ___0_offset, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonNamingPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNamingPolicy__ctor_mDA3AFFECBC22A7C0FB171A00AFC1E1F00BC79204 (JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonCamelCaseNamingPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCamelCaseNamingPolicy__ctor_m8854A22CDF025E31E6CB2C027B25AEED30C16312 (JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonDefaultNamingPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDefaultNamingPolicy__ctor_m4435B81DC2DA68A9B1191F818BF265C550D8D819 (JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonPropertyInfoNotNullable`4<System.Object,System.Object,System.Object,System.Object>::.ctor()
inline void JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2 (JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF*, const RuntimeMethod*))JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2_gshared)(__this, method);
}
// System.Void System.Text.Json.JsonPropertyInfo::set_IsPropertyPolicy(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_IsPropertyPolicy_mEDDD83CAA5F7CB3D934F48E09D5C46301F204782_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonPropertyInfo::set_ShouldDeserialize(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_ShouldDeserialize_m9013BB660E0FA69F093B58C6EF325A88B07CA99F_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonPropertyInfo::set_ShouldSerialize(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_ShouldSerialize_m10AB20E671B7E2C15BED04BCCC99E3FB79872E93_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDerivedEnumerableConverter__ctor_m52402EB7C14510516EB627CD81ADC2A20DF40AE3 (DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultArrayConverter__ctor_mBDAB2266C43390FB11C03AF8A30D0DC7DAC3B72E (DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultICollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultICollectionConverter__ctor_m291127CDAD518A4FBE5694D47142281C9D33B9E3 (DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableEnumerableConverter__ctor_m3963869F7FA667504E14220D288893C29FA0268B (DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDerivedDictionaryConverter__ctor_m81B69D48076FD85C56FB87EB5F39A946E41B4B7C (DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultIDictionaryConverter__ctor_m8DBC41394C0AD649767274673733C899C6D4B9CF (DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableDictionaryConverter__ctor_mB445EF0D61614E838CD3A5F4ACEAC98B32A14272 (DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonPropertyInfo::GetMissingProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* JsonPropertyInfo_GetMissingProperty_mDB6E4C550799904239C43AC5B012969B556EEA37 (const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32,System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Void System.Span`1<System.Byte>::Fill(T)
inline void Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t, const RuntimeMethod*))Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_gshared)(__this, ___0_value, method);
}
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.Text.Json.ThrowHelper::ThrowArgumentException_PropertyNameTooLarge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_PropertyNameTooLarge_m591F53BAC4D2B10A55D1389C8A1A907157A0E63E (int32_t ___0_tokenLength, const RuntimeMethod* method) ;
// System.Void System.Text.Json.ThrowHelper::ThrowArgumentException_ValueTooLarge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_ValueTooLarge_m98E94862DE95E1CD322A446B4B845268A124C055 (int32_t ___0_tokenLength, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___0_d, const RuntimeMethod* method) ;
// System.Void System.Text.Json.ThrowHelper::ThrowArgumentException_ValueNotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_ValueNotSupported_m579817B44127511B903F738EBBC7D02FDE054F53 (const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Char>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline)(__this, method);
}
// System.Void System.Text.Json.ThrowHelper::ThrowArgumentException(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_mCC02637303AC469D32F1DC102775C46151387A7F (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) ;
// System.String System.SR::get_RequiredDigitNotFoundEndOfData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_RequiredDigitNotFoundEndOfData_m703BDAE0498CB850C64A5A49A87A314F03F02E37 (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonHelpers::IsDigit(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonHelpers_IsDigit_mEC357A2F49C864A81517680770AAD23F8EF84689 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.String System.SR::get_ExpectedEndOfDigitNotFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ExpectedEndOfDigitNotFound_mFC63AB23ACA9E4C5126FABF43654FD62552F1BB1 (const RuntimeMethod* method) ;
// System.String System.Text.Json.ThrowHelper::GetPrintableString(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetPrintableString_m40E31A72DA7DFAA32ED8B7A06A6609797EA0F551_inline (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.String System.SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_mD6D7C45289B8602CA7F2EA0692244E53FF55C8DF (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
// System.UInt32 System.Text.Json.JsonWriterHelper::DivMod(System.UInt32,System.UInt32,System.UInt32&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t JsonWriterHelper_DivMod_mD6FC02993BB66E34D1611A3CB0803C548EE1F3A5_inline (uint32_t ___0_numerator, uint32_t ___1_denominator, uint32_t* ___2_modulo, const RuntimeMethod* method) ;
// System.Int32 System.Span`1<System.Byte>::get_Length()
inline int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, const RuntimeMethod*))Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline)(__this, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonWriterHelper::get_AllowList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D JsonWriterHelper_get_AllowList_mA28609B6B9076FA68AC62A6E99A56F15278670D3 (const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterHelper::NeedsEscaping(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscaping_mFE93A07F36E809CB539B11A56C653D48554C9395 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.ReadOnlySpan`1<System.Char>::get_IsEmpty()
inline bool ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_gshared)(__this, method);
}
// T& modreq(System.Runtime.InteropServices.InAttribute) System.ReadOnlySpan`1<System.Char>::GetPinnableReference()
inline Il2CppChar* ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, const RuntimeMethod*))ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_gshared)(__this, method);
}
// System.Boolean System.Text.Json.JsonWriterHelper::NeedsEscaping(System.Char)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscaping_m4189B361239A0B55511772156AC4D87DCF2054D1_inline (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline)(__this, ___0_start, method);
}
// System.Void System.Text.Json.ThrowHelper::ThrowArgumentException_InvalidUTF8(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidUTF8_m61926CFA2D24DCE662F6BC2B2D1A2E4B66B98498 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___0_destination, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___0_start, method);
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_m300A0A3F3C73F32440B227F5FA7CD90146D852C4 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___2_encoder, int32_t* ___3_written, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterHelper::IsAsciiValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_IsAsciiValue_mB771D4B77A06BDE98B39D52324FAD6A8E1F33E57 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::EscapeNextBytes(System.Byte,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeNextBytes_mA3984914396004727102D290DD1BD96A3E4DE830 (uint8_t ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_written, const RuntimeMethod* method) ;
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Encodings.Web.JavaScriptEncoder::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JavaScriptEncoder_get_Default_mA1BD7ACB1459CE7B06A32D6CF329C522C567D4ED_inline (const RuntimeMethod* method) ;
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormat(System.Byte,System.Span`1<System.Byte>,System.Int32&,System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mB8BD2EC6200E96B9CC27B820399BA8ADF292898A (uint8_t ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___3_format, const RuntimeMethod* method) ;
// System.Void System.Text.Json.ThrowHelper::ThrowArgumentException_InvalidUTF16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_InvalidUTF16_m063FC3F74E3C16AAC9D6C6F79AFC414D443EB4DE (int32_t ___0_charAsInt, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32,System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.Void System.ReadOnlySpan`1<System.Char>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_gshared)(__this, ___0_destination, method);
}
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, const RuntimeMethod*))Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline)(__this, ___0_start, method);
}
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Char>::Slice(System.Int32)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline)(__this, ___0_start, method);
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_m6A3C10DB5FDFA81CF6BEAF45725802FFE0CAA868 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___2_encoder, int32_t* ___3_written, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterHelper::IsAsciiValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_IsAsciiValue_m95272B549B92BDD457C999FBC9F41B51226673B6 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterHelper::NeedsEscapingNoBoundsCheck(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscapingNoBoundsCheck_mD12552627BD85E3DD84860062048DA6D9BF57878 (Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::EscapeNextChars(System.Char,System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeNextChars_mCDD04B1D68EAFB21573130C3C2645DBE31307C39 (Il2CppChar ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, int32_t* ___2_written, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.JsonWriterHelper::WriteHex(System.Int32,System.Span`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_WriteHex_m7A120B39639623607153F51F1E3D78A8C43A47FE (int32_t ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, int32_t ___2_written, const RuntimeMethod* method) ;
// System.Byte System.Text.Json.JsonWriterHelper::Int32LsbToHexDigit(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___0_span, method);
}
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.Span`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_gshared)(___0_span, method);
}
// System.Int32 System.Text.Json.JsonWriterHelper::PtrDiff(System.Char*,System.Char*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_PtrDiff_m38A892D52BF473A2345B38153C2F143007339D33_inline (Il2CppChar* ___0_a, Il2CppChar* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.JsonWriterHelper::PtrDiff(System.Byte*,System.Byte*)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_PtrDiff_mD1A028CB8E273EE4BA081972D46DBBF5E1152425_inline (uint8_t* ___0_a, uint8_t* ___1_b, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonHelpers::IsInRangeInclusive(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonHelpers_IsInRangeInclusive_mA3EBC817F38C1240438A438AF5D7F1AC0D1179D3_inline (int32_t ___0_value, int32_t ___1_lowerBound, int32_t ___2_upperBound, const RuntimeMethod* method) ;
// System.Void System.Buffers.StandardFormat::.ctor(System.Char,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StandardFormat__ctor_m817E5E5E8FE9A5256CC54594F12F72DCA7501568 (StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF* __this, Il2CppChar ___0_symbol, uint8_t ___1_precision, const RuntimeMethod* method) ;
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::get_Encoder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterOptions::set_Encoder(System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterOptions_set_Encoder_m5E357AEFC0AB885F7858AE1D70B7060273AED306_inline (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterOptions::get_Indented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterOptions::get_SkipValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0 (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonWriterOptions::get_IndentedOrNotSkipValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterOptions_get_IndentedOrNotSkipValidation_mFC205FBEF9620AD791C2EAC0A7F776281E2D9900 (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.Utf8JsonWriter::get_CurrentDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.String System.SR::get_StreamNotWritable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_StreamNotWritable_m65594F58F8823932DC89382559782D5B78CF6028 (const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::.ctor()
inline void ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5 (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*, const RuntimeMethod*))ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5_gshared)(__this, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::set_BytesPending(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::set_BytesCommitted(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.ObjectDisposedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::CheckNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_CheckNotDisposed_m3023C02F6F75AB548E99526BE817223286AC82EA (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.Utf8JsonWriter::get_BytesPending()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Advance(System.Int32)
inline void ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, int32_t ___0_count, const RuntimeMethod* method)
{
	((  void (*) (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*, int32_t, const RuntimeMethod*))ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B_gshared)(__this, ___0_count, method);
}
// System.ReadOnlyMemory`1<T> System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenMemory()
inline ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240 (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 (*) (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*, const RuntimeMethod*))ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240_gshared)(__this, method);
}
// System.Boolean System.Runtime.InteropServices.MemoryMarshal::TryGetArray<System.Byte>(System.ReadOnlyMemory`1<T>,System.ArraySegment`1<T>&)
inline bool MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ___0_memory, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___1_segment, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C_gshared)(___0_memory, ___1_segment, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Int64 System.Text.Json.Utf8JsonWriter::get_BytesCommitted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Utf8JsonWriter_get_BytesCommitted_mEAF5E6159D99CD34796639914CCA84473295AACF_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Buffers.ArrayBufferWriter`1<System.Byte>::get_WrittenCount()
inline int32_t ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_inline (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*, const RuntimeMethod*))ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_gshared_inline)(__this, method);
}
// System.Void System.Buffers.ArrayBufferWriter`1<System.Byte>::Clear()
inline void ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*, const RuntimeMethod*))ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E_gshared)(__this, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Flush_m71B82C161B4ECCB5D90DCBBF667D3647404A7799 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::ResetHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ResetHelper_m75A417EA64C4EBF6D4E2AF8C54D90B95770E49B3 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStart(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStart_mA8A609C59C9BC1B5BFB4D82BD18328952019FDA1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.ThrowHelper::ThrowInvalidOperationException(System.Text.Json.ExceptionResource,System.Int32,System.Byte,System.Text.Json.JsonTokenType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516 (int32_t ___0_resource, int32_t ___1_currentDepth, uint8_t ___2_token, uint8_t ___3_tokenType, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartSlow(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartSlow_m0A135B5009203BA02F5341E152E27654552DC02C (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartMinimized(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartMinimized_mB1A7139369CD1119EDD231484C804B9DFBA883EC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Int32 System.Memory`1<System.Byte>::get_Length()
inline int32_t Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714 (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_gshared)(__this, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_requiredSize, const RuntimeMethod* method) ;
// System.Span`1<T> System.Memory`1<System.Byte>::get_Span()
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*, const RuntimeMethod*))Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline)(__this, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidateStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateStart_m6731F9FFACF4565D12DC27106FF4BF655650EEF8 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::UpdateBitStackOnStart(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartIndented(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartIndented_m7BB700FADBAC557FE53D6A264734B0F0597FDB39 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.Utf8JsonWriter::get_Indentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNewLine(System.Span`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_output, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::WriteIndentation(System.Span`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, int32_t ___1_indent, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Char> System.MemoryExtensions::AsSpan(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartArray(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartArray_m8EA9B8EBECB0DD55BDED4BA1F4A8BAE7010B3D1F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::ValidatePropertyNameAndDepth(System.ReadOnlySpan`1<System.Char>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidatePropertyNameAndDepth_m24562CD926422D62B270BD3783E5E8EF402D80E3_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartEscape(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartEscape_mCEB7CCF00F07881F642E093B126EF136AE07EC14 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, uint8_t ___1_token, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.JsonWriterHelper::NeedsEscaping(System.ReadOnlySpan`1<System.Char>,System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___1_encoder, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartEscapeProperty_mF416B738D8887BAADDC3C90239D7A5C98F672D81 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, uint8_t ___1_token, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartByOptions(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartByOptions_mD4D33E17A4ED48581C52C36E6CEDE86D8FF26D30 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, uint8_t ___1_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::ValidateWritingProperty(System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingProperty_mC581A96093E5B8C0F28A38802637D6BA4E6B831B_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyNameIndented(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyNameIndented_m736B33C6BC7C7DB3AD529C418DBF33D1A7D61476 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, uint8_t ___1_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyNameMinimized(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyNameMinimized_m0EFCCAD1A0C86F77B25C0925AC16015F754E0402 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, uint8_t ___1_token, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.JsonWriterHelper::GetMaxEscapedLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4 (int32_t ___0_textLength, int32_t ___1_firstIndexToEscape, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Char>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Char>::get_Shared()
inline ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline)(method);
}
// System.Span`1<T> System.Span`1<System.Char>::op_Implicit(T[])
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, const RuntimeMethod*))Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_gshared)(___0_array, method);
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, int32_t ___2_indexOfFirstByteToEscape, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___3_encoder, int32_t* ___4_written, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Char>::Slice(System.Int32,System.Int32)
inline Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline)(__this, ___0_start, ___1_length, method);
}
// System.ReadOnlySpan`1<T> System.Span`1<System.Char>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4 (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, const RuntimeMethod*))Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_gshared)(___0_span, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEnd(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEnd_m77890C8C2A9C911157F9972E4FF9CBFA712D02AF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndSlow(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndSlow_mECA3F6EB97FB3CBE19FBDABA77010DC1EE8290D4 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndMinimized(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndMinimized_mA33335B7FDB7413EE731D3C1844B45026F25EB3A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::SetFlagToAddListSeparatorBeforeNextItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::ValidateEnd(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateEnd_m1F0FF13359265179652859C5FD0A4E3219F45B3E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndIndented(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndIndented_m39BDB70B1110F40D7C17E13095CA802DCD0CD457 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.BitStack::get_CurrentDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitStack_get_CurrentDepth_m29C47DB4A4B69D9C76A93EBA1637E97A243FC869_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.BitStack::Pop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BitStack_Pop_mEBB94B5C8DD6FACC49DCB2A2A7D365E5A75A4FD2_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.BitStack::PushFalse()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitStack_PushFalse_m83CDC7E063685BF4FAD27FDCD7F51CF8D49EBAD3_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.BitStack::PushTrue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitStack_PushTrue_mBEF1D3C195EA821E02716255C61AFB88258D5BAB_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::FirstCallToGetMemory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_FirstCallToGetMemory_m421AB335FA4A40AB99E7DBEC68C5C93B45BA300B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_requiredSize, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Memory`1<T> System.Buffers.ArrayBufferWriter`1<System.Byte>::GetMemory(System.Int32)
inline Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, int32_t ___0_sizeHint, const RuntimeMethod* method)
{
	return ((  Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 (*) (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*, int32_t, const RuntimeMethod*))ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_gshared)(__this, ___0_sizeHint, method);
}
// System.Void System.Text.Json.ThrowHelper::ThrowInvalidOperationException_NeedLargerSpan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_NeedLargerSpan_mCCE8D5F2D1147F2E3BDB377D4916507B12561F28 (const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mD0D6428D9A3952BE9DF3E72522DDB88A0FFF5D50 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateProperty(System.ReadOnlySpan`1<System.Char>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_m839B59E145DC504005ACCB461362FA25E8EF7F64 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_m5C6984D5BFBCB19538DA7E51B6786235710E0BBF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m7F831CF3842791E20AA105276008B26ECE1A903E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::ValidateWritingProperty()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m04F728F1839ADC1F0760D92EE7FD4AF97FCAF42D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_mF63A73E5BD69DD73C85626498929565266AB833D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::TranscodeAndWrite(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_output, const RuntimeMethod* method) ;
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormat(System.Decimal,System.Span`1<System.Byte>,System.Int32&,System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m80E15F38510D89E386E290D847E9B3D691FF092A (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___3_format, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mB11686A7C01617109108B732DEF61AD255AE2623 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateDouble(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateDouble_m273C268E501F4DE8A73411EC0E4F91913F5C7447_inline (double ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_m7D4164EE56D9887F589D5F09EC97A52EB36DDE94 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_mAAA68B5E56A137FB38326A210A5A9E9036EDE790 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m6CB6822B82779F99D17BE84993F9D8A143DC2DC8 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m13B0D0697A85DE833A39B91F9817DECBEA5CB992 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, double ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_m8B9E7A2316B33FC3A3FDE17FCDE7949A52FA4D1B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, double ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.Utf8JsonWriter::TryFormatDouble(System.Double,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonWriter_TryFormatDouble_m1E46A985C1868AFE99C22B1C4385D3E55409C631 (double ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_m0980B7FBD1532C0780D59F571D39AE839B602CB7 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateSingle(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateSingle_mB5D28135F97269867F8DC0389E382DEA7317DF21_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_mB88E62E1D540E13DE43ED02B8A293E10DD239CC6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_m7851660540387DB35E8B5C06D67795B92BAE8664 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m3D7D358B795DE11AB7AC9F99F94AA1B7B56EF455 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m4877F28C19F63A1F2F8B8EDD69F6753E2266F37D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, float ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_m84A77DE6D8D3E85891776EFEAD0A6217DAF41577 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, float ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.Utf8JsonWriter::TryFormatSingle(System.Single,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonWriter_TryFormatSingle_mDCEC63E655C729E9BB8ECF387BDBDA0804AFCE4E (float ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) ;
// System.Void System.Text.Json.ThrowHelper::ThrowInvalidOperationOrArgumentException(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationOrArgumentException_mDE8005E5F002F464B22F6013877DBF7FCB31DCEB (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int32_t ___1_currentDepth, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.Char>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_gshared_inline)(___0_span, method);
}
// System.Buffers.OperationStatus System.Text.Json.JsonWriterHelper::ToUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_ToUtf8_m0EC452325B9038CDF4AFC9F74E55A7194674B4F6 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf16Source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_utf8Destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNull(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNull_m8502EAB5D0C3906D9CA6185C285C64057CE8D4C5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonConstants::get_NullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D JsonConstants_get_NullValue_mA5886DDBB16FC136D274B471F912CEEC7A9847AF (const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralEscape(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralEscape_mA163D8EF30F76707899E124C3D5A15C4563135CF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteBoolean(System.ReadOnlySpan`1<System.Char>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBoolean_mCCA1D09791BAD73F07C561A086D4070B5D0B99D6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, bool ___1_value, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonConstants::get_FalseValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D JsonConstants_get_FalseValue_mF6E16F3E048CAA53A90759098574839A72FB4381 (const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonConstants::get_TrueValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D JsonConstants_get_TrueValue_m7875CFE6FDF00788A7122ABE0D7EE9734C4909C4 (const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralEscapeProperty_m137D937FC00AA3DF3D8E27C6F27A74C5C72EFA2E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralByOptions(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralByOptions_m67EFB953CFA613D214AE5D67090503B77609AA8B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralIndented(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralIndented_m22D9695F1113A018B1DE308EBD8021062B4B32D7 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralMinimized(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralMinimized_mABF4618CCB17CB384FD691084A4ABE1B3270B61A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_m87ECEC14FE550E5D1EDAD890B6E69C7C6943FBC5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_mC4FA38A41DD72A0DF60E15C80A05BB568D7745CC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_m9EA722C9B508281880E92642AE71B93BD4EBC1DB (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m45309151BC3C6353060EFF5709C880455F448B72 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m1C30DE68F82C206A47F573ADF388FA1631D75BD1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_m8EF0B11C77420A79A8A45E9550769D5849D4053B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, int64_t ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormat(System.Int64,System.Span`1<System.Byte>,System.Int32&,System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_m009FCCBE35045EC8F6B1E7C5D7054DEE2B41BF4F (int64_t ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___3_format, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyName_mD5C11D2F04DD4116BD2609292A3B2D05E1C357B2 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeProperty_mCD08606811907E99503A17C244B37E19D66831C9 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int32_t ___1_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptionsPropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptionsPropertyName_mD1E3902B7A1A32B78FD5845C5756B954118412A4 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndentedPropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndentedPropertyName_mCFD4644263D11B444714D883359C350CFFE46C3F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimizedPropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimizedPropertyName_m235EA20291770CBE9C0EF62ACB96CE02E213236F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateProperty(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateProperty_m1F34A8D5BFC3B8AEF6935B5B42C1A0045D07162B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_propertyName, const RuntimeMethod* method) ;
// System.Int32 System.Text.Json.JsonWriterHelper::NeedsEscaping(System.ReadOnlySpan`1<System.Byte>,System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_NeedsEscaping_m2C8304CA115F8E6DEF835C700499D77387F13CA8 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___1_encoder, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeProperty(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeProperty_mD9E3F7403C744CFF3A069A9DFE3BCD459A768211 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8PropertyName, int32_t ___1_firstEscapeIndexProp, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptionsPropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptionsPropertyName_m39086B7083EDA5468602039C03E6F04B30D255FC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8PropertyName, const RuntimeMethod* method) ;
// System.Buffers.ArrayPool`1<T> System.Buffers.ArrayPool`1<System.Byte>::get_Shared()
inline ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline)(method);
}
// System.Span`1<T> System.Span`1<System.Byte>::op_Implicit(T[])
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_gshared)(___0_array, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___0_pointer, ___1_length, method);
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_m564702FF6E13FE62D005D7AFEC973C086288877D (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t ___2_indexOfFirstByteToEscape, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___3_encoder, int32_t* ___4_written, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___0_span, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndentedPropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndentedPropertyName_m18DEAB086D3C46BBD359C512045A1A77EB513141 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedPropertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimizedPropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimizedPropertyName_m7629BDC4144A3DB500FEDA53A2FBF3EB536D4FE0 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedPropertyName, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteString(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteString_m90CA48D3FEE6C49D1E86A85C2D30DDE99CB81060 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidatePropertyAndValue(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidatePropertyAndValue_m68A3F4A91A8A150AAD3DE5B8990226783DA925D4_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscape(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscape_m036B8D134EE72494D0F696F996289515CBFEF120 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapePropertyOrValue(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, int32_t ___2_firstEscapeIndexProp, int32_t ___3_firstEscapeIndexVal, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptions(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptions_mFEE3F5B91591C1D4D06933CF304916B24E9E00AD (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndented(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndented_m1057258DE78CC00E039FAAFDDFDE573D1EF48FD5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_escapedValue, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimized(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimized_m6B2C31C13FA3A413F0313DC5709D57805BD5BA8D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_escapedValue, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::ValidateWritingValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValueIndented(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValueIndented_mACD09DBFF483579AB0421C839E4491979D549CEC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValueMinimized(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValueMinimized_mE92796D227AC277168F1B2DFBF30EE80C5877C9D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Buffers.Text.Utf8Formatter::TryFormat(System.DateTime,System.Span`1<System.Byte>,System.Int32&,System.Buffers.StandardFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8Formatter_TryFormat_mB5EBFC2ECB28BBBBD3378675AE339699322DE520 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___3_format, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::TrimDateTimeOffset(System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_TrimDateTimeOffset_mAC5CD5A22C382458B18E1A5316289454789490BC (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, int32_t* ___1_bytesWritten, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_destination, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_gshared)(__this, ___0_destination, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_m2E96C373C9B770E458A9F1CD50B2C603842F2CC5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_m4F0299106C4EAB1CF9373B92AD508A79B8E114ED (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.MemoryExtensions::CopyTo<System.Byte>(T[],System.Span`1<T>)
inline void MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_gshared_inline)(___0_source, ___1_destination, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_mE3555B7FFB2B32EFB3F1D37B4EF919F8A4D2DCE1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_m58D6CF2A5BB517EFB6EF5D090C42DCEC11C5F1B6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, float ___0_value, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE (float* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateValue(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateValue_mD8CCD8D9A6983372F1D9E36E37291A855324C3BA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateNumber(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8FormattedNumber, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_m70FB4B419767F277A8FEF5E6147CECA4DED043C1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_mEF778935C8C0B6CB9D0FC62459DC0F8E0F0F1416 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralByOptions(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralByOptions_m3755A2C70936A990E52C40F30BD55AFA97F8725A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralIndented(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralIndented_mFFA6AFBB368388771828D0F54CA09FEECAAB9220 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralMinimized(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralMinimized_m84ED52B356CB9F4101AE7F94A2D2B5A89FCD270B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m04B3E8A97F3FFECFFCCD5F17B74488E285482FA1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_m3621E4629BDFBC8D31107EACD21F4932575CF463 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_mE627304636D30A948A8EE0DA7292EBA8A2F8C2E8 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNullValue_mD363DC1B38AAE17A2666646629B9A3640C898004 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_mE4B6D84C62301EE664A48706F72A91583690A6FC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonWriterHelper::ValidateValue(System.ReadOnlySpan`1<System.Char>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateValue_mFB60C5BD2132B5D147FAD6A9DE920C2F765DA2B0_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscape(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscape_m62161ADC6931F29D6D6477EC6EA0C33ED68E3065 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeValue(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeValue_m5F92419D0847CAF6993B1EB667B83A5DCF936007 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, int32_t ___1_firstEscapeIndexVal, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptions(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptions_mB9F334C1CDC0D38156C588C17ADF3499E52A8378 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndented(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndented_mC739CAADEF3039DDEE8567FD158DF0B9C609E1EA (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedValue, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimized(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimized_mCDE83318D5992A162E60B45316CC28EDB29DF31C (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedValue, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscape(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscape_mB59D9F02536516EA8EF1FD9096CE40A2EA996451 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeValue(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeValue_m10974C00896F712FB5766F448315918EA56BFA91 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, int32_t ___1_firstEscapeIndexVal, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptions(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptions_m6FFDC7E75661DC2BBA64B77C53B8E262814AFD57 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndented(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndented_mE4AB77B76E3FB99A9836D4A32D8442273D0E3B41 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedValue, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimized(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimized_mC68E8AD0C2D230CD87ADAB875F7CF843D37EDD5A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedValue, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonAttribute__ctor_m5FE92C1B931118C343826CA51C4D902A8BA839FF (JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.JsonDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D (JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.JsonEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E (JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* __this, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.ThrowHelper::IsPrintable(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThrowHelper_IsPrintable_m2E0D5128B77C215AE99AC6D18A162ACE1A71AC20 (uint8_t ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Char& System.String::GetRawStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Char>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1*, Il2CppChar*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Boolean System.Text.Json.BitStack::PopFromArray()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool BitStack_PopFromArray_mC5F5242B631329764A700C94FC08270FE1803691 (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.BitStack::PushToArray(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void BitStack_PushToArray_mE3486049BF012A03170FBC4C4BF1CE139F81F6C0 (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Void System.Span`1<System.Char>::.ctor(T&,System.Int32)
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___0_array, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArrayTypeMismatchException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshal_pinvoke(const PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF& unmarshaled, PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_pinvoke& marshaled)
{
	marshaled.____prevTotalConsumed_0 = unmarshaled.____prevTotalConsumed_0;
	marshaled.____prevBytePositionInLine_1 = unmarshaled.____prevBytePositionInLine_1;
	marshaled.____prevConsumed_2 = unmarshaled.____prevConsumed_2;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke(unmarshaled.____prevCurrentPosition_3, marshaled.____prevCurrentPosition_3);
}
IL2CPP_EXTERN_C void PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshal_pinvoke_back(const PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_pinvoke& marshaled, PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF& unmarshaled)
{
	int64_t unmarshaled_prevTotalConsumed_temp_0 = 0;
	unmarshaled_prevTotalConsumed_temp_0 = marshaled.____prevTotalConsumed_0;
	unmarshaled.____prevTotalConsumed_0 = unmarshaled_prevTotalConsumed_temp_0;
	int64_t unmarshaled_prevBytePositionInLine_temp_1 = 0;
	unmarshaled_prevBytePositionInLine_temp_1 = marshaled.____prevBytePositionInLine_1;
	unmarshaled.____prevBytePositionInLine_1 = unmarshaled_prevBytePositionInLine_temp_1;
	int32_t unmarshaled_prevConsumed_temp_2 = 0;
	unmarshaled_prevConsumed_temp_2 = marshaled.____prevConsumed_2;
	unmarshaled.____prevConsumed_2 = unmarshaled_prevConsumed_temp_2;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 unmarshaled_prevCurrentPosition_temp_3;
	memset((&unmarshaled_prevCurrentPosition_temp_3), 0, sizeof(unmarshaled_prevCurrentPosition_temp_3));
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_back(marshaled.____prevCurrentPosition_3, unmarshaled_prevCurrentPosition_temp_3);
	unmarshaled.____prevCurrentPosition_3 = unmarshaled_prevCurrentPosition_temp_3;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____prevCurrentPosition_3))->____object_0), (void*)NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshal_pinvoke_cleanup(PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_pinvoke& marshaled)
{
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_pinvoke_cleanup(marshaled.____prevCurrentPosition_3);
}


// Conversion methods for marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshal_com(const PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF& unmarshaled, PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_com& marshaled)
{
	marshaled.____prevTotalConsumed_0 = unmarshaled.____prevTotalConsumed_0;
	marshaled.____prevBytePositionInLine_1 = unmarshaled.____prevBytePositionInLine_1;
	marshaled.____prevConsumed_2 = unmarshaled.____prevConsumed_2;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_com(unmarshaled.____prevCurrentPosition_3, marshaled.____prevCurrentPosition_3);
}
IL2CPP_EXTERN_C void PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshal_com_back(const PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_com& marshaled, PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF& unmarshaled)
{
	int64_t unmarshaled_prevTotalConsumed_temp_0 = 0;
	unmarshaled_prevTotalConsumed_temp_0 = marshaled.____prevTotalConsumed_0;
	unmarshaled.____prevTotalConsumed_0 = unmarshaled_prevTotalConsumed_temp_0;
	int64_t unmarshaled_prevBytePositionInLine_temp_1 = 0;
	unmarshaled_prevBytePositionInLine_temp_1 = marshaled.____prevBytePositionInLine_1;
	unmarshaled.____prevBytePositionInLine_1 = unmarshaled_prevBytePositionInLine_temp_1;
	int32_t unmarshaled_prevConsumed_temp_2 = 0;
	unmarshaled_prevConsumed_temp_2 = marshaled.____prevConsumed_2;
	unmarshaled.____prevConsumed_2 = unmarshaled_prevConsumed_temp_2;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 unmarshaled_prevCurrentPosition_temp_3;
	memset((&unmarshaled_prevCurrentPosition_temp_3), 0, sizeof(unmarshaled_prevCurrentPosition_temp_3));
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_com_back(marshaled.____prevCurrentPosition_3, unmarshaled_prevCurrentPosition_temp_3);
	unmarshaled.____prevCurrentPosition_3 = unmarshaled_prevCurrentPosition_temp_3;
	Il2CppCodeGenWriteBarrier((void**)&(((&unmarshaled.____prevCurrentPosition_3))->____object_0), (void*)NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.Utf8JsonReader/PartialStateForRollback
IL2CPP_EXTERN_C void PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshal_com_cleanup(PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF_marshaled_com& marshaled)
{
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshal_com_cleanup(marshaled.____prevCurrentPosition_3);
}
// System.Void System.Text.Json.Utf8JsonReader/PartialStateForRollback::.ctor(System.Int64,System.Int64,System.Int32,System.SequencePosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PartialStateForRollback__ctor_m0F515AA3F80A7125D3079909A6578BD37B6EB3BB (PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF* __this, int64_t ___0_totalConsumed, int64_t ___1_bytePositionInLine, int32_t ___2_consumed, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ___3_currentPosition, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_totalConsumed;
		__this->____prevTotalConsumed_0 = L_0;
		int64_t L_1 = ___1_bytePositionInLine;
		__this->____prevBytePositionInLine_1 = L_1;
		int32_t L_2 = ___2_consumed;
		__this->____prevConsumed_2 = L_2;
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 L_3 = ___3_currentPosition;
		__this->____prevCurrentPosition_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____prevCurrentPosition_3))->____object_0), (void*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void PartialStateForRollback__ctor_m0F515AA3F80A7125D3079909A6578BD37B6EB3BB_AdjustorThunk (RuntimeObject* __this, int64_t ___0_totalConsumed, int64_t ___1_bytePositionInLine, int32_t ___2_consumed, SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ___3_currentPosition, const RuntimeMethod* method)
{
	PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF*>(__this + _offset);
	PartialStateForRollback__ctor_m0F515AA3F80A7125D3079909A6578BD37B6EB3BB(_thisAdjusted, ___0_totalConsumed, ___1_bytePositionInLine, ___2_consumed, ___3_currentPosition, method);
}
// System.SequencePosition System.Text.Json.Utf8JsonReader/PartialStateForRollback::GetStartPosition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 PartialStateForRollback_GetStartPosition_m57397FA90C6F268F5711E7E5131D5237E52F41B0 (PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF* __this, int32_t ___0_offset, const RuntimeMethod* method) 
{
	{
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_0 = (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14*)(&__this->____prevCurrentPosition_3);
		RuntimeObject* L_1;
		L_1 = SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline(L_0, NULL);
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* L_2 = (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14*)(&__this->____prevCurrentPosition_3);
		int32_t L_3;
		L_3 = SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline(L_2, NULL);
		int32_t L_4 = __this->____prevConsumed_2;
		int32_t L_5 = ___0_offset;
		SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 L_6;
		memset((&L_6), 0, sizeof(L_6));
		SequencePosition__ctor_m0E3AB0095E245C4603832B729391CD9B14E3FEF4((&L_6), L_1, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_3, L_4)), L_5)), /*hidden argument*/NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 PartialStateForRollback_GetStartPosition_m57397FA90C6F268F5711E7E5131D5237E52F41B0_AdjustorThunk (RuntimeObject* __this, int32_t ___0_offset, const RuntimeMethod* method)
{
	PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<PartialStateForRollback_t92D7937D33C23DF7AD3C8D2E2057D5C9F2A887CF*>(__this + _offset);
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 _returnValue;
	_returnValue = PartialStateForRollback_GetStartPosition_m57397FA90C6F268F5711E7E5131D5237E52F41B0(_thisAdjusted, ___0_offset, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.JsonCamelCaseNamingPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonCamelCaseNamingPolicy__ctor_m8854A22CDF025E31E6CB2C027B25AEED30C16312 (JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		JsonNamingPolicy__ctor_mDA3AFFECBC22A7C0FB171A00AFC1E1F00BC79204(__this, NULL);
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
// System.Void System.Text.Json.JsonDefaultNamingPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDefaultNamingPolicy__ctor_m4435B81DC2DA68A9B1191F818BF265C550D8D819 (JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		JsonNamingPolicy__ctor_mDA3AFFECBC22A7C0FB171A00AFC1E1F00BC79204(__this, NULL);
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
// System.Void System.Text.Json.JsonNamingPolicy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNamingPolicy__ctor_mDA3AFFECBC22A7C0FB171A00AFC1E1F00BC79204 (JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonNamingPolicy::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* JsonNamingPolicy_get_Default_m0C08ADD9395E6F7B1E4A57008EFC2D71C4296D69 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* L_0 = ((JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_StaticFields*)il2cpp_codegen_static_fields_for(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Text.Json.JsonNamingPolicy::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonNamingPolicy__cctor_mC6F9988BFAEB4FC160002FE854DAF4C9EFD12FF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6* L_0 = (JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6*)il2cpp_codegen_object_new(JsonCamelCaseNamingPolicy_t22CB01384F8F0E93C610FF320ED867ECF8D413D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonCamelCaseNamingPolicy__ctor_m8854A22CDF025E31E6CB2C027B25AEED30C16312(L_0, NULL);
		((JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_StaticFields*)il2cpp_codegen_static_fields_for(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var))->___U3CCamelCaseU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_StaticFields*)il2cpp_codegen_static_fields_for(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var))->___U3CCamelCaseU3Ek__BackingField_0), (void*)L_0);
		JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B* L_1 = (JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B*)il2cpp_codegen_object_new(JsonDefaultNamingPolicy_t984938CDD265DA49A41A28F720AD60D6D9F87A6B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		JsonDefaultNamingPolicy__ctor_m4435B81DC2DA68A9B1191F818BF265C550D8D819(L_1, NULL);
		((JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_StaticFields*)il2cpp_codegen_static_fields_for(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_StaticFields*)il2cpp_codegen_static_fields_for(JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4_il2cpp_TypeInfo_var))->___U3CDefaultU3Ek__BackingField_1), (void*)L_1);
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
// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonPropertyInfo::GetMissingProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* JsonPropertyInfo_GetMissingProperty_mDB6E4C550799904239C43AC5B012969B556EEA37 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_0 = NULL;
	{
		JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF* L_0 = (JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF*)il2cpp_codegen_object_new(JsonPropertyInfoNotNullable_4_t35414B694B1036D93D540BE4AFD9C79E4FB8E9FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2(L_0, JsonPropertyInfoNotNullable_4__ctor_m80263F24A5D0B98D98FAB0BA8E423CB1714E0BE2_RuntimeMethod_var);
		V_0 = L_0;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_1 = V_0;
		NullCheck(L_1);
		JsonPropertyInfo_set_IsPropertyPolicy_mEDDD83CAA5F7CB3D934F48E09D5C46301F204782_inline(L_1, (bool)0, NULL);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = V_0;
		NullCheck(L_2);
		JsonPropertyInfo_set_ShouldDeserialize_m9013BB660E0FA69F093B58C6EF325A88B07CA99F_inline(L_2, (bool)0, NULL);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_3 = V_0;
		NullCheck(L_3);
		JsonPropertyInfo_set_ShouldSerialize_m10AB20E671B7E2C15BED04BCCC99E3FB79872E93_inline(L_3, (bool)0, NULL);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_4 = V_0;
		return L_4;
	}
}
// System.Void System.Text.Json.JsonPropertyInfo::set_IsPropertyPolicy(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_IsPropertyPolicy_mEDDD83CAA5F7CB3D934F48E09D5C46301F204782 (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPropertyPolicyU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void System.Text.Json.JsonPropertyInfo::set_ShouldSerialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_ShouldSerialize_m10AB20E671B7E2C15BED04BCCC99E3FB79872E93 (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CShouldSerializeU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Void System.Text.Json.JsonPropertyInfo::set_ShouldDeserialize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_ShouldDeserialize_m9013BB660E0FA69F093B58C6EF325A88B07CA99F (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CShouldDeserializeU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void System.Text.Json.JsonPropertyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyInfo__ctor_mF8AE5468031A60DA2D460931063E2C81702F0D3E (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Text.Json.JsonPropertyInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonPropertyInfo__cctor_mC06E09EE5C8788EACD0A71D78A3729C647E04EE7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E* L_0 = (DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E*)il2cpp_codegen_object_new(DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultDerivedEnumerableConverter__ctor_m52402EB7C14510516EB627CD81ADC2A20DF40AE3(L_0, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonDerivedEnumerableConverter_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonDerivedEnumerableConverter_0), (void*)L_0);
		DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605* L_1 = (DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605*)il2cpp_codegen_object_new(DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DefaultArrayConverter__ctor_mBDAB2266C43390FB11C03AF8A30D0DC7DAC3B72E(L_1, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonArrayConverter_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonArrayConverter_1), (void*)L_1);
		DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F* L_2 = (DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F*)il2cpp_codegen_object_new(DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DefaultICollectionConverter__ctor_m291127CDAD518A4FBE5694D47142281C9D33B9E3(L_2, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonICollectionConverter_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonICollectionConverter_2), (void*)L_2);
		DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D* L_3 = (DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D*)il2cpp_codegen_object_new(DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DefaultImmutableEnumerableConverter__ctor_m3963869F7FA667504E14220D288893C29FA0268B(L_3, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonImmutableEnumerableConverter_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonImmutableEnumerableConverter_3), (void*)L_3);
		DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6* L_4 = (DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6*)il2cpp_codegen_object_new(DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DefaultDerivedDictionaryConverter__ctor_m81B69D48076FD85C56FB87EB5F39A946E41B4B7C(L_4, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonDerivedDictionaryConverter_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonDerivedDictionaryConverter_4), (void*)L_4);
		DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58* L_5 = (DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58*)il2cpp_codegen_object_new(DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		DefaultIDictionaryConverter__ctor_m8DBC41394C0AD649767274673733C899C6D4B9CF(L_5, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonIDictionaryConverter_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonIDictionaryConverter_5), (void*)L_5);
		DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C* L_6 = (DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C*)il2cpp_codegen_object_new(DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		DefaultImmutableDictionaryConverter__ctor_mB445EF0D61614E838CD3A5F4ACEAC98B32A14272(L_6, NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonImmutableDictionaryConverter_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_jsonImmutableDictionaryConverter_6), (void*)L_6);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_7;
		L_7 = JsonPropertyInfo_GetMissingProperty_mDB6E4C550799904239C43AC5B012969B556EEA37(NULL);
		((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_missingProperty_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields*)il2cpp_codegen_static_fields_for(JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_il2cpp_TypeInfo_var))->___s_missingProperty_7), (void*)L_7);
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
// System.Void System.Text.Json.JsonWriterHelper::WriteIndentation(System.Span`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, int32_t ___1_indent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___1_indent;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_002b;
		}
	}
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (L_2), ((&___0_buffer))->____length_1);
		*((int8_t*)L_3) = (int8_t)((int32_t)32);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t* L_6;
		L_6 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (L_5), ((&___0_buffer))->____length_1);
		*((int8_t*)L_6) = (int8_t)((int32_t)32);
	}

IL_0026:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___1_indent;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}

IL_002b:
	{
		int32_t L_9 = ___1_indent;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&___0_buffer), 0, L_9, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		V_1 = L_10;
		Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8((&V_1), (uint8_t)((int32_t)32), Span_1_Fill_m5C8306E094A7E370D52DE264ED5D3743FC7A51A8_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateProperty(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateProperty_m1F34A8D5BFC3B8AEF6935B5B42C1A0045D07162B (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_PropertyNameTooLarge_m591F53BAC4D2B10A55D1389C8A1A907157A0E63E(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateValue(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateValue_mD8CCD8D9A6983372F1D9E36E37291A855324C3BA (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_ValueTooLarge_m98E94862DE95E1CD322A446B4B845268A124C055(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateDouble_m273C268E501F4DE8A73411EC0E4F91913F5C7447 (double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___0_value;
		bool L_3;
		L_3 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}

IL_0010:
	{
		ThrowHelper_ThrowArgumentException_ValueNotSupported_m579817B44127511B903F738EBBC7D02FDE054F53(NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateSingle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateSingle_mB5D28135F97269867F8DC0389E382DEA7317DF21 (float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		float L_2 = ___0_value;
		bool L_3;
		L_3 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}

IL_0010:
	{
		ThrowHelper_ThrowArgumentException_ValueNotSupported_m579817B44127511B903F738EBBC7D02FDE054F53(NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateProperty(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_PropertyNameTooLarge_m591F53BAC4D2B10A55D1389C8A1A907157A0E63E(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateValue(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateValue_mFB60C5BD2132B5D147FAD6A9DE920C2F765DA2B0 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_ValueTooLarge_m98E94862DE95E1CD322A446B4B845268A124C055(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidatePropertyAndValue(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidatePropertyAndValue_m68A3F4A91A8A150AAD3DE5B8990226783DA925D4 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)166666666))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_0023;
		}
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___1_value;
		ThrowHelper_ThrowArgumentException_mCC02637303AC469D32F1DC102775C46151387A7F(L_2, L_3, NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::ValidateNumber(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8FormattedNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		V_0 = 0;
		int32_t L_0 = V_0;
		uint8_t* L_1;
		L_1 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_0), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_2 = *((uint8_t*)L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4;
		L_4 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) > ((int32_t)L_5)))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_6;
		L_6 = SR_get_RequiredDigitNotFoundEndOfData_m703BDAE0498CB850C64A5A49A87A314F03F02E37(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var)));
	}

IL_002d:
	{
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_8), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_10 = *((uint8_t*)L_9);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_005e;
	}

IL_0040:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_15 = V_0;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_15), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_17 = *((uint8_t*)L_16);
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = JsonHelpers_IsDigit_mEC357A2F49C864A81517680770AAD23F8EF84689((uint8_t)L_17, NULL);
		if (L_18)
		{
			goto IL_0040;
		}
	}

IL_005e:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0069;
		}
	}
	{
		return;
	}

IL_0069:
	{
		int32_t L_21 = V_0;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_21), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_23 = *((uint8_t*)L_22);
		V_1 = (uint8_t)L_23;
		uint8_t L_24 = V_1;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26;
		L_26 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) > ((int32_t)L_27)))
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_28;
		L_28 = SR_get_RequiredDigitNotFoundEndOfData_m703BDAE0498CB850C64A5A49A87A314F03F02E37(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_29 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_29);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_29, L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var)));
	}

IL_0096:
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009a:
	{
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_31) >= ((int32_t)L_32)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_33 = V_0;
		uint8_t* L_34;
		L_34 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_33), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_35 = *((uint8_t*)L_34);
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = JsonHelpers_IsDigit_mEC357A2F49C864A81517680770AAD23F8EF84689((uint8_t)L_35, NULL);
		if (L_36)
		{
			goto IL_0096;
		}
	}

IL_00b4:
	{
		int32_t L_37 = V_0;
		int32_t L_38;
		L_38 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((!(((uint32_t)L_37) == ((uint32_t)L_38))))
		{
			goto IL_00bf;
		}
	}
	{
		return;
	}

IL_00bf:
	{
		int32_t L_39 = V_0;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_39), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_41 = *((uint8_t*)L_40);
		V_1 = (uint8_t)L_41;
	}

IL_00c9:
	{
		uint8_t L_42 = V_1;
		if ((((int32_t)L_42) == ((int32_t)((int32_t)101))))
		{
			goto IL_00d3;
		}
	}
	{
		uint8_t L_43 = V_1;
		if ((!(((uint32_t)L_43) == ((uint32_t)((int32_t)69)))))
		{
			goto IL_010b;
		}
	}

IL_00d3:
	{
		int32_t L_44 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		int32_t L_45;
		L_45 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) > ((int32_t)L_46)))
		{
			goto IL_00f1;
		}
	}
	{
		String_t* L_47;
		L_47 = SR_get_RequiredDigitNotFoundEndOfData_m703BDAE0498CB850C64A5A49A87A314F03F02E37(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_48 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_48, L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var)));
	}

IL_00f1:
	{
		int32_t L_49 = V_0;
		uint8_t* L_50;
		L_50 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_49), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_51 = *((uint8_t*)L_50);
		V_1 = (uint8_t)L_51;
		uint8_t L_52 = V_1;
		if ((((int32_t)L_52) == ((int32_t)((int32_t)43))))
		{
			goto IL_0105;
		}
	}
	{
		uint8_t L_53 = V_1;
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0126;
		}
	}

IL_0105:
	{
		int32_t L_54 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_54, 1));
		goto IL_0126;
	}

IL_010b:
	{
		String_t* L_55;
		L_55 = SR_get_ExpectedEndOfDigitNotFound_mFC63AB23ACA9E4C5126FABF43654FD62552F1BB1(NULL);
		uint8_t L_56 = V_1;
		String_t* L_57;
		L_57 = ThrowHelper_GetPrintableString_m40E31A72DA7DFAA32ED8B7A06A6609797EA0F551_inline(L_56, NULL);
		String_t* L_58;
		L_58 = SR_Format_mD6D7C45289B8602CA7F2EA0692244E53FF55C8DF(L_55, L_57, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_59 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_59);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_59, L_58, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var)));
	}

IL_0126:
	{
		int32_t L_60;
		L_60 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_61 = V_0;
		if ((((int32_t)L_60) > ((int32_t)L_61)))
		{
			goto IL_0144;
		}
	}
	{
		String_t* L_62;
		L_62 = SR_get_RequiredDigitNotFoundEndOfData_m703BDAE0498CB850C64A5A49A87A314F03F02E37(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_63 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_63);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_63, L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_63, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var)));
	}

IL_0140:
	{
		int32_t L_64 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0144:
	{
		int32_t L_65 = V_0;
		int32_t L_66;
		L_66 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_67 = V_0;
		uint8_t* L_68;
		L_68 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_67), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_69 = *((uint8_t*)L_68);
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = JsonHelpers_IsDigit_mEC357A2F49C864A81517680770AAD23F8EF84689((uint8_t)L_69, NULL);
		if (L_70)
		{
			goto IL_0140;
		}
	}

IL_015e:
	{
		int32_t L_71 = V_0;
		int32_t L_72;
		L_72 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8FormattedNumber), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_71) == ((int32_t)L_72)))
		{
			goto IL_018b;
		}
	}
	{
		String_t* L_73;
		L_73 = SR_get_ExpectedEndOfDigitNotFound_mFC63AB23ACA9E4C5126FABF43654FD62552F1BB1(NULL);
		int32_t L_74 = V_0;
		uint8_t* L_75;
		L_75 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_utf8FormattedNumber))->____pointer_0))->value, (L_74), ((&___0_utf8FormattedNumber))->____length_1);
		int32_t L_76 = *((uint8_t*)L_75);
		String_t* L_77;
		L_77 = ThrowHelper_GetPrintableString_m40E31A72DA7DFAA32ED8B7A06A6609797EA0F551_inline((uint8_t)L_76, NULL);
		String_t* L_78;
		L_78 = SR_Format_mD6D7C45289B8602CA7F2EA0692244E53FF55C8DF(L_73, L_77, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_79 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_79);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_79, L_78, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F6DA101D380BB5A044B3793C090CA5D77B7535F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_79, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6_RuntimeMethod_var)));
	}

IL_018b:
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::TrimDateTimeOffset(System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_TrimDateTimeOffset_mAC5CD5A22C382458B18E1A5316289454789490BC (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_buffer, int32_t* ___1_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	uint32_t V_5 = 0;
	uint32_t V_6 = 0;
	uint32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	uint32_t V_11 = 0;
	uint32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	uint8_t V_15 = 0x0;
	uint8_t V_16 = 0x0;
	uint8_t V_17 = 0x0;
	{
		uint8_t* L_0;
		L_0 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)26)), ((&___0_buffer))->____length_1);
		int32_t L_1 = *((uint8_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)48)));
		uint8_t* L_2;
		L_2 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)25)), ((&___0_buffer))->____length_1);
		int32_t L_3 = *((uint8_t*)L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, ((int32_t)48)));
		uint8_t* L_4;
		L_4 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)24)), ((&___0_buffer))->____length_1);
		int32_t L_5 = *((uint8_t*)L_4);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_5, ((int32_t)48)));
		uint8_t* L_6;
		L_6 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)23)), ((&___0_buffer))->____length_1);
		int32_t L_7 = *((uint8_t*)L_6);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)48)));
		uint8_t* L_8;
		L_8 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)22)), ((&___0_buffer))->____length_1);
		int32_t L_9 = *((uint8_t*)L_8);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_9, ((int32_t)48)));
		uint8_t* L_10;
		L_10 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)21)), ((&___0_buffer))->____length_1);
		int32_t L_11 = *((uint8_t*)L_10);
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)48)));
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)20)), ((&___0_buffer))->____length_1);
		int32_t L_13 = *((uint8_t*)L_12);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)48)));
		uint32_t L_14 = V_6;
		uint32_t L_15 = V_5;
		uint32_t L_16 = V_4;
		uint32_t L_17 = V_3;
		uint32_t L_18 = V_2;
		uint32_t L_19 = V_1;
		uint32_t L_20 = V_0;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply((int32_t)L_14, ((int32_t)1000000))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_15, ((int32_t)100000))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_16, ((int32_t)10000))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_17, ((int32_t)1000))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_18, ((int32_t)100))))), ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, ((int32_t)10))))), (int32_t)L_20));
		V_8 = ((int32_t)19);
		uint32_t L_21 = V_7;
		if ((!(((uint32_t)L_21) > ((uint32_t)0))))
		{
			goto IL_00f7;
		}
	}
	{
		V_9 = 7;
	}

IL_00a1:
	{
		uint32_t L_22 = V_7;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		uint32_t L_23;
		L_23 = JsonWriterHelper_DivMod_mD6FC02993BB66E34D1611A3CB0803C548EE1F3A5_inline(L_22, ((int32_t)10), (&V_12), NULL);
		V_11 = L_23;
		uint32_t L_24 = V_12;
		if (L_24)
		{
			goto IL_00be;
		}
	}
	{
		uint32_t L_25 = V_11;
		V_7 = L_25;
		int32_t L_26 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		goto IL_00a1;
	}

IL_00be:
	{
		int32_t L_27 = V_9;
		V_10 = ((int32_t)il2cpp_codegen_add(((int32_t)19), L_27));
		int32_t L_28 = V_10;
		V_13 = L_28;
		goto IL_00eb;
	}

IL_00cb:
	{
		int32_t L_29 = V_13;
		uint8_t* L_30;
		L_30 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (L_29), ((&___0_buffer))->____length_1);
		uint32_t L_31 = V_7;
		*((int8_t*)L_30) = (int8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)((uint32_t)(int32_t)L_31%(uint32_t)(int32_t)((int32_t)10))), ((int32_t)48))));
		uint32_t L_32 = V_7;
		V_7 = ((int32_t)((uint32_t)(int32_t)L_32/(uint32_t)(int32_t)((int32_t)10)));
		int32_t L_33 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract(L_33, 1));
	}

IL_00eb:
	{
		int32_t L_34 = V_13;
		int32_t L_35 = V_8;
		if ((((int32_t)L_34) > ((int32_t)L_35)))
		{
			goto IL_00cb;
		}
	}
	{
		int32_t L_36 = V_10;
		V_8 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00f7:
	{
		int32_t* L_37 = ___1_bytesWritten;
		int32_t L_38 = V_8;
		*((int32_t*)L_37) = (int32_t)L_38;
		int32_t L_39;
		L_39 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_buffer), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_39) <= ((int32_t)((int32_t)27))))
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_40 = V_8;
		uint8_t* L_41;
		L_41 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (L_40), ((&___0_buffer))->____length_1);
		uint8_t* L_42;
		L_42 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)27)), ((&___0_buffer))->____length_1);
		int32_t L_43 = *((uint8_t*)L_42);
		*((int8_t*)L_41) = (int8_t)L_43;
		int32_t* L_44 = ___1_bytesWritten;
		int32_t L_45 = V_8;
		*((int32_t*)L_44) = (int32_t)((int32_t)il2cpp_codegen_add(L_45, 1));
		int32_t L_46;
		L_46 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___0_buffer), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((!(((uint32_t)L_46) == ((uint32_t)((int32_t)33)))))
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_47 = V_8;
		V_14 = ((int32_t)il2cpp_codegen_add(L_47, 5));
		uint8_t* L_48;
		L_48 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)31)), ((&___0_buffer))->____length_1);
		int32_t L_49 = *((uint8_t*)L_48);
		V_15 = (uint8_t)L_49;
		uint8_t* L_50;
		L_50 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)29)), ((&___0_buffer))->____length_1);
		int32_t L_51 = *((uint8_t*)L_50);
		V_16 = (uint8_t)L_51;
		uint8_t* L_52;
		L_52 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)28)), ((&___0_buffer))->____length_1);
		int32_t L_53 = *((uint8_t*)L_52);
		V_17 = (uint8_t)L_53;
		int32_t L_54 = V_14;
		uint8_t* L_55;
		L_55 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (L_54), ((&___0_buffer))->____length_1);
		uint8_t* L_56;
		L_56 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)32)), ((&___0_buffer))->____length_1);
		int32_t L_57 = *((uint8_t*)L_56);
		*((int8_t*)L_55) = (int8_t)L_57;
		int32_t L_58 = V_14;
		uint8_t* L_59;
		L_59 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)il2cpp_codegen_subtract(L_58, 1))), ((&___0_buffer))->____length_1);
		uint8_t L_60 = V_15;
		*((int8_t*)L_59) = (int8_t)L_60;
		int32_t L_61 = V_14;
		uint8_t* L_62;
		L_62 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)il2cpp_codegen_subtract(L_61, 2))), ((&___0_buffer))->____length_1);
		*((int8_t*)L_62) = (int8_t)((int32_t)58);
		int32_t L_63 = V_14;
		uint8_t* L_64;
		L_64 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)il2cpp_codegen_subtract(L_63, 3))), ((&___0_buffer))->____length_1);
		uint8_t L_65 = V_16;
		*((int8_t*)L_64) = (int8_t)L_65;
		int32_t L_66 = V_14;
		uint8_t* L_67;
		L_67 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_buffer))->____pointer_0))->value, (((int32_t)il2cpp_codegen_subtract(L_66, 4))), ((&___0_buffer))->____length_1);
		uint8_t L_68 = V_17;
		*((int8_t*)L_67) = (int8_t)L_68;
		int32_t* L_69 = ___1_bytesWritten;
		int32_t L_70 = V_14;
		*((int32_t*)L_69) = (int32_t)((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_01aa:
	{
		return;
	}
}
// System.UInt32 System.Text.Json.JsonWriterHelper::DivMod(System.UInt32,System.UInt32,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JsonWriterHelper_DivMod_mD6FC02993BB66E34D1611A3CB0803C548EE1F3A5 (uint32_t ___0_numerator, uint32_t ___1_denominator, uint32_t* ___2_modulo, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_numerator;
		uint32_t L_1 = ___1_denominator;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_0/(uint32_t)(int32_t)L_1));
		uint32_t* L_2 = ___2_modulo;
		uint32_t L_3 = ___0_numerator;
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___1_denominator;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))));
		uint32_t L_6 = V_0;
		return L_6;
	}
}
// System.ReadOnlySpan`1<System.Byte> System.Text.Json.JsonWriterHelper::get_AllowList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D JsonWriterHelper_get_AllowList_mA28609B6B9076FA68AC62A6E99A56F15278670D3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1_StaticFields____1A373AA9A5E91C03714106E20498C6E475FEFACE_0_RVAStorage);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		memset((&L_0), 0, sizeof(L_0));
		ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_inline((&L_0), (void*)((__StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39*)U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1_StaticFields____1A373AA9A5E91C03714106E20498C6E475FEFACE_0_RVAStorage), ((int32_t)256), /*hidden argument*/ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_RuntimeMethod_var);
		return L_0;
	}
}
// System.Boolean System.Text.Json.JsonWriterHelper::NeedsEscaping(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscaping_mFE93A07F36E809CB539B11A56C653D48554C9395 (uint8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = JsonWriterHelper_get_AllowList_mA28609B6B9076FA68AC62A6E99A56F15278670D3(NULL);
		V_0 = L_0;
		uint8_t L_1 = ___0_value;
		uint8_t* L_2;
		L_2 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_1), ((&V_0))->____length_1);
		int32_t L_3 = *((uint8_t*)L_2);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.Json.JsonWriterHelper::NeedsEscapingNoBoundsCheck(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscapingNoBoundsCheck_mD12552627BD85E3DD84860062048DA6D9BF57878 (Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = JsonWriterHelper_get_AllowList_mA28609B6B9076FA68AC62A6E99A56F15278670D3(NULL);
		V_0 = L_0;
		Il2CppChar L_1 = ___0_value;
		uint8_t* L_2;
		L_2 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_1), ((&V_0))->____length_1);
		int32_t L_3 = *((uint8_t*)L_2);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.Json.JsonWriterHelper::NeedsEscaping(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscaping_m4189B361239A0B55511772156AC4D87DCF2054D1 (Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar L_0 = ___0_value;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = JsonWriterHelper_get_AllowList_mA28609B6B9076FA68AC62A6E99A56F15278670D3(NULL);
		V_0 = L_1;
		Il2CppChar L_2 = ___0_value;
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_2), ((&V_0))->____length_1);
		int32_t L_4 = *((uint8_t*)L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}
}
// System.Int32 System.Text.Json.JsonWriterHelper::NeedsEscaping(System.ReadOnlySpan`1<System.Byte>,System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_NeedsEscaping_m2C8304CA115F8E6DEF835C700499D77387F13CA8 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___1_encoder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = ___1_encoder;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_1 = ___1_encoder;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_value;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D >::Invoke(9 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncodeUtf8(System.ReadOnlySpan`1<System.Byte>) */, L_1, L_2);
		V_0 = L_3;
		goto IL_0031;
	}

IL_000d:
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_0011:
	{
		int32_t L_4 = V_0;
		uint8_t* L_5;
		L_5 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_4), ((&___0_value))->____length_1);
		int32_t L_6 = *((uint8_t*)L_5);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = JsonWriterHelper_NeedsEscaping_mFE93A07F36E809CB539B11A56C653D48554C9395((uint8_t)L_6, NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0025:
	{
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0011;
		}
	}
	{
		V_0 = (-1);
	}

IL_0031:
	{
		int32_t L_11 = V_0;
		return L_11;
	}
}
// System.Int32 System.Text.Json.JsonWriterHelper::NeedsEscaping(System.ReadOnlySpan`1<System.Char>,System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___1_encoder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppChar* V_1 = NULL;
	Il2CppChar* V_2 = NULL;
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = ___1_encoder;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		bool L_1;
		L_1 = ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7((&___0_value), ReadOnlySpan_1_get_IsEmpty_m22F5E8F0D6F1A092ACB472D02E0A0526E5FBBBD7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppChar* L_2;
		L_2 = ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638((&___0_value), ReadOnlySpan_1_GetPinnableReference_mB710059C1A1A30270065958DE8345808C6683638_RuntimeMethod_var);
		V_2 = L_2;
		Il2CppChar* L_3 = V_2;
		V_1 = (Il2CppChar*)((uintptr_t)L_3);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_4 = ___1_encoder;
		Il2CppChar* L_5 = V_1;
		int32_t L_6;
		L_6 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker2< int32_t, Il2CppChar*, int32_t >::Invoke(5 /* System.Int32 System.Text.Encodings.Web.TextEncoder::FindFirstCharacterToEncode(System.Char*,System.Int32) */, L_4, L_5, L_6);
		V_0 = L_7;
		V_2 = (Il2CppChar*)((uintptr_t)0);
		goto IL_004f;
	}

IL_002b:
	{
		V_0 = 0;
		goto IL_0043;
	}

IL_002f:
	{
		int32_t L_8 = V_0;
		Il2CppChar* L_9;
		L_9 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_8), ((&___0_value))->____length_1);
		int32_t L_10 = *((uint16_t*)L_9);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = JsonWriterHelper_NeedsEscaping_m4189B361239A0B55511772156AC4D87DCF2054D1_inline(L_10, NULL);
		if (L_11)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0043:
	{
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002f;
		}
	}
	{
		V_0 = (-1);
	}

IL_004f:
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.Int32 System.Text.Json.JsonWriterHelper::GetMaxEscapedLength(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4 (int32_t ___0_textLength, int32_t ___1_firstIndexToEscape, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_firstIndexToEscape;
		int32_t L_1 = ___0_textLength;
		int32_t L_2 = ___1_firstIndexToEscape;
		return ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)il2cpp_codegen_multiply(6, ((int32_t)il2cpp_codegen_subtract(L_1, L_2))))));
	}
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_m300A0A3F3C73F32440B227F5FA7CD90146D852C4 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___2_encoder, int32_t* ___3_written, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = ___2_encoder;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_value;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___1_destination;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker5< int32_t, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, int32_t*, int32_t*, bool >::Invoke(7 /* System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::EncodeUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&,System.Boolean) */, L_0, L_1, L_2, (&V_1), (&V_2), (bool)1);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_5 = V_2;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6;
		L_6 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___0_value), L_5, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_InvalidUTF8_m61926CFA2D24DCE662F6BC2B2D1A2E4B66B98498(L_6, NULL);
	}

IL_001e:
	{
		int32_t* L_7 = ___3_written;
		int32_t* L_8 = ___3_written;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10 = V_2;
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_9, L_10));
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_m564702FF6E13FE62D005D7AFEC973C086288877D (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t ___2_indexOfFirstByteToEscape, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___3_encoder, int32_t* ___4_written, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = ___2_indexOfFirstByteToEscape;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_inline((&___0_value), 0, L_0, ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_RuntimeMethod_var);
		V_0 = L_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___1_destination;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_0), L_2, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t* L_3 = ___4_written;
		int32_t L_4 = ___2_indexOfFirstByteToEscape;
		*((int32_t*)L_3) = (int32_t)L_4;
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_5 = ___3_encoder;
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_6 = ___2_indexOfFirstByteToEscape;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___1_destination), L_6, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___1_destination = L_7;
		int32_t L_8 = ___2_indexOfFirstByteToEscape;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_9;
		L_9 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___0_value), L_8, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___0_value = L_9;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10 = ___0_value;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11 = ___1_destination;
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_12 = ___3_encoder;
		int32_t* L_13 = ___4_written;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_m300A0A3F3C73F32440B227F5FA7CD90146D852C4(L_10, L_11, L_12, L_13, NULL);
		return;
	}

IL_003b:
	{
		int32_t L_14 = ___2_indexOfFirstByteToEscape;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_14), ((&___0_value))->____length_1);
		int32_t L_16 = *((uint8_t*)L_15);
		V_1 = (uint8_t)L_16;
		uint8_t L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = JsonWriterHelper_IsAsciiValue_mB771D4B77A06BDE98B39D52324FAD6A8E1F33E57(L_17, NULL);
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		uint8_t L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JsonWriterHelper_NeedsEscaping_mFE93A07F36E809CB539B11A56C653D48554C9395(L_19, NULL);
		if (!L_20)
		{
			goto IL_0065;
		}
	}
	{
		uint8_t L_21 = V_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_22 = ___1_destination;
		int32_t* L_23 = ___4_written;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeNextBytes_mA3984914396004727102D290DD1BD96A3E4DE830(L_21, L_22, L_23, NULL);
		int32_t L_24 = ___2_indexOfFirstByteToEscape;
		___2_indexOfFirstByteToEscape = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_00a5;
	}

IL_0065:
	{
		int32_t* L_25 = ___4_written;
		int32_t L_26 = *((int32_t*)L_25);
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_26), ((&___1_destination))->____length_1);
		uint8_t L_28 = V_1;
		*((int8_t*)L_27) = (int8_t)L_28;
		int32_t* L_29 = ___4_written;
		int32_t* L_30 = ___4_written;
		int32_t L_31 = *((int32_t*)L_30);
		*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = ___2_indexOfFirstByteToEscape;
		___2_indexOfFirstByteToEscape = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_00a5;
	}

IL_0080:
	{
		int32_t* L_33 = ___4_written;
		int32_t L_34 = *((int32_t*)L_33);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_35;
		L_35 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___1_destination), L_34, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		___1_destination = L_35;
		int32_t L_36 = ___2_indexOfFirstByteToEscape;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_37;
		L_37 = ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_inline((&___0_value), L_36, ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_RuntimeMethod_var);
		___0_value = L_37;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_38 = ___0_value;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_39 = ___1_destination;
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_40;
		L_40 = JavaScriptEncoder_get_Default_mA1BD7ACB1459CE7B06A32D6CF329C522C567D4ED_inline(NULL);
		int32_t* L_41 = ___4_written;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_m300A0A3F3C73F32440B227F5FA7CD90146D852C4(L_38, L_39, L_40, L_41, NULL);
		return;
	}

IL_00a5:
	{
		int32_t L_42 = ___2_indexOfFirstByteToEscape;
		int32_t L_43;
		L_43 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeNextBytes(System.Byte,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeNextBytes_mA3984914396004727102D290DD1BD96A3E4DE830 (uint8_t ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_written, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___2_written;
		int32_t* L_1 = ___2_written;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		uint8_t* L_5;
		L_5 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_4), ((&___1_destination))->____length_1);
		*((int8_t*)L_5) = (int8_t)((int32_t)92);
		uint8_t L_6 = ___0_value;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 8)))
		{
			case 0:
			{
				goto IL_00f5;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a5;
			}
			case 3:
			{
				goto IL_011d;
			}
			case 4:
			{
				goto IL_0109;
			}
			case 5:
			{
				goto IL_00b9;
			}
		}
	}
	{
		uint8_t L_7 = ___0_value;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)34))))
		{
			goto IL_0045;
		}
	}
	{
		uint8_t L_8 = ___0_value;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_011d;
	}

IL_0045:
	{
		int32_t* L_9 = ___2_written;
		int32_t* L_10 = ___2_written;
		int32_t L_11 = *((int32_t*)L_10);
		V_0 = L_11;
		int32_t L_12 = V_0;
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_12, 1));
		int32_t L_13 = V_0;
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_13), ((&___1_destination))->____length_1);
		*((int8_t*)L_14) = (int8_t)((int32_t)117);
		int32_t* L_15 = ___2_written;
		int32_t* L_16 = ___2_written;
		int32_t L_17 = *((int32_t*)L_16);
		V_0 = L_17;
		int32_t L_18 = V_0;
		*((int32_t*)L_15) = (int32_t)((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = V_0;
		uint8_t* L_20;
		L_20 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_19), ((&___1_destination))->____length_1);
		*((int8_t*)L_20) = (int8_t)((int32_t)48);
		int32_t* L_21 = ___2_written;
		int32_t* L_22 = ___2_written;
		int32_t L_23 = *((int32_t*)L_22);
		V_0 = L_23;
		int32_t L_24 = V_0;
		*((int32_t*)L_21) = (int32_t)((int32_t)il2cpp_codegen_add(L_24, 1));
		int32_t L_25 = V_0;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_25), ((&___1_destination))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)48);
		int32_t* L_27 = ___2_written;
		int32_t* L_28 = ___2_written;
		int32_t L_29 = *((int32_t*)L_28);
		V_0 = L_29;
		int32_t L_30 = V_0;
		*((int32_t*)L_27) = (int32_t)((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = V_0;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_31), ((&___1_destination))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)50);
		int32_t* L_33 = ___2_written;
		int32_t* L_34 = ___2_written;
		int32_t L_35 = *((int32_t*)L_34);
		V_0 = L_35;
		int32_t L_36 = V_0;
		*((int32_t*)L_33) = (int32_t)((int32_t)il2cpp_codegen_add(L_36, 1));
		int32_t L_37 = V_0;
		uint8_t* L_38;
		L_38 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_37), ((&___1_destination))->____length_1);
		*((int8_t*)L_38) = (int8_t)((int32_t)50);
		return;
	}

IL_00a5:
	{
		int32_t* L_39 = ___2_written;
		int32_t* L_40 = ___2_written;
		int32_t L_41 = *((int32_t*)L_40);
		V_0 = L_41;
		int32_t L_42 = V_0;
		*((int32_t*)L_39) = (int32_t)((int32_t)il2cpp_codegen_add(L_42, 1));
		int32_t L_43 = V_0;
		uint8_t* L_44;
		L_44 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_43), ((&___1_destination))->____length_1);
		*((int8_t*)L_44) = (int8_t)((int32_t)110);
		return;
	}

IL_00b9:
	{
		int32_t* L_45 = ___2_written;
		int32_t* L_46 = ___2_written;
		int32_t L_47 = *((int32_t*)L_46);
		V_0 = L_47;
		int32_t L_48 = V_0;
		*((int32_t*)L_45) = (int32_t)((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_0;
		uint8_t* L_50;
		L_50 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_49), ((&___1_destination))->____length_1);
		*((int8_t*)L_50) = (int8_t)((int32_t)114);
		return;
	}

IL_00cd:
	{
		int32_t* L_51 = ___2_written;
		int32_t* L_52 = ___2_written;
		int32_t L_53 = *((int32_t*)L_52);
		V_0 = L_53;
		int32_t L_54 = V_0;
		*((int32_t*)L_51) = (int32_t)((int32_t)il2cpp_codegen_add(L_54, 1));
		int32_t L_55 = V_0;
		uint8_t* L_56;
		L_56 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_55), ((&___1_destination))->____length_1);
		*((int8_t*)L_56) = (int8_t)((int32_t)116);
		return;
	}

IL_00e1:
	{
		int32_t* L_57 = ___2_written;
		int32_t* L_58 = ___2_written;
		int32_t L_59 = *((int32_t*)L_58);
		V_0 = L_59;
		int32_t L_60 = V_0;
		*((int32_t*)L_57) = (int32_t)((int32_t)il2cpp_codegen_add(L_60, 1));
		int32_t L_61 = V_0;
		uint8_t* L_62;
		L_62 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_61), ((&___1_destination))->____length_1);
		*((int8_t*)L_62) = (int8_t)((int32_t)92);
		return;
	}

IL_00f5:
	{
		int32_t* L_63 = ___2_written;
		int32_t* L_64 = ___2_written;
		int32_t L_65 = *((int32_t*)L_64);
		V_0 = L_65;
		int32_t L_66 = V_0;
		*((int32_t*)L_63) = (int32_t)((int32_t)il2cpp_codegen_add(L_66, 1));
		int32_t L_67 = V_0;
		uint8_t* L_68;
		L_68 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_67), ((&___1_destination))->____length_1);
		*((int8_t*)L_68) = (int8_t)((int32_t)98);
		return;
	}

IL_0109:
	{
		int32_t* L_69 = ___2_written;
		int32_t* L_70 = ___2_written;
		int32_t L_71 = *((int32_t*)L_70);
		V_0 = L_71;
		int32_t L_72 = V_0;
		*((int32_t*)L_69) = (int32_t)((int32_t)il2cpp_codegen_add(L_72, 1));
		int32_t L_73 = V_0;
		uint8_t* L_74;
		L_74 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_73), ((&___1_destination))->____length_1);
		*((int8_t*)L_74) = (int8_t)((int32_t)102);
		return;
	}

IL_011d:
	{
		int32_t* L_75 = ___2_written;
		int32_t* L_76 = ___2_written;
		int32_t L_77 = *((int32_t*)L_76);
		V_0 = L_77;
		int32_t L_78 = V_0;
		*((int32_t*)L_75) = (int32_t)((int32_t)il2cpp_codegen_add(L_78, 1));
		int32_t L_79 = V_0;
		uint8_t* L_80;
		L_80 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_79), ((&___1_destination))->____length_1);
		*((int8_t*)L_80) = (int8_t)((int32_t)117);
		uint8_t L_81 = ___0_value;
		int32_t* L_82 = ___2_written;
		int32_t L_83 = *((int32_t*)L_82);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_84;
		L_84 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___1_destination), L_83, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_85 = ((JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var))->___s_hexStandardFormat_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Utf8Formatter_TryFormat_mB8BD2EC6200E96B9CC27B820399BA8ADF292898A(L_81, L_84, (&V_2), L_85, NULL);
		V_1 = L_86;
		int32_t* L_87 = ___2_written;
		int32_t* L_88 = ___2_written;
		int32_t L_89 = *((int32_t*)L_88);
		int32_t L_90 = V_2;
		*((int32_t*)L_87) = (int32_t)((int32_t)il2cpp_codegen_add(L_89, L_90));
		return;
	}
}
// System.Boolean System.Text.Json.JsonWriterHelper::IsAsciiValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_IsAsciiValue_mB771D4B77A06BDE98B39D52324FAD6A8E1F33E57 (uint8_t ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_value;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Text.Json.JsonWriterHelper::IsAsciiValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterHelper_IsAsciiValue_m95272B549B92BDD457C999FBC9F41B51226673B6 (Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___0_value;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)((int32_t)127)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_m6A3C10DB5FDFA81CF6BEAF45725802FFE0CAA868 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___2_encoder, int32_t* ___3_written, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = ___2_encoder;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_value;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___1_destination;
		NullCheck(L_0);
		int32_t L_3;
		L_3 = VirtualFuncInvoker5< int32_t, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, int32_t*, int32_t*, bool >::Invoke(8 /* System.Buffers.OperationStatus System.Text.Encodings.Web.TextEncoder::Encode(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32&,System.Int32&,System.Boolean) */, L_0, L_1, L_2, (&V_1), (&V_2), (bool)1);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = V_2;
		Il2CppChar* L_6;
		L_6 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_5), ((&___0_value))->____length_1);
		int32_t L_7 = *((uint16_t*)L_6);
		ThrowHelper_ThrowArgumentException_InvalidUTF16_m063FC3F74E3C16AAC9D6C6F79AFC414D443EB4DE(L_7, NULL);
	}

IL_001f:
	{
		int32_t* L_8 = ___3_written;
		int32_t* L_9 = ___3_written;
		int32_t L_10 = *((int32_t*)L_9);
		int32_t L_11 = V_2;
		*((int32_t*)L_8) = (int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11));
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeString(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Char>,System.Int32,System.Text.Encodings.Web.JavaScriptEncoder,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383 (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, int32_t ___2_indexOfFirstByteToEscape, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___3_encoder, int32_t* ___4_written, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppChar V_1 = 0x0;
	{
		int32_t L_0 = ___2_indexOfFirstByteToEscape;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1;
		L_1 = ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_inline((&___0_value), 0, L_0, ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_RuntimeMethod_var);
		V_0 = L_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_2 = ___1_destination;
		ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030((&V_0), L_2, ReadOnlySpan_1_CopyTo_m42F1668DECE40277D97A37705EA6BE27CF7D5030_RuntimeMethod_var);
		int32_t* L_3 = ___4_written;
		int32_t L_4 = ___2_indexOfFirstByteToEscape;
		*((int32_t*)L_3) = (int32_t)L_4;
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_5 = ___3_encoder;
		if (!L_5)
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_6 = ___2_indexOfFirstByteToEscape;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_7;
		L_7 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___1_destination), L_6, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		___1_destination = L_7;
		int32_t L_8 = ___2_indexOfFirstByteToEscape;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_9;
		L_9 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___0_value), L_8, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		___0_value = L_9;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10 = ___0_value;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_11 = ___1_destination;
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_12 = ___3_encoder;
		int32_t* L_13 = ___4_written;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_m6A3C10DB5FDFA81CF6BEAF45725802FFE0CAA868(L_10, L_11, L_12, L_13, NULL);
		return;
	}

IL_003b:
	{
		int32_t L_14 = ___2_indexOfFirstByteToEscape;
		Il2CppChar* L_15;
		L_15 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___0_value))->____pointer_0))->value, (L_14), ((&___0_value))->____length_1);
		int32_t L_16 = *((uint16_t*)L_15);
		V_1 = L_16;
		Il2CppChar L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = JsonWriterHelper_IsAsciiValue_m95272B549B92BDD457C999FBC9F41B51226673B6(L_17, NULL);
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_19 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = JsonWriterHelper_NeedsEscapingNoBoundsCheck_mD12552627BD85E3DD84860062048DA6D9BF57878(L_19, NULL);
		if (!L_20)
		{
			goto IL_0065;
		}
	}
	{
		Il2CppChar L_21 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_22 = ___1_destination;
		int32_t* L_23 = ___4_written;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeNextChars_mCDD04B1D68EAFB21573130C3C2645DBE31307C39(L_21, L_22, L_23, NULL);
		int32_t L_24 = ___2_indexOfFirstByteToEscape;
		___2_indexOfFirstByteToEscape = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_00a5;
	}

IL_0065:
	{
		int32_t* L_25 = ___4_written;
		int32_t L_26 = *((int32_t*)L_25);
		Il2CppChar* L_27;
		L_27 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_26), ((&___1_destination))->____length_1);
		Il2CppChar L_28 = V_1;
		*((int16_t*)L_27) = (int16_t)L_28;
		int32_t* L_29 = ___4_written;
		int32_t* L_30 = ___4_written;
		int32_t L_31 = *((int32_t*)L_30);
		*((int32_t*)L_29) = (int32_t)((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = ___2_indexOfFirstByteToEscape;
		___2_indexOfFirstByteToEscape = ((int32_t)il2cpp_codegen_add(L_32, 1));
		goto IL_00a5;
	}

IL_0080:
	{
		int32_t* L_33 = ___4_written;
		int32_t L_34 = *((int32_t*)L_33);
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_35;
		L_35 = Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_inline((&___1_destination), L_34, Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_RuntimeMethod_var);
		___1_destination = L_35;
		int32_t L_36 = ___2_indexOfFirstByteToEscape;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_37;
		L_37 = ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_inline((&___0_value), L_36, ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_RuntimeMethod_var);
		___0_value = L_37;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_38 = ___0_value;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_39 = ___1_destination;
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_40;
		L_40 = JavaScriptEncoder_get_Default_mA1BD7ACB1459CE7B06A32D6CF329C522C567D4ED_inline(NULL);
		int32_t* L_41 = ___4_written;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_m6A3C10DB5FDFA81CF6BEAF45725802FFE0CAA868(L_38, L_39, L_40, L_41, NULL);
		return;
	}

IL_00a5:
	{
		int32_t L_42 = ___2_indexOfFirstByteToEscape;
		int32_t L_43;
		L_43 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
// System.Void System.Text.Json.JsonWriterHelper::EscapeNextChars(System.Char,System.Span`1<System.Char>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper_EscapeNextChars_mCDD04B1D68EAFB21573130C3C2645DBE31307C39 (Il2CppChar ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, int32_t* ___2_written, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t* L_0 = ___2_written;
		int32_t* L_1 = ___2_written;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		Il2CppChar* L_5;
		L_5 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_4), ((&___1_destination))->____length_1);
		*((int16_t*)L_5) = (int16_t)((int32_t)92);
		Il2CppChar L_6 = ___0_value;
		V_1 = (uint8_t)((int32_t)(uint8_t)L_6);
		uint8_t L_7 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, 8)))
		{
			case 0:
			{
				goto IL_00f8;
			}
			case 1:
			{
				goto IL_00d0;
			}
			case 2:
			{
				goto IL_00a8;
			}
			case 3:
			{
				goto IL_0120;
			}
			case 4:
			{
				goto IL_010c;
			}
			case 5:
			{
				goto IL_00bc;
			}
		}
	}
	{
		uint8_t L_8 = V_1;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0048;
		}
	}
	{
		uint8_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_00e4;
		}
	}
	{
		goto IL_0120;
	}

IL_0048:
	{
		int32_t* L_10 = ___2_written;
		int32_t* L_11 = ___2_written;
		int32_t L_12 = *((int32_t*)L_11);
		V_0 = L_12;
		int32_t L_13 = V_0;
		*((int32_t*)L_10) = (int32_t)((int32_t)il2cpp_codegen_add(L_13, 1));
		int32_t L_14 = V_0;
		Il2CppChar* L_15;
		L_15 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_14), ((&___1_destination))->____length_1);
		*((int16_t*)L_15) = (int16_t)((int32_t)117);
		int32_t* L_16 = ___2_written;
		int32_t* L_17 = ___2_written;
		int32_t L_18 = *((int32_t*)L_17);
		V_0 = L_18;
		int32_t L_19 = V_0;
		*((int32_t*)L_16) = (int32_t)((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_0;
		Il2CppChar* L_21;
		L_21 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_20), ((&___1_destination))->____length_1);
		*((int16_t*)L_21) = (int16_t)((int32_t)48);
		int32_t* L_22 = ___2_written;
		int32_t* L_23 = ___2_written;
		int32_t L_24 = *((int32_t*)L_23);
		V_0 = L_24;
		int32_t L_25 = V_0;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t L_26 = V_0;
		Il2CppChar* L_27;
		L_27 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_26), ((&___1_destination))->____length_1);
		*((int16_t*)L_27) = (int16_t)((int32_t)48);
		int32_t* L_28 = ___2_written;
		int32_t* L_29 = ___2_written;
		int32_t L_30 = *((int32_t*)L_29);
		V_0 = L_30;
		int32_t L_31 = V_0;
		*((int32_t*)L_28) = (int32_t)((int32_t)il2cpp_codegen_add(L_31, 1));
		int32_t L_32 = V_0;
		Il2CppChar* L_33;
		L_33 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_32), ((&___1_destination))->____length_1);
		*((int16_t*)L_33) = (int16_t)((int32_t)50);
		int32_t* L_34 = ___2_written;
		int32_t* L_35 = ___2_written;
		int32_t L_36 = *((int32_t*)L_35);
		V_0 = L_36;
		int32_t L_37 = V_0;
		*((int32_t*)L_34) = (int32_t)((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = V_0;
		Il2CppChar* L_39;
		L_39 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_38), ((&___1_destination))->____length_1);
		*((int16_t*)L_39) = (int16_t)((int32_t)50);
		return;
	}

IL_00a8:
	{
		int32_t* L_40 = ___2_written;
		int32_t* L_41 = ___2_written;
		int32_t L_42 = *((int32_t*)L_41);
		V_0 = L_42;
		int32_t L_43 = V_0;
		*((int32_t*)L_40) = (int32_t)((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_0;
		Il2CppChar* L_45;
		L_45 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_44), ((&___1_destination))->____length_1);
		*((int16_t*)L_45) = (int16_t)((int32_t)110);
		return;
	}

IL_00bc:
	{
		int32_t* L_46 = ___2_written;
		int32_t* L_47 = ___2_written;
		int32_t L_48 = *((int32_t*)L_47);
		V_0 = L_48;
		int32_t L_49 = V_0;
		*((int32_t*)L_46) = (int32_t)((int32_t)il2cpp_codegen_add(L_49, 1));
		int32_t L_50 = V_0;
		Il2CppChar* L_51;
		L_51 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_50), ((&___1_destination))->____length_1);
		*((int16_t*)L_51) = (int16_t)((int32_t)114);
		return;
	}

IL_00d0:
	{
		int32_t* L_52 = ___2_written;
		int32_t* L_53 = ___2_written;
		int32_t L_54 = *((int32_t*)L_53);
		V_0 = L_54;
		int32_t L_55 = V_0;
		*((int32_t*)L_52) = (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1));
		int32_t L_56 = V_0;
		Il2CppChar* L_57;
		L_57 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_56), ((&___1_destination))->____length_1);
		*((int16_t*)L_57) = (int16_t)((int32_t)116);
		return;
	}

IL_00e4:
	{
		int32_t* L_58 = ___2_written;
		int32_t* L_59 = ___2_written;
		int32_t L_60 = *((int32_t*)L_59);
		V_0 = L_60;
		int32_t L_61 = V_0;
		*((int32_t*)L_58) = (int32_t)((int32_t)il2cpp_codegen_add(L_61, 1));
		int32_t L_62 = V_0;
		Il2CppChar* L_63;
		L_63 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_62), ((&___1_destination))->____length_1);
		*((int16_t*)L_63) = (int16_t)((int32_t)92);
		return;
	}

IL_00f8:
	{
		int32_t* L_64 = ___2_written;
		int32_t* L_65 = ___2_written;
		int32_t L_66 = *((int32_t*)L_65);
		V_0 = L_66;
		int32_t L_67 = V_0;
		*((int32_t*)L_64) = (int32_t)((int32_t)il2cpp_codegen_add(L_67, 1));
		int32_t L_68 = V_0;
		Il2CppChar* L_69;
		L_69 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_68), ((&___1_destination))->____length_1);
		*((int16_t*)L_69) = (int16_t)((int32_t)98);
		return;
	}

IL_010c:
	{
		int32_t* L_70 = ___2_written;
		int32_t* L_71 = ___2_written;
		int32_t L_72 = *((int32_t*)L_71);
		V_0 = L_72;
		int32_t L_73 = V_0;
		*((int32_t*)L_70) = (int32_t)((int32_t)il2cpp_codegen_add(L_73, 1));
		int32_t L_74 = V_0;
		Il2CppChar* L_75;
		L_75 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_74), ((&___1_destination))->____length_1);
		*((int16_t*)L_75) = (int16_t)((int32_t)102);
		return;
	}

IL_0120:
	{
		int32_t* L_76 = ___2_written;
		int32_t* L_77 = ___2_written;
		int32_t L_78 = *((int32_t*)L_77);
		V_0 = L_78;
		int32_t L_79 = V_0;
		*((int32_t*)L_76) = (int32_t)((int32_t)il2cpp_codegen_add(L_79, 1));
		int32_t L_80 = V_0;
		Il2CppChar* L_81;
		L_81 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_80), ((&___1_destination))->____length_1);
		*((int16_t*)L_81) = (int16_t)((int32_t)117);
		int32_t* L_82 = ___2_written;
		Il2CppChar L_83 = ___0_value;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_84 = ___1_destination;
		int32_t* L_85 = ___2_written;
		int32_t L_86 = *((int32_t*)L_85);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_87;
		L_87 = JsonWriterHelper_WriteHex_m7A120B39639623607153F51F1E3D78A8C43A47FE(L_83, L_84, L_86, NULL);
		*((int32_t*)L_82) = (int32_t)L_87;
		return;
	}
}
// System.Int32 System.Text.Json.JsonWriterHelper::WriteHex(System.Int32,System.Span`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_WriteHex_m7A120B39639623607153F51F1E3D78A8C43A47FE (int32_t ___0_value, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___1_destination, int32_t ___2_written, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___2_written;
		int32_t L_1 = L_0;
		___2_written = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Il2CppChar* L_2;
		L_2 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_1), ((&___1_destination))->____length_1);
		int32_t L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		uint8_t L_4;
		L_4 = JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3_inline(((int32_t)(L_3>>((int32_t)12))), NULL);
		*((int16_t*)L_2) = (int16_t)L_4;
		int32_t L_5 = ___2_written;
		int32_t L_6 = L_5;
		___2_written = ((int32_t)il2cpp_codegen_add(L_6, 1));
		Il2CppChar* L_7;
		L_7 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_6), ((&___1_destination))->____length_1);
		int32_t L_8 = ___0_value;
		uint8_t L_9;
		L_9 = JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3_inline(((int32_t)((int64_t)(((int64_t)((int32_t)(L_8>>8)))&((int64_t)((int32_t)15))))), NULL);
		*((int16_t*)L_7) = (int16_t)L_9;
		int32_t L_10 = ___2_written;
		int32_t L_11 = L_10;
		___2_written = ((int32_t)il2cpp_codegen_add(L_11, 1));
		Il2CppChar* L_12;
		L_12 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_11), ((&___1_destination))->____length_1);
		int32_t L_13 = ___0_value;
		uint8_t L_14;
		L_14 = JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3_inline(((int32_t)((int64_t)(((int64_t)((int32_t)(L_13>>4)))&((int64_t)((int32_t)15))))), NULL);
		*((int16_t*)L_12) = (int16_t)L_14;
		int32_t L_15 = ___2_written;
		int32_t L_16 = L_15;
		___2_written = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Il2CppChar* L_17;
		L_17 = il2cpp_span_get_item((Il2CppChar*)((Il2CppByReference*)&(((&___1_destination))->____pointer_0))->value, (L_16), ((&___1_destination))->____length_1);
		int32_t L_18 = ___0_value;
		uint8_t L_19;
		L_19 = JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3_inline(((int32_t)((int64_t)(((int64_t)L_18)&((int64_t)((int32_t)15))))), NULL);
		*((int16_t*)L_17) = (int16_t)L_19;
		int32_t L_20 = ___2_written;
		return L_20;
	}
}
// System.Byte System.Text.Json.JsonWriterHelper::Int32LsbToHexDigit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3 (int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___0_value;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)65), ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)10)))));
		goto IL_0012;
	}

IL_000e:
	{
		int32_t L_2 = ___0_value;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), L_2));
	}

IL_0012:
	{
		return (uint8_t)((int32_t)(uint8_t)G_B3_0);
	}
}
// System.Buffers.OperationStatus System.Text.Json.JsonWriterHelper::ToUtf8(System.ReadOnlySpan`1<System.Byte>,System.Span`1<System.Byte>,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_ToUtf8_m0EC452325B9038CDF4AFC9F74E55A7194674B4F6 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf16Source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_utf8Destination, int32_t* ___2_bytesConsumed, int32_t* ___3_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	Il2CppChar* V_4 = NULL;
	uint8_t* V_5 = NULL;
	Il2CppChar* V_6 = NULL;
	uint8_t* V_7 = NULL;
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_utf16Source;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		V_1 = L_1;
		uint8_t* L_2 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_2);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3 = ___1_utf8Destination;
		uint8_t* L_4;
		L_4 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6(L_3, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m81BE3C6812CE881C00AAA80CCFC9349F754F63A6_RuntimeMethod_var);
		V_3 = L_4;
		uint8_t* L_5 = V_3;
		V_2 = (uint8_t*)((uintptr_t)L_5);
		uint8_t* L_6 = V_0;
		V_4 = (Il2CppChar*)L_6;
		uint8_t* L_7 = V_2;
		V_5 = L_7;
		uint8_t* L_8 = V_0;
		int32_t L_9;
		L_9 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf16Source), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_6 = (Il2CppChar*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_8, L_9));
		uint8_t* L_10 = V_5;
		int32_t L_11;
		L_11 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_utf8Destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		V_7 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_10, L_11));
		goto IL_0205;
	}

IL_0036:
	{
		Il2CppChar* L_12 = V_6;
		Il2CppChar* L_13 = V_4;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = JsonWriterHelper_PtrDiff_m38A892D52BF473A2345B38153C2F143007339D33_inline(L_12, L_13, NULL);
		uint8_t* L_15 = V_7;
		uint8_t* L_16 = V_5;
		int32_t L_17;
		L_17 = JsonWriterHelper_PtrDiff_mD1A028CB8E273EE4BA081972D46DBBF5E1152425_inline(L_15, L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_18;
		L_18 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_14, L_17, NULL);
		V_8 = L_18;
		Il2CppChar* L_19 = V_4;
		int32_t L_20 = V_8;
		V_9 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_19, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_20), 2)))), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)5), 2))));
		Il2CppChar* L_21 = V_4;
		Il2CppChar* L_22 = V_9;
		if ((!(((uintptr_t)L_21) < ((uintptr_t)L_22))))
		{
			goto IL_0345;
		}
	}

IL_0067:
	{
		Il2CppChar* L_23 = V_4;
		int32_t L_24 = *((uint16_t*)L_23);
		V_10 = L_24;
		Il2CppChar* L_25 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_25, 2));
		int32_t L_26 = V_10;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)127))))
		{
			goto IL_012c;
		}
	}
	{
		uint8_t* L_27 = V_5;
		int32_t L_28 = V_10;
		*((int8_t*)L_27) = (int8_t)((int32_t)(uint8_t)L_28);
		uint8_t* L_29 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_29, 1));
		Il2CppChar* L_30 = V_4;
		if (!((int32_t)(((int32_t)(intptr_t)L_30)&2)))
		{
			goto IL_00ff;
		}
	}
	{
		Il2CppChar* L_31 = V_4;
		int32_t L_32 = *((uint16_t*)L_31);
		V_10 = L_32;
		Il2CppChar* L_33 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_33, 2));
		int32_t L_34 = V_10;
		if ((((int32_t)L_34) > ((int32_t)((int32_t)127))))
		{
			goto IL_012c;
		}
	}
	{
		uint8_t* L_35 = V_5;
		int32_t L_36 = V_10;
		*((int8_t*)L_35) = (int8_t)((int32_t)(uint8_t)L_36);
		uint8_t* L_37 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_37, 1));
		goto IL_00ff;
	}

IL_00b0:
	{
		Il2CppChar* L_38 = V_4;
		int32_t L_39 = *((int32_t*)L_38);
		V_10 = L_39;
		Il2CppChar* L_40 = V_4;
		int32_t L_41 = *((int32_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_40, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)2), 2)))));
		V_12 = L_41;
		int32_t L_42 = V_10;
		int32_t L_43 = V_12;
		if (((int32_t)(((int32_t)(L_42|L_43))&((int32_t)-8323200))))
		{
			goto IL_010a;
		}
	}
	{
		uint8_t* L_44 = V_5;
		int32_t L_45 = V_10;
		*((int8_t*)L_44) = (int8_t)((int32_t)(uint8_t)L_45);
		uint8_t* L_46 = V_5;
		int32_t L_47 = V_10;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, 1))) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_47>>((int32_t)16))));
		Il2CppChar* L_48 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)4), 2))));
		uint8_t* L_49 = V_5;
		int32_t L_50 = V_12;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_49, 2))) = (int8_t)((int32_t)(uint8_t)L_50);
		uint8_t* L_51 = V_5;
		int32_t L_52 = V_12;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_51, 3))) = (int8_t)((int32_t)(uint8_t)((int32_t)(L_52>>((int32_t)16))));
		uint8_t* L_53 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_53, 4));
	}

IL_00ff:
	{
		Il2CppChar* L_54 = V_4;
		Il2CppChar* L_55 = V_9;
		if ((!(((uintptr_t)L_54) >= ((uintptr_t)L_55))))
		{
			goto IL_00b0;
		}
	}
	{
		goto IL_01fc;
	}

IL_010a:
	{
		int32_t L_56 = V_10;
		V_10 = ((int32_t)(uint16_t)L_56);
		Il2CppChar* L_57 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_57, 2));
		int32_t L_58 = V_10;
		if ((((int32_t)L_58) > ((int32_t)((int32_t)127))))
		{
			goto IL_012c;
		}
	}
	{
		uint8_t* L_59 = V_5;
		int32_t L_60 = V_10;
		*((int8_t*)L_59) = (int8_t)((int32_t)(uint8_t)L_60);
		uint8_t* L_61 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, 1));
		goto IL_01fc;
	}

IL_012c:
	{
		int32_t L_62 = V_10;
		if ((((int32_t)L_62) > ((int32_t)((int32_t)2047))))
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_63 = V_10;
		V_11 = ((int32_t)(((int32_t)-64)|((int32_t)(L_63>>6))));
		goto IL_01dc;
	}

IL_0143:
	{
		int32_t L_64 = V_10;
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = JsonHelpers_IsInRangeInclusive_mA3EBC817F38C1240438A438AF5D7F1AC0D1179D3_inline(L_64, ((int32_t)55296), ((int32_t)57343), NULL);
		if (L_65)
		{
			goto IL_0162;
		}
	}
	{
		int32_t L_66 = V_10;
		V_11 = ((int32_t)(((int32_t)-32)|((int32_t)(L_66>>((int32_t)12)))));
		goto IL_01be;
	}

IL_0162:
	{
		int32_t L_67 = V_10;
		if ((((int32_t)L_67) > ((int32_t)((int32_t)56319))))
		{
			goto IL_0364;
		}
	}
	{
		Il2CppChar* L_68 = V_4;
		int32_t L_69 = *((uint16_t*)L_68);
		V_11 = L_69;
		int32_t L_70 = V_11;
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = JsonHelpers_IsInRangeInclusive_mA3EBC817F38C1240438A438AF5D7F1AC0D1179D3_inline(L_70, ((int32_t)56320), ((int32_t)57343), NULL);
		if (!L_71)
		{
			goto IL_0364;
		}
	}
	{
		Il2CppChar* L_72 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_72, 2));
		int32_t L_73 = V_11;
		int32_t L_74 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_73, ((int32_t)(L_74<<((int32_t)10))))), ((int32_t)-56613888)));
		uint8_t* L_75 = V_5;
		int32_t L_76 = V_10;
		*((int8_t*)L_75) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)-16)|((int32_t)(L_76>>((int32_t)18))))));
		uint8_t* L_77 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, 1));
		int32_t L_78 = V_10;
		V_11 = ((int32_t)(((int32_t)-128)|((int32_t)(((int32_t)(L_78>>((int32_t)12)))&((int32_t)63)))));
	}

IL_01be:
	{
		uint8_t* L_79 = V_5;
		int32_t L_80 = V_11;
		*((int8_t*)L_79) = (int8_t)((int32_t)(uint8_t)L_80);
		Il2CppChar* L_81 = V_9;
		V_9 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_81, 2));
		uint8_t* L_82 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_82, 1));
		int32_t L_83 = V_10;
		V_11 = ((int32_t)(((int32_t)-128)|((int32_t)(((int32_t)(L_83>>6))&((int32_t)63)))));
	}

IL_01dc:
	{
		uint8_t* L_84 = V_5;
		int32_t L_85 = V_11;
		*((int8_t*)L_84) = (int8_t)((int32_t)(uint8_t)L_85);
		Il2CppChar* L_86 = V_9;
		V_9 = ((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_86, 2));
		uint8_t* L_87 = V_5;
		int32_t L_88 = V_10;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_87, 1))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)-128)|((int32_t)(L_88&((int32_t)63))))));
		uint8_t* L_89 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_89, 2));
	}

IL_01fc:
	{
		Il2CppChar* L_90 = V_4;
		Il2CppChar* L_91 = V_9;
		if ((!(((uintptr_t)L_90) >= ((uintptr_t)L_91))))
		{
			goto IL_0067;
		}
	}

IL_0205:
	{
		Il2CppChar* L_92 = V_6;
		Il2CppChar* L_93 = V_4;
		if ((((int64_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_92, (intptr_t)L_93))/2)))) > ((int64_t)((int64_t)((int32_t)13)))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0345;
	}

IL_021a:
	{
		Il2CppChar* L_94 = V_4;
		int32_t L_95 = *((uint16_t*)L_94);
		V_13 = L_95;
		Il2CppChar* L_96 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_96, 2));
		int32_t L_97 = V_13;
		if ((((int32_t)L_97) > ((int32_t)((int32_t)127))))
		{
			goto IL_024b;
		}
	}
	{
		uint8_t* L_98 = V_7;
		uint8_t* L_99 = V_5;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_98, (intptr_t)L_99))/1)))) <= ((int64_t)((int64_t)0))))
		{
			goto IL_037c;
		}
	}
	{
		uint8_t* L_100 = V_5;
		int32_t L_101 = V_13;
		*((int8_t*)L_100) = (int8_t)((int32_t)(uint8_t)L_101);
		uint8_t* L_102 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_102, 1));
		goto IL_0345;
	}

IL_024b:
	{
		int32_t L_103 = V_13;
		if ((((int32_t)L_103) > ((int32_t)((int32_t)2047))))
		{
			goto IL_0271;
		}
	}
	{
		uint8_t* L_104 = V_7;
		uint8_t* L_105 = V_5;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_104, (intptr_t)L_105))/1)))) <= ((int64_t)((int64_t)1))))
		{
			goto IL_037c;
		}
	}
	{
		int32_t L_106 = V_13;
		V_14 = ((int32_t)(((int32_t)-64)|((int32_t)(L_106>>6))));
		goto IL_032b;
	}

IL_0271:
	{
		int32_t L_107 = V_13;
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_108;
		L_108 = JsonHelpers_IsInRangeInclusive_mA3EBC817F38C1240438A438AF5D7F1AC0D1179D3_inline(L_107, ((int32_t)55296), ((int32_t)57343), NULL);
		if (L_108)
		{
			goto IL_029f;
		}
	}
	{
		uint8_t* L_109 = V_7;
		uint8_t* L_110 = V_5;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_109, (intptr_t)L_110))/1)))) <= ((int64_t)((int64_t)2))))
		{
			goto IL_037c;
		}
	}
	{
		int32_t L_111 = V_13;
		V_14 = ((int32_t)(((int32_t)-32)|((int32_t)(L_111>>((int32_t)12)))));
		goto IL_0313;
	}

IL_029f:
	{
		uint8_t* L_112 = V_7;
		uint8_t* L_113 = V_5;
		if ((((int64_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_112, (intptr_t)L_113))/1)))) <= ((int64_t)((int64_t)3))))
		{
			goto IL_037c;
		}
	}
	{
		int32_t L_114 = V_13;
		if ((((int32_t)L_114) > ((int32_t)((int32_t)56319))))
		{
			goto IL_0364;
		}
	}
	{
		Il2CppChar* L_115 = V_4;
		Il2CppChar* L_116 = V_6;
		if ((!(((uintptr_t)L_115) < ((uintptr_t)L_116))))
		{
			goto IL_0394;
		}
	}
	{
		Il2CppChar* L_117 = V_4;
		int32_t L_118 = *((uint16_t*)L_117);
		V_14 = L_118;
		int32_t L_119 = V_14;
		il2cpp_codegen_runtime_class_init_inline(JsonHelpers_t2F748DBC116C02F33AE0416DD30A1201BA7241F2_il2cpp_TypeInfo_var);
		bool L_120;
		L_120 = JsonHelpers_IsInRangeInclusive_mA3EBC817F38C1240438A438AF5D7F1AC0D1179D3_inline(L_119, ((int32_t)56320), ((int32_t)57343), NULL);
		if (!L_120)
		{
			goto IL_0364;
		}
	}
	{
		Il2CppChar* L_121 = V_4;
		V_4 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_121, 2));
		int32_t L_122 = V_14;
		int32_t L_123 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_122, ((int32_t)(L_123<<((int32_t)10))))), ((int32_t)-56613888)));
		uint8_t* L_124 = V_5;
		int32_t L_125 = V_13;
		*((int8_t*)L_124) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)-16)|((int32_t)(L_125>>((int32_t)18))))));
		uint8_t* L_126 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_126, 1));
		int32_t L_127 = V_13;
		V_14 = ((int32_t)(((int32_t)-128)|((int32_t)(((int32_t)(L_127>>((int32_t)12)))&((int32_t)63)))));
	}

IL_0313:
	{
		uint8_t* L_128 = V_5;
		int32_t L_129 = V_14;
		*((int8_t*)L_128) = (int8_t)((int32_t)(uint8_t)L_129);
		uint8_t* L_130 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_130, 1));
		int32_t L_131 = V_13;
		V_14 = ((int32_t)(((int32_t)-128)|((int32_t)(((int32_t)(L_131>>6))&((int32_t)63)))));
	}

IL_032b:
	{
		uint8_t* L_132 = V_5;
		int32_t L_133 = V_14;
		*((int8_t*)L_132) = (int8_t)((int32_t)(uint8_t)L_133);
		uint8_t* L_134 = V_5;
		int32_t L_135 = V_13;
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_134, 1))) = (int8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)-128)|((int32_t)(L_135&((int32_t)63))))));
		uint8_t* L_136 = V_5;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_136, 2));
	}

IL_0345:
	{
		Il2CppChar* L_137 = V_4;
		Il2CppChar* L_138 = V_6;
		if ((!(((uintptr_t)L_137) >= ((uintptr_t)L_138))))
		{
			goto IL_021a;
		}
	}
	{
		int32_t* L_139 = ___2_bytesConsumed;
		Il2CppChar* L_140 = V_4;
		uint8_t* L_141 = V_0;
		*((int32_t*)L_139) = (int32_t)((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_140, (intptr_t)L_141))/1))));
		int32_t* L_142 = ___3_bytesWritten;
		uint8_t* L_143 = V_5;
		uint8_t* L_144 = V_2;
		*((int32_t*)L_142) = (int32_t)((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_143, (intptr_t)L_144))/1))));
		return (int32_t)(0);
	}

IL_0364:
	{
		int32_t* L_145 = ___2_bytesConsumed;
		Il2CppChar* L_146 = V_4;
		uint8_t* L_147 = V_0;
		*((int32_t*)L_145) = (int32_t)((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_146, 2)), (intptr_t)L_147))/1))));
		int32_t* L_148 = ___3_bytesWritten;
		uint8_t* L_149 = V_5;
		uint8_t* L_150 = V_2;
		*((int32_t*)L_148) = (int32_t)((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_149, (intptr_t)L_150))/1))));
		return (int32_t)(3);
	}

IL_037c:
	{
		int32_t* L_151 = ___2_bytesConsumed;
		Il2CppChar* L_152 = V_4;
		uint8_t* L_153 = V_0;
		*((int32_t*)L_151) = (int32_t)((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_152, 2)), (intptr_t)L_153))/1))));
		int32_t* L_154 = ___3_bytesWritten;
		uint8_t* L_155 = V_5;
		uint8_t* L_156 = V_2;
		*((int32_t*)L_154) = (int32_t)((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_155, (intptr_t)L_156))/1))));
		return (int32_t)(1);
	}

IL_0394:
	{
		int32_t* L_157 = ___2_bytesConsumed;
		Il2CppChar* L_158 = V_4;
		uint8_t* L_159 = V_0;
		*((int32_t*)L_157) = (int32_t)((int32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_158, 2)), (intptr_t)L_159))/1))));
		int32_t* L_160 = ___3_bytesWritten;
		uint8_t* L_161 = V_5;
		uint8_t* L_162 = V_2;
		*((int32_t*)L_160) = (int32_t)((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_161, (intptr_t)L_162))/1))));
		return (int32_t)(2);
	}
}
// System.Int32 System.Text.Json.JsonWriterHelper::PtrDiff(System.Char*,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_PtrDiff_m38A892D52BF473A2345B38153C2F143007339D33 (Il2CppChar* ___0_a, Il2CppChar* ___1_b, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_a;
		Il2CppChar* L_1 = ___1_b;
		return ((int32_t)((uint32_t)((int32_t)(uint32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1))/1))))>>1));
	}
}
// System.Int32 System.Text.Json.JsonWriterHelper::PtrDiff(System.Byte*,System.Byte*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_PtrDiff_mD1A028CB8E273EE4BA081972D46DBBF5E1152425 (uint8_t* ___0_a, uint8_t* ___1_b, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___1_b;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1))/1))));
	}
}
// System.Void System.Text.Json.JsonWriterHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterHelper__cctor_m3E983799FC90D8DEB824C22C20E0462A5FF2FABC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_0;
		memset((&L_0), 0, sizeof(L_0));
		StandardFormat__ctor_m817E5E5E8FE9A5256CC54594F12F72DCA7501568((&L_0), ((int32_t)88), (uint8_t)4, /*hidden argument*/NULL);
		((JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var))->___s_hexStandardFormat_0 = L_0;
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
// Conversion methods for marshalling of: System.Text.Json.JsonWriterOptions
IL2CPP_EXTERN_C void JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshal_pinvoke(const JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397& unmarshaled, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CEncoderU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEncoderU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshal_pinvoke_back(const JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_pinvoke& marshaled, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CEncoderU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEncoderU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonWriterOptions
IL2CPP_EXTERN_C void JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshal_pinvoke_cleanup(JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Text.Json.JsonWriterOptions
IL2CPP_EXTERN_C void JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshal_com(const JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397& unmarshaled, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CEncoderU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEncoderU3Ek__BackingField_1Exception, NULL);
}
IL2CPP_EXTERN_C void JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshal_com_back(const JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_com& marshaled, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___U3CEncoderU3Ek__BackingField_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397____U3CEncoderU3Ek__BackingField_1_FieldInfo_var, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CEncoderU3Ek__BackingField_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Text.Json.JsonWriterOptions
IL2CPP_EXTERN_C void JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshal_com_cleanup(JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_com& marshaled)
{
}
// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::get_Encoder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406 (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) 
{
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = __this->___U3CEncoderU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*>(__this + _offset);
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* _returnValue;
	_returnValue = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Text.Json.JsonWriterOptions::set_Encoder(System.Text.Encodings.Web.JavaScriptEncoder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriterOptions_set_Encoder_m5E357AEFC0AB885F7858AE1D70B7060273AED306 (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___0_value, const RuntimeMethod* method) 
{
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = ___0_value;
		__this->___U3CEncoderU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEncoderU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void JsonWriterOptions_set_Encoder_m5E357AEFC0AB885F7858AE1D70B7060273AED306_AdjustorThunk (RuntimeObject* __this, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___0_value, const RuntimeMethod* method)
{
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*>(__this + _offset);
	JsonWriterOptions_set_Encoder_m5E357AEFC0AB885F7858AE1D70B7060273AED306_inline(_thisAdjusted, ___0_value, method);
}
// System.Boolean System.Text.Json.JsonWriterOptions::get_Indented()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____optionsMask_0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*>(__this + _offset);
	bool _returnValue;
	_returnValue = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Json.JsonWriterOptions::get_SkipValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0 (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____optionsMask_0;
		return (bool)((!(((uint32_t)((int32_t)(L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*>(__this + _offset);
	bool _returnValue;
	_returnValue = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean System.Text.Json.JsonWriterOptions::get_IndentedOrNotSkipValidation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonWriterOptions_get_IndentedOrNotSkipValidation_mFC205FBEF9620AD791C2EAC0A7F776281E2D9900 (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____optionsMask_0;
		return (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool JsonWriterOptions_get_IndentedOrNotSkipValidation_mFC205FBEF9620AD791C2EAC0A7F776281E2D9900_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*>(__this + _offset);
	bool _returnValue;
	_returnValue = JsonWriterOptions_get_IndentedOrNotSkipValidation_mFC205FBEF9620AD791C2EAC0A7F776281E2D9900(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Text.Json.Utf8JsonWriter::get_BytesPending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBytesPendingU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::set_BytesPending(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBytesPendingU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Int64 System.Text.Json.Utf8JsonWriter::get_BytesCommitted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utf8JsonWriter_get_BytesCommitted_mEAF5E6159D99CD34796639914CCA84473295AACF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CBytesCommittedU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::set_BytesCommitted(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CBytesCommittedU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Int32 System.Text.Json.Utf8JsonWriter::get_Indentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		return ((int32_t)il2cpp_codegen_multiply(L_0, 2));
	}
}
// System.Int32 System.Text.Json.Utf8JsonWriter::get_CurrentDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentDepth_8;
		return ((int32_t)(L_0&((int32_t)2147483647LL)));
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::.ctor(System.IO.Stream,System.Text.Json.JsonWriterOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter__ctor_m7231BA575A72C4997FCCFFDCCB3CEE9A1549A905 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___0_utf8Json, JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = ___0_utf8Json;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBA8C2D520707D106E80FC5954BF4068B2711A8C1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter__ctor_m7231BA575A72C4997FCCFFDCCB3CEE9A1549A905_RuntimeMethod_var)));
	}

IL_0014:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = ___0_utf8Json;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(10 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4;
		L_4 = SR_get_StreamNotWritable_m65594F58F8823932DC89382559782D5B78CF6028(NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter__ctor_m7231BA575A72C4997FCCFFDCCB3CEE9A1549A905_RuntimeMethod_var)));
	}

IL_0027:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = ___0_utf8Json;
		__this->____stream_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_2), (void*)L_6);
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_7 = (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*)il2cpp_codegen_object_new(ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5(L_7, ArrayBufferWriter_1__ctor_m86FCECF99B8854184AE5C91A5D7652BE1615A6E5_RuntimeMethod_var);
		__this->____arrayBufferWriter_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayBufferWriter_3), (void*)L_7);
		__this->____output_1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____output_1), (void*)(RuntimeObject*)NULL);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, 0, NULL);
		Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline(__this, ((int64_t)0), NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_8 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		il2cpp_codegen_initobj(L_8, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		__this->____inObject_5 = (bool)0;
		__this->____tokenType_6 = 0;
		__this->____currentDepth_8 = 0;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 L_9 = ___1_options;
		__this->____options_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____options_9))->___U3CEncoderU3Ek__BackingField_1), (void*)NULL);
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_10 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		il2cpp_codegen_initobj(L_10, sizeof(BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5));
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ResetHelper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ResetHelper_m75A417EA64C4EBF6D4E2AF8C54D90B95770E49B3 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, 0, NULL);
		Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline(__this, ((int64_t)0), NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		il2cpp_codegen_initobj(L_0, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		__this->____inObject_5 = (bool)0;
		__this->____tokenType_6 = 0;
		__this->____currentDepth_8 = 0;
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_1 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		il2cpp_codegen_initobj(L_1, sizeof(BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5));
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::CheckNotDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_CheckNotDisposed_m3023C02F6F75AB548E99526BE817223286AC82EA (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_2;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->____output_1;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_2 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCD70750FE8DB60D33FA44BB075A6204E231A7117)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_CheckNotDisposed_m3023C02F6F75AB548E99526BE817223286AC82EA_RuntimeMethod_var)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::Flush()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Flush_m71B82C161B4ECCB5D90DCBBF667D3647404A7799 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Utf8JsonWriter_CheckNotDisposed_m3023C02F6F75AB548E99526BE817223286AC82EA(__this, NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		il2cpp_codegen_initobj(L_0, sizeof(Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036));
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_1 = __this->____stream_2;
		if (!L_1)
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0094;
		}
	}
	{
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_3 = __this->____arrayBufferWriter_3;
		int32_t L_4;
		L_4 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		NullCheck(L_3);
		ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B(L_3, L_4, ArrayBufferWriter_1_Advance_m168C0C3B71056783F49364D710172171C0750F7B_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, 0, NULL);
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_5 = __this->____arrayBufferWriter_3;
		NullCheck(L_5);
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 L_6;
		L_6 = ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240(L_5, ArrayBufferWriter_1_get_WrittenMemory_mDC830E4F692DE45BA9D5F9F43EEE2AFCAE747240_RuntimeMethod_var);
		bool L_7;
		L_7 = MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C(L_6, (&V_1), MemoryMarshal_TryGetArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB6F85DA7E78701821A0B20EB6BDB0782B7AC5A7C_RuntimeMethod_var);
		V_0 = L_7;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_8 = __this->____stream_2;
		il2cpp_codegen_runtime_class_init_inline(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&V_1), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_10;
		L_10 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&V_1), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		int32_t L_11;
		L_11 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&V_1), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		NullCheck(L_8);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, L_10, L_11);
		int64_t L_12;
		L_12 = Utf8JsonWriter_get_BytesCommitted_mEAF5E6159D99CD34796639914CCA84473295AACF_inline(__this, NULL);
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_13 = __this->____arrayBufferWriter_3;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_inline(L_13, ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline(__this, ((int64_t)il2cpp_codegen_add(L_12, ((int64_t)L_14))), NULL);
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_15 = __this->____arrayBufferWriter_3;
		NullCheck(L_15);
		ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E(L_15, ArrayBufferWriter_1_Clear_mF899CECFCBFBB4B89F1336C7C35EFCBFF8814F3E_RuntimeMethod_var);
	}

IL_0094:
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_16 = __this->____stream_2;
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(21 /* System.Void System.IO.Stream::Flush() */, L_16);
		return;
	}

IL_00a0:
	{
		int32_t L_17;
		L_17 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		if (!L_17)
		{
			goto IL_00d4;
		}
	}
	{
		RuntimeObject* L_18 = __this->____output_1;
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var, L_18, L_19);
		int64_t L_20;
		L_20 = Utf8JsonWriter_get_BytesCommitted_mEAF5E6159D99CD34796639914CCA84473295AACF_inline(__this, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline(__this, ((int64_t)il2cpp_codegen_add(L_20, ((int64_t)L_21))), NULL);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, 0, NULL);
	}

IL_00d4:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Dispose_mBAFB87EB612CD2B6E911A32B5BDDC41308AB433F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_0 = __this->____stream_2;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_1 = __this->____output_1;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return;
	}

IL_0011:
	{
		Utf8JsonWriter_Flush_m71B82C161B4ECCB5D90DCBBF667D3647404A7799(__this, NULL);
		Utf8JsonWriter_ResetHelper_m75A417EA64C4EBF6D4E2AF8C54D90B95770E49B3(__this, NULL);
		__this->____stream_2 = (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____stream_2), (void*)(Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL);
		__this->____arrayBufferWriter_3 = (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayBufferWriter_3), (void*)(ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3*)NULL);
		__this->____output_1 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____output_1), (void*)(RuntimeObject*)NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartArray_mD418C2E501B88084EA5837B9BE9038EA75CA1337 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_WriteStart_mA8A609C59C9BC1B5BFB4D82BD18328952019FDA1(__this, (uint8_t)((int32_t)91), NULL);
		__this->____tokenType_6 = 3;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartObject_mA1EF1E8CCF738E49D16F99CDA5F1F9E6868D88B2 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_WriteStart_mA8A609C59C9BC1B5BFB4D82BD18328952019FDA1(__this, (uint8_t)((int32_t)123), NULL);
		__this->____tokenType_6 = 1;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStart(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStart_mA8A609C59C9BC1B5BFB4D82BD18328952019FDA1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)1000))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->____currentDepth_8;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)26), L_1, (uint8_t)0, 0, NULL);
	}

IL_001c:
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_2 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_3;
		L_3 = JsonWriterOptions_get_IndentedOrNotSkipValidation_mFC205FBEF9620AD791C2EAC0A7F776281E2D9900(L_2, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		uint8_t L_4 = ___0_token;
		Utf8JsonWriter_WriteStartSlow_m0A135B5009203BA02F5341E152E27654552DC02C(__this, L_4, NULL);
		goto IL_0039;
	}

IL_0032:
	{
		uint8_t L_5 = ___0_token;
		Utf8JsonWriter_WriteStartMinimized_mB1A7139369CD1119EDD231484C804B9DFBA883EC(__this, L_5, NULL);
	}

IL_0039:
	{
		int32_t L_6 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)(L_6&((int32_t)2147483647LL)));
		int32_t L_7 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartMinimized(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartMinimized_mB1A7139369CD1119EDD231484C804B9DFBA883EC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)2)))
		{
			goto IL_001c;
		}
	}
	{
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, 2, NULL);
	}

IL_001c:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_3, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5 = __this->____currentDepth_8;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_7, 1)), NULL);
		int32_t L_8 = V_1;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_8), ((&V_0))->____length_1);
		*((int8_t*)L_9) = (int8_t)((int32_t)44);
	}

IL_004c:
	{
		int32_t L_10;
		L_10 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_1 = L_10;
		int32_t L_11 = V_1;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		int32_t L_12 = V_1;
		uint8_t* L_13;
		L_13 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_12), ((&V_0))->____length_1);
		uint8_t L_14 = ___0_token;
		*((int8_t*)L_13) = (int8_t)L_14;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartSlow(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartSlow_m0A135B5009203BA02F5341E152E27654552DC02C (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_2 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_3;
		L_3 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_2, NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Utf8JsonWriter_ValidateStart_m6731F9FFACF4565D12DC27106FF4BF655650EEF8(__this, NULL);
		uint8_t L_4 = ___0_token;
		Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337_inline(__this, L_4, NULL);
	}

IL_0027:
	{
		uint8_t L_5 = ___0_token;
		Utf8JsonWriter_WriteStartIndented_m7BB700FADBAC557FE53D6A264734B0F0597FDB39(__this, L_5, NULL);
		return;
	}

IL_002f:
	{
		Utf8JsonWriter_ValidateStart_m6731F9FFACF4565D12DC27106FF4BF655650EEF8(__this, NULL);
		uint8_t L_6 = ___0_token;
		Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337_inline(__this, L_6, NULL);
		uint8_t L_7 = ___0_token;
		Utf8JsonWriter_WriteStartMinimized_mB1A7139369CD1119EDD231484C804B9DFBA883EC(__this, L_7, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidateStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateStart_m6731F9FFACF4565D12DC27106FF4BF655650EEF8 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____inObject_5;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		uint8_t L_1 = __this->____tokenType_6;
		if ((((int32_t)L_1) == ((int32_t)5)))
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_2 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)27), 0, (uint8_t)0, L_2, NULL);
		return;
	}

IL_0021:
	{
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_4 = __this->____tokenType_6;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		uint8_t L_5 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)28), 0, (uint8_t)0, L_5, NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartIndented(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartIndented_m7BB700FADBAC557FE53D6A264734B0F0597FDB39 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, 3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_3, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_6 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_7 = V_2;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_7, NULL);
	}

IL_002b:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_8 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_8, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_3 = L_9;
		int32_t L_10 = __this->____currentDepth_8;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_11;
		L_11 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_11;
		int32_t L_12 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		int32_t L_13 = V_4;
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_13), ((&V_3))->____length_1);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
	}

IL_005e:
	{
		uint8_t L_15 = __this->____tokenType_6;
		if ((((int32_t)L_15) == ((int32_t)5)))
		{
			goto IL_0097;
		}
	}
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_3;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_0076:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_3), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
	}

IL_0097:
	{
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_23;
		int32_t L_24 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_4;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_25), ((&V_3))->____length_1);
		uint8_t L_27 = ___0_token;
		*((int8_t*)L_26) = (int8_t)L_27;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartArray_m0ED1C2A6C341A50DB167BEC72977371A99859A8D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteStartArray_m0ED1C2A6C341A50DB167BEC72977371A99859A8D_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteStartArray_m8EA9B8EBECB0DD55BDED4BA1F4A8BAE7010B3D1F(G_B2_1, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartArray(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartArray_m8EA9B8EBECB0DD55BDED4BA1F4A8BAE7010B3D1F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		Utf8JsonWriter_ValidatePropertyNameAndDepth_m24562CD926422D62B270BD3783E5E8EF402D80E3_inline(__this, L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_propertyName;
		Utf8JsonWriter_WriteStartEscape_mCEB7CCF00F07881F642E093B126EF136AE07EC14(__this, L_1, (uint8_t)((int32_t)91), NULL);
		int32_t L_2 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)(L_2&((int32_t)2147483647LL)));
		int32_t L_3 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		__this->____tokenType_6 = 3;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartEscape(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartEscape_mCEB7CCF00F07881F642E093B126EF136AE07EC14 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, uint8_t ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		uint8_t L_6 = ___1_token;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteStartEscapeProperty_mF416B738D8887BAADDC3C90239D7A5C98F672D81(__this, L_5, L_6, L_7, NULL);
		return;
	}

IL_0020:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		uint8_t L_9 = ___1_token;
		Utf8JsonWriter_WriteStartByOptions_mD4D33E17A4ED48581C52C36E6CEDE86D8FF26D30(__this, L_8, L_9, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartByOptions(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartByOptions_mD4D33E17A4ED48581C52C36E6CEDE86D8FF26D30 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, uint8_t ___1_token, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___1_token;
		Utf8JsonWriter_ValidateWritingProperty_mC581A96093E5B8C0F28A38802637D6BA4E6B831B_inline(__this, L_0, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_2;
		L_2 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___0_propertyName;
		uint8_t L_4 = ___1_token;
		Utf8JsonWriter_WritePropertyNameIndented_m736B33C6BC7C7DB3AD529C418DBF33D1A7D61476(__this, L_3, L_4, NULL);
		return;
	}

IL_001d:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		uint8_t L_6 = ___1_token;
		Utf8JsonWriter_WritePropertyNameMinimized_m0EFCCAD1A0C86F77B25C0925AC16015F754E0402(__this, L_5, L_6, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStartEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Byte,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStartEscapeProperty_mF416B738D8887BAADDC3C90239D7A5C98F672D81 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, uint8_t ___1_token, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteStartEscapeProperty_mF416B738D8887BAADDC3C90239D7A5C98F672D81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteStartEscapeProperty_mF416B738D8887BAADDC3C90239D7A5C98F672D81_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		uint8_t L_25 = ___1_token;
		Utf8JsonWriter_WriteStartByOptions_mD4D33E17A4ED48581C52C36E6CEDE86D8FF26D30(__this, L_24, L_25, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		if (!L_26)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_27;
		L_27 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_27, L_28, (bool)0);
	}

IL_0081:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndArray_m5777DA78B4AD16920865AFBF6800D5A0AE7463EB (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_WriteEnd_m77890C8C2A9C911157F9972E4FF9CBFA712D02AF(__this, (uint8_t)((int32_t)93), NULL);
		__this->____tokenType_6 = 4;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndObject_mCBB8ED094BB4B5196B0D6496B2C8EC2A40C71EFA (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_WriteEnd_m77890C8C2A9C911157F9972E4FF9CBFA712D02AF(__this, (uint8_t)((int32_t)125), NULL);
		__this->____tokenType_6 = 2;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEnd(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEnd_m77890C8C2A9C911157F9972E4FF9CBFA712D02AF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_IndentedOrNotSkipValidation_mFC205FBEF9620AD791C2EAC0A7F776281E2D9900(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		uint8_t L_2 = ___0_token;
		Utf8JsonWriter_WriteEndSlow_mECA3F6EB97FB3CBE19FBDABA77010DC1EE8290D4(__this, L_2, NULL);
		goto IL_001d;
	}

IL_0016:
	{
		uint8_t L_3 = ___0_token;
		Utf8JsonWriter_WriteEndMinimized_mA33335B7FDB7413EE731D3C1844B45026F25EB3A(__this, L_3, NULL);
	}

IL_001d:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		int32_t L_4;
		L_4 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_5 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
	}

IL_0039:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndMinimized(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndMinimized_mA33335B7FDB7413EE731D3C1844B45026F25EB3A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, 1, NULL);
	}

IL_001c:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_3, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_7 = V_1;
		uint8_t* L_8;
		L_8 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_7), ((&V_0))->____length_1);
		uint8_t L_9 = ___0_token;
		*((int8_t*)L_8) = (int8_t)L_9;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndSlow(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndSlow_mECA3F6EB97FB3CBE19FBDABA77010DC1EE8290D4 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_2 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_3;
		L_3 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_2, NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		uint8_t L_4 = ___0_token;
		Utf8JsonWriter_ValidateEnd_m1F0FF13359265179652859C5FD0A4E3219F45B3E(__this, L_4, NULL);
	}

IL_0021:
	{
		uint8_t L_5 = ___0_token;
		Utf8JsonWriter_WriteEndIndented_m39BDB70B1110F40D7C17E13095CA802DCD0CD457(__this, L_5, NULL);
		return;
	}

IL_0029:
	{
		uint8_t L_6 = ___0_token;
		Utf8JsonWriter_ValidateEnd_m1F0FF13359265179652859C5FD0A4E3219F45B3E(__this, L_6, NULL);
		uint8_t L_7 = ___0_token;
		Utf8JsonWriter_WriteEndMinimized_mA33335B7FDB7413EE731D3C1844B45026F25EB3A(__this, L_7, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidateEnd(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateEnd_m1F0FF13359265179652859C5FD0A4E3219F45B3E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_0 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		int32_t L_1;
		L_1 = BitStack_get_CurrentDepth_m29C47DB4A4B69D9C76A93EBA1637E97A243FC869_inline(L_0, NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		uint8_t L_2 = __this->____tokenType_6;
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_0026;
		}
	}

IL_0017:
	{
		uint8_t L_3 = ___0_token;
		uint8_t L_4 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)23), 0, L_3, L_4, NULL);
	}

IL_0026:
	{
		uint8_t L_5 = ___0_token;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0044;
		}
	}
	{
		bool L_6 = __this->____inObject_5;
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_7 = ___0_token;
		uint8_t L_8 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)23), 0, L_7, L_8, NULL);
		goto IL_005b;
	}

IL_0044:
	{
		bool L_9 = __this->____inObject_5;
		if (L_9)
		{
			goto IL_005b;
		}
	}
	{
		uint8_t L_10 = ___0_token;
		uint8_t L_11 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)23), 0, L_10, L_11, NULL);
	}

IL_005b:
	{
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_12 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		bool L_13;
		L_13 = BitStack_Pop_mEBB94B5C8DD6FACC49DCB2A2A7D365E5A75A4FD2_inline(L_12, NULL);
		__this->____inObject_5 = L_13;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteEndIndented(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteEndIndented_m39BDB70B1110F40D7C17E13095CA802DCD0CD457 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		uint8_t L_0 = __this->____tokenType_6;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0012;
		}
	}
	{
		uint8_t L_1 = __this->____tokenType_6;
		if ((!(((uint32_t)L_1) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		uint8_t L_2 = ___0_token;
		Utf8JsonWriter_WriteEndMinimized_mA33335B7FDB7413EE731D3C1844B45026F25EB3A(__this, L_2, NULL);
		return;
	}

IL_001a:
	{
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_5, 2));
	}

IL_0028:
	{
		int32_t L_6 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_7 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_8;
		L_8 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_7, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))) >= ((int32_t)L_10)))
		{
			goto IL_0048;
		}
	}
	{
		int32_t L_11 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_11, NULL);
	}

IL_0048:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_12 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_13;
		L_13 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_12, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_13;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_14 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_14, NULL);
		int32_t L_15;
		L_15 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_16;
		L_16 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_15, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_16, L_17, NULL);
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_19 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_18, L_19)), NULL);
		int32_t L_20;
		L_20 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_20;
		int32_t L_21 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
		int32_t L_22 = V_3;
		uint8_t* L_23;
		L_23 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_22), ((&V_2))->____length_1);
		uint8_t L_24 = ___0_token;
		*((int8_t*)L_23) = (int8_t)L_24;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNewLine(System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1;
		L_1 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_output))->____pointer_0))->value, (L_3), ((&___0_output))->____length_1);
		*((int8_t*)L_4) = (int8_t)((int32_t)13);
	}

IL_0023:
	{
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_7 = V_0;
		uint8_t* L_8;
		L_8 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_output))->____pointer_0))->value, (L_7), ((&___0_output))->____length_1);
		*((int8_t*)L_8) = (int8_t)((int32_t)10);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::UpdateBitStackOnStart(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_token;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0018;
		}
	}
	{
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_1 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		BitStack_PushFalse_m83CDC7E063685BF4FAD27FDCD7F51CF8D49EBAD3_inline(L_1, NULL);
		__this->____inObject_5 = (bool)0;
		return;
	}

IL_0018:
	{
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_2 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		BitStack_PushTrue_mBEF1D3C195EA821E02716255C61AFB88258D5BAB_inline(L_2, NULL);
		__this->____inObject_5 = (bool)1;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_requiredSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = ___0_requiredSize;
		Utf8JsonWriter_FirstCallToGetMemory_m421AB335FA4A40AB99E7DBEC68C5C93B45BA300B(__this, L_2, NULL);
		return;
	}

IL_0015:
	{
		int32_t L_3 = ___0_requiredSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)4096), L_3, NULL);
		V_0 = L_4;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = __this->____stream_2;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_6 = __this->____arrayBufferWriter_3;
		int32_t L_7;
		L_7 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_8 = V_0;
		if (((int64_t)L_7 + (int64_t)L_8 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_7 + (int64_t)L_8 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF_RuntimeMethod_var);
		NullCheck(L_6);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_9;
		L_9 = ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA(L_6, ((int32_t)il2cpp_codegen_add(L_7, L_8)), ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_RuntimeMethod_var);
		__this->____memory_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory_4))->____object_0), (void*)NULL);
		return;
	}

IL_0043:
	{
		RuntimeObject* L_10 = __this->____output_1;
		int32_t L_11;
		L_11 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void System.Buffers.IBufferWriter`1<System.Byte>::Advance(System.Int32) */, IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var, L_10, L_11);
		int64_t L_12;
		L_12 = Utf8JsonWriter_get_BytesCommitted_mEAF5E6159D99CD34796639914CCA84473295AACF_inline(__this, NULL);
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline(__this, ((int64_t)il2cpp_codegen_add(L_12, ((int64_t)L_13))), NULL);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, 0, NULL);
		RuntimeObject* L_14 = __this->____output_1;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_16;
		L_16 = InterfaceFuncInvoker1< Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, int32_t >::Invoke(1 /* System.Memory`1<T> System.Buffers.IBufferWriter`1<System.Byte>::GetMemory(System.Int32) */, IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var, L_14, L_15);
		__this->____memory_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory_4))->____object_0), (void*)NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_17 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_18;
		L_18 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_17, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) >= ((int32_t)L_19)))
		{
			goto IL_0094;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NeedLargerSpan_mCCE8D5F2D1147F2E3BDB377D4916507B12561F28(NULL);
	}

IL_0094:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::FirstCallToGetMemory(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_FirstCallToGetMemory_m421AB335FA4A40AB99E7DBEC68C5C93B45BA300B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_requiredSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_requiredSize;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)256), L_0, NULL);
		V_0 = L_1;
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_2 = __this->____stream_2;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* L_3 = __this->____arrayBufferWriter_3;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_5;
		L_5 = ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA(L_3, L_4, ArrayBufferWriter_1_GetMemory_mF508ABB006758B2429BF328A652BB19DC222D5BA_RuntimeMethod_var);
		__this->____memory_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory_4))->____object_0), (void*)NULL);
		return;
	}

IL_0027:
	{
		RuntimeObject* L_6 = __this->____output_1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_8;
		L_8 = InterfaceFuncInvoker1< Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, int32_t >::Invoke(1 /* System.Memory`1<T> System.Buffers.IBufferWriter`1<System.Byte>::GetMemory(System.Int32) */, IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897_il2cpp_TypeInfo_var, L_6, L_7);
		__this->____memory_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____memory_4))->____object_0), (void*)NULL);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_10;
		L_10 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_9, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_004c;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_NeedLargerSpan_mCCE8D5F2D1147F2E3BDB377D4916507B12561F28(NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::SetFlagToAddListSeparatorBeforeNextItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)(L_0|((int32_t)-2147483648LL)));
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.String,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_m53F8960BEC188097BC27A924F5C940B944BCC69F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteNumber_m53F8960BEC188097BC27A924F5C940B944BCC69F_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_4 = ___1_value;
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteNumber_mD0D6428D9A3952BE9DF3E72522DDB88A0FFF5D50(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mD0D6428D9A3952BE9DF3E72522DDB88A0FFF5D50 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_propertyName;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___1_value;
		Utf8JsonWriter_WriteNumberEscape_m839B59E145DC504005ACCB461362FA25E8EF7F64(__this, L_1, L_2, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_m839B59E145DC504005ACCB461362FA25E8EF7F64 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_6 = ___1_value;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteNumberEscapeProperty_m5C6984D5BFBCB19538DA7E51B6786235710E0BBF(__this, L_5, L_6, L_7, NULL);
		return;
	}

IL_0020:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_9 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m7F831CF3842791E20AA105276008B26ECE1A903E(__this, L_8, L_9, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Decimal,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_m5C6984D5BFBCB19538DA7E51B6786235710E0BBF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteNumberEscapeProperty_m5C6984D5BFBCB19538DA7E51B6786235710E0BBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteNumberEscapeProperty_m5C6984D5BFBCB19538DA7E51B6786235710E0BBF_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_25 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m7F831CF3842791E20AA105276008B26ECE1A903E(__this, L_24, L_25, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		if (!L_26)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_27;
		L_27 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_27, L_28, (bool)0);
	}

IL_0081:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m7F831CF3842791E20AA105276008B26ECE1A903E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = ___1_value;
		Utf8JsonWriter_WriteNumberIndented_m04F728F1839ADC1F0760D92EE7FD4AF97FCAF42D(__this, L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_5 = ___1_value;
		Utf8JsonWriter_WriteNumberMinimized_mF63A73E5BD69DD73C85626498929565266AB833D(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_mF63A73E5BD69DD73C85626498929565266AB833D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), ((int32_t)31))), 4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_002b:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_9;
		int32_t L_10 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_4;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_005e:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_4;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_23;
		int32_t L_24 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_4;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_25), ((&V_1))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)58);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_27 = ___1_value;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_5), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_30 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Utf8Formatter_TryFormat_m80E15F38510D89E386E290D847E9B3D691FF092A(L_27, L_29, (&V_3), L_30, NULL);
		V_2 = L_31;
		int32_t L_32;
		L_32 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_33 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_32, L_33)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m04F728F1839ADC1F0760D92EE7FD4AF97FCAF42D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), ((int32_t)31))), 5)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_003a:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_12;
		int32_t L_13 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_5;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_006d:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007c:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_23;
		int32_t L_24 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_5;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_27, L_28, NULL);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_29;
		int32_t L_30 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		int32_t L_31 = V_5;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_31), ((&V_2))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)34);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_5;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_35), ((&V_2))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)58);
		int32_t L_37;
		L_37 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_37;
		int32_t L_38 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		int32_t L_39 = V_5;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_39), ((&V_2))->____length_1);
		*((int8_t*)L_40) = (int8_t)((int32_t)32);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_41 = ___1_value;
		int32_t L_42;
		L_42 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_43;
		L_43 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_42, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_6), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_44 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Utf8Formatter_TryFormat_m80E15F38510D89E386E290D847E9B3D691FF092A(L_41, L_43, (&V_4), L_44, NULL);
		V_3 = L_45;
		int32_t L_46;
		L_46 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_47 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_46, L_47)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mB4D57EB91A38F1A4137DED79C353AB6F2A62F45B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, double ___1_value, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteNumber_mB4D57EB91A38F1A4137DED79C353AB6F2A62F45B_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		double L_4 = ___1_value;
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteNumber_mB11686A7C01617109108B732DEF61AD255AE2623(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mB11686A7C01617109108B732DEF61AD255AE2623 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		double L_1 = ___1_value;
		JsonWriterHelper_ValidateDouble_m273C268E501F4DE8A73411EC0E4F91913F5C7447_inline(L_1, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		double L_3 = ___1_value;
		Utf8JsonWriter_WriteNumberEscape_m7D4164EE56D9887F589D5F09EC97A52EB36DDE94(__this, L_2, L_3, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_m7D4164EE56D9887F589D5F09EC97A52EB36DDE94 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		double L_6 = ___1_value;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteNumberEscapeProperty_mAAA68B5E56A137FB38326A210A5A9E9036EDE790(__this, L_5, L_6, L_7, NULL);
		return;
	}

IL_0020:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		double L_9 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m6CB6822B82779F99D17BE84993F9D8A143DC2DC8(__this, L_8, L_9, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_mAAA68B5E56A137FB38326A210A5A9E9036EDE790 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteNumberEscapeProperty_mAAA68B5E56A137FB38326A210A5A9E9036EDE790_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteNumberEscapeProperty_mAAA68B5E56A137FB38326A210A5A9E9036EDE790_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		double L_25 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m6CB6822B82779F99D17BE84993F9D8A143DC2DC8(__this, L_24, L_25, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		if (!L_26)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_27;
		L_27 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_27, L_28, (bool)0);
	}

IL_0081:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m6CB6822B82779F99D17BE84993F9D8A143DC2DC8 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, double ___1_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		double L_3 = ___1_value;
		Utf8JsonWriter_WriteNumberIndented_m13B0D0697A85DE833A39B91F9817DECBEA5CB992(__this, L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		double L_5 = ___1_value;
		Utf8JsonWriter_WriteNumberMinimized_m8B9E7A2316B33FC3A3FDE17FCDE7949A52FA4D1B(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_m8B9E7A2316B33FC3A3FDE17FCDE7949A52FA4D1B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), ((int32_t)128))), 4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_002e:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_9;
		int32_t L_10 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_4;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0061:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_4;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_23;
		int32_t L_24 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_4;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_25), ((&V_1))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)58);
		double L_27 = ___1_value;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Utf8JsonWriter_TryFormatDouble_m1E46A985C1868AFE99C22B1C4385D3E55409C631(L_27, L_29, (&V_3), NULL);
		V_2 = L_30;
		int32_t L_31;
		L_31 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_32 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_31, L_32)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m13B0D0697A85DE833A39B91F9817DECBEA5CB992 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), ((int32_t)128))), 5)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_003d:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_12;
		int32_t L_13 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_5;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0070:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007f:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_23;
		int32_t L_24 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_5;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_27, L_28, NULL);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_29;
		int32_t L_30 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		int32_t L_31 = V_5;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_31), ((&V_2))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)34);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_5;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_35), ((&V_2))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)58);
		int32_t L_37;
		L_37 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_37;
		int32_t L_38 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		int32_t L_39 = V_5;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_39), ((&V_2))->____length_1);
		*((int8_t*)L_40) = (int8_t)((int32_t)32);
		double L_41 = ___1_value;
		int32_t L_42;
		L_42 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_43;
		L_43 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_42, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Utf8JsonWriter_TryFormatDouble_m1E46A985C1868AFE99C22B1C4385D3E55409C631(L_41, L_43, (&V_4), NULL);
		V_3 = L_44;
		int32_t L_45;
		L_45 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_46 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_45, L_46)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_m9869D2EE00E301C72538F2CD35B483DD82AB39E1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, float ___1_value, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteNumber_m9869D2EE00E301C72538F2CD35B483DD82AB39E1_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		float L_4 = ___1_value;
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteNumber_m0980B7FBD1532C0780D59F571D39AE839B602CB7(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_m0980B7FBD1532C0780D59F571D39AE839B602CB7 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		float L_1 = ___1_value;
		JsonWriterHelper_ValidateSingle_mB5D28135F97269867F8DC0389E382DEA7317DF21_inline(L_1, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		float L_3 = ___1_value;
		Utf8JsonWriter_WriteNumberEscape_mB88E62E1D540E13DE43ED02B8A293E10DD239CC6(__this, L_2, L_3, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_mB88E62E1D540E13DE43ED02B8A293E10DD239CC6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		float L_6 = ___1_value;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteNumberEscapeProperty_m7851660540387DB35E8B5C06D67795B92BAE8664(__this, L_5, L_6, L_7, NULL);
		return;
	}

IL_0020:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		float L_9 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m3D7D358B795DE11AB7AC9F99F94AA1B7B56EF455(__this, L_8, L_9, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_m7851660540387DB35E8B5C06D67795B92BAE8664 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteNumberEscapeProperty_m7851660540387DB35E8B5C06D67795B92BAE8664_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteNumberEscapeProperty_m7851660540387DB35E8B5C06D67795B92BAE8664_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		float L_25 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m3D7D358B795DE11AB7AC9F99F94AA1B7B56EF455(__this, L_24, L_25, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		if (!L_26)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_27;
		L_27 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_27, L_28, (bool)0);
	}

IL_0081:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m3D7D358B795DE11AB7AC9F99F94AA1B7B56EF455 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, float ___1_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		float L_3 = ___1_value;
		Utf8JsonWriter_WriteNumberIndented_m4877F28C19F63A1F2F8B8EDD69F6753E2266F37D(__this, L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		float L_5 = ___1_value;
		Utf8JsonWriter_WriteNumberMinimized_m84A77DE6D8D3E85891776EFEAD0A6217DAF41577(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_m84A77DE6D8D3E85891776EFEAD0A6217DAF41577 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), ((int32_t)128))), 4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_002e:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_9;
		int32_t L_10 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_4;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0061:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_4;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_23;
		int32_t L_24 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_4;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_25), ((&V_1))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)58);
		float L_27 = ___1_value;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Utf8JsonWriter_TryFormatSingle_mDCEC63E655C729E9BB8ECF387BDBDA0804AFCE4E(L_27, L_29, (&V_3), NULL);
		V_2 = L_30;
		int32_t L_31;
		L_31 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_32 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_31, L_32)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m4877F28C19F63A1F2F8B8EDD69F6753E2266F37D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, float ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), ((int32_t)128))), 5)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_003d:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_12;
		int32_t L_13 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_5;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0070:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007f:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_23;
		int32_t L_24 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_5;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_27, L_28, NULL);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_29;
		int32_t L_30 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		int32_t L_31 = V_5;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_31), ((&V_2))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)34);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_5;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_35), ((&V_2))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)58);
		int32_t L_37;
		L_37 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_37;
		int32_t L_38 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		int32_t L_39 = V_5;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_39), ((&V_2))->____length_1);
		*((int8_t*)L_40) = (int8_t)((int32_t)32);
		float L_41 = ___1_value;
		int32_t L_42;
		L_42 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_43;
		L_43 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_42, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Utf8JsonWriter_TryFormatSingle_mDCEC63E655C729E9BB8ECF387BDBDA0804AFCE4E(L_41, L_43, (&V_4), NULL);
		V_3 = L_44;
		int32_t L_45;
		L_45 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_46 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_45, L_46)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidatePropertyNameAndDepth(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidatePropertyNameAndDepth_m24562CD926422D62B270BD3783E5E8EF402D80E3 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)166666666))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1;
		L_1 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		int32_t L_3 = __this->____currentDepth_8;
		ThrowHelper_ThrowInvalidOperationOrArgumentException_mDE8005E5F002F464B22F6013877DBF7FCB31DCEB(L_2, L_3, NULL);
	}

IL_0027:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidateWritingProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2 = __this->____inObject_5;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_3 = __this->____tokenType_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_002d;
		}
	}

IL_001e:
	{
		uint8_t L_4 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)31), 0, (uint8_t)0, L_4, NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidateWritingProperty(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingProperty_mC581A96093E5B8C0F28A38802637D6BA4E6B831B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_0, NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		bool L_2 = __this->____inObject_5;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_3 = __this->____tokenType_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_002d;
		}
	}

IL_001e:
	{
		uint8_t L_4 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)31), 0, (uint8_t)0, L_4, NULL);
	}

IL_002d:
	{
		uint8_t L_5 = ___0_token;
		Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337_inline(__this, L_5, NULL);
	}

IL_0034:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyNameMinimized(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyNameMinimized_m0EFCCAD1A0C86F77B25C0925AC16015F754E0402 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, uint8_t ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), 5));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_0028:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_2;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0058:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_13;
		int32_t L_14 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_2;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_19;
		int32_t L_20 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_2;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_23;
		int32_t L_24 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_2;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_25), ((&V_1))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)58);
		int32_t L_27;
		L_27 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_27;
		int32_t L_28 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_28, 1)), NULL);
		int32_t L_29 = V_2;
		uint8_t* L_30;
		L_30 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_29), ((&V_1))->____length_1);
		uint8_t L_31 = ___1_token;
		*((int8_t*)L_30) = (int8_t)L_31;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyNameIndented(System.ReadOnlySpan`1<System.Char>,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyNameIndented_m736B33C6BC7C7DB3AD529C418DBF33D1A7D61476 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, uint8_t ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), 6)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_0037:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_3;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0067:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_0076:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_3;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_27, L_28, NULL);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_29;
		int32_t L_30 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		int32_t L_31 = V_3;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_31), ((&V_2))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)34);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_33;
		int32_t L_34 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_3;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_35), ((&V_2))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)58);
		int32_t L_37;
		L_37 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_37;
		int32_t L_38 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		int32_t L_39 = V_3;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_39), ((&V_2))->____length_1);
		*((int8_t*)L_40) = (int8_t)((int32_t)32);
		int32_t L_41;
		L_41 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_41;
		int32_t L_42 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_42, 1)), NULL);
		int32_t L_43 = V_3;
		uint8_t* L_44;
		L_44 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_43), ((&V_2))->____length_1);
		uint8_t L_45 = ___1_token;
		*((int8_t*)L_44) = (int8_t)L_45;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::TranscodeAndWrite(System.ReadOnlySpan`1<System.Char>,System.Span`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_escapedPropertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_inline(L_0, MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var);
		V_0 = L_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = V_0;
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___1_output), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = JsonWriterHelper_ToUtf8_m0EC452325B9038CDF4AFC9F74E55A7194674B4F6(L_2, L_4, (&V_2), (&V_3), NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNull_mFAFA6BBF833088F50DE2271255C1367F3B9554FF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteNull_mFAFA6BBF833088F50DE2271255C1367F3B9554FF_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteNull_m8502EAB5D0C3906D9CA6185C285C64057CE8D4C5(G_B2_1, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNull(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNull_m8502EAB5D0C3906D9CA6185C285C64057CE8D4C5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = JsonConstants_get_NullValue_mA5886DDBB16FC136D274B471F912CEEC7A9847AF(NULL);
		V_0 = L_1;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3 = V_0;
		Utf8JsonWriter_WriteLiteralEscape_mA163D8EF30F76707899E124C3D5A15C4563135CF(__this, L_2, L_3, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = ((int32_t)11);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteBoolean(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBoolean_m9DBD27A489E401C44A911BC425FF8BA509AEE75A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, bool ___1_value, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteBoolean_m9DBD27A489E401C44A911BC425FF8BA509AEE75A_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		bool L_4 = ___1_value;
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteBoolean_mCCA1D09791BAD73F07C561A086D4070B5D0B99D6(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteBoolean(System.ReadOnlySpan`1<System.Char>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBoolean_mCCA1D09791BAD73F07C561A086D4070B5D0B99D6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B5_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B6_1 = NULL;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		bool L_1 = ___1_value;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = JsonConstants_get_FalseValue_mF6E16F3E048CAA53A90759098574839A72FB4381(NULL);
		G_B3_0 = L_2;
		goto IL_0015;
	}

IL_0010:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		L_3 = JsonConstants_get_TrueValue_m7875CFE6FDF00788A7122ABE0D7EE9734C4909C4(NULL);
		G_B3_0 = L_3;
	}

IL_0015:
	{
		V_0 = G_B3_0;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = V_0;
		Utf8JsonWriter_WriteLiteralEscape_mA163D8EF30F76707899E124C3D5A15C4563135CF(__this, L_4, L_5, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		bool L_6 = ___1_value;
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_002c;
		}
	}
	{
		G_B6_0 = ((int32_t)10);
		G_B6_1 = G_B4_0;
		goto IL_002e;
	}

IL_002c:
	{
		G_B6_0 = ((int32_t)9);
		G_B6_1 = G_B5_0;
	}

IL_002e:
	{
		NullCheck(G_B6_1);
		G_B6_1->____tokenType_6 = G_B6_0;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralEscape(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralEscape_mA163D8EF30F76707899E124C3D5A15C4563135CF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___1_value;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteLiteralEscapeProperty_m137D937FC00AA3DF3D8E27C6F27A74C5C72EFA2E(__this, L_5, L_6, L_7, NULL);
		return;
	}

IL_0020:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_9 = ___1_value;
		Utf8JsonWriter_WriteLiteralByOptions_m67EFB953CFA613D214AE5D67090503B77609AA8B(__this, L_8, L_9, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralEscapeProperty_m137D937FC00AA3DF3D8E27C6F27A74C5C72EFA2E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteLiteralEscapeProperty_m137D937FC00AA3DF3D8E27C6F27A74C5C72EFA2E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteLiteralEscapeProperty_m137D937FC00AA3DF3D8E27C6F27A74C5C72EFA2E_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_25 = ___1_value;
		Utf8JsonWriter_WriteLiteralByOptions_m67EFB953CFA613D214AE5D67090503B77609AA8B(__this, L_24, L_25, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		if (!L_26)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_27;
		L_27 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_27, L_28, (bool)0);
	}

IL_0081:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralByOptions(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralByOptions_m67EFB953CFA613D214AE5D67090503B77609AA8B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3 = ___1_value;
		Utf8JsonWriter_WriteLiteralIndented_m22D9695F1113A018B1DE308EBD8021062B4B32D7(__this, L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___1_value;
		Utf8JsonWriter_WriteLiteralMinimized_mABF4618CCB17CB384FD691084A4ABE1B3270B61A(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralMinimized(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralMinimized_mABF4618CCB17CB384FD691084A4ABE1B3270B61A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), L_1)), 4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_3;
		L_3 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_2, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_6, NULL);
	}

IL_0030:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_7 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		L_8 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_7, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_8;
		int32_t L_9 = __this->____currentDepth_8;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10;
		L_10 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		int32_t L_12 = V_2;
		uint8_t* L_13;
		L_13 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_12), ((&V_1))->____length_1);
		*((int8_t*)L_13) = (int8_t)((int32_t)44);
	}

IL_0060:
	{
		int32_t L_14;
		L_14 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		int32_t L_16 = V_2;
		uint8_t* L_17;
		L_17 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_16), ((&V_1))->____length_1);
		*((int8_t*)L_17) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_18, L_19, NULL);
		int32_t L_20;
		L_20 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
		int32_t L_22 = V_2;
		uint8_t* L_23;
		L_23 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_22), ((&V_1))->____length_1);
		*((int8_t*)L_23) = (int8_t)((int32_t)34);
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_24;
		int32_t L_25 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		int32_t L_26 = V_2;
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_26), ((&V_1))->____length_1);
		*((int8_t*)L_27) = (int8_t)((int32_t)58);
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___1_value), L_29, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_30;
		L_30 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, L_31)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralIndented(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralIndented_m22D9695F1113A018B1DE308EBD8021062B4B32D7 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), L_3)), 5)), L_4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_6;
		L_6 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_5, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_9 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_9, NULL);
	}

IL_003f:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_10 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11;
		L_11 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_10, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_11;
		int32_t L_12 = __this->____currentDepth_8;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_13;
		int32_t L_14 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_3;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_15), ((&V_2))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)44);
	}

IL_006f:
	{
		uint8_t L_17 = __this->____tokenType_6;
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_18, NULL);
	}

IL_007e:
	{
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20;
		L_20 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_19, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_20, L_21, NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_23 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_24;
		int32_t L_25 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		int32_t L_26 = V_3;
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_26), ((&V_2))->____length_1);
		*((int8_t*)L_27) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_28 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_28, L_29, NULL);
		int32_t L_30;
		L_30 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_30;
		int32_t L_31 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		int32_t L_32 = V_3;
		uint8_t* L_33;
		L_33 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_32), ((&V_2))->____length_1);
		*((int8_t*)L_33) = (int8_t)((int32_t)34);
		int32_t L_34;
		L_34 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_34;
		int32_t L_35 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_35, 1)), NULL);
		int32_t L_36 = V_3;
		uint8_t* L_37;
		L_37 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_36), ((&V_2))->____length_1);
		*((int8_t*)L_37) = (int8_t)((int32_t)58);
		int32_t L_38;
		L_38 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_38;
		int32_t L_39 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_39, 1)), NULL);
		int32_t L_40 = V_3;
		uint8_t* L_41;
		L_41 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_40), ((&V_2))->____length_1);
		*((int8_t*)L_41) = (int8_t)((int32_t)32);
		int32_t L_42;
		L_42 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_43;
		L_43 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_42, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___1_value), L_43, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_44;
		L_44 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_45;
		L_45 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___1_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_44, L_45)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mC0157CB2619F7E79C49D2FF6740DBB3C0A056E8E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteNumber_mC0157CB2619F7E79C49D2FF6740DBB3C0A056E8E_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		int64_t L_4 = ___1_value;
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteNumber_m87ECEC14FE550E5D1EDAD890B6E69C7C6943FBC5(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_m87ECEC14FE550E5D1EDAD890B6E69C7C6943FBC5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_propertyName;
		int64_t L_2 = ___1_value;
		Utf8JsonWriter_WriteNumberEscape_mC4FA38A41DD72A0DF60E15C80A05BB568D7745CC(__this, L_1, L_2, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumber(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumber_mF2EA34984EDA6CAEAB9C8C03545A16BC7036F964 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, int32_t ___1_value, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteNumber_mF2EA34984EDA6CAEAB9C8C03545A16BC7036F964_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		int32_t L_4 = ___1_value;
		NullCheck(G_B2_1);
		Utf8JsonWriter_WriteNumber_m87ECEC14FE550E5D1EDAD890B6E69C7C6943FBC5(G_B2_1, L_3, ((int64_t)L_4), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscape(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscape_mC4FA38A41DD72A0DF60E15C80A05BB568D7745CC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_propertyName;
		int64_t L_6 = ___1_value;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteNumberEscapeProperty_m9EA722C9B508281880E92642AE71B93BD4EBC1DB(__this, L_5, L_6, L_7, NULL);
		return;
	}

IL_0020:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		int64_t L_9 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m45309151BC3C6353060EFF5709C880455F448B72(__this, L_8, L_9, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberEscapeProperty_m9EA722C9B508281880E92642AE71B93BD4EBC1DB (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, int32_t ___2_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteNumberEscapeProperty_m9EA722C9B508281880E92642AE71B93BD4EBC1DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteNumberEscapeProperty_m9EA722C9B508281880E92642AE71B93BD4EBC1DB_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		int64_t L_25 = ___1_value;
		Utf8JsonWriter_WriteNumberByOptions_m45309151BC3C6353060EFF5709C880455F448B72(__this, L_24, L_25, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		if (!L_26)
		{
			goto IL_0081;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_27;
		L_27 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_0;
		NullCheck(L_27);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_27, L_28, (bool)0);
	}

IL_0081:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberByOptions(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberByOptions_m45309151BC3C6353060EFF5709C880455F448B72 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int64_t ___1_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		int64_t L_3 = ___1_value;
		Utf8JsonWriter_WriteNumberIndented_m1C30DE68F82C206A47F573ADF388FA1631D75BD1(__this, L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		int64_t L_5 = ___1_value;
		Utf8JsonWriter_WriteNumberMinimized_m8EF0B11C77420A79A8A45E9550769D5849D4053B(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberMinimized(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberMinimized_m8EF0B11C77420A79A8A45E9550769D5849D4053B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), ((int32_t)20))), 4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_002b:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_9;
		int32_t L_10 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_4;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_005e:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_19;
		int32_t L_20 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_4;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_23;
		int32_t L_24 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_4;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_25), ((&V_1))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)58);
		int64_t L_27 = ___1_value;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_5), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_30 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Utf8Formatter_TryFormat_m009FCCBE35045EC8F6B1E7C5D7054DEE2B41BF4F(L_27, L_29, (&V_3), L_30, NULL);
		V_2 = L_31;
		int32_t L_32;
		L_32 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_33 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_32, L_33)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberIndented(System.ReadOnlySpan`1<System.Char>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberIndented_m1C30DE68F82C206A47F573ADF388FA1631D75BD1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), ((int32_t)20))), 5)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_003a:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_12;
		int32_t L_13 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_5;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_006d:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007c;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007c:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_23;
		int32_t L_24 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_5;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_27, L_28, NULL);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_29;
		int32_t L_30 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		int32_t L_31 = V_5;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_31), ((&V_2))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)34);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_33;
		int32_t L_34 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_5;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_35), ((&V_2))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)58);
		int32_t L_37;
		L_37 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_37;
		int32_t L_38 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		int32_t L_39 = V_5;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_39), ((&V_2))->____length_1);
		*((int8_t*)L_40) = (int8_t)((int32_t)32);
		int64_t L_41 = ___1_value;
		int32_t L_42;
		L_42 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_43;
		L_43 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_42, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_6), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_44 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = Utf8Formatter_TryFormat_m009FCCBE35045EC8F6B1E7C5D7054DEE2B41BF4F(L_41, L_43, (&V_4), L_44, NULL);
		V_3 = L_45;
		int32_t L_46;
		L_46 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_47 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_46, L_47)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyName_m996942A298DED618DCBE28108F27E373B2E5D95F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* G_B1_1 = NULL;
	{
		String_t* L_0 = ___0_propertyName;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WritePropertyName_m996942A298DED618DCBE28108F27E373B2E5D95F_RuntimeMethod_var)));
	}

IL_0011:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3;
		L_3 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(G_B2_0, NULL);
		NullCheck(G_B2_1);
		Utf8JsonWriter_WritePropertyName_mD5C11D2F04DD4116BD2609292A3B2D05E1C357B2(G_B2_1, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyName_mD5C11D2F04DD4116BD2609292A3B2D05E1C357B2 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline(L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_2 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_3;
		L_3 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_2, NULL);
		int32_t L_4;
		L_4 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_1, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6 = ___0_propertyName;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteStringEscapeProperty_mCD08606811907E99503A17C244B37E19D66831C9(__this, L_6, L_7, NULL);
		goto IL_002d;
	}

IL_0026:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8 = ___0_propertyName;
		Utf8JsonWriter_WriteStringByOptionsPropertyName_mD1E3902B7A1A32B78FD5845C5756B954118412A4(__this, L_8, NULL);
	}

IL_002d:
	{
		int32_t L_9 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)(L_9&((int32_t)2147483647LL)));
		__this->____tokenType_6 = 5;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeProperty(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeProperty_mCD08606811907E99503A17C244B37E19D66831C9 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, int32_t ___1_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteStringEscapeProperty_mCD08606811907E99503A17C244B37E19D66831C9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Il2CppChar* V_4 = NULL;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0 = ___1_firstEscapeIndexProp;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_2 = ___1_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_1, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_5;
		L_5 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7;
		L_7 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_5, L_6);
		V_0 = L_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		L_9 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_8, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_2 = L_9;
		goto IL_0043;
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		if ((uintptr_t)((uintptr_t)L_10) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteStringEscapeProperty_mCD08606811907E99503A17C244B37E19D66831C9_RuntimeMethod_var);
		intptr_t L_11 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_10), 2));
		int8_t* L_12 = (int8_t*) (L_11 ? alloca(L_11) : NULL);
		memset(L_12, 0, L_11);
		V_4 = (Il2CppChar*)(L_12);
		Il2CppChar* L_13 = V_4;
		int32_t L_14 = V_1;
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&V_2), (void*)L_13, L_14, Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
	}

IL_0043:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_15 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_2;
		int32_t L_17 = ___1_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_18 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_19;
		L_19 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_15, L_16, L_17, L_19, (&V_3), NULL);
		int32_t L_20 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21;
		L_21 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_20, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_22;
		L_22 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_21, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		___0_propertyName = L_22;
	}

IL_0068:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_23 = ___0_propertyName;
		Utf8JsonWriter_WriteStringByOptionsPropertyName_mD1E3902B7A1A32B78FD5845C5756B954118412A4(__this, L_23, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = V_0;
		if (!L_24)
		{
			goto IL_007e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_25;
		L_25 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		NullCheck(L_25);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_25, L_26, (bool)0);
	}

IL_007e:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptionsPropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptionsPropertyName_mD1E3902B7A1A32B78FD5845C5756B954118412A4 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		Utf8JsonWriter_WriteStringIndentedPropertyName_mCFD4644263D11B444714D883359C350CFFE46C3F(__this, L_2, NULL);
		return;
	}

IL_001b:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___0_propertyName;
		Utf8JsonWriter_WriteStringMinimizedPropertyName_m235EA20291770CBE9C0EF62ACB96CE02E213236F(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimizedPropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimizedPropertyName_m235EA20291770CBE9C0EF62ACB96CE02E213236F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), 4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_0028:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_2;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0058:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_13;
		int32_t L_14 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_2;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_19;
		int32_t L_20 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_2;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_23;
		int32_t L_24 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_2;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_25), ((&V_1))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)58);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndentedPropertyName(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndentedPropertyName_mCFD4644263D11B444714D883359C350CFFE46C3F (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), 5)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_0037:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_3;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0067:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_0076;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_0076:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_23;
		int32_t L_24 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_3;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_27 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_28 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_27, L_28, NULL);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_29;
		int32_t L_30 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, 1)), NULL);
		int32_t L_31 = V_3;
		uint8_t* L_32;
		L_32 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_31), ((&V_2))->____length_1);
		*((int8_t*)L_32) = (int8_t)((int32_t)34);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_33;
		int32_t L_34 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_3;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_35), ((&V_2))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)58);
		int32_t L_37;
		L_37 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_37;
		int32_t L_38 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_38, 1)), NULL);
		int32_t L_39 = V_3;
		uint8_t* L_40;
		L_40 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_39), ((&V_2))->____length_1);
		*((int8_t*)L_40) = (int8_t)((int32_t)32);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WritePropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WritePropertyName_m3FAD66D83E22D24D7263E1079BB6890810EFC2A5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8PropertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_utf8PropertyName;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateProperty_m1F34A8D5BFC3B8AEF6935B5B42C1A0045D07162B_inline(L_0, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_utf8PropertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_2 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_3;
		L_3 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_2, NULL);
		int32_t L_4;
		L_4 = JsonWriterHelper_NeedsEscaping_m2C8304CA115F8E6DEF835C700499D77387F13CA8(L_1, L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0026;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_6 = ___0_utf8PropertyName;
		int32_t L_7 = V_0;
		Utf8JsonWriter_WriteStringEscapeProperty_mD9E3F7403C744CFF3A069A9DFE3BCD459A768211(__this, L_6, L_7, NULL);
		goto IL_002d;
	}

IL_0026:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8 = ___0_utf8PropertyName;
		Utf8JsonWriter_WriteStringByOptionsPropertyName_m39086B7083EDA5468602039C03E6F04B30D255FC(__this, L_8, NULL);
	}

IL_002d:
	{
		int32_t L_9 = __this->____currentDepth_8;
		__this->____currentDepth_8 = ((int32_t)(L_9&((int32_t)2147483647LL)));
		__this->____tokenType_6 = 5;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeProperty(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeProperty_mD9E3F7403C744CFF3A069A9DFE3BCD459A768211 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8PropertyName, int32_t ___1_firstEscapeIndexProp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	uint8_t* V_4 = NULL;
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		int32_t L_0 = ___1_firstEscapeIndexProp;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8PropertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_2 = ___1_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_1, L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_5;
		L_5 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_5, L_6);
		V_0 = L_7;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_8, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		V_2 = L_9;
		goto IL_0041;
	}

IL_0031:
	{
		int32_t L_10 = V_1;
		uintptr_t L_11 = ((uintptr_t)L_10);
		int8_t* L_12 = (int8_t*) (L_11 ? alloca(L_11) : NULL);
		memset(L_12, 0, L_11);
		V_4 = (uint8_t*)(L_12);
		uint8_t* L_13 = V_4;
		int32_t L_14 = V_1;
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&V_2), (void*)L_13, L_14, Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
	}

IL_0041:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_15 = ___0_utf8PropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_16 = V_2;
		int32_t L_17 = ___1_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_18 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_19;
		L_19 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_m564702FF6E13FE62D005D7AFEC973C086288877D(L_15, L_16, L_17, L_19, (&V_3), NULL);
		int32_t L_20 = V_3;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_2), 0, L_20, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_22;
		L_22 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_21, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		___0_utf8PropertyName = L_22;
	}

IL_0066:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_23 = ___0_utf8PropertyName;
		Utf8JsonWriter_WriteStringByOptionsPropertyName_m39086B7083EDA5468602039C03E6F04B30D255FC(__this, L_23, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_0;
		if (!L_24)
		{
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_25;
		L_25 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		NullCheck(L_25);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(T[],System.Boolean) */, L_25, L_26, (bool)0);
	}

IL_007c:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptionsPropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptionsPropertyName_m39086B7083EDA5468602039C03E6F04B30D255FC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8PropertyName, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_utf8PropertyName;
		Utf8JsonWriter_WriteStringIndentedPropertyName_m18DEAB086D3C46BBD359C512045A1A77EB513141(__this, L_2, NULL);
		return;
	}

IL_001b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3 = ___0_utf8PropertyName;
		Utf8JsonWriter_WriteStringMinimizedPropertyName_m7629BDC4144A3DB500FEDA53A2FBF3EB536D4FE0(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimizedPropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimizedPropertyName_m7629BDC4144A3DB500FEDA53A2FBF3EB536D4FE0 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedPropertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 3));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_3;
		L_3 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_2, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_5 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) >= ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_6, NULL);
	}

IL_002a:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_7 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		L_8 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_7, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_8;
		int32_t L_9 = __this->____currentDepth_8;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_10;
		L_10 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		int32_t L_12 = V_3;
		uint8_t* L_13;
		L_13 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_12), ((&V_2))->____length_1);
		*((int8_t*)L_13) = (int8_t)((int32_t)44);
	}

IL_005a:
	{
		int32_t L_14;
		L_14 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_14;
		int32_t L_15 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		int32_t L_16 = V_3;
		uint8_t* L_17;
		L_17 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_16), ((&V_2))->____length_1);
		*((int8_t*)L_17) = (int8_t)((int32_t)34);
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_escapedPropertyName), L_19, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_20;
		L_20 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, L_21)), NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_23, 1)), NULL);
		int32_t L_24 = V_3;
		uint8_t* L_25;
		L_25 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_24), ((&V_2))->____length_1);
		*((int8_t*)L_25) = (int8_t)((int32_t)34);
		int32_t L_26;
		L_26 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_26;
		int32_t L_27 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_27, 1)), NULL);
		int32_t L_28 = V_3;
		uint8_t* L_29;
		L_29 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_28), ((&V_2))->____length_1);
		*((int8_t*)L_29) = (int8_t)((int32_t)58);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndentedPropertyName(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndentedPropertyName_m18DEAB086D3C46BBD359C512045A1A77EB513141 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedPropertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 4));
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_3, 1)), L_4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_6;
		L_6 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_5, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_8 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = V_2;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_9, NULL);
	}

IL_0039:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_10 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11;
		L_11 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_10, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_3 = L_11;
		int32_t L_12 = __this->____currentDepth_8;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_15), ((&V_3))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)44);
	}

IL_006c:
	{
		uint8_t L_17 = __this->____tokenType_6;
		if (!L_17)
		{
			goto IL_007b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_3;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_18, NULL);
	}

IL_007b:
	{
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20;
		L_20 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_3), L_19, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_20, L_21, NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_23 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_24;
		int32_t L_25 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		int32_t L_26 = V_4;
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_26), ((&V_3))->____length_1);
		*((int8_t*)L_27) = (int8_t)((int32_t)34);
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_3), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_escapedPropertyName), L_29, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_30;
		L_30 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_31;
		L_31 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, L_31)), NULL);
		int32_t L_32;
		L_32 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_32;
		int32_t L_33 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_33, 1)), NULL);
		int32_t L_34 = V_4;
		uint8_t* L_35;
		L_35 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_34), ((&V_3))->____length_1);
		*((int8_t*)L_35) = (int8_t)((int32_t)34);
		int32_t L_36;
		L_36 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_36;
		int32_t L_37 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_37, 1)), NULL);
		int32_t L_38 = V_4;
		uint8_t* L_39;
		L_39 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_38), ((&V_3))->____length_1);
		*((int8_t*)L_39) = (int8_t)((int32_t)58);
		int32_t L_40;
		L_40 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_40;
		int32_t L_41 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_41, 1)), NULL);
		int32_t L_42 = V_4;
		uint8_t* L_43;
		L_43 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_42), ((&V_3))->____length_1);
		*((int8_t*)L_43) = (int8_t)((int32_t)32);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteString_mAD191501591743B189382ACCF57DEB2373E3BFA1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_propertyName, String_t* ___1_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_propertyName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36D254F59ED91804C13D501446692D41472D96E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Utf8JsonWriter_WriteString_mAD191501591743B189382ACCF57DEB2373E3BFA1_RuntimeMethod_var)));
	}

IL_000e:
	{
		String_t* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_3 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4;
		L_4 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_3, NULL);
		Utf8JsonWriter_WriteNull_m8502EAB5D0C3906D9CA6185C285C64057CE8D4C5(__this, L_4, NULL);
		return;
	}

IL_001e:
	{
		String_t* L_5 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		L_6 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_5, NULL);
		String_t* L_7 = ___1_value;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		L_8 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_7, NULL);
		Utf8JsonWriter_WriteString_m90CA48D3FEE6C49D1E86A85C2D30DDE99CB81060(__this, L_6, L_8, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteString(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteString_m90CA48D3FEE6C49D1E86A85C2D30DDE99CB81060 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidatePropertyAndValue_m68A3F4A91A8A150AAD3DE5B8990226783DA925D4_inline(L_0, L_1, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___1_value;
		Utf8JsonWriter_WriteStringEscape_m036B8D134EE72494D0F696F996289515CBFEF120(__this, L_2, L_3, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 7;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscape(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscape_m036B8D134EE72494D0F696F996289515CBFEF120 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___1_value;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_5 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_6;
		L_6 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_5, NULL);
		int32_t L_7;
		L_7 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_4, L_6, NULL);
		V_1 = L_7;
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_8, L_9))) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0036;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_11 = ___1_value;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940(__this, L_10, L_11, L_12, L_13, NULL);
		return;
	}

IL_0036:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_14 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_15 = ___1_value;
		Utf8JsonWriter_WriteStringByOptions_mFEE3F5B91591C1D4D06933CF304916B24E9E00AD(__this, L_14, L_15, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapePropertyOrValue(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, int32_t ___2_firstEscapeIndexProp, int32_t ___3_firstEscapeIndexVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Il2CppChar* V_5 = NULL;
	int32_t V_6 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		V_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0 = ___3_firstEscapeIndexVal;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_2 = ___3_firstEscapeIndexVal;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_1, L_2, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)256))))
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_5;
		L_5 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7;
		L_7 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_5, L_6);
		V_0 = L_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_0;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		L_9 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_8, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_3 = L_9;
		goto IL_0047;
	}

IL_0035:
	{
		int32_t L_10 = V_2;
		if ((uintptr_t)((uintptr_t)L_10) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940_RuntimeMethod_var);
		intptr_t L_11 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_10), 2));
		int8_t* L_12 = (int8_t*) (L_11 ? alloca(L_11) : NULL);
		memset(L_12, 0, L_11);
		V_5 = (Il2CppChar*)(L_12);
		Il2CppChar* L_13 = V_5;
		int32_t L_14 = V_2;
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&V_3), (void*)L_13, L_14, Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
	}

IL_0047:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_15 = ___1_value;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_3;
		int32_t L_17 = ___3_firstEscapeIndexVal;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_18 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_19;
		L_19 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_15, L_16, L_17, L_19, (&V_4), NULL);
		int32_t L_20 = V_4;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_21;
		L_21 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_3), 0, L_20, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_22;
		L_22 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_21, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		___1_value = L_22;
	}

IL_006e:
	{
		int32_t L_23 = ___2_firstEscapeIndexProp;
		if ((((int32_t)L_23) == ((int32_t)(-1))))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_24;
		L_24 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_25 = ___2_firstEscapeIndexProp;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_24, L_25, NULL);
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) <= ((int32_t)((int32_t)256))))
		{
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_28;
		L_28 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_29 = V_6;
		NullCheck(L_28);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30;
		L_30 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_28, L_29);
		V_1 = L_30;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = V_1;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_32;
		L_32 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_31, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_7 = L_32;
		goto IL_00b5;
	}

IL_00a1:
	{
		int32_t L_33 = V_6;
		if ((uintptr_t)((uintptr_t)L_33) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteStringEscapePropertyOrValue_m3E7D457ED2C0079F83E7B33594BB5A6CE870B940_RuntimeMethod_var);
		intptr_t L_34 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_33), 2));
		int8_t* L_35 = (int8_t*) (L_34 ? alloca(L_34) : NULL);
		memset(L_35, 0, L_34);
		V_9 = (Il2CppChar*)(L_35);
		Il2CppChar* L_36 = V_9;
		int32_t L_37 = V_6;
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&V_7), (void*)L_36, L_37, Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
	}

IL_00b5:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_38 = ___0_propertyName;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_39 = V_7;
		int32_t L_40 = ___2_firstEscapeIndexProp;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_41 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_42;
		L_42 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_41, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_38, L_39, L_40, L_42, (&V_8), NULL);
		int32_t L_43 = V_8;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_44;
		L_44 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_7), 0, L_43, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_45;
		L_45 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_44, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		___0_propertyName = L_45;
	}

IL_00dc:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_46 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_47 = ___1_value;
		Utf8JsonWriter_WriteStringByOptions_mFEE3F5B91591C1D4D06933CF304916B24E9E00AD(__this, L_46, L_47, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_48 = V_0;
		if (!L_48)
		{
			goto IL_00f3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_49;
		L_49 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = V_0;
		NullCheck(L_49);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_49, L_50, (bool)0);
	}

IL_00f3:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = V_1;
		if (!L_51)
		{
			goto IL_0102;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_52;
		L_52 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = V_1;
		NullCheck(L_52);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_52, L_53, (bool)0);
	}

IL_0102:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptions(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptions_mFEE3F5B91591C1D4D06933CF304916B24E9E00AD (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___1_value;
		Utf8JsonWriter_WriteStringIndented_m1057258DE78CC00E039FAAFDDFDE573D1EF48FD5(__this, L_2, L_3, NULL);
		return;
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_4 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___1_value;
		Utf8JsonWriter_WriteStringMinimized_m6B2C31C13FA3A413F0313DC5709D57805BD5BA8D(__this, L_4, L_5, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimized(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimized_m6B2C31C13FA3A413F0313DC5709D57805BD5BA8D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_escapedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_escapedValue), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_0, L_1)), 3)), 6));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_3;
		L_3 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_2, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_5 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) >= ((int32_t)L_5)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_6, NULL);
	}

IL_0030:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_7 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		L_8 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_7, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_8;
		int32_t L_9 = __this->____currentDepth_8;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_10;
		L_10 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_10;
		int32_t L_11 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		int32_t L_12 = V_2;
		uint8_t* L_13;
		L_13 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_12), ((&V_1))->____length_1);
		*((int8_t*)L_13) = (int8_t)((int32_t)44);
	}

IL_0060:
	{
		int32_t L_14;
		L_14 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_14;
		int32_t L_15 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		int32_t L_16 = V_2;
		uint8_t* L_17;
		L_17 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_16), ((&V_1))->____length_1);
		*((int8_t*)L_17) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_18 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_18, L_19, NULL);
		int32_t L_20;
		L_20 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
		int32_t L_22 = V_2;
		uint8_t* L_23;
		L_23 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_22), ((&V_1))->____length_1);
		*((int8_t*)L_23) = (int8_t)((int32_t)34);
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_24;
		int32_t L_25 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		int32_t L_26 = V_2;
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_26), ((&V_1))->____length_1);
		*((int8_t*)L_27) = (int8_t)((int32_t)58);
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_28;
		int32_t L_29 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_29, 1)), NULL);
		int32_t L_30 = V_2;
		uint8_t* L_31;
		L_31 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_30), ((&V_1))->____length_1);
		*((int8_t*)L_31) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_32 = ___1_escapedValue;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_33 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_32, L_33, NULL);
		int32_t L_34;
		L_34 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_34;
		int32_t L_35 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_35, 1)), NULL);
		int32_t L_36 = V_2;
		uint8_t* L_37;
		L_37 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_36), ((&V_1))->____length_1);
		*((int8_t*)L_37) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndented(System.ReadOnlySpan`1<System.Char>,System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndented_m1057258DE78CC00E039FAAFDDFDE573D1EF48FD5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_escapedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedPropertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_3;
		L_3 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_escapedValue), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, L_3)), 3)))), 7)), L_4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_6;
		L_6 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_5, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_8 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_9 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_9, NULL);
	}

IL_003f:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_10 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11;
		L_11 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_10, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_11;
		int32_t L_12 = __this->____currentDepth_8;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_13;
		int32_t L_14 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_3;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_15), ((&V_2))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)44);
	}

IL_006f:
	{
		uint8_t L_17 = __this->____tokenType_6;
		if (!L_17)
		{
			goto IL_007e;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_18, NULL);
	}

IL_007e:
	{
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20;
		L_20 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_19, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_20, L_21, NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_23 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_24;
		int32_t L_25 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		int32_t L_26 = V_3;
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_26), ((&V_2))->____length_1);
		*((int8_t*)L_27) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_28 = ___0_escapedPropertyName;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_28, L_29, NULL);
		int32_t L_30;
		L_30 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_30;
		int32_t L_31 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		int32_t L_32 = V_3;
		uint8_t* L_33;
		L_33 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_32), ((&V_2))->____length_1);
		*((int8_t*)L_33) = (int8_t)((int32_t)34);
		int32_t L_34;
		L_34 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_34;
		int32_t L_35 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_35, 1)), NULL);
		int32_t L_36 = V_3;
		uint8_t* L_37;
		L_37 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_36), ((&V_2))->____length_1);
		*((int8_t*)L_37) = (int8_t)((int32_t)58);
		int32_t L_38;
		L_38 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_38;
		int32_t L_39 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_39, 1)), NULL);
		int32_t L_40 = V_3;
		uint8_t* L_41;
		L_41 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_40), ((&V_2))->____length_1);
		*((int8_t*)L_41) = (int8_t)((int32_t)32);
		int32_t L_42;
		L_42 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_42;
		int32_t L_43 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_43, 1)), NULL);
		int32_t L_44 = V_3;
		uint8_t* L_45;
		L_45 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_44), ((&V_2))->____length_1);
		*((int8_t*)L_45) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_46 = ___1_escapedValue;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_47 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_46, L_47, NULL);
		int32_t L_48;
		L_48 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_48;
		int32_t L_49 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_49, 1)), NULL);
		int32_t L_50 = V_3;
		uint8_t* L_51;
		L_51 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_50), ((&V_2))->____length_1);
		*((int8_t*)L_51) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_mE130AF1B2A2C307C9A4BE3282CDCA46E708BDAC0 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ___0_value;
		Utf8JsonWriter_WriteStringValueIndented_mACD09DBFF483579AB0421C839E4491979D549CEC(__this, L_2, NULL);
		goto IL_0023;
	}

IL_001c:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3 = ___0_value;
		Utf8JsonWriter_WriteStringValueMinimized_mE92796D227AC277168F1B2DFBF30EE80C5877C9D(__this, L_3, NULL);
	}

IL_0023:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 7;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValueMinimized(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValueMinimized_mE92796D227AC277168F1B2DFBF30EE80C5877C9D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		V_0 = ((int32_t)36);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_4, NULL);
	}

IL_001f:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		L_6 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_5, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_6;
		int32_t L_7 = __this->____currentDepth_8;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_8;
		L_8 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_8;
		int32_t L_9 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		int32_t L_10 = V_5;
		uint8_t* L_11;
		L_11 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_10), ((&V_1))->____length_1);
		*((int8_t*)L_11) = (int8_t)((int32_t)44);
	}

IL_0052:
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_12;
		int32_t L_13 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_5;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_14), ((&V_1))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)34);
		uintptr_t L_16 = ((uintptr_t)((int32_t)33));
		int8_t* L_17 = (int8_t*) (L_16 ? alloca(L_16) : NULL);
		memset(L_17, 0, L_16);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_18), (void*)(L_17), ((int32_t)33), /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_6 = L_18;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19 = V_6;
		V_2 = L_19;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_20 = ___0_value;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_22 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_dateTimeStandardFormat_13;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Utf8Formatter_TryFormat_mB5EBFC2ECB28BBBBD3378675AE339699322DE520(L_20, L_21, (&V_4), L_22, NULL);
		V_3 = L_23;
		int32_t L_24 = V_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_2), 0, L_24, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_TrimDateTimeOffset_mAC5CD5A22C382458B18E1A5316289454789490BC(L_25, (&V_4), NULL);
		int32_t L_26 = V_4;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27;
		L_27 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_2), 0, L_26, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		V_7 = L_27;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		L_29 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_28, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_7), L_29, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		int32_t L_30;
		L_30 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_31 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_30, L_31)), NULL);
		int32_t L_32;
		L_32 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_32;
		int32_t L_33 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_33, 1)), NULL);
		int32_t L_34 = V_5;
		uint8_t* L_35;
		L_35 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_34), ((&V_1))->____length_1);
		*((int8_t*)L_35) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValueIndented(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValueIndented_mACD09DBFF483579AB0421C839E4491979D549CEC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)33))), 3)), L_2));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_3, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_7, NULL);
	}

IL_0030:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_8 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_8, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_9;
		int32_t L_10 = __this->____currentDepth_8;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_11;
		L_11 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_6 = L_11;
		int32_t L_12 = V_6;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		int32_t L_13 = V_6;
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_13), ((&V_2))->____length_1);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
	}

IL_0063:
	{
		uint8_t L_15 = __this->____tokenType_6;
		if ((((int32_t)L_15) == ((int32_t)5)))
		{
			goto IL_009c;
		}
	}
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007b:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
	}

IL_009c:
	{
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_6 = L_23;
		int32_t L_24 = V_6;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_24, 1)), NULL);
		int32_t L_25 = V_6;
		uint8_t* L_26;
		L_26 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_25), ((&V_2))->____length_1);
		*((int8_t*)L_26) = (int8_t)((int32_t)34);
		uintptr_t L_27 = ((uintptr_t)((int32_t)33));
		int8_t* L_28 = (int8_t*) (L_27 ? alloca(L_27) : NULL);
		memset(L_28, 0, L_27);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_29), (void*)(L_28), ((int32_t)33), /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_7 = L_29;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_30 = V_7;
		V_3 = L_30;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31 = ___0_value;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_33 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_dateTimeStandardFormat_13;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Utf8Formatter_TryFormat_mB5EBFC2ECB28BBBBD3378675AE339699322DE520(L_31, L_32, (&V_5), L_33, NULL);
		V_4 = L_34;
		int32_t L_35 = V_5;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_36;
		L_36 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_3), 0, L_35, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_TrimDateTimeOffset_mAC5CD5A22C382458B18E1A5316289454789490BC(L_36, (&V_5), NULL);
		int32_t L_37 = V_5;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_38;
		L_38 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_3), 0, L_37, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		V_8 = L_38;
		int32_t L_39;
		L_39 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_40;
		L_40 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_39, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542((&V_8), L_40, Span_1_CopyTo_m7A06ABD95EC3209F4FC307CAB38FD87202A88542_RuntimeMethod_var);
		int32_t L_41;
		L_41 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_42 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_41, L_42)), NULL);
		int32_t L_43;
		L_43 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_6 = L_43;
		int32_t L_44 = V_6;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_44, 1)), NULL);
		int32_t L_45 = V_6;
		uint8_t* L_46;
		L_46 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_45), ((&V_2))->____length_1);
		*((int8_t*)L_46) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m95366FE40CF93FC6091A43A618B70867460869D6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_2 = ___0_value;
		Utf8JsonWriter_WriteNumberValueIndented_m2E96C373C9B770E458A9F1CD50B2C603842F2CC5(__this, L_2, NULL);
		goto IL_0023;
	}

IL_001c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_3 = ___0_value;
		Utf8JsonWriter_WriteNumberValueMinimized_m4F0299106C4EAB1CF9373B92AD508A79B8E114ED(__this, L_3, NULL);
	}

IL_0023:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_m4F0299106C4EAB1CF9373B92AD508A79B8E114ED (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		V_0 = ((int32_t)32);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_4, NULL);
	}

IL_001f:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		L_6 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_5, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_6;
		int32_t L_7 = __this->____currentDepth_8;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_8;
		L_8 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		int32_t L_10 = V_4;
		uint8_t* L_11;
		L_11 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_10), ((&V_1))->____length_1);
		*((int8_t*)L_11) = (int8_t)((int32_t)44);
	}

IL_0052:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_12 = ___0_value;
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_14;
		L_14 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_13, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_5), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_15 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormat_m80E15F38510D89E386E290D847E9B3D691FF092A(L_12, L_14, (&V_3), L_15, NULL);
		V_2 = L_16;
		int32_t L_17;
		L_17 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_18 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_17, L_18)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_m2E96C373C9B770E458A9F1CD50B2C603842F2CC5 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)31))), 1)), L_2));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_3, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_7, NULL);
	}

IL_0030:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_8 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_8, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_9;
		int32_t L_10 = __this->____currentDepth_8;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_11;
		L_11 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_11;
		int32_t L_12 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		int32_t L_13 = V_5;
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_13), ((&V_2))->____length_1);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
	}

IL_0063:
	{
		uint8_t L_15 = __this->____tokenType_6;
		if ((((int32_t)L_15) == ((int32_t)5)))
		{
			goto IL_009c;
		}
	}
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007b:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
	}

IL_009c:
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_23 = ___0_value;
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_6), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_26 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Utf8Formatter_TryFormat_m80E15F38510D89E386E290D847E9B3D691FF092A(L_23, L_25, (&V_4), L_26, NULL);
		V_3 = L_27;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_29 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_28, L_29)), NULL);
		return;
	}
}
// System.Boolean System.Text.Json.Utf8JsonWriter::TryFormatDouble(System.Double,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonWriter_TryFormatDouble_m1E46A985C1868AFE99C22B1C4385D3E55409C631 (double ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6B9449F80C0026A5DD66BBA64B81E037161067A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789((&___0_value), _stringLiteralB6B9449F80C0026A5DD66BBA64B81E037161067A, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4;
		L_4 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t* L_5 = ___2_bytesWritten;
		*((int32_t*)L_5) = (int32_t)0;
		return (bool)0;
	}

IL_0026:
	{
	}
	try
	{// begin try (depth: 1)
		{
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
			L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_7 = V_0;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
			V_1 = L_8;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
			if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) <= ((int32_t)L_10)))
			{
				goto IL_0046_1;
			}
		}
		{
			int32_t* L_11 = ___2_bytesWritten;
			*((int32_t*)L_11) = (int32_t)0;
			V_2 = (bool)0;
			goto IL_005e;
		}

IL_0046_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
			Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_13 = ___1_destination;
			MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_inline(L_12, L_13, MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_RuntimeMethod_var);
			int32_t* L_14 = ___2_bytesWritten;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
			NullCheck(L_15);
			*((int32_t*)L_14) = (int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length));
			V_2 = (bool)1;
			goto IL_005e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0056;
		}
		throw e;
	}

CATCH_0056:
	{// begin catch(System.Object)
		RuntimeObject* L_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		int32_t* L_17 = ___2_bytesWritten;
		*((int32_t*)L_17) = (int32_t)0;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_005e;
	}// end catch (depth: 1)

IL_005e:
	{
		bool L_18 = V_2;
		return L_18;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m94C41B349B7D55EB269FA36E4454661C72DED51D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateSingle_mB5D28135F97269867F8DC0389E382DEA7317DF21_inline(L_0, NULL);
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_2;
		L_2 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		float L_3 = ___0_value;
		Utf8JsonWriter_WriteNumberValueIndented_mE3555B7FFB2B32EFB3F1D37B4EF919F8A4D2DCE1(__this, L_3, NULL);
		goto IL_0029;
	}

IL_0022:
	{
		float L_4 = ___0_value;
		Utf8JsonWriter_WriteNumberValueMinimized_m58D6CF2A5BB517EFB6EF5D090C42DCEC11C5F1B6(__this, L_4, NULL);
	}

IL_0029:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_m58D6CF2A5BB517EFB6EF5D090C42DCEC11C5F1B6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = ((int32_t)129);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)L_3)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_4, NULL);
	}

IL_0022:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		L_6 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_5, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_6;
		int32_t L_7 = __this->____currentDepth_8;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8;
		L_8 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		int32_t L_10 = V_4;
		uint8_t* L_11;
		L_11 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_10), ((&V_1))->____length_1);
		*((int8_t*)L_11) = (int8_t)((int32_t)44);
	}

IL_0055:
	{
		float L_12 = ___0_value;
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_14;
		L_14 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_13, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Utf8JsonWriter_TryFormatSingle_mDCEC63E655C729E9BB8ECF387BDBDA0804AFCE4E(L_12, L_14, (&V_3), NULL);
		V_2 = L_15;
		int32_t L_16;
		L_16 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_17 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_16, L_17)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_mE3555B7FFB2B32EFB3F1D37B4EF919F8A4D2DCE1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)128))), 1)), L_2));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_3, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_7, NULL);
	}

IL_0033:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_8 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_8, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_9;
		int32_t L_10 = __this->____currentDepth_8;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_11;
		L_11 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_11;
		int32_t L_12 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		int32_t L_13 = V_5;
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_13), ((&V_2))->____length_1);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
	}

IL_0066:
	{
		uint8_t L_15 = __this->____tokenType_6;
		if ((((int32_t)L_15) == ((int32_t)5)))
		{
			goto IL_009f;
		}
	}
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007e;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007e:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
	}

IL_009f:
	{
		float L_23 = ___0_value;
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Utf8JsonWriter_TryFormatSingle_mDCEC63E655C729E9BB8ECF387BDBDA0804AFCE4E(L_23, L_25, (&V_4), NULL);
		V_3 = L_26;
		int32_t L_27;
		L_27 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_28 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_27, L_28)), NULL);
		return;
	}
}
// System.Boolean System.Text.Json.Utf8JsonWriter::TryFormatSingle(System.Single,System.Span`1<System.Byte>,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonWriter_TryFormatSingle_mDCEC63E655C729E9BB8ECF387BDBDA0804AFCE4E (float ___0_value, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, int32_t* ___2_bytesWritten, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83078AF98C6069055A1C50A282E6E439FC320BAE);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		String_t* L_1;
		L_1 = Single_ToString_mF468A56B3A746EFD805E0604EE7A2873DA157ADE((&___0_value), _stringLiteral83078AF98C6069055A1C50A282E6E439FC320BAE, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		int32_t L_4;
		L_4 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t* L_5 = ___2_bytesWritten;
		*((int32_t*)L_5) = (int32_t)0;
		return (bool)0;
	}

IL_0026:
	{
	}
	try
	{// begin try (depth: 1)
		{
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_6;
			L_6 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_7 = V_0;
			NullCheck(L_6);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
			L_8 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, L_7);
			V_1 = L_8;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
			NullCheck(L_9);
			int32_t L_10;
			L_10 = Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_inline((&___1_destination), Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_RuntimeMethod_var);
			if ((((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))) <= ((int32_t)L_10)))
			{
				goto IL_0046_1;
			}
		}
		{
			int32_t* L_11 = ___2_bytesWritten;
			*((int32_t*)L_11) = (int32_t)0;
			V_2 = (bool)0;
			goto IL_005e;
		}

IL_0046_1:
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_1;
			Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_13 = ___1_destination;
			MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_inline(L_12, L_13, MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_RuntimeMethod_var);
			int32_t* L_14 = ___2_bytesWritten;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_1;
			NullCheck(L_15);
			*((int32_t*)L_14) = (int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length));
			V_2 = (bool)1;
			goto IL_005e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0056;
		}
		throw e;
	}

CATCH_0056:
	{// begin catch(System.Object)
		RuntimeObject* L_16 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		int32_t* L_17 = ___2_bytesWritten;
		*((int32_t*)L_17) = (int32_t)0;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_005e;
	}// end catch (depth: 1)

IL_005e:
	{
		bool L_18 = V_2;
		return L_18;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m60A639D1ADCDC797A1127B323B98F16CD8BAE893 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8FormattedNumber, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_utf8FormattedNumber;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateValue_mD8CCD8D9A6983372F1D9E36E37291A855324C3BA_inline(L_0, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_utf8FormattedNumber;
		JsonWriterHelper_ValidateNumber_mD57FF09936333FB187C8E1FBBF58F1C8CECBFDA6(L_1, NULL);
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_2 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_3;
		L_3 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_4 = ___0_utf8FormattedNumber;
		Utf8JsonWriter_WriteNumberValueIndented_m70FB4B419767F277A8FEF5E6147CECA4DED043C1(__this, L_4, NULL);
		goto IL_002f;
	}

IL_0028:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___0_utf8FormattedNumber;
		Utf8JsonWriter_WriteNumberValueMinimized_mEF778935C8C0B6CB9D0FC62459DC0F8E0F0F1416(__this, L_5, NULL);
	}

IL_002f:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_mEF778935C8C0B6CB9D0FC62459DC0F8E0F0F1416 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_0026:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_2;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0056:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_14;
		L_14 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_13, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_utf8Value), L_14, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_m70FB4B419767F277A8FEF5E6147CECA4DED043C1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_0035:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_3;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0065:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_009e;
		}
	}
	{
		uint8_t L_17 = __this->____tokenType_6;
		if (!L_17)
		{
			goto IL_007d;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_18, NULL);
	}

IL_007d:
	{
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20;
		L_20 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_19, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_20, L_21, NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_23 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
	}

IL_009e:
	{
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_utf8Value), L_25, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_26;
		L_26 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_26, L_27)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::ValidateWritingValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_0, NULL);
		if (L_1)
		{
			goto IL_004d;
		}
	}
	{
		bool L_2 = __this->____inObject_5;
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		uint8_t L_3 = __this->____tokenType_6;
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_004d;
		}
	}
	{
		uint8_t L_4 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)29), 0, (uint8_t)0, L_4, NULL);
		return;
	}

IL_002e:
	{
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		if (L_5)
		{
			goto IL_004d;
		}
	}
	{
		uint8_t L_6 = __this->____tokenType_6;
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		uint8_t L_7 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)30), 0, (uint8_t)0, L_7, NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNullValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNullValue_mD363DC1B38AAE17A2666646629B9A3640C898004 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0;
		L_0 = JsonConstants_get_NullValue_mA5886DDBB16FC136D274B471F912CEEC7A9847AF(NULL);
		Utf8JsonWriter_WriteLiteralByOptions_m3755A2C70936A990E52C40F30BD55AFA97F8725A(__this, L_0, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = ((int32_t)11);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteBooleanValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBooleanValue_mA04EC87538557C4D69DA626CE79295F85A722BFF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = JsonConstants_get_TrueValue_m7875CFE6FDF00788A7122ABE0D7EE9734C4909C4(NULL);
		Utf8JsonWriter_WriteLiteralByOptions_m3755A2C70936A990E52C40F30BD55AFA97F8725A(__this, L_1, NULL);
		__this->____tokenType_6 = ((int32_t)9);
		goto IL_002b;
	}

IL_0018:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = JsonConstants_get_FalseValue_mF6E16F3E048CAA53A90759098574839A72FB4381(NULL);
		Utf8JsonWriter_WriteLiteralByOptions_m3755A2C70936A990E52C40F30BD55AFA97F8725A(__this, L_2, NULL);
		__this->____tokenType_6 = ((int32_t)10);
	}

IL_002b:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralByOptions(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralByOptions_m3755A2C70936A990E52C40F30BD55AFA97F8725A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_utf8Value;
		Utf8JsonWriter_WriteLiteralIndented_mFFA6AFBB368388771828D0F54CA09FEECAAB9220(__this, L_2, NULL);
		return;
	}

IL_001b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3 = ___0_utf8Value;
		Utf8JsonWriter_WriteLiteralMinimized_m84ED52B356CB9F4101AE7F94A2D2B5A89FCD270B(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralMinimized(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralMinimized_m84ED52B356CB9F4101AE7F94A2D2B5A89FCD270B (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_0026:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_2;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0056:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_14;
		L_14 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_13, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_utf8Value), L_14, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_16;
		L_16 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_15, L_16)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteLiteralIndented(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteLiteralIndented_mFFA6AFBB368388771828D0F54CA09FEECAAB9220 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_0035:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_3;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0065:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_009e;
		}
	}
	{
		uint8_t L_17 = __this->____tokenType_6;
		if (!L_17)
		{
			goto IL_007d;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_18, NULL);
	}

IL_007d:
	{
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20;
		L_20 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_19, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_20, L_21, NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_23 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
	}

IL_009e:
	{
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_utf8Value), L_25, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_26;
		L_26 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_27;
		L_27 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_26, L_27)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		Utf8JsonWriter_WriteNumberValue_m04B3E8A97F3FFECFFCCD5F17B74488E285482FA1(__this, ((int64_t)L_0), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m04B3E8A97F3FFECFFCCD5F17B74488E285482FA1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		int64_t L_2 = ___0_value;
		Utf8JsonWriter_WriteNumberValueIndented_m3621E4629BDFBC8D31107EACD21F4932575CF463(__this, L_2, NULL);
		goto IL_0023;
	}

IL_001c:
	{
		int64_t L_3 = ___0_value;
		Utf8JsonWriter_WriteNumberValueMinimized_mE627304636D30A948A8EE0DA7292EBA8A2F8C2E8(__this, L_3, NULL);
	}

IL_0023:
	{
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 8;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueMinimized(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueMinimized_mE627304636D30A948A8EE0DA7292EBA8A2F8C2E8 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		V_0 = ((int32_t)21);
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_1;
		L_1 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_0, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_1, L_2))) >= ((int32_t)L_3)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_4 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_4, NULL);
	}

IL_001f:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_6;
		L_6 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_5, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_6;
		int32_t L_7 = __this->____currentDepth_8;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_8;
		L_8 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_8;
		int32_t L_9 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		int32_t L_10 = V_4;
		uint8_t* L_11;
		L_11 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_10), ((&V_1))->____length_1);
		*((int8_t*)L_11) = (int8_t)((int32_t)44);
	}

IL_0052:
	{
		int64_t L_12 = ___0_value;
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_14;
		L_14 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), L_13, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_5), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_15 = V_5;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Utf8Formatter_TryFormat_m009FCCBE35045EC8F6B1E7C5D7054DEE2B41BF4F(L_12, L_14, (&V_3), L_15, NULL);
		V_2 = L_16;
		int32_t L_17;
		L_17 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_18 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_17, L_18)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValueIndented(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValueIndented_m3621E4629BDFBC8D31107EACD21F4932575CF463 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_2 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)20))), 1)), L_2));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_3 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_4;
		L_4 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_3, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_6 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_5))) >= ((int32_t)L_6)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_7 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_7, NULL);
	}

IL_0030:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_8 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_8, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_9;
		int32_t L_10 = __this->____currentDepth_8;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_11;
		L_11 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_5 = L_11;
		int32_t L_12 = V_5;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_12, 1)), NULL);
		int32_t L_13 = V_5;
		uint8_t* L_14;
		L_14 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_13), ((&V_2))->____length_1);
		*((int8_t*)L_14) = (int8_t)((int32_t)44);
	}

IL_0063:
	{
		uint8_t L_15 = __this->____tokenType_6;
		if ((((int32_t)L_15) == ((int32_t)5)))
		{
			goto IL_009c;
		}
	}
	{
		uint8_t L_16 = __this->____tokenType_6;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_17 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_17, NULL);
	}

IL_007b:
	{
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_20 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_19, L_20, NULL);
		int32_t L_21;
		L_21 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_22 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_21, L_22)), NULL);
	}

IL_009c:
	{
		int64_t L_23 = ___0_value;
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_25;
		L_25 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_24, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_6), sizeof(StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF));
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_26 = V_6;
		il2cpp_codegen_runtime_class_init_inline(Utf8Formatter_t83889C7D7E829FB03FBB63D052FAAAE7E9CF8EB4_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Utf8Formatter_TryFormat_m009FCCBE35045EC8F6B1E7C5D7054DEE2B41BF4F(L_23, L_25, (&V_4), L_26, NULL);
		V_3 = L_27;
		int32_t L_28;
		L_28 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_29 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_28, L_29)), NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_m348BACAA9A8628253717C938871B084D8AB48D80 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		Utf8JsonWriter_WriteNullValue_mD363DC1B38AAE17A2666646629B9A3640C898004(__this, NULL);
		return;
	}

IL_000a:
	{
		String_t* L_1 = ___0_value;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2;
		L_2 = MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline(L_1, NULL);
		Utf8JsonWriter_WriteStringValue_mE4B6D84C62301EE664A48706F72A91583690A6FC(__this, L_2, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_mE4B6D84C62301EE664A48706F72A91583690A6FC (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateValue_mFB60C5BD2132B5D147FAD6A9DE920C2F765DA2B0_inline(L_0, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = ___0_value;
		Utf8JsonWriter_WriteStringEscape_m62161ADC6931F29D6D6477EC6EA0C33ED68E3065(__this, L_1, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 7;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscape(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscape_m62161ADC6931F29D6D6477EC6EA0C33ED68E3065 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_value;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m1EE16B480DFB8212DF545CAE1531E7741B705C9E(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_001f;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_5 = ___0_value;
		int32_t L_6 = V_0;
		Utf8JsonWriter_WriteStringEscapeValue_m5F92419D0847CAF6993B1EB667B83A5DCF936007(__this, L_5, L_6, NULL);
		return;
	}

IL_001f:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_7 = ___0_value;
		Utf8JsonWriter_WriteStringByOptions_mB9F334C1CDC0D38156C588C17ADF3499E52A8378(__this, L_7, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptions(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptions_mB9F334C1CDC0D38156C588C17ADF3499E52A8378 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_value;
		Utf8JsonWriter_WriteStringIndented_mC739CAADEF3039DDEE8567FD158DF0B9C609E1EA(__this, L_2, NULL);
		return;
	}

IL_001b:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___0_value;
		Utf8JsonWriter_WriteStringMinimized_mCDE83318D5992A162E60B45316CC28EDB29DF31C(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimized(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimized_mCDE83318D5992A162E60B45316CC28EDB29DF31C (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedValue), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_0, 3)), 3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_1 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_2;
		L_2 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_1, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) >= ((int32_t)L_4)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_0;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_5, NULL);
	}

IL_0028:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_6 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_7;
		L_7 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_6, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_1 = L_7;
		int32_t L_8 = __this->____currentDepth_8;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_9;
		L_9 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_9;
		int32_t L_10 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		int32_t L_11 = V_2;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_11), ((&V_1))->____length_1);
		*((int8_t*)L_12) = (int8_t)((int32_t)44);
	}

IL_0058:
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_13;
		int32_t L_14 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_2;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_15), ((&V_1))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_escapedValue;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_1;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_17, L_18, NULL);
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_2 = L_19;
		int32_t L_20 = V_2;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, 1)), NULL);
		int32_t L_21 = V_2;
		uint8_t* L_22;
		L_22 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_1))->____pointer_0))->value, (L_21), ((&V_1))->____length_1);
		*((int8_t*)L_22) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndented(System.ReadOnlySpan`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndented_mC739CAADEF3039DDEE8567FD158DF0B9C609E1EA (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_escapedValue), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_3 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, ((int32_t)il2cpp_codegen_multiply(L_2, 3)))), 3)), L_3));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_4 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_5;
		L_5 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_4, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_5, L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_8 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_8, NULL);
	}

IL_0037:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_9 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		L_10 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_9, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_10;
		int32_t L_11 = __this->____currentDepth_8;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_12;
		L_12 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_12;
		int32_t L_13 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_13, 1)), NULL);
		int32_t L_14 = V_3;
		uint8_t* L_15;
		L_15 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_14), ((&V_2))->____length_1);
		*((int8_t*)L_15) = (int8_t)((int32_t)44);
	}

IL_0067:
	{
		uint8_t L_16 = __this->____tokenType_6;
		if ((((int32_t)L_16) == ((int32_t)5)))
		{
			goto IL_00a0;
		}
	}
	{
		uint8_t L_17 = __this->____tokenType_6;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_2;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_18, NULL);
	}

IL_007f:
	{
		int32_t L_19;
		L_19 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_20;
		L_20 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_19, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_21 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_20, L_21, NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_23 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_22, L_23)), NULL);
	}

IL_00a0:
	{
		int32_t L_24;
		L_24 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_24;
		int32_t L_25 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_25, 1)), NULL);
		int32_t L_26 = V_3;
		uint8_t* L_27;
		L_27 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_26), ((&V_2))->____length_1);
		*((int8_t*)L_27) = (int8_t)((int32_t)34);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_28 = ___0_escapedValue;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_29 = V_2;
		Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline(__this, L_28, L_29, NULL);
		int32_t L_30;
		L_30 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_30;
		int32_t L_31 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_31, 1)), NULL);
		int32_t L_32 = V_3;
		uint8_t* L_33;
		L_33 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_32), ((&V_2))->____length_1);
		*((int8_t*)L_33) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeValue(System.ReadOnlySpan`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeValue_m5F92419D0847CAF6993B1EB667B83A5DCF936007 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, int32_t ___1_firstEscapeIndexVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_WriteStringEscapeValue_m5F92419D0847CAF6993B1EB667B83A5DCF936007_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		int32_t L_1 = ___1_firstEscapeIndexVal;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		if ((uintptr_t)((uintptr_t)L_5) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utf8JsonWriter_WriteStringEscapeValue_m5F92419D0847CAF6993B1EB667B83A5DCF936007_RuntimeMethod_var);
		intptr_t L_6 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_5), 2));
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10 = V_6;
		V_4 = L_10;
		goto IL_0045;
	}

IL_0031:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_11;
		L_11 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13;
		L_13 = VirtualFuncInvoker1< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Char>::Rent(System.Int32) */, L_11, L_12);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_14 = L_13;
		V_0 = L_14;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_15;
		L_15 = Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98(L_14, Span_1_op_Implicit_mA0E9FDCF2C5113BA9F9C4964D17D8BDFBD6F3C98_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0045:
	{
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_17 = ___0_value;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_18 = V_2;
		int32_t L_19 = ___1_firstEscapeIndexVal;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_mD98ADCFA56B4C5896030D35AE577B6210588B383(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_23;
		L_23 = Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_inline((&V_2), 0, L_22, Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_RuntimeMethod_var);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_24;
		L_24 = Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4(L_23, Span_1_op_Implicit_m03D0CEDC1BC95844236105D1DE24A702B956BFE4_RuntimeMethod_var);
		Utf8JsonWriter_WriteStringByOptions_mB9F334C1CDC0D38156C588C17ADF3499E52A8378(__this, L_24, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = V_0;
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_il2cpp_TypeInfo_var);
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_26;
		L_26 = ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_inline(ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_27 = V_0;
		NullCheck(L_26);
		VirtualActionInvoker2< CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Char>::Return(T[],System.Boolean) */, L_26, L_27, (bool)0);
	}

IL_0080:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_mAC062B9CFDB5DFD4F1E55081AF5E390D0671616A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_utf8Value;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_ValidateValue_mD8CCD8D9A6983372F1D9E36E37291A855324C3BA_inline(L_0, NULL);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1 = ___0_utf8Value;
		Utf8JsonWriter_WriteStringEscape_mB59D9F02536516EA8EF1FD9096CE40A2EA996451(__this, L_1, NULL);
		Utf8JsonWriter_SetFlagToAddListSeparatorBeforeNextItem_mC49F581160BBC99B7CB7AEA4B9BD5D9C0C02A271(__this, NULL);
		__this->____tokenType_6 = 7;
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscape(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscape_mB59D9F02536516EA8EF1FD9096CE40A2EA996451 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___0_utf8Value;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_1 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_2;
		L_2 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = JsonWriterHelper_NeedsEscaping_m2C8304CA115F8E6DEF835C700499D77387F13CA8(L_0, L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_001f;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_5 = ___0_utf8Value;
		int32_t L_6 = V_0;
		Utf8JsonWriter_WriteStringEscapeValue_m10974C00896F712FB5766F448315918EA56BFA91(__this, L_5, L_6, NULL);
		return;
	}

IL_001f:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7 = ___0_utf8Value;
		Utf8JsonWriter_WriteStringByOptions_m6FFDC7E75661DC2BBA64B77C53B8E262814AFD57(__this, L_7, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringByOptions(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringByOptions_m6FFDC7E75661DC2BBA64B77C53B8E262814AFD57 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_ValidateWritingValue_m1EDE5D0CAC37BCB2E4805B0455348BE0832B78A9(__this, NULL);
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_Indented_mDF7E8A47E47FF6E43BE1E577F434CA7525E4AC0A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = ___0_utf8Value;
		Utf8JsonWriter_WriteStringIndented_mE4AB77B76E3FB99A9836D4A32D8442273D0E3B41(__this, L_2, NULL);
		return;
	}

IL_001b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3 = ___0_utf8Value;
		Utf8JsonWriter_WriteStringMinimized_mC68E8AD0C2D230CD87ADAB875F7CF843D37EDD5A(__this, L_3, NULL);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringMinimized(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringMinimized_mC68E8AD0C2D230CD87ADAB875F7CF843D37EDD5A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedValue), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 2));
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_2 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_3;
		L_3 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_2, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_4;
		L_4 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_5 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))) >= ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_6 = V_1;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_6, NULL);
	}

IL_002a:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_7 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		L_8 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_7, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_2 = L_8;
		int32_t L_9 = __this->____currentDepth_8;
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_10;
		L_10 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_11, 1)), NULL);
		int32_t L_12 = V_3;
		uint8_t* L_13;
		L_13 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_12), ((&V_2))->____length_1);
		*((int8_t*)L_13) = (int8_t)((int32_t)44);
	}

IL_005a:
	{
		int32_t L_14;
		L_14 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_14;
		int32_t L_15 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_15, 1)), NULL);
		int32_t L_16 = V_3;
		uint8_t* L_17;
		L_17 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_16), ((&V_2))->____length_1);
		*((int8_t*)L_17) = (int8_t)((int32_t)34);
		int32_t L_18;
		L_18 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19;
		L_19 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_2), L_18, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_escapedValue), L_19, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_20;
		L_20 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_21;
		L_21 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedValue), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_20, L_21)), NULL);
		int32_t L_22;
		L_22 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_3 = L_22;
		int32_t L_23 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_23, 1)), NULL);
		int32_t L_24 = V_3;
		uint8_t* L_25;
		L_25 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_2))->____pointer_0))->value, (L_24), ((&V_2))->____length_1);
		*((int8_t*)L_25) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringIndented(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringIndented_mE4AB77B76E3FB99A9836D4A32D8442273D0E3B41 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_escapedValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	{
		int32_t L_0;
		L_0 = Utf8JsonWriter_get_Indentation_m829020AB9C3F388A3F1BD34EE21E9534AA6861CF(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedValue), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_1, L_2)), 2));
		int32_t L_3 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_3, 1)), L_4));
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_5 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		int32_t L_6;
		L_6 = Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714(L_5, Memory_1_get_Length_mA63190F8E6F8A531AA0A55447D48210D8083B714_RuntimeMethod_var);
		int32_t L_7;
		L_7 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_8 = V_2;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = V_2;
		Utf8JsonWriter_Grow_m45CE325E04A63A8160A6DE6D507B0FBD324914EF(__this, L_9, NULL);
	}

IL_0039:
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_10 = (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(&__this->____memory_4);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_11;
		L_11 = Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_inline(L_10, Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_RuntimeMethod_var);
		V_3 = L_11;
		int32_t L_12 = __this->____currentDepth_8;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_13;
		L_13 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_13;
		int32_t L_14 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_14, 1)), NULL);
		int32_t L_15 = V_4;
		uint8_t* L_16;
		L_16 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_15), ((&V_3))->____length_1);
		*((int8_t*)L_16) = (int8_t)((int32_t)44);
	}

IL_006c:
	{
		uint8_t L_17 = __this->____tokenType_6;
		if ((((int32_t)L_17) == ((int32_t)5)))
		{
			goto IL_00a5;
		}
	}
	{
		uint8_t L_18 = __this->____tokenType_6;
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_19 = V_3;
		Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline(__this, L_19, NULL);
	}

IL_0084:
	{
		int32_t L_20;
		L_20 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_3), L_20, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		int32_t L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_WriteIndentation_m3FF1948E81F7765D1C4D8ED825664DD6CFF8537C(L_21, L_22, NULL);
		int32_t L_23;
		L_23 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_24 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_23, L_24)), NULL);
	}

IL_00a5:
	{
		int32_t L_25;
		L_25 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_25;
		int32_t L_26 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_26, 1)), NULL);
		int32_t L_27 = V_4;
		uint8_t* L_28;
		L_28 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_27), ((&V_3))->____length_1);
		*((int8_t*)L_28) = (int8_t)((int32_t)34);
		int32_t L_29;
		L_29 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_30;
		L_30 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_3), L_29, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&___0_escapedValue), L_30, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		int32_t L_31;
		L_31 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_32;
		L_32 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_escapedValue), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_31, L_32)), NULL);
		int32_t L_33;
		L_33 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_4 = L_33;
		int32_t L_34 = V_4;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_34, 1)), NULL);
		int32_t L_35 = V_4;
		uint8_t* L_36;
		L_36 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_3))->____pointer_0))->value, (L_35), ((&V_3))->____length_1);
		*((int8_t*)L_36) = (int8_t)((int32_t)34);
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringEscapeValue(System.ReadOnlySpan`1<System.Byte>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringEscapeValue_m10974C00896F712FB5766F448315918EA56BFA91 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_utf8Value, int32_t ___1_firstEscapeIndexVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		V_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_utf8Value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		int32_t L_1 = ___1_firstEscapeIndexVal;
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = JsonWriterHelper_GetMaxEscapedLength_mE4CCE091405F6401E43DAE665652621A358326C4(L_0, L_1, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)256))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_1;
		V_5 = L_4;
		int32_t L_5 = V_5;
		uintptr_t L_6 = ((uintptr_t)L_5);
		int8_t* L_7 = (int8_t*) (L_6 ? alloca(L_6) : NULL);
		memset(L_7, 0, L_6);
		int32_t L_8 = V_5;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_9), (void*)(L_7), L_8, /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_6 = L_9;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10 = V_6;
		V_4 = L_10;
		goto IL_0043;
	}

IL_002f:
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_11;
		L_11 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		int32_t L_12 = V_1;
		NullCheck(L_11);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t >::Invoke(4 /* T[] System.Buffers.ArrayPool`1<System.Byte>::Rent(System.Int32) */, L_11, L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = L_13;
		V_0 = L_14;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_15;
		L_15 = Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91(L_14, Span_1_op_Implicit_m8619157C8809464A173FF531960A75A0ACE2CE91_RuntimeMethod_var);
		V_4 = L_15;
	}

IL_0043:
	{
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_16 = V_4;
		V_2 = L_16;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_17 = ___0_utf8Value;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18 = V_2;
		int32_t L_19 = ___1_firstEscapeIndexVal;
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_20 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_21;
		L_21 = JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		JsonWriterHelper_EscapeString_m564702FF6E13FE62D005D7AFEC973C086288877D(L_17, L_18, L_19, L_21, (&V_3), NULL);
		int32_t L_22 = V_3;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_23;
		L_23 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_2), 0, L_22, Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_24;
		L_24 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_23, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		Utf8JsonWriter_WriteStringByOptions_m6FFDC7E75661DC2BBA64B77C53B8E262814AFD57(__this, L_24, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_0;
		if (!L_25)
		{
			goto IL_007e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_il2cpp_TypeInfo_var);
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_26;
		L_26 = ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_inline(ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_27 = V_0;
		NullCheck(L_26);
		VirtualActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, bool >::Invoke(5 /* System.Void System.Buffers.ArrayPool`1<System.Byte>::Return(T[],System.Boolean) */, L_26, L_27, (bool)0);
	}

IL_007e:
	{
		return;
	}
}
// System.Void System.Text.Json.Utf8JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter__cctor_m65152A2DCCF94AD3B43EA4A0CAB34CD9160F75CE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_0, NULL);
		((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0 = L_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)42));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)47));
		((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_singleLineCommentDelimiter_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_singleLineCommentDelimiter_12), (void*)L_4);
		StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF L_5;
		memset((&L_5), 0, sizeof(L_5));
		StandardFormat__ctor_m817E5E5E8FE9A5256CC54594F12F72DCA7501568((&L_5), ((int32_t)79), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_dateTimeStandardFormat_13 = L_5;
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
// System.Void System.Text.Json.Serialization.JsonAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonAttribute__ctor_m5FE92C1B931118C343826CA51C4D902A8BA839FF (JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5* __this, const RuntimeMethod* method) 
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
// System.Void System.Text.Json.Serialization.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m23EFDEA2C29481891A2DA60D4E39F996475129EF (JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void System.Text.Json.Serialization.JsonIgnoreAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonIgnoreAttribute__ctor_mB0F78EC1650C48F624F58EA4F662BC20061FE2C3 (JsonIgnoreAttribute_t1428D9C93258F5BB795C8B650FACF63C4669B836* __this, const RuntimeMethod* method) 
{
	{
		JsonAttribute__ctor_m5FE92C1B931118C343826CA51C4D902A8BA839FF(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDerivedDictionaryConverter__ctor_m81B69D48076FD85C56FB87EB5F39A946E41B4B7C (DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6* __this, const RuntimeMethod* method) 
{
	{
		JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDerivedEnumerableConverter__ctor_m52402EB7C14510516EB627CD81ADC2A20DF40AE3 (DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultArrayConverter__ctor_mBDAB2266C43390FB11C03AF8A30D0DC7DAC3B72E (DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultICollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultICollectionConverter__ctor_m291127CDAD518A4FBE5694D47142281C9D33B9E3 (DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultIDictionaryConverter__ctor_m8DBC41394C0AD649767274673733C899C6D4B9CF (DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58* __this, const RuntimeMethod* method) 
{
	{
		JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableEnumerableConverter__ctor_m3963869F7FA667504E14220D288893C29FA0268B (DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableDictionaryConverter__ctor_mB445EF0D61614E838CD3A5F4ACEAC98B32A14272 (DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C* __this, const RuntimeMethod* method) 
{
	{
		JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.JsonDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D (JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void System.Text.Json.Serialization.Converters.JsonEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E (JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SequencePosition_GetObject_m04F459B1FE3E46A74C1AB83B9CEE47B0B3969789_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____object_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SequencePosition_GetInteger_mC0CBD9B4F6DF6205A30F76497C27C063AA7C3D0B_inline (SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____integer_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_IsPropertyPolicy_mEDDD83CAA5F7CB3D934F48E09D5C46301F204782_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsPropertyPolicyU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_ShouldDeserialize_m9013BB660E0FA69F093B58C6EF325A88B07CA99F_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CShouldDeserializeU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonPropertyInfo_set_ShouldSerialize_m10AB20E671B7E2C15BED04BCCC99E3FB79872E93_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CShouldSerializeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___0_d, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_d;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) == ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ThrowHelper_GetPrintableString_m40E31A72DA7DFAA32ED8B7A06A6609797EA0F551_inline (uint8_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38C378162D10735E8E753443B3094057777252AC);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		uint8_t L_0 = ___0_value;
		bool L_1;
		L_1 = ThrowHelper_IsPrintable_m2E0D5128B77C215AE99AC6D18A162ACE1A71AC20(L_0, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		uint8_t L_2 = ___0_value;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral38C378162D10735E8E753443B3094057777252AC, L_4, NULL);
		return L_5;
	}

IL_0019:
	{
		uint8_t L_6 = ___0_value;
		V_0 = L_6;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_0), NULL);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t JsonWriterHelper_DivMod_mD6FC02993BB66E34D1611A3CB0803C548EE1F3A5_inline (uint32_t ___0_numerator, uint32_t ___1_denominator, uint32_t* ___2_modulo, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = ___0_numerator;
		uint32_t L_1 = ___1_denominator;
		V_0 = ((int32_t)((uint32_t)(int32_t)L_0/(uint32_t)(int32_t)L_1));
		uint32_t* L_2 = ___2_modulo;
		uint32_t L_3 = ___0_numerator;
		uint32_t L_4 = V_0;
		uint32_t L_5 = ___1_denominator;
		*((int32_t*)L_2) = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, ((int32_t)il2cpp_codegen_multiply((int32_t)L_4, (int32_t)L_5))));
		uint32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonWriterHelper_NeedsEscaping_m4189B361239A0B55511772156AC4D87DCF2054D1_inline (Il2CppChar ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppChar L_0 = ___0_value;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)127))))
		{
			goto IL_0018;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = JsonWriterHelper_get_AllowList_mA28609B6B9076FA68AC62A6E99A56F15278670D3(NULL);
		V_0 = L_1;
		Il2CppChar L_2 = ___0_value;
		uint8_t* L_3;
		L_3 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&V_0))->____pointer_0))->value, (L_2), ((&V_0))->____length_1);
		int32_t L_4 = *((uint8_t*)L_3);
		return (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
	}

IL_0018:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JavaScriptEncoder_get_Default_mA1BD7ACB1459CE7B06A32D6CF329C522C567D4ED_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var);
		DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32* L_0 = ((DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_StaticFields*)il2cpp_codegen_static_fields_for(DefaultJavaScriptEncoder_t8C55758384EA0C0A467EE5BA3D7A725EC4FE0B32_il2cpp_TypeInfo_var))->___Singleton_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t JsonWriterHelper_Int32LsbToHexDigit_mA0990D42D4E942303C541A5557E135E401A81CA3_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)10))))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___0_value;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)65), ((int32_t)il2cpp_codegen_subtract(L_1, ((int32_t)10)))));
		goto IL_0012;
	}

IL_000e:
	{
		int32_t L_2 = ___0_value;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(((int32_t)48), L_2));
	}

IL_0012:
	{
		return (uint8_t)((int32_t)(uint8_t)G_B3_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_PtrDiff_m38A892D52BF473A2345B38153C2F143007339D33_inline (Il2CppChar* ___0_a, Il2CppChar* ___1_b, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_a;
		Il2CppChar* L_1 = ___1_b;
		return ((int32_t)((uint32_t)((int32_t)(uint32_t)((int64_t)(intptr_t)((Il2CppChar*)((intptr_t)((Il2CppChar*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1))/1))))>>1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriterHelper_PtrDiff_mD1A028CB8E273EE4BA081972D46DBBF5E1152425_inline (uint8_t* ___0_a, uint8_t* ___1_b, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_a;
		uint8_t* L_1 = ___1_b;
		return ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)L_0, (intptr_t)L_1))/1))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonHelpers_IsInRangeInclusive_mA3EBC817F38C1240438A438AF5D7F1AC0D1179D3_inline (int32_t ___0_value, int32_t ___1_lowerBound, int32_t ___2_upperBound, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_lowerBound;
		int32_t L_2 = ___2_upperBound;
		int32_t L_3 = ___1_lowerBound;
		return (bool)((((int32_t)((!(((uint32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) <= ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* JsonWriterOptions_get_Encoder_mAE5C32DE2F9E54D87346B602EA2DB2C0676D7406_inline (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, const RuntimeMethod* method) 
{
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = __this->___U3CEncoderU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterOptions_set_Encoder_m5E357AEFC0AB885F7858AE1D70B7060273AED306_inline (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* __this, JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___0_value, const RuntimeMethod* method) 
{
	{
		JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* L_0 = ___0_value;
		__this->___U3CEncoderU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEncoderU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBytesPendingU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_set_BytesCommitted_m0611AE9EF0E556F695ED2D1C71DA272DC0506B4C_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CBytesCommittedU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBytesPendingU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Utf8JsonWriter_get_BytesCommitted_mEAF5E6159D99CD34796639914CCA84473295AACF_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CBytesCommittedU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = ___0_token;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0018;
		}
	}
	{
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_1 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		BitStack_PushFalse_m83CDC7E063685BF4FAD27FDCD7F51CF8D49EBAD3_inline(L_1, NULL);
		__this->____inObject_5 = (bool)0;
		return;
	}

IL_0018:
	{
		BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* L_2 = (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5*)(&__this->____bitStack_7);
		BitStack_PushTrue_mBEF1D3C195EA821E02716255C61AFB88258D5BAB_inline(L_2, NULL);
		__this->____inObject_5 = (bool)1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNewLine_mE43F1B48D99F3E69397722AD89C068FECF60DBF2_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___0_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields*)il2cpp_codegen_static_fields_for(Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_il2cpp_TypeInfo_var))->___s_newLineLength_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1;
		L_1 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_2, 1)), NULL);
		int32_t L_3 = V_0;
		uint8_t* L_4;
		L_4 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_output))->____pointer_0))->value, (L_3), ((&___0_output))->____length_1);
		*((int8_t*)L_4) = (int8_t)((int32_t)13);
	}

IL_0023:
	{
		int32_t L_5;
		L_5 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		int32_t L_7 = V_0;
		uint8_t* L_8;
		L_8 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___0_output))->____pointer_0))->value, (L_7), ((&___0_output))->____length_1);
		*((int8_t*)L_8) = (int8_t)((int32_t)10);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 MemoryExtensions_AsSpan_m0EB07912D71097A8B05F586158966837F5C3DB38_inline (String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1));
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_1 = V_0;
		return L_1;
	}

IL_000d:
	{
		String_t* L_2 = ___0_text;
		NullCheck(L_2);
		Il2CppChar* L_3;
		L_3 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_2, NULL);
		String_t* L_4 = ___0_text;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_6), L_3, L_5, /*hidden argument*/ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_RuntimeMethod_var);
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidatePropertyNameAndDepth_m24562CD926422D62B270BD3783E5E8EF402D80E3_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)166666666))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1;
		L_1 = Utf8JsonWriter_get_CurrentDepth_m8C0AF093B68AFDD3BC097AB985DB8FF76CD7BA47(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)1000))))
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		int32_t L_3 = __this->____currentDepth_8;
		ThrowHelper_ThrowInvalidOperationOrArgumentException_mDE8005E5F002F464B22F6013877DBF7FCB31DCEB(L_2, L_3, NULL);
	}

IL_0027:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingProperty_mC581A96093E5B8C0F28A38802637D6BA4E6B831B_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint8_t ___0_token, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_0, NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		bool L_2 = __this->____inObject_5;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_3 = __this->____tokenType_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_002d;
		}
	}

IL_001e:
	{
		uint8_t L_4 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)31), 0, (uint8_t)0, L_4, NULL);
	}

IL_002d:
	{
		uint8_t L_5 = ___0_token;
		Utf8JsonWriter_UpdateBitStackOnStart_m12969BF6585ED46DCD0106D02A9D0C9344495337_inline(__this, L_5, NULL);
	}

IL_0034:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitStack_get_CurrentDepth_m29C47DB4A4B69D9C76A93EBA1637E97A243FC869_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentDepth_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BitStack_Pop_mEBB94B5C8DD6FACC49DCB2A2A7D365E5A75A4FD2_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->____currentDepth_2;
		__this->____currentDepth_2 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		V_0 = (bool)0;
		int32_t L_1 = __this->____currentDepth_2;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)64))))
		{
			goto IL_0038;
		}
	}
	{
		uint64_t L_2 = __this->____allocationFreeContainer_1;
		__this->____allocationFreeContainer_1 = ((int64_t)((uint64_t)L_2>>1));
		uint64_t L_3 = __this->____allocationFreeContainer_1;
		V_0 = (bool)((!(((uint64_t)((int64_t)((int64_t)L_3&((int64_t)1)))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_0059;
	}

IL_0038:
	{
		int32_t L_4 = __this->____currentDepth_2;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0052;
		}
	}
	{
		uint64_t L_5 = __this->____allocationFreeContainer_1;
		V_0 = (bool)((!(((uint64_t)((int64_t)((int64_t)L_5&((int64_t)1)))) <= ((uint64_t)((int64_t)0))))? 1 : 0);
		goto IL_0059;
	}

IL_0052:
	{
		bool L_6;
		L_6 = BitStack_PopFromArray_mC5F5242B631329764A700C94FC08270FE1803691(__this, NULL);
		V_0 = L_6;
	}

IL_0059:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitStack_PushFalse_m83CDC7E063685BF4FAD27FDCD7F51CF8D49EBAD3_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentDepth_2;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)64))))
		{
			goto IL_001a;
		}
	}
	{
		uint64_t L_1 = __this->____allocationFreeContainer_1;
		__this->____allocationFreeContainer_1 = ((int64_t)((int64_t)L_1<<1));
		goto IL_0021;
	}

IL_001a:
	{
		BitStack_PushToArray_mE3486049BF012A03170FBC4C4BF1CE139F81F6C0(__this, (bool)0, NULL);
	}

IL_0021:
	{
		int32_t L_2 = __this->____currentDepth_2;
		__this->____currentDepth_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BitStack_PushTrue_mBEF1D3C195EA821E02716255C61AFB88258D5BAB_inline (BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____currentDepth_2;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)64))))
		{
			goto IL_001d;
		}
	}
	{
		uint64_t L_1 = __this->____allocationFreeContainer_1;
		__this->____allocationFreeContainer_1 = ((int64_t)(((int64_t)((int64_t)L_1<<1))|((int64_t)1)));
		goto IL_0024;
	}

IL_001d:
	{
		BitStack_PushToArray_mE3486049BF012A03170FBC4C4BF1CE139F81F6C0(__this, (bool)1, NULL);
	}

IL_0024:
	{
		int32_t L_2 = __this->____currentDepth_2;
		__this->____currentDepth_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateProperty_m870A88B693769B0670D79885D858B52192EE93E6_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_PropertyNameTooLarge_m591F53BAC4D2B10A55D1389C8A1A907157A0E63E(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_ValidateWritingProperty_mA774D19194EDA65A154C7188ACB9363727C22381_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, const RuntimeMethod* method) 
{
	{
		JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397* L_0 = (JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397*)(&__this->____options_9);
		bool L_1;
		L_1 = JsonWriterOptions_get_SkipValidation_m9113D9C54C02B4EBA452A57485A91F8A30E74DB0(L_0, NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2 = __this->____inObject_5;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		uint8_t L_3 = __this->____tokenType_6;
		if ((!(((uint32_t)L_3) == ((uint32_t)5))))
		{
			goto IL_002d;
		}
	}

IL_001e:
	{
		uint8_t L_4 = __this->____tokenType_6;
		ThrowHelper_ThrowInvalidOperationException_mE97A968AF5F73C0C37D09D7C9AAEB27EF4785516(((int32_t)31), 0, (uint8_t)0, L_4, NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Utf8JsonWriter_TranscodeAndWrite_m02497951FB0FC80A851B31DC706BA4E315B5BEB2_inline (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_escapedPropertyName, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_0 = ___0_escapedPropertyName;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		L_1 = MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_inline(L_0, MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var);
		V_0 = L_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2 = V_0;
		int32_t L_3;
		L_3 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		L_4 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&___1_output), L_3, Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(JsonWriterHelper_tA5331A7EA56731FFC09F22BA5889073993C09594_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = JsonWriterHelper_ToUtf8_m0EC452325B9038CDF4AFC9F74E55A7194674B4F6(L_2, L_4, (&V_2), (&V_3), NULL);
		V_1 = L_5;
		int32_t L_6;
		L_6 = Utf8JsonWriter_get_BytesPending_m28D90DE67217F118AFA594E9F9D055183474E452_inline(__this, NULL);
		int32_t L_7 = V_3;
		Utf8JsonWriter_set_BytesPending_m74D2AA59465ED7058538164D4B1DFB19E58C2ACD_inline(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateDouble_m273C268E501F4DE8A73411EC0E4F91913F5C7447_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		double L_0 = ___0_value;
		bool L_1;
		L_1 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		double L_2 = ___0_value;
		bool L_3;
		L_3 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}

IL_0010:
	{
		ThrowHelper_ThrowArgumentException_ValueNotSupported_m579817B44127511B903F738EBBC7D02FDE054F53(NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateSingle_mB5D28135F97269867F8DC0389E382DEA7317DF21_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		bool L_1;
		L_1 = Single_IsNaN_mFE637F6ECA9F7697CE8EFF56427858F4C5EDF75D_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		float L_2 = ___0_value;
		bool L_3;
		L_3 = Single_IsInfinity_m8D101DE5C104130734F6DCA3E6E86345B064E4AD_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0015;
		}
	}

IL_0010:
	{
		ThrowHelper_ThrowArgumentException_ValueNotSupported_m579817B44127511B903F738EBBC7D02FDE054F53(NULL);
	}

IL_0015:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateProperty_m1F34A8D5BFC3B8AEF6935B5B42C1A0045D07162B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_PropertyNameTooLarge_m591F53BAC4D2B10A55D1389C8A1A907157A0E63E(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidatePropertyAndValue_m68A3F4A91A8A150AAD3DE5B8990226783DA925D4_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_propertyName, ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_propertyName), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)166666666))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___1_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_0023;
		}
	}

IL_001c:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_propertyName;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_3 = ___1_value;
		ThrowHelper_ThrowArgumentException_mCC02637303AC469D32F1DC102775C46151387A7F(L_2, L_3, NULL);
	}

IL_0023:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateValue_mD8CCD8D9A6983372F1D9E36E37291A855324C3BA_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___0_value), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_ValueTooLarge_m98E94862DE95E1CD322A446B4B845268A124C055(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriterHelper_ValidateValue_mFB60C5BD2132B5D147FAD6A9DE920C2F765DA2B0_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		if ((((int32_t)L_0) <= ((int32_t)((int32_t)166666666))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1;
		L_1 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_value), ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_RuntimeMethod_var);
		ThrowHelper_ThrowArgumentException_ValueTooLarge_m98E94862DE95E1CD322A446B4B845268A124C055(L_1, NULL);
	}

IL_001a:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m8E944E4954E037877A25B9FF6B901F1F901D4769_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m470D1527EF015478E8677C7BCB52C8410A1DB604_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___1_length;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mC8B7C665F49384744642F03EA355239F0E4AF966_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length_1;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_Slice_mEB3D3A427170FC5A0AB734619D4792C299697C89_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5 = __this->____pointer_0;
		V_0 = L_5;
		uint8_t* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		uint8_t* L_8;
		L_8 = il2cpp_unsafe_add<uint8_t,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = __this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length_1;
		int32_t L_7 = ___0_start;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mDEEA4C304B13C8F7A63BC3D60B62FF17BBEE282B_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_10;
		memset((&L_10), 0, sizeof(L_10));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mDC9AA64B960B9BB8357655827A8202DF83443068_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length_1;
		int32_t L_7 = ___0_start;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ReadOnlySpan_1_Slice_mBF43FC5284A77519BB9C3BAB34F66A0A4B78CFE2_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, int32_t ___0_start, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_2 = __this->____pointer_0;
		V_0 = L_2;
		Il2CppChar* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_start;
		Il2CppChar* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_3, L_4);
		int32_t L_6 = __this->____length_1;
		int32_t L_7 = ___0_start;
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArrayBufferWriter_1_get_WrittenCount_m222BB6AFF5604DA9E188113E1C8426620513A288_gshared_inline (ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____index_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Memory_1_get_Span_mA0CAB13956D6FA3BBF9F9176CB647933F88E034E_gshared_inline (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	{
		int32_t L_0 = __this->____index_1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_1 = __this->____object_0;
		NullCheck(((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15))));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2;
		L_2 = VirtualFuncInvoker0< Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 >::Invoke(8 /* System.Span`1<T> System.Buffers.MemoryManager`1<System.Byte>::GetSpan() */, ((MemoryManager_1_tB90442C8E0A1B9C0F8A3B603FD50501A1BADAC6E*)CastclassClass((RuntimeObject*)L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 15))));
		V_0 = L_2;
		int32_t L_3 = __this->____index_1;
		int32_t L_4 = __this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_5;
		L_5 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), ((int32_t)(L_3&((int32_t)2147483647LL))), L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_5;
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 9)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_11 = __this->____object_0;
		V_1 = ((String_t*)IsInstSealed((RuntimeObject*)L_11, String_t_il2cpp_TypeInfo_var));
		String_t* L_12 = V_1;
		if (!L_12)
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_13 = V_1;
		NullCheck(L_13);
		Il2CppChar* L_14;
		L_14 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_13, NULL);
		uint8_t* L_15;
		L_15 = il2cpp_unsafe_as_ref<uint8_t>(L_14);
		String_t* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_16, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_18), L_15, L_17, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		V_0 = L_18;
		int32_t L_19 = __this->____index_1;
		int32_t L_20 = __this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_21;
		L_21 = Span_1_Slice_m9D8BA8245B8DC9BFB4A4164759CBAAEAD1318CD6_inline((&V_0), L_19, L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
		return L_21;
	}

IL_0089:
	{
		RuntimeObject* L_22 = __this->____object_0;
		if (!L_22)
		{
			goto IL_00b4;
		}
	}
	{
		RuntimeObject* L_23 = __this->____object_0;
		int32_t L_24 = __this->____index_1;
		int32_t L_25 = __this->____length_2;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_inline((&L_26), ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 20))), L_24, ((int32_t)(L_25&((int32_t)2147483647LL))), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		return L_26;
	}

IL_00b4:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_27 = V_0;
		return L_27;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m835590E344B05AF6AF00A78E92C4175BD781A3D2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		Il2CppChar* L_4;
		L_4 = il2cpp_unsafe_as_ref<Il2CppChar>((uint8_t*)L_3);
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___1_length;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* ArrayPool_1_get_Shared_m8EB88B4EDF81135B55DB0F33A749B8087FE4646F_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B* L_0 = ((ArrayPool_1_t3CE8332C9DFE03FF160AB0CE0FF17DF7792E0E4B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D Span_1_Slice_mEFBC3C78FD443FFE23F9E841D43B7B0271622843_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length_1;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length_1;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_5 = __this->____pointer_0;
		V_0 = L_5;
		Il2CppChar* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppChar, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppChar* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppChar,int32_t>(L_6, L_7);
		int32_t L_9 = ___1_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_10), L_8, L_9, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 ___0_span, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1 L_2 = ___0_span;
		Il2CppChar* L_3;
		L_3 = ((  Il2CppChar* (*) (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m36BD32453530B535FE60A8123643219FEAABC351_inline((&___0_span), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<Il2CppChar>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mE73B90C4D1E571728BA1209AD9545E1661B9E951_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* ArrayPool_1_get_Shared_m59AE954C801963CBE5E506D9378429032D161C97_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07* L_0 = ((ArrayPool_1_t645A9854926DCA747C654687A362AD03D55D2C07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___U3CSharedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___1_length;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___0_pointer;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___1_length;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MemoryExtensions_CopyTo_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m10ED0116AC93BD794B4D93F6200E13A15556D992_gshared_inline (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_source, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___1_destination, const RuntimeMethod* method) 
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_source;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_1), L_0, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_2 = ___1_destination;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mC760C7CFC89725E3CF68DC45BE3A9A42A7E7DA73_inline (float ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0152E50B40750679B83FF9F30CA539FFBB98EEE8_gshared_inline (ReadOnlySpan_1_t59614EA6E51A945A32B02AB17FBCBDF9A5C419C1* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_ptr;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___1_length;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m698EC79E2E44AFF16BA096D0861CFB129FBF8218_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
		goto IL_0042;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		NullCheck((RuntimeObject*)L_4);
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_9 = ___1_start;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_array;
		NullCheck(L_10);
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = ___2_length;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_array;
		NullCheck(L_12);
		int32_t L_13 = ___1_start;
		if ((!(((uint32_t)L_11) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_array;
		NullCheck((RuntimeArray*)L_14);
		uint8_t* L_15;
		L_15 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_14, NULL);
		uint8_t* L_16;
		L_16 = il2cpp_unsafe_as_ref<uint8_t>(L_15);
		int32_t L_17 = ___1_start;
		uint8_t* L_18;
		L_18 = il2cpp_unsafe_add<uint8_t,int32_t>(L_16, L_17);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_19;
		memset((&L_19), 0, sizeof(L_19));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_19), L_18);
		__this->____pointer_0 = L_19;
		int32_t L_20 = ___2_length;
		__this->____length_1 = L_20;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_array;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_array;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data_2);
		return L_1;
	}
}
