#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
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
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>
struct Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo>
struct Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t1B3325E856D6A0623AE0B139B6A7E8B27C590A41;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<Postgrest.Attributes.ReferenceAttribute,System.Boolean>
struct Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData>
struct IEnumerable_1_tB2453AD789F2371A7242E3E53F4FE04FC34FE407;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<Postgrest.OnRequestPreparedEventHandler>
struct IEnumerable_1_t5A71C9298A9ECFD06104EF1A11B697A663112F5F;
// System.Collections.Generic.IEnumerable`1<Postgrest.Attributes.ReferenceAttribute>
struct IEnumerable_1_tC7B8E9077DDB0BD7F3EEF9FC8F460B17F4CA64ED;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression>
struct IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E;
// System.Collections.Generic.IEqualityComparer`1<Postgrest.Attributes.PrimaryKeyAttribute>
struct IEqualityComparer_1_t7151F0EC92C9CA428F0765D6AB9C4FD219CB625B;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t28EB8E755FDBFBDE88574629581245F2CF1F5FC1;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression>
struct IReadOnlyList_1_tB86476F62FBF3BB3389F17E0FFB65836DD3F2F65;
// System.Collections.Generic.Dictionary`2/KeyCollection<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>
struct KeyCollection_t1F79E5EE2747017125BEE421B1822B8FF91B6646;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.DateTime>
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0;
// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>
struct List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t58901670B7FA44803364AA3059A3F981A991011A;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB;
// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match>
struct List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>
struct List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9;
// System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>
struct List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>
struct List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_tDAE35E503783CF053392CFBB43ACBDCE72C6C996;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Threading.Tasks.TaskFactory`1<Postgrest.Responses.BaseResponse>
struct TaskFactory_1_tF1867C36AA812A32C0BE91FB67B394AE399C8932;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>
struct Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract>
struct ThreadSafeStore_2_tF22121D3E11895CE38FFEE9105F013F4ECC2DFC5;
// System.Collections.Generic.Dictionary`2/ValueCollection<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>
struct ValueCollection_t98B6A4438133C7DEF62246B495359DAD60A495A5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>[]
struct EntryU5BU5D_t65D83829606449B60436D375D8E9535399B4825F;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>[]
struct IDictionary_2U5BU5D_t50D9A419A7D96F5E8A533BE79EA986B47AC05026;
// System.Collections.Generic.IDictionary`2<System.String,System.String>[]
struct IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Text.RegularExpressions.Group[]
struct GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9;
// Postgrest.Interfaces.IPostgrestQueryFilter[]
struct IPostgrestQueryFilterU5BU5D_tE0672DDBB57A02A3FF27C47515642E5138803AA8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Postgrest.OnRequestPreparedEventHandler[]
struct OnRequestPreparedEventHandlerU5BU5D_t770ECF7CE5F4308FDB9996C31014D2F231940B80;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// Postgrest.Attributes.ReferenceAttribute[]
struct ReferenceAttributeU5BU5D_t619969BA3928CD891FA2362052EA06E5E71FC6B3;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler[]
struct DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Postgrest.Models.BaseModel
struct BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0;
// Postgrest.Responses.BaseResponse
struct BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// Postgrest.Client
struct Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8;
// Postgrest.ClientOptions
struct ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Postgrest.Attributes.ColumnAttribute
struct ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Postgrest.Converters.DateTimeConverter
struct DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// Postgrest.Debugger
struct Debugger_tE0F30413C0BC7C5AEE4450540576325558631333;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD;
// Newtonsoft.Json.DefaultJsonNameTable
struct DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD5E837A615E377DAA6FF516AEC9343133C7D0E30;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590;
// Postgrest.FullTextSearchConfig
struct FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Postgrest.Hooks
struct Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F;
// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17;
// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_t7A99979C2D7DD703E91285B65728D13FCD3D2E2E;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// Postgrest.Interfaces.IPostgrestQueryFilter
struct IPostgrestQueryFilter_tDD86033DF66ACF57DBE80FF9D7DC5AC3C47798F1;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t29B0AEAFB8A7BF2EE446320DE590343B21EA69A3;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t2EEC2D13DF16BA74BC89448718A0754E0A4931D4;
// Postgrest.Index
struct Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4;
// Postgrest.Converters.IntArrayConverter
struct IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A;
// Postgrest.IntRange
struct IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A;
// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_tE6A7D4E99E3396B56718606824E99F870FCCF4BA;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3;
// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// Supabase.Core.Attributes.MapToAttribute
struct MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E;
// System.Linq.Expressions.NewExpression
struct NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t919567099A6AA1A0840D16E86EFE781CBF551F27;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tA645844D38D91BDD1FDE252DC3E90EAA52F21197;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Postgrest.OnRequestPreparedEventHandler
struct OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// Postgrest.PostgrestContractResolver
struct PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D;
// Postgrest.Exceptions.PostgrestException
struct PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A;
// Postgrest.Attributes.PrimaryKeyAttribute
struct PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Postgrest.QueryFilter
struct QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913;
// Postgrest.QueryOptions
struct QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82;
// Postgrest.QueryOrderer
struct QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4;
// Postgrest.Converters.RangeConverter
struct RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129;
// Postgrest.Attributes.ReferenceAttribute
struct ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Postgrest.Linq.SelectExpressionVisitor
struct SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Postgrest.Linq.SetExpressionVisitor
struct SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Net.Http.StringContent
struct StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9;
// Postgrest.Attributes.TableAttribute
struct TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Postgrest.Linq.WhereExpressionVisitor
struct WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188;
// Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler
struct DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0;
// Postgrest.Attributes.ReferenceAttribute/<>c
struct U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B;
// Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0
struct U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CountType_tF0A952EDCF61A5713F5A27EF783A8B6E6DC100C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DuplicateResolutionType_tBEA6F39CBF78B0447163BC959BA97AB9B7BAEA50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReturnType_t8C319BC9D4FC7B444BFD194A66E670FDE37A5EB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06E3ED3910061417F219E69E77E03EC465A5FEA4;
IL2CPP_EXTERN_C String_t* _stringLiteral0B75051519367FF34289B53BBAF79585B3798604;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA;
IL2CPP_EXTERN_C String_t* _stringLiteral11088893C91AF88FD5578CCADD0EBE308FE5A17C;
IL2CPP_EXTERN_C String_t* _stringLiteral157EA16B1400FCCE0E6DB3930150B95AC2A3FD89;
IL2CPP_EXTERN_C String_t* _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92;
IL2CPP_EXTERN_C String_t* _stringLiteral19CEFA3CF24B459BDA3797FF0B7F5FC5AD3CB095;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2118056AEC0EE85186D7389663E8606C74FF1C;
IL2CPP_EXTERN_C String_t* _stringLiteral1BB373FF9C5539D7A94BCE063132628099AF4638;
IL2CPP_EXTERN_C String_t* _stringLiteral1C38411379641E1C909EB65874DCAD590568DC36;
IL2CPP_EXTERN_C String_t* _stringLiteral2231B1E0242AFEBB12D1FA81705C7C03FA5DEA9A;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2BC7E26223DFE0C04D22A8DC035DC5C5861261;
IL2CPP_EXTERN_C String_t* _stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8;
IL2CPP_EXTERN_C String_t* _stringLiteral31588841D5DC72F9FDF48CD35FE10C7DBF01FDF4;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8495D9C7F52B8FE6C7D4DBC4266CC3CAD329F1;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3F77F0C35CCA4F9E1D83DFC9C6739877A7987443;
IL2CPP_EXTERN_C String_t* _stringLiteral43F359D9C18671595E02BBB870F7FA5605FFB8A8;
IL2CPP_EXTERN_C String_t* _stringLiteral44CD9958B3A6DB16C5812CB102698946DB55080D;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral490E0C3BDC48307B749112910DCB8A80DCA26D26;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4EFE4902B451EF1F5FC7E383F5057737D4E63093;
IL2CPP_EXTERN_C String_t* _stringLiteral63226752B1B15A0D16EE7499EA91646BA4F6805D;
IL2CPP_EXTERN_C String_t* _stringLiteral639F216AB902B469FFB53820F2EBC1E3D762E47F;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6AF893C28292F4A91C2320EBEA1F0C1E61F0CB38;
IL2CPP_EXTERN_C String_t* _stringLiteral7D1F99B231F806BA85674F67BD920A5F5E8509CE;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF543E5CEBA28135FC0D7A2CDAD26732720D611;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF;
IL2CPP_EXTERN_C String_t* _stringLiteral8C991366B06A0BD8F49112BF10B2C7CF213CA320;
IL2CPP_EXTERN_C String_t* _stringLiteral8CD0E23C3EFBCA752A994ED55444E50DE4A9650A;
IL2CPP_EXTERN_C String_t* _stringLiteral8E8B801EA7321CA1EC5BB1E3AC5C14B31119A13C;
IL2CPP_EXTERN_C String_t* _stringLiteral8EF5395F8463431DD42DA6FC080677F9316640D4;
IL2CPP_EXTERN_C String_t* _stringLiteral902EE46ED529FAA3EB512845B29D79D32C9E2180;
IL2CPP_EXTERN_C String_t* _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43;
IL2CPP_EXTERN_C String_t* _stringLiteral93D55B32F54D9CFC32073EC187261A572B716B0B;
IL2CPP_EXTERN_C String_t* _stringLiteral95A925AED27FB02CEACC8F0F132B2869187FB087;
IL2CPP_EXTERN_C String_t* _stringLiteral95D8F8E7716DF6D218C29A88F950EFA77FF4E612;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF7209D6995B092EC27708CB55B69C40584F07A;
IL2CPP_EXTERN_C String_t* _stringLiteralA0252B6EDE05391803D0F8653F04ED530E5AF1E2;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7765950CBB0538F7B9462B22486EEB12D5B2B9A;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C0A2DF8E699BDD685F89C9A1270C89A8049F05;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F141FA67FF5C63A04A7E5F73831995F0F462C5;
IL2CPP_EXTERN_C String_t* _stringLiteralAE3B3D53B57DED8F9AAC2CBBE1CBCC33B46CAF6C;
IL2CPP_EXTERN_C String_t* _stringLiteralB33510B81CADCC221468DF6936B28ACAE3790B5C;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralBB5D97CBB39F0CFB59A4739E2F631C37ECF14F88;
IL2CPP_EXTERN_C String_t* _stringLiteralBBE5B6C2E0D327EFF2C2B92D342EE338CA95AF8A;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6DEF84EBC03F751571A600F394770D78EF268F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF35FC6063B266828B459DCF8A7A30CBA2649AF8;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCCC33B89130FDBE3EE3D571CB5055E377D64C918;
IL2CPP_EXTERN_C String_t* _stringLiteralD0D66746AFFA89D2C2C6BCE0DC66C680D01E5A24;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA7B88886FB24B3F19FA3221438C8E27A5F9DB25;
IL2CPP_EXTERN_C String_t* _stringLiteralDD1A038FDE47FB385B86035209E45E783225E815;
IL2CPP_EXTERN_C String_t* _stringLiteralE0B8693DBCDC36C20C21E6B16F24CFCF2E46D511;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF300D2310959AF105732D339376803869D9B2B91;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A127FB1AAE1EB048D2AB4975F9F91BF6212EA2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0;
IL2CPP_EXTERN_C String_t* _stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m5760BF256197B4D31A36F5E178EE25690EE5D900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m89C2053F74C8314EB0E8079EC87C91F4A1BC65FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m37A96D10DE92514DFFEB385FFD1E42224DF335D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m7599D24FD0890F930B44ED7D24ED6C69B219DF55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mFB1629EB469DFFE684BAC903E423C47C0CBD893B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_m1157BBD4D333617E6A3D560556E6F1C59050098D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_mA1B61AF0862E0DE2DF701D50800495631630964C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mD0B35629FE062D7B80432A0A77814F2FD1E645D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BaseModel_get_PrimaryKey_m84A01A92DAD47CCD9FE630AB4E63EEBA5E0CB929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_mDD15F9B5EAE9EFD8FEBEDCBF58DC9175CC515776_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisPrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_m8A8DEF69CE4D0FAE7883994C8F3AC606ED0956FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_mD92B62A7BAA4648694C5A1A34F917F2E4DC00EB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeConverter_CanConvert_m394D1EF15B15EF016A130E313E6368CFE32DF63E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DateTimeConverter_WriteJson_mF032BDDE2529FE6D574F8D4EA9C58668F6D0B92F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mA8CFB5FE270D81FB865BC0FA57B7239685FDC036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m78C7D632DA297529DD61FB55E747B351607C4154_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m4048047E4BF47E38F46EF63573E110A18A7C11A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mB2CEFE620325CD63DB345E592BBF710406B312EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_m193DCADC99F0E56BB191C2920680F83B8C9D2A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisJToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_m5AC9F87EF81C48BDB0EDE5B03C3F89CCF2792F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisOnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168_m463AECB2AB8B6662931F83734F225BE7D909FBE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC29C3B3958D60BCE5953AD321E92F5ACE785F98E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8879F49EB10E4DB85520370549F16AD87053F0FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m23ABB34377E102F18CC50C54BEC5F2549114586A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Index_FromEnd_m70CB841D8AF08A44736428584ED3B85FB63552DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Index__ctor_m61C88BD1DBC5F4E12460F9B3C6BA9680D5960CB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntArrayConverter_CanConvert_mB840F61DA286430DC94B1DE891708787B9CF9EDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntArrayConverter_ReadJson_m55822146D0FF8365532110F124864338084F4D74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntRange_GetOffsetAndLength_m4EB746F5928432B3D7A697F4597B6F7238392D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2D09FADC083F8E12A112231E0079D36C72B562EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2FA4164A32B5F968F0270235844FA768C984E3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB4899328739782EB31BACF6FEEE0AB691725D19F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m33452CA3F5E228F9E41ED648D582D2323045E2FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC26FCACB4CC3910C09CD1F5267AD83B95376D3A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEDFA9602C406AA69E2EEE18CB991B8B39C0A4C39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1506A01A009EBC81B0977C0810CF2C0AF62745C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m190F697908214F49DF893C953E8CE7035633AB05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mADD5983A7D867B0F35EDFD6B3D7A3442F5AC07FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m466B5778ABEDA71011DCDA1A87004DA1D042B15B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5634CE743ACB5B129DCD48C44B753D0D4E8023FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m963F0DDF612974E4E3639182219DEAF872EA42C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA45494A2FBC10E0E4C5A3084FA881C83CE041948_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mD1FB6279D3F0551989DE961B3C939626CC2C2F03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueryFilter__ctor_mAD2C4AFFB74B08F6C0D02173173B45100D4D584F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueryFilter__ctor_mB4A48CB62B0AE0BEF2CC9DAE8B6BB20822DD68A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueryFilter__ctor_mCD8AB853E7DD2313A061107483A6D33F2BEF7C12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QueryFilter__ctor_mD635D33323821B29F090C3E178589AB6DA452AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RangeConverter_CanConvert_mEFBAC7D5E5EAF11D9C6F60F5B762765FD1F5C14E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RangeConverter_ParseIntRange_m4E302D7561DF86EAC380B7BC9914461205063330_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReferenceAttribute__ctor_m2333396C6785652D0ADAE289C06EAD387F73AB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetInheritanceHierarchyU3Ed__0_System_Collections_IEnumerator_Reset_mB833FA0F07B5E8AD6C505935794DDFA58E47F766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMakeRequestU3Ed__3_MoveNext_m42A788876A59542466130A12BAE9E8BE6E9C993C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CIsDerivedFromBaseModelU3Eb__39_0_mED47ACBA69799C97B5B423D40FB2EED44C1668A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCreatePropertyU3Eb__0_mDBBAE9EC9E7FA9047B0455D1CB2FB3FF59CA3442_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass38_0_U3CParseRelationshipsU3Eb__0_m3D4F845820619073696A30E53CF7B5F3D768C844_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WhereExpressionVisitor_VisitBinary_m5A46D54D8C4DFD48339D1B1697A50564630D7B27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WhereExpressionVisitor_VisitMethodCall_m99D2539ED315A1C6F9F82D7498580E048A686857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t6F66D3C799885BF53504459781E5A76910341224 
{
};

// System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>
struct Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t65D83829606449B60436D375D8E9535399B4825F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t1F79E5EE2747017125BEE421B1822B8FF91B6646* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t98B6A4438133C7DEF62246B495359DAD60A495A5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>
struct List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPostgrestQueryFilterU5BU5D_tE0672DDBB57A02A3FF27C47515642E5138803AA8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>
struct List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OnRequestPreparedEventHandlerU5BU5D_t770ECF7CE5F4308FDB9996C31014D2F231940B80* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>
struct List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ReferenceAttributeU5BU5D_t619969BA3928CD891FA2362052EA06E5E71FC6B3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>
struct List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// Postgrest.Models.BaseModel
struct BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0  : public RuntimeObject
{
	// System.String Postgrest.Models.BaseModel::<BaseUrl>k__BackingField
	String_t* ___U3CBaseUrlU3Ek__BackingField_0;
	// Postgrest.ClientOptions Postgrest.Models.BaseModel::<RequestClientOptions>k__BackingField
	ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___U3CRequestClientOptionsU3Ek__BackingField_1;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Postgrest.Models.BaseModel::<GetHeaders>k__BackingField
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___U3CGetHeadersU3Ek__BackingField_2;
};

// Postgrest.Responses.BaseResponse
struct BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312  : public RuntimeObject
{
	// System.Net.Http.HttpResponseMessage Postgrest.Responses.BaseResponse::<ResponseMessage>k__BackingField
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___U3CResponseMessageU3Ek__BackingField_0;
	// System.String Postgrest.Responses.BaseResponse::<Content>k__BackingField
	String_t* ___U3CContentU3Ek__BackingField_1;
	// Postgrest.ClientOptions Postgrest.Responses.BaseResponse::<ClientOptions>k__BackingField
	ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___U3CClientOptionsU3Ek__BackingField_2;
};

// System.Text.RegularExpressions.Capture
struct Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A  : public RuntimeObject
{
	// System.Int32 System.Text.RegularExpressions.Capture::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.Int32 System.Text.RegularExpressions.Capture::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_1;
	// System.String System.Text.RegularExpressions.Capture::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_2;
};

// Postgrest.Client
struct Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8  : public RuntimeObject
{
	// System.String Postgrest.Client::<BaseUrl>k__BackingField
	String_t* ___U3CBaseUrlU3Ek__BackingField_0;
	// Postgrest.ClientOptions Postgrest.Client::<Options>k__BackingField
	ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___U3COptionsU3Ek__BackingField_1;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Postgrest.Client::<GetHeaders>k__BackingField
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___U3CGetHeadersU3Ek__BackingField_2;
};

// Postgrest.Constants
struct Constants_tF6DAD51B2719C5EC3CB67DDDCE6CCD618B35C555  : public RuntimeObject
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

// Postgrest.Debugger
struct Debugger_tE0F30413C0BC7C5AEE4450540576325558631333  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler> Postgrest.Debugger::_debugListeners
	List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* ____debugListeners_1;
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

// Postgrest.Extensions.EnumExtensions
struct EnumExtensions_tF22253D8F2B296BC6B147D8BA54A87C8E2F825BB  : public RuntimeObject
{
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// Postgrest.Exceptions.FailureHint
struct FailureHint_t92EAFFAC89D46A605D7F2285D2144EDE3008B40D  : public RuntimeObject
{
};

// Postgrest.FullTextSearchConfig
struct FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910  : public RuntimeObject
{
	// System.String Postgrest.FullTextSearchConfig::<QueryText>k__BackingField
	String_t* ___U3CQueryTextU3Ek__BackingField_0;
	// System.String Postgrest.FullTextSearchConfig::<Config>k__BackingField
	String_t* ___U3CConfigU3Ek__BackingField_1;
};

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E  : public RuntimeObject
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.GroupCollection::_match
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ____match_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.GroupCollection::_captureMap
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____captureMap_1;
	// System.Text.RegularExpressions.Group[] System.Text.RegularExpressions.GroupCollection::_groups
	GroupU5BU5D_t9924453EAB39E5BC350475A536C5C7093F9A04A9* ____groups_2;
};

// Postgrest.Helpers
struct Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274  : public RuntimeObject
{
};

// Postgrest.Hooks
struct Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler> Postgrest.Hooks::_requestPreparedEventHandlers
	List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* ____requestPreparedEventHandlers_1;
};

// System.Net.Http.HttpContent
struct HttpContent_tD09737BB27CB151BC9688882F785208620211E1C  : public RuntimeObject
{
	// System.Net.Http.HttpContent/FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_tDCEF941500AF29277C42DDF40970FB21B4A66188* ___buffer_0;
	// System.IO.Stream System.Net.Http.HttpContent::stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream_1;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_2;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t4E2506F081BD682D0538A5CB38ED1D836C2E8C4F* ___headers_3;
};

// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800  : public RuntimeObject
{
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t4B9DE3EA10973CAC19ED090B2F45AC2FA78B1C17* ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;
};

// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E  : public RuntimeObject
{
	// System.String System.Net.Http.HttpMethod::method
	String_t* ___method_7;
};

// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpRequestMessage::method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___method_1;
	// System.Version System.Net.Http.HttpRequestMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_2;
	// System.Uri System.Net.Http.HttpRequestMessage::uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri_3;
	// System.Boolean System.Net.Http.HttpRequestMessage::is_used
	bool ___is_used_4;
	// System.Boolean System.Net.Http.HttpRequestMessage::disposed
	bool ___disposed_5;
	// System.Net.Http.HttpContent System.Net.Http.HttpRequestMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_6;
};

// Postgrest.Index
struct Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4  : public RuntimeObject
{
	// System.Int32 Postgrest.Index::_value
	int32_t ____value_0;
};

// Postgrest.IntRange
struct IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A  : public RuntimeObject
{
	// Postgrest.Index Postgrest.IntRange::<Start>k__BackingField
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___U3CStartU3Ek__BackingField_0;
	// Postgrest.Index Postgrest.IntRange::<End>k__BackingField
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___U3CEndU3Ek__BackingField_1;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

// Newtonsoft.Json.JsonConverter
struct JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16  : public RuntimeObject
{
};

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC  : public RuntimeObject
{
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.MatchCollection::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_0;
	// System.Collections.Generic.List`1<System.Text.RegularExpressions.Match> System.Text.RegularExpressions.MatchCollection::_matches
	List_1_t425196350A2888B269895DE1C865A3E7E4E2C9B6* ____matches_1;
	// System.Boolean System.Text.RegularExpressions.MatchCollection::_done
	bool ____done_2;
	// System.String System.Text.RegularExpressions.MatchCollection::_input
	String_t* ____input_3;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_beginning
	int32_t ____beginning_4;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_length
	int32_t ____length_5;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_startat
	int32_t ____startat_6;
	// System.Int32 System.Text.RegularExpressions.MatchCollection::_prevlen
	int32_t ____prevlen_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// Postgrest.Extensions.RangeExtensions
struct RangeExtensions_t0C60D276903E604C438F76FC295CCC2878684A92  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.RuntimeHelpers
struct RuntimeHelpers_t675484A59D5D6FA44F63C13F0C9240C3986365C1  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// Postgrest.Extensions.TypeExtensions
struct TypeExtensions_tC31236CCAD3EE8F00165E5C4900A9456DC3D659D  : public RuntimeObject
{
};

// System.UriBuilder
struct UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72  : public RuntimeObject
{
	// System.Boolean System.UriBuilder::_changed
	bool ____changed_0;
	// System.String System.UriBuilder::_fragment
	String_t* ____fragment_1;
	// System.String System.UriBuilder::_host
	String_t* ____host_2;
	// System.String System.UriBuilder::_password
	String_t* ____password_3;
	// System.String System.UriBuilder::_path
	String_t* ____path_4;
	// System.Int32 System.UriBuilder::_port
	int32_t ____port_5;
	// System.String System.UriBuilder::_query
	String_t* ____query_6;
	// System.String System.UriBuilder::_scheme
	String_t* ____scheme_7;
	// System.String System.UriBuilder::_schemeDelimiter
	String_t* ____schemeDelimiter_8;
	// System.Uri System.UriBuilder::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_9;
	// System.String System.UriBuilder::_username
	String_t* ____username_10;
};

// Postgrest.Extensions.UriExtensions
struct UriExtensions_t53A0E03A7E77F8C51832ABB988F12904665C4883  : public RuntimeObject
{
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

// Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0  : public RuntimeObject
{
	// Postgrest.Attributes.PrimaryKeyAttribute Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0::primaryKeyAttribute
	PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* ___primaryKeyAttribute_0;
	// Postgrest.PostgrestContractResolver Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0::<>4__this
	PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* ___U3CU3E4__this_1;
};

// Postgrest.Attributes.ReferenceAttribute/<>c
struct U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B  : public RuntimeObject
{
};

// Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D  : public RuntimeObject
{
	// Postgrest.Attributes.ReferenceAttribute Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0::refAttr
	ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* ___refAttr_0;
};

// Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0
struct U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A  : public RuntimeObject
{
	// System.Int32 Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::<>2__current
	Type_t* ___U3CU3E2__current_1;
	// System.Int32 Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::type
	Type_t* ___type_3;
	// System.Type Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Type Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::<current>5__2
	Type_t* ___U3CcurrentU3E5__2_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Postgrest.OnRequestPreparedEventHandler>
struct Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>
struct TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>
struct Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Right>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CRightU3Ek__BackingField_3;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::<Left>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CLeftU3Ek__BackingField_4;
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

// System.Net.Http.ByteArrayContent
struct ByteArrayContent_tBF2970AB753D27DAEF2C2235A1A090944A8F386E  : public HttpContent_tD09737BB27CB151BC9688882F785208620211E1C
{
	// System.Byte[] System.Net.Http.ByteArrayContent::content
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___content_4;
	// System.Int32 System.Net.Http.ByteArrayContent::offset
	int32_t ___offset_5;
	// System.Int32 System.Net.Http.ByteArrayContent::count
	int32_t ___count_6;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Object System.Linq.Expressions.ConstantExpression::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Postgrest.Converters.DateTimeConverter
struct DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Newtonsoft.Json.Converters.DateTimeConverterBase
struct DateTimeConverterBase_t36BB1B6037D3FB7F14C612DD537FA6B05C807E31  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tD5E837A615E377DAA6FF516AEC9343133C7D0E30  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881  : public Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A
{
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::_capcoll
	CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93* ____capcoll_6;
	// System.String System.Text.RegularExpressions.Group::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_7;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// Postgrest.Converters.IntArrayConverter
struct IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// Supabase.Core.Attributes.MapToAttribute
struct MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Supabase.Core.Attributes.MapToAttribute::<Mapping>k__BackingField
	String_t* ___U3CMappingU3Ek__BackingField_0;
	// System.String Supabase.Core.Attributes.MapToAttribute::<Formatter>k__BackingField
	String_t* ___U3CFormatterU3Ek__BackingField_1;
};

// System.Linq.Expressions.MemberExpression
struct MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::<Expression>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3CExpressionU3Ek__BackingField_3;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_3;
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.NewArrayExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::<Expressions>k__BackingField
	ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* ___U3CExpressionsU3Ek__BackingField_4;
};

// System.Linq.Expressions.NewExpression
struct NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::_arguments
	RuntimeObject* ____arguments_3;
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::<Constructor>k__BackingField
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___U3CConstructorU3Ek__BackingField_4;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::<Members>k__BackingField
	ReadOnlyCollection_1_tDAE35E503783CF053392CFBB43ACBDCE72C6C996* ___U3CMembersU3Ek__BackingField_5;
};

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t919567099A6AA1A0840D16E86EFE781CBF551F27  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_tA645844D38D91BDD1FDE252DC3E90EAA52F21197  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// Postgrest.Attributes.PrimaryKeyAttribute
struct PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Postgrest.Attributes.PrimaryKeyAttribute::<ColumnName>k__BackingField
	String_t* ___U3CColumnNameU3Ek__BackingField_0;
	// System.Boolean Postgrest.Attributes.PrimaryKeyAttribute::<ShouldInsert>k__BackingField
	bool ___U3CShouldInsertU3Ek__BackingField_1;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// Postgrest.Converters.RangeConverter
struct RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129  : public JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16
{
};

// Postgrest.Attributes.ReferenceAttribute
struct ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type Postgrest.Attributes.ReferenceAttribute::<Model>k__BackingField
	Type_t* ___U3CModelU3Ek__BackingField_0;
	// System.String Postgrest.Attributes.ReferenceAttribute::<ColumnName>k__BackingField
	String_t* ___U3CColumnNameU3Ek__BackingField_1;
	// System.String Postgrest.Attributes.ReferenceAttribute::<ForeignKey>k__BackingField
	String_t* ___U3CForeignKeyU3Ek__BackingField_2;
	// System.String Postgrest.Attributes.ReferenceAttribute::<TableName>k__BackingField
	String_t* ___U3CTableNameU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Postgrest.Attributes.ReferenceAttribute::<Columns>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CColumnsU3Ek__BackingField_4;
	// System.Boolean Postgrest.Attributes.ReferenceAttribute::<IgnoreOnInsert>k__BackingField
	bool ___U3CIgnoreOnInsertU3Ek__BackingField_5;
	// System.Boolean Postgrest.Attributes.ReferenceAttribute::<IgnoreOnUpdate>k__BackingField
	bool ___U3CIgnoreOnUpdateU3Ek__BackingField_6;
	// System.Boolean Postgrest.Attributes.ReferenceAttribute::<IncludeInQuery>k__BackingField
	bool ___U3CIncludeInQueryU3Ek__BackingField_7;
	// System.Boolean Postgrest.Attributes.ReferenceAttribute::<UseInnerJoin>k__BackingField
	bool ___U3CUseInnerJoinU3Ek__BackingField_8;
};

// Postgrest.Linq.SelectExpressionVisitor
struct SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.List`1<System.String> Postgrest.Linq.SelectExpressionVisitor::<Columns>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CColumnsU3Ek__BackingField_0;
};

// Postgrest.Linq.SetExpressionVisitor
struct SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.String Postgrest.Linq.SetExpressionVisitor::<Column>k__BackingField
	String_t* ___U3CColumnU3Ek__BackingField_0;
	// System.Type Postgrest.Linq.SetExpressionVisitor::<ExpectedType>k__BackingField
	Type_t* ___U3CExpectedTypeU3Ek__BackingField_1;
	// System.Object Postgrest.Linq.SetExpressionVisitor::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_2;
};

// Postgrest.Attributes.TableAttribute
struct TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Postgrest.Attributes.TableAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Postgrest.Linq.WhereExpressionVisitor
struct WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// Postgrest.QueryFilter Postgrest.Linq.WhereExpressionVisitor::<Filter>k__BackingField
	QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* ___U3CFilterU3Ek__BackingField_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>
struct AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Nullable`1<System.DateTime>
struct Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_tBAFC8D79770520A5FE179D99B00E863ECFD41FBC 
{
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t572F7AE07F2480341B7A6A66E2B76630B513F797 
{
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t9C3D12600E1C83D014F016D8B1F88411FF41263C 
{
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

// System.Globalization.DateTimeStyles
struct DateTimeStyles_t68D2C41B347837759F064D04F256AC268AF50465 
{
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_tC6052391FA7B95E92AFFABA381532EEFA193FB9F 
{
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t996735A0C7CC889B941C53B522E62A988B47402A 
{
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
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

// System.Linq.Expressions.ExpressionType
struct ExpressionType_tAA03F259DBEAA7B62E085C620D7B879FAA696B25 
{
	// System.Int32 System.Linq.Expressions.ExpressionType::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t6D69CDEC3FBD6B43B168CFE1033506CE3F50EE8C 
{
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_tB923F780A6087CF142D4D00486E840D870ECDA5D 
{
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Formatting
struct Formatting_t38B3D1A17CE6825AA2C906374AD2434FD10ED7EC 
{
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;
};

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42  : public HttpMessageInvoker_t00698E3A7D5068564C401C7D3F90798056A04800
{
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeout_8;
};

// System.Net.Http.Headers.HttpHeaderKind
struct HttpHeaderKind_tFCBA9C891BD4E9F401AD34C01658CED33D1E5931 
{
	// System.Int32 System.Net.Http.Headers.HttpHeaderKind::value__
	int32_t ___value___2;
};

// System.Net.HttpStatusCode
struct HttpStatusCode_t530B6899270B44ED560C3872DB5F9698FB7D7374 
{
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t58901670B7FA44803364AA3059A3F981A991011A* ____values_20;
};

// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_t4F8244AEE40CAB63CA2C1E281038F4E2B3E3887E 
{
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.JsonToken
struct JsonToken_t00B2B3F98FB3E9A8DE72409901BED1C7F1670BD5 
{
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;
};

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F  : public Group_t26371E9136D6F43782C487B63C67C5FC4F472881
{
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;
};

// Newtonsoft.Json.MemberSerialization
struct MemberSerialization_t257FAC6CFDCFB591C71BFA910013E4CEFB7491DA 
{
	// System.Int32 Newtonsoft.Json.MemberSerialization::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tA3EC6C7A5429A693E0370D712C7850854F60B6B2 
{
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_tD1037A7561C66E2015BA288AF16A9F2DC9307FA5 
{
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_t4BDE6EFA837EAE85524EDF0FE21D0B9668F4FD6A 
{
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_tA895C8A4A1D7444BBEDD0E29D7490C625BF93131 
{
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t435BCAA15E433D8D2F5DB0D05A41E7E564671737 
{
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t7D243173DF188E0478CF37E7C940CDDCAC1E0D20 
{
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.Required
struct Required_tE2BADA700C1076BDCC25AAF912F3C76B8BD842A7 
{
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;
};

// System.Net.Http.StringContent
struct StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9  : public ByteArrayContent_tBF2970AB753D27DAEF2C2235A1A090944A8F386E
{
};

// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t6C5E715C7EA7676CB7369DBE8EB487724B07F354 
{
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_t9FB27147BC97FE6AB2CC242DA377B594D900491E 
{
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t4D77402771E5E38DE1AE390B60542985276D9D69 
{
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;
};

// System.UriIdnScope
struct UriIdnScope_t001CC97A6F977E9BB7DB855CC6BA415A7F47491F 
{
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;
};

// System.UriPartial
struct UriPartial_t555A6DE556F8410634CD2AF657BBA78B2E77D6A4 
{
	// System.Int32 System.UriPartial::value__
	int32_t ___value___2;
};

// Postgrest.Constants/CountType
struct CountType_t4B9B969A6475FAB372AFFB38A219ECF82CE01A41 
{
	// System.Int32 Postgrest.Constants/CountType::value__
	int32_t ___value___2;
};

// Postgrest.Constants/NullPosition
struct NullPosition_tA79F4629FAAECD5CD6B5081C2787E65E8EA5A55D 
{
	// System.Int32 Postgrest.Constants/NullPosition::value__
	int32_t ___value___2;
};

// Postgrest.Constants/Operator
struct Operator_t52226B0766203D64622003EE15567D50A0009FCD 
{
	// System.Int32 Postgrest.Constants/Operator::value__
	int32_t ___value___2;
};

// Postgrest.Constants/Ordering
struct Ordering_tF679CC9533B47F1E997A7750C2056CE13C2428E9 
{
	// System.Int32 Postgrest.Constants/Ordering::value__
	int32_t ___value___2;
};

// Postgrest.Exceptions.FailureHint/Reason
struct Reason_tE4668183B25BC31504F7CEE45B072A108DC10BF1 
{
	// System.Int32 Postgrest.Exceptions.FailureHint/Reason::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.JsonReader/State
struct State_tFC19CCEAFF8F4E6C73914F3B8850C622CE3490A4 
{
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;
};

// Newtonsoft.Json.JsonWriter/State
struct State_tAE23C0C2937491FB5A76EBB46CC416A10DB1667D 
{
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;
};

// Postgrest.QueryOptions/CountType
struct CountType_tF0A952EDCF61A5713F5A27EF783A8B6E6DC100C1 
{
	// System.Int32 Postgrest.QueryOptions/CountType::value__
	int32_t ___value___2;
};

// Postgrest.QueryOptions/DuplicateResolutionType
struct DuplicateResolutionType_tBEA6F39CBF78B0447163BC959BA97AB9B7BAEA50 
{
	// System.Int32 Postgrest.QueryOptions/DuplicateResolutionType::value__
	int32_t ___value___2;
};

// Postgrest.QueryOptions/ReturnType
struct ReturnType_t8C319BC9D4FC7B444BFD194A66E670FDE37A5EB8 
{
	// System.Int32 Postgrest.QueryOptions/ReturnType::value__
	int32_t ___value___2;
};

// Postgrest.Attributes.ReferenceAttribute/JoinType
struct JoinType_t88900B6B6352BB202806F2FF00EFA41F4E84B53E 
{
	// System.Int32 Postgrest.Attributes.ReferenceAttribute/JoinType::value__
	int32_t ___value___2;
};

// System.Uri/Flags
struct Flags_t47CF4DB4036A6A539AFA6EE39C75F772E865E897 
{
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_t0ED183EB9E50B714F9A282F07935579F070B562B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// Postgrest.ClientOptions
struct ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7  : public RuntimeObject
{
	// System.String Postgrest.ClientOptions::<Schema>k__BackingField
	String_t* ___U3CSchemaU3Ek__BackingField_0;
	// System.Globalization.DateTimeStyles Postgrest.ClientOptions::DateTimeStyles
	int32_t ___DateTimeStyles_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.ClientOptions::<Headers>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CHeadersU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.ClientOptions::<QueryParams>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CQueryParamsU3Ek__BackingField_4;
};

// Postgrest.Attributes.ColumnAttribute
struct ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Postgrest.Attributes.ColumnAttribute::<ColumnName>k__BackingField
	String_t* ___U3CColumnNameU3Ek__BackingField_0;
	// Newtonsoft.Json.NullValueHandling Postgrest.Attributes.ColumnAttribute::<NullValueHandling>k__BackingField
	int32_t ___U3CNullValueHandlingU3Ek__BackingField_1;
	// System.Boolean Postgrest.Attributes.ColumnAttribute::<IgnoreOnInsert>k__BackingField
	bool ___U3CIgnoreOnInsertU3Ek__BackingField_2;
	// System.Boolean Postgrest.Attributes.ColumnAttribute::<IgnoreOnUpdate>k__BackingField
	bool ___U3CIgnoreOnUpdateU3Ek__BackingField_3;
};

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD  : public RuntimeObject
{
	// Newtonsoft.Json.DefaultJsonNameTable Newtonsoft.Json.Serialization.DefaultContractResolver::_nameTable
	DefaultJsonNameTable_t81ABCBAD900C62AEA009A48779C3F3893DBC110D* ____nameTable_3;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolver::_contractCache
	ThreadSafeStore_2_tF22121D3E11895CE38FFEE9105F013F4ECC2DFC5* ____contractCache_4;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_5;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreIsSpecifiedMembers>k__BackingField
	bool ___U3CIgnoreIsSpecifiedMembersU3Ek__BackingField_9;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreShouldSerializeMembers>k__BackingField
	bool ___U3CIgnoreShouldSerializeMembersU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_tB85DD4A9F6C33F668AF7273D3B5193ABC4617D50* ___U3CNamingStrategyU3Ek__BackingField_11;
};

// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket> System.Net.Http.Headers.HttpHeaders::headers
	Dictionary_2_t1B3325E856D6A0623AE0B139B6A7E8B27C590A41* ___headers_1;
	// System.Net.Http.Headers.HttpHeaderKind System.Net.Http.Headers.HttpHeaders::HeaderKind
	int32_t ___HeaderKind_2;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::connectionclose
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___connectionclose_3;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::transferEncodingChunked
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___transferEncodingChunked_4;
};

// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970  : public RuntimeObject
{
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_tAD02F8CC2960BC561FEFD63E0121701743EAA7A8* ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CRequestMessageU3Ek__BackingField_6;
};

// Newtonsoft.Json.Converters.IsoDateTimeConverter
struct IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C  : public DateTimeConverterBase_t36BB1B6037D3FB7F14C612DD537FA6B05C807E31
{
	// System.Globalization.DateTimeStyles Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeStyles
	int32_t ____dateTimeStyles_1;
	// System.String Newtonsoft.Json.Converters.IsoDateTimeConverter::_dateTimeFormat
	String_t* ____dateTimeFormat_2;
	// System.Globalization.CultureInfo Newtonsoft.Json.Converters.IsoDateTimeConverter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_3;
};

// Newtonsoft.Json.JsonException
struct JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD  : public Exception_t
{
};

// Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E 
{
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;
};
// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t7788656A280615072710710E8C15D23285850E8E_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
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

// Postgrest.Exceptions.PostgrestException
struct PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A  : public Exception_t
{
	// System.Net.Http.HttpResponseMessage Postgrest.Exceptions.PostgrestException::<Response>k__BackingField
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___U3CResponseU3Ek__BackingField_18;
	// System.String Postgrest.Exceptions.PostgrestException::<Content>k__BackingField
	String_t* ___U3CContentU3Ek__BackingField_19;
	// System.Int32 Postgrest.Exceptions.PostgrestException::<StatusCode>k__BackingField
	int32_t ___U3CStatusCodeU3Ek__BackingField_20;
	// Postgrest.Exceptions.FailureHint/Reason Postgrest.Exceptions.PostgrestException::<Reason>k__BackingField
	int32_t ___U3CReasonU3Ek__BackingField_21;
};

// Postgrest.QueryFilter
struct QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913  : public RuntimeObject
{
	// System.String Postgrest.QueryFilter::<Property>k__BackingField
	String_t* ___U3CPropertyU3Ek__BackingField_1;
	// Postgrest.Constants/Operator Postgrest.QueryFilter::<Op>k__BackingField
	int32_t ___U3COpU3Ek__BackingField_2;
	// System.Object Postgrest.QueryFilter::<Criteria>k__BackingField
	RuntimeObject* ___U3CCriteriaU3Ek__BackingField_3;
};

// Postgrest.QueryOptions
struct QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82  : public RuntimeObject
{
	// Postgrest.QueryOptions/ReturnType Postgrest.QueryOptions::<Returning>k__BackingField
	int32_t ___U3CReturningU3Ek__BackingField_0;
	// Postgrest.QueryOptions/DuplicateResolutionType Postgrest.QueryOptions::<DuplicateResolution>k__BackingField
	int32_t ___U3CDuplicateResolutionU3Ek__BackingField_1;
	// Postgrest.QueryOptions/CountType Postgrest.QueryOptions::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_2;
	// System.Boolean Postgrest.QueryOptions::<Upsert>k__BackingField
	bool ___U3CUpsertU3Ek__BackingField_3;
	// System.String Postgrest.QueryOptions::<OnConflict>k__BackingField
	String_t* ___U3COnConflictU3Ek__BackingField_4;
};

// Postgrest.QueryOrderer
struct QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4  : public RuntimeObject
{
	// System.String Postgrest.QueryOrderer::<ForeignTable>k__BackingField
	String_t* ___U3CForeignTableU3Ek__BackingField_0;
	// System.String Postgrest.QueryOrderer::<Column>k__BackingField
	String_t* ___U3CColumnU3Ek__BackingField_1;
	// Postgrest.Constants/Ordering Postgrest.QueryOrderer::<Ordering>k__BackingField
	int32_t ___U3COrderingU3Ek__BackingField_2;
	// Postgrest.Constants/NullPosition Postgrest.QueryOrderer::<NullPosition>k__BackingField
	int32_t ___U3CNullPositionU3Ek__BackingField_3;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Type System.Linq.Expressions.UnaryExpression::<Type>k__BackingField
	Type_t* ___U3CTypeU3Ek__BackingField_3;
	// System.Linq.Expressions.ExpressionType System.Linq.Expressions.UnaryExpression::<NodeType>k__BackingField
	int32_t ___U3CNodeTypeU3Ek__BackingField_4;
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::<Operand>k__BackingField
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___U3COperandU3Ek__BackingField_5;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::<Method>k__BackingField
	MethodInfo_t* ___U3CMethodU3Ek__BackingField_6;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

// Postgrest.Helpers/<MakeRequest>d__3
struct U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7 
{
	// System.Int32 Postgrest.Helpers/<MakeRequest>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse> Postgrest.Helpers/<MakeRequest>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC ___U3CU3Et__builder_1;
	// System.String Postgrest.Helpers/<MakeRequest>d__3::url
	String_t* ___url_2;
	// System.Object Postgrest.Helpers/<MakeRequest>d__3::data
	RuntimeObject* ___data_3;
	// System.Net.Http.HttpMethod Postgrest.Helpers/<MakeRequest>d__3::method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___method_4;
	// Newtonsoft.Json.JsonSerializerSettings Postgrest.Helpers/<MakeRequest>d__3::serializerSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___serializerSettings_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.Helpers/<MakeRequest>d__3::headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers_6;
	// System.Threading.CancellationToken Postgrest.Helpers/<MakeRequest>d__3::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// Postgrest.ClientOptions Postgrest.Helpers/<MakeRequest>d__3::clientOptions
	ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___clientOptions_8;
	// System.Net.Http.HttpRequestMessage Postgrest.Helpers/<MakeRequest>d__3::<requestMessage>5__2
	HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* ___U3CrequestMessageU3E5__2_9;
	// System.Net.Http.HttpResponseMessage Postgrest.Helpers/<MakeRequest>d__3::<response>5__3
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___U3CresponseU3E5__3_10;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> Postgrest.Helpers/<MakeRequest>d__3::<>u__1
	TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 ___U3CU3Eu__1_11;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Postgrest.Helpers/<MakeRequest>d__3::<>u__2
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__2_12;
};

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<Postgrest.Attributes.ReferenceAttribute,System.Boolean>
struct Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7  : public HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449
{
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpRequestHeaders::expectContinue
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___expectContinue_5;
};

// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_t0ED183EB9E50B714F9A282F07935579F070B562B ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject* ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t* ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_tE6A7D4E99E3396B56718606824E99F870FCCF4BA* ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t* ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___U3CConverterU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_17;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsReferenceU3Ek__BackingField_18;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ___U3CNullValueHandlingU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ___U3CDefaultValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ___U3CReferenceLoopHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ___U3CObjectCreationHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ___U3CTypeNameHandlingU3Ek__BackingField_23;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___U3CShouldSerializeU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___U3CShouldDeserializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___U3CGetIsSpecifiedU3Ek__BackingField_26;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* ___U3CSetIsSpecifiedU3Ek__BackingField_27;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___U3CItemConverterU3Ek__BackingField_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CItemIsReferenceU3Ek__BackingField_29;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ___U3CItemTypeNameHandlingU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31;
};

// Newtonsoft.Json.JsonReader
struct JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765  : public RuntimeObject
{
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject* ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;
};

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA  : public JsonException_tFFE4BB54605E1573CD957C3A40BEC5571CC386BD
{
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_18;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_19;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_20;
};

// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59  : public RuntimeObject
{
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t6EEC84565C08B14107276B5023CE9E978DFCDF89* ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___Error_30;
};

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t53E7DEFF45EC8B1D5AE04D4FC6284E617F0D79CB* ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t7788656A280615072710710E8C15D23285850E8E ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_13;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Postgrest.OnRequestPreparedEventHandler
struct OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168  : public MulticastDelegate_t
{
};

// Postgrest.PostgrestContractResolver
struct PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D  : public DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD
{
	// System.Boolean Postgrest.PostgrestContractResolver::<IsUpdate>k__BackingField
	bool ___U3CIsUpdateU3Ek__BackingField_12;
	// System.Boolean Postgrest.PostgrestContractResolver::<IsInsert>k__BackingField
	bool ___U3CIsInsertU3Ek__BackingField_13;
	// System.Boolean Postgrest.PostgrestContractResolver::<IsUpsert>k__BackingField
	bool ___U3CIsUpsertU3Ek__BackingField_14;
};

// Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler
struct DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897  : public MulticastDelegate_t
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>

// System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.DateTime>

// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>
struct List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPostgrestQueryFilterU5BU5D_tE0672DDBB57A02A3FF27C47515642E5138803AA8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>
struct List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OnRequestPreparedEventHandlerU5BU5D_t770ECF7CE5F4308FDB9996C31014D2F231940B80* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>

// System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>
struct List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ReferenceAttributeU5BU5D_t619969BA3928CD891FA2362052EA06E5E71FC6B3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>
struct List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>

// System.Attribute

// System.Attribute

// Postgrest.Models.BaseModel

// Postgrest.Models.BaseModel

// Postgrest.Responses.BaseResponse

// Postgrest.Responses.BaseResponse

// System.Text.RegularExpressions.Capture

// System.Text.RegularExpressions.Capture

// Postgrest.Client

// Postgrest.Client

// Postgrest.Constants

// Postgrest.Constants

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

// Postgrest.Debugger
struct Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields
{
	// Postgrest.Debugger Postgrest.Debugger::<_instance>k__BackingField
	Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* ___U3C_instanceU3Ek__BackingField_0;
};

// Postgrest.Debugger

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

// Postgrest.Extensions.EnumExtensions

// Postgrest.Extensions.EnumExtensions

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.Expression

// System.Linq.Expressions.ExpressionVisitor

// System.Linq.Expressions.ExpressionVisitor

// Postgrest.Exceptions.FailureHint

// Postgrest.Exceptions.FailureHint

// Postgrest.FullTextSearchConfig

// Postgrest.FullTextSearchConfig

// System.Text.RegularExpressions.GroupCollection

// System.Text.RegularExpressions.GroupCollection

// Postgrest.Helpers
struct Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_StaticFields
{
	// System.Net.Http.HttpClient Postgrest.Helpers::Client
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ___Client_0;
	// System.Guid Postgrest.Helpers::AppSession
	Guid_t ___AppSession_1;
};

// Postgrest.Helpers

// Postgrest.Hooks
struct Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields
{
	// Postgrest.Hooks Postgrest.Hooks::<_instance>k__BackingField
	Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* ___U3C_instanceU3Ek__BackingField_0;
};

// Postgrest.Hooks

// System.Net.Http.HttpContent

// System.Net.Http.HttpContent

// System.Net.Http.HttpMessageInvoker

// System.Net.Http.HttpMessageInvoker

// System.Net.Http.HttpMethod
struct HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_StaticFields
{
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::delete_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___delete_method_0;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___get_method_1;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::head_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___head_method_2;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::options_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___options_method_3;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::post_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___post_method_4;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::put_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___put_method_5;
	// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::trace_method
	HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___trace_method_6;
};

// System.Net.Http.HttpMethod

// System.Net.Http.HttpRequestMessage

// System.Net.Http.HttpRequestMessage

// Postgrest.Index

// Postgrest.Index

// Postgrest.IntRange

// Postgrest.IntRange

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// Newtonsoft.Json.Linq.JToken

// Newtonsoft.Json.JsonConverter

// Newtonsoft.Json.JsonConverter

// System.Text.RegularExpressions.MatchCollection

// System.Text.RegularExpressions.MatchCollection

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Postgrest.Extensions.RangeExtensions

// Postgrest.Extensions.RangeExtensions

// System.Runtime.CompilerServices.RuntimeHelpers

// System.Runtime.CompilerServices.RuntimeHelpers

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Postgrest.Extensions.TypeExtensions

// Postgrest.Extensions.TypeExtensions

// System.UriBuilder

// System.UriBuilder

// Postgrest.Extensions.UriExtensions

// Postgrest.Extensions.UriExtensions

// Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0

// Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0

// Postgrest.Attributes.ReferenceAttribute/<>c
struct U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields
{
	// Postgrest.Attributes.ReferenceAttribute/<>c Postgrest.Attributes.ReferenceAttribute/<>c::<>9
	U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B* ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> Postgrest.Attributes.ReferenceAttribute/<>c::<>9__39_0
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___U3CU3E9__39_0_1;
};

// Postgrest.Attributes.ReferenceAttribute/<>c

// Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0

// Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0

// Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0

// Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<Postgrest.OnRequestPreparedEventHandler>

// System.Collections.Generic.List`1/Enumerator<Postgrest.OnRequestPreparedEventHandler>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>
struct Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF1867C36AA812A32C0BE91FB67B394AE399C8932* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7BDD01363BBCFF64B4A6BDDBBE222716A0B2E2BA* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>

// System.ValueTuple`2<System.Int32,System.Int32>

// System.ValueTuple`2<System.Int32,System.Int32>

// System.Linq.Expressions.BinaryExpression

// System.Linq.Expressions.BinaryExpression

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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Linq.Expressions.ConstantExpression

// System.Linq.Expressions.ConstantExpression

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

// Postgrest.Converters.DateTimeConverter

// Postgrest.Converters.DateTimeConverter

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Int32

// System.Int32

// Postgrest.Converters.IntArrayConverter

// Postgrest.Converters.IntArrayConverter

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Linq.Expressions.LambdaExpression

// System.Linq.Expressions.LambdaExpression

// Supabase.Core.Attributes.MapToAttribute

// Supabase.Core.Attributes.MapToAttribute

// System.Linq.Expressions.MemberExpression

// System.Linq.Expressions.MemberExpression

// System.Linq.Expressions.MethodCallExpression

// System.Linq.Expressions.MethodCallExpression

// System.Collections.Specialized.NameValueCollection

// System.Collections.Specialized.NameValueCollection

// System.Linq.Expressions.NewArrayExpression

// System.Linq.Expressions.NewArrayExpression

// System.Linq.Expressions.NewExpression

// System.Linq.Expressions.NewExpression

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Linq.Expressions.ParameterExpression

// System.Linq.Expressions.ParameterExpression

// Postgrest.Attributes.PrimaryKeyAttribute

// Postgrest.Attributes.PrimaryKeyAttribute

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// Postgrest.Converters.RangeConverter

// Postgrest.Converters.RangeConverter

// Postgrest.Attributes.ReferenceAttribute

// Postgrest.Attributes.ReferenceAttribute

// Postgrest.Linq.SelectExpressionVisitor

// Postgrest.Linq.SelectExpressionVisitor

// Postgrest.Linq.SetExpressionVisitor

// Postgrest.Linq.SetExpressionVisitor

// Postgrest.Attributes.TableAttribute

// Postgrest.Attributes.TableAttribute

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// Postgrest.Linq.WhereExpressionVisitor

// Postgrest.Linq.WhereExpressionVisitor

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>
struct AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>

// System.Nullable`1<System.DateTime>

// System.Nullable`1<System.DateTime>

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
};

// System.Reflection.ConstructorInfo

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.DateTimeOffset

// System.Globalization.DateTimeStyles

// System.Globalization.DateTimeStyles

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Linq.Expressions.ExpressionType

// System.Linq.Expressions.ExpressionType

// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_StaticFields
{
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___TimeoutDefault_2;
};

// System.Net.Http.HttpClient

// System.Net.HttpStatusCode

// System.Net.HttpStatusCode

// System.Int32Enum

// System.Int32Enum

// Newtonsoft.Json.Linq.JArray

// Newtonsoft.Json.Linq.JArray

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// Newtonsoft.Json.MemberSerialization

// Newtonsoft.Json.MemberSerialization

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// Newtonsoft.Json.NullValueHandling

// Newtonsoft.Json.NullValueHandling

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.Net.Http.StringContent

// System.Net.Http.StringContent

// System.UriPartial

// System.UriPartial

// Postgrest.Constants/CountType

// Postgrest.Constants/CountType

// Postgrest.Constants/NullPosition

// Postgrest.Constants/NullPosition

// Postgrest.Constants/Operator

// Postgrest.Constants/Operator

// Postgrest.Constants/Ordering

// Postgrest.Constants/Ordering

// Postgrest.Exceptions.FailureHint/Reason

// Postgrest.Exceptions.FailureHint/Reason

// Postgrest.QueryOptions/CountType

// Postgrest.QueryOptions/CountType

// Postgrest.QueryOptions/DuplicateResolutionType

// Postgrest.QueryOptions/DuplicateResolutionType

// Postgrest.QueryOptions/ReturnType

// Postgrest.QueryOptions/ReturnType

// Postgrest.Attributes.ReferenceAttribute/JoinType

// Postgrest.Attributes.ReferenceAttribute/JoinType

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>

// Postgrest.ClientOptions

// Postgrest.ClientOptions

// Postgrest.Attributes.ColumnAttribute

// Postgrest.Attributes.ColumnAttribute

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_StaticFields
{
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// System.String[] Newtonsoft.Json.Serialization.DefaultContractResolver::BlacklistedTypeNames
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___BlacklistedTypeNames_1;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ___BuiltInConverters_2;
};

// Newtonsoft.Json.Serialization.DefaultContractResolver

// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> System.Net.Http.Headers.HttpHeaders::known_headers
	Dictionary_2_t5CD3F4D4D92A89783AE1C95F1528A7B08E8A54E0* ___known_headers_0;
};

// System.Net.Http.Headers.HttpHeaders

// System.Net.Http.HttpResponseMessage

// System.Net.Http.HttpResponseMessage

// Newtonsoft.Json.Converters.IsoDateTimeConverter

// Newtonsoft.Json.Converters.IsoDateTimeConverter

// Postgrest.Exceptions.PostgrestException

// Postgrest.Exceptions.PostgrestException

// Postgrest.QueryFilter

// Postgrest.QueryFilter

// Postgrest.QueryOptions

// Postgrest.QueryOptions

// Postgrest.QueryOrderer

// Postgrest.QueryOrderer

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

// System.Linq.Expressions.UnaryExpression

// System.Linq.Expressions.UnaryExpression

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// Postgrest.Helpers/<MakeRequest>d__3

// Postgrest.Helpers/<MakeRequest>d__3

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Func`1<System.Object>

// System.Func`1<System.Object>

// System.Func`2<Postgrest.Attributes.ReferenceAttribute,System.Boolean>

// System.Func`2<Postgrest.Attributes.ReferenceAttribute,System.Boolean>

// System.Func`2<System.Type,System.Boolean>

// System.Func`2<System.Type,System.Boolean>

// System.Predicate`1<System.Object>

// System.Predicate`1<System.Object>

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.Net.Http.Headers.HttpRequestHeaders

// System.Net.Http.Headers.HttpRequestHeaders

// Newtonsoft.Json.Serialization.JsonProperty

// Newtonsoft.Json.Serialization.JsonProperty

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReader

// Newtonsoft.Json.JsonReaderException

// Newtonsoft.Json.JsonReaderException

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonSerializer

// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3_StaticFields
{
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTemplate
	StateU5BU5DU5BU5D_tA12046738DA5F6289ABA74ED1C079ED07EE202ED* ___StateArrayTemplate_1;
};

// Newtonsoft.Json.JsonWriter

// System.NotImplementedException

// System.NotImplementedException

// System.NotSupportedException

// System.NotSupportedException

// Postgrest.OnRequestPreparedEventHandler

// Postgrest.OnRequestPreparedEventHandler

// Postgrest.PostgrestContractResolver

// Postgrest.PostgrestContractResolver

// Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler

// Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
};

// Newtonsoft.Json.JsonSerializerSettings
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
// System.Collections.Generic.IDictionary`2<System.String,System.String>[]
struct IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3  : public RuntimeArray
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
// Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler[]
struct DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356  : public RuntimeArray
{
	ALIGN_FIELD (8) DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* m_Items[1];

	inline DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F  : public RuntimeArray
{
	ALIGN_FIELD (8) JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* m_Items[1];

	inline JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D m_Items[1];

	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		m_Items[index] = value;
	}
};


// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// T Supabase.Core.Extensions.DictionaryExtensions::MergeLeft<System.Object,System.Object,System.Object>(T,System.Collections.Generic.IDictionary`2<K,V>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryExtensions_MergeLeft_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m17065DF1566B0A370928A6AA6B0C8D61A55E2328_gshared (RuntimeObject* ___0_me, IDictionary_2U5BU5D_t50D9A419A7D96F5E8A533BE79EA986B47AC05026* ___1_others, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Postgrest.Helpers/<MakeRequest>d__3>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m56A1134F2E7B0A8C601245A42084A79739EDB0DF_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Postgrest.Helpers/<MakeRequest>d__3>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m2EB7F8F3DA60B6E8964DF3D19CB29BFA8133A31D_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared (MemberInfo_t* ___0_element, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T Postgrest.Extensions.EnumExtensions::GetAttribute<System.Object>(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnumExtensions_GetAttribute_TisRuntimeObject_mDF3C0B81B2BF7DAA1C613A7FBBCBC916C2E0B6FA_gshared (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.DateTime>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_gshared (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_gshared_inline (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.ClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.PostgrestContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestContractResolver__ctor_mCDE022FD27C299B9D7FE0471EC04AAA850F59CB5 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_ContractResolver(Newtonsoft.Json.Serialization.IContractResolver)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_ContractResolver_m88FDD134350590ABDBD87BD2AC124B1A5C2385D5_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::get_Converters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsoDateTimeConverter__ctor_m826994A815114F0A06F4788BEAF6A1EE2AFD0432 (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeStyles(System.Globalization.DateTimeStyles)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IsoDateTimeConverter_set_DateTimeStyles_m097C810F76901D4DAD661A83416AA4D0DFAC2719_inline (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Converters.IsoDateTimeConverter::set_DateTimeFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsoDateTimeConverter_set_DateTimeFormat_mE422F40170E5CDE98FE7AE5DB543122D9D7AA4D1 (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Postgrest.Hooks Postgrest.Hooks::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* Hooks_get_Instance_mF3B6840A51681BE758FCC44BB048CCDE15BBA771 (const RuntimeMethod* method) ;
// System.Void Postgrest.Hooks::AddRequestPreparedHandler(Postgrest.OnRequestPreparedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_AddRequestPreparedHandler_m79C16CAB722DEA48800C2773773882D26B39302A (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_handler, const RuntimeMethod* method) ;
// System.Void Postgrest.Hooks::ClearRequestPreparedHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_ClearRequestPreparedHandlers_m0F3639612C3B45F37DF90A898929DC98EE15D56D (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, const RuntimeMethod* method) ;
// Postgrest.Debugger Postgrest.Debugger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* Debugger_get_Instance_m7527DFB0F76D0C1C3BC95B7F94AC2BEE767F600B (const RuntimeMethod* method) ;
// System.Void Postgrest.Debugger::AddDebugHandler(Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_AddDebugHandler_mF820F26E8D2B31952D46A24684CF6D36A096C1A2 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_handler, const RuntimeMethod* method) ;
// System.Void Postgrest.Debugger::RemoveDebugHandler(Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_RemoveDebugHandler_m09BA594694A301013D82203CE12A98E65B7773F3 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_handler, const RuntimeMethod* method) ;
// System.Void Postgrest.Debugger::ClearDebugHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_ClearDebugHandlers_m0AD498337ADBCFF954842AD1C4BC3BD983B95122 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String Postgrest.Client::get_BaseUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Client_get_BaseUrl_mF6E69EDA55CAFFACEEB1E93BB1C619997E10F708_inline (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.UriBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder__ctor_m782D0160E73CC61448E17FF5AEFAEA22B3BAC145 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___0_uri, const RuntimeMethod* method) ;
// System.Uri System.UriBuilder::get_Uri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1 (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// Postgrest.ClientOptions Postgrest.Client::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C_inline (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.JsonSerializerSettings Postgrest.Client::SerializerSettings(Postgrest.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* Client_SerializerSettings_m3DE1C3C4D2E3FCD227CD248ACF817D388A4C1139 (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_options, const RuntimeMethod* method) ;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,Newtonsoft.Json.JsonSerializerSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25 (RuntimeObject* ___0_value, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___1_settings, const RuntimeMethod* method) ;
// T Newtonsoft.Json.JsonConvert::DeserializeObject<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE (String_t* ___0_value, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (String_t*, const RuntimeMethod*))JsonConvert_DeserializeObject_TisRuntimeObject_m4AED5444440BFC03D3CB9506F186AC7C37B45EF2_gshared)(___0_value, method);
}
// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_Post()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpMethod_get_Post_mEDC84247B73445A6922B43A065A10740C2F690CF_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.ClientOptions::get_Headers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ClientOptions_get_Headers_m97AB19A4ECEFB2D9DB27670808D7A2C86DF0C7D7_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m623BF34EB93B2B3A3B7D46743B508E2E2958939E_gshared)(__this, ___0_dictionary, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.Helpers::PrepareRequestHeaders(System.Net.Http.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Postgrest.ClientOptions,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Helpers_PrepareRequestHeaders_m2B16077B555A36778E49760040EFFA85D21874D0 (HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___0_method, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___2_options, int32_t ___3_rangeFrom, int32_t ___4_rangeTo, const RuntimeMethod* method) ;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Postgrest.Client::get_GetHeaders()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* Client_get_GetHeaders_mC367DA82A6400052FA7E83342C0BDEE567CA14FA_inline (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::Invoke()
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Func_1_Invoke_m627232433A84B3B05747AAE47C120BEEC8E62720_inline (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* __this, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// T Supabase.Core.Extensions.DictionaryExtensions::MergeLeft<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.String>(T,System.Collections.Generic.IDictionary`2<K,V>[])
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_me, IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* ___1_others, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*, const RuntimeMethod*))DictionaryExtensions_MergeLeft_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m17065DF1566B0A370928A6AA6B0C8D61A55E2328_gshared)(___0_me, ___1_others, method);
}
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Postgrest.Helpers::MakeRequest(Postgrest.ClientOptions,System.Net.Http.HttpMethod,System.String,Newtonsoft.Json.JsonSerializerSettings,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* Helpers_MakeRequest_m6998D05EB1C7637BAB1DB9C9700C639699EA74EC (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___1_method, String_t* ___2_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___3_serializerSettings, RuntimeObject* ___4_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___5_headers, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// Postgrest.Debugger Postgrest.Debugger::get__instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* Debugger_get__instance_mDEC6ED4A415CA2BBC193262E0E4F5546DD93D936_inline (const RuntimeMethod* method) ;
// System.Void Postgrest.Debugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger__ctor_m65F11C939145B244D16FC1DBB38479F6245CD0A6 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Debugger::set__instance(Postgrest.Debugger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Debugger_set__instance_m1E5FE8A023CFC694262B9084916D9E80B5B94533_inline (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>::.ctor()
inline void List_1__ctor_m5634CE743ACB5B129DCD48C44B753D0D4E8023FA (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>::Contains(T)
inline bool List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238 (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>::Add(T)
inline void List_1_Add_m2FA4164A32B5F968F0270235844FA768C984E3AA_inline (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>::Remove(T)
inline bool List_1_Remove_m1506A01A009EBC81B0977C0810CF2C0AF62745C1 (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>::Clear()
inline void List_1_Clear_mC26FCACB4CC3910C09CD1F5267AD83B95376D3A6_inline (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T[] System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler>::ToArray()
inline DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* List_1_ToArray_mADD5983A7D867B0F35EDFD6B3D7A3442F5AC07FE (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* __this, const RuntimeMethod* method)
{
	return ((  DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* (*) (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler::Invoke(System.Object,System.String,Postgrest.Exceptions.PostgrestException)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_inline (DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::Create()
inline AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC AsyncTaskMethodBuilder_1_Create_m37A96D10DE92514DFFEB385FFD1E42224DF335D9 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::Start<Postgrest.Helpers/<MakeRequest>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_mA1B61AF0862E0DE2DF701D50800495631630964C (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m56A1134F2E7B0A8C601245A42084A79739EDB0DF_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::get_Task()
inline Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* AsyncTaskMethodBuilder_1_get_Task_mD0B35629FE062D7B80432A0A77814F2FD1E645D1 (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, const RuntimeMethod* method)
{
	return ((  Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// System.String Postgrest.ClientOptions::get_Schema()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientOptions_get_Schema_m04890046A7798F244832EA808FA41AE94CFBE7EE_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Net.Http.HttpMethod System.Net.Http.HttpMethod::get_Get()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline (const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.HttpMethod::op_Equality(System.Net.Http.HttpMethod,System.Net.Http.HttpMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpMethod_op_Equality_m5549A2F5F00602554CE79413B83539794D623E73 (HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___0_left, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___1_right, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String Supabase.Core.Util::GetAssemblyVersion(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Util_GetAssemblyVersion_mED3A311B4429B692E7A009761B0C87174B0B1AD8 (Type_t* ___0_clientType, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.UriBuilder::get_Query()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriBuilder_get_Query_m905F5864CB1B5D09FD81F29B148541DFB353F78E_inline (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) ;
// System.Collections.Specialized.NameValueCollection System.Web.HttpUtility::ParseQueryString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* HttpUtility_ParseQueryString_m7F8828DBA344A88B76342B0DF79EC005FD9BE8A8 (String_t* ___0_query, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Void System.UriBuilder::set_Query(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UriBuilder_set_Query_m1B7AB6F65BBAC94C07681D79F2A8DBDB15E844ED (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpRequestMessage::.ctor(System.Net.Http.HttpMethod,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequestMessage__ctor_mF4583BF147D86D59669C63E6E063DC5102DC185B (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_requestUri, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.HttpMethod::op_Inequality(System.Net.Http.HttpMethod,System.Net.Http.HttpMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpMethod_op_Inequality_m76D710EDF5822FA9A02F66D92D2849D535658D94 (HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___0_left, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___1_right, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrWhiteSpace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10 (String_t* ___0_value, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JToken_Parse_mF3738B896F97E0FD725676A44D69A96B500FECF4 (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.Net.Http.StringContent::.ctor(System.String,System.Text.Encoding,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63 (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* __this, String_t* ___0_content, Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___1_encoding, String_t* ___2_mediaType, const RuntimeMethod* method) ;
// System.Void System.Net.Http.HttpRequestMessage::set_Content(System.Net.Http.HttpContent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Content_m522F62E997874DA5A3F77BD4DD7A1C7CA2629DC9_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___0_value, const RuntimeMethod* method) ;
// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpRequestMessage::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* HttpRequestMessage_get_Headers_m96F9758D4AA6C78EDFAFEB222FA05767054EE78C (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.Http.Headers.HttpHeaders::TryAddWithoutValidation(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpHeaders_TryAddWithoutValidation_m24F1C8D7DD9445C3B839B03B802759E7383A8D80 (HttpHeaders_t2AF7326A86CE4E4F524137C7A7FF8F3597C12449* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 (*) (Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,Postgrest.Helpers/<MakeRequest>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m89C2053F74C8314EB0E8079EC87C91F4A1BC65FE (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* ___0_awaiter, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m2EB7F8F3DA60B6E8964DF3D19CB29BFA8133A31D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9 (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* (*) (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.String> System.Net.Http.HttpContent::ReadAsStringAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B (HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Postgrest.Helpers/<MakeRequest>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m5760BF256197B4D31A36F5E178EE25690EE5D900 (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m2EB7F8F3DA60B6E8964DF3D19CB29BFA8133A31D_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean System.Net.Http.HttpResponseMessage::get_IsSuccessStatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpResponseMessage_get_IsSuccessStatusCode_m2B9DA5ECF8EE760D5A1A511C798FA08EAA931B9C (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Responses.BaseResponse::.ctor(Postgrest.ClientOptions,System.Net.Http.HttpResponseMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse__ctor_m43F487D1387F73D0403D07CA41BA5CB4B7A4C8CC (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_clientOptions, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___1_responseMessage, String_t* ___2_content, const RuntimeMethod* method) ;
// System.Void Postgrest.Exceptions.PostgrestException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Postgrest.Exceptions.PostgrestException::set_Content(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_Content_mE438287FF9680DF30897CBCFF871676F059FF207_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Exceptions.PostgrestException::set_Response(System.Net.Http.HttpResponseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_Response_m4542C20B1D18760DA3BFC8A1FD19922C39F41E3C_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_value, const RuntimeMethod* method) ;
// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Exceptions.PostgrestException::set_StatusCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_StatusCode_m66D27E11EE4E1F43FB24A98D3C9E01C819FDDDE5_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Exceptions.PostgrestException::AddReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException_AddReason_m6B77204B2084AED3F19CE0C3EF6D71CBAD2C58B1 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m7599D24FD0890F930B44ED7D24ED6C69B219DF55 (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mFB1629EB469DFFE684BAC903E423C47C0CBD893B (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Postgrest.Helpers/<MakeRequest>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__3_MoveNext_m42A788876A59542466130A12BAE9E8BE6E9C993C (U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Postgrest.Responses.BaseResponse>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_m1157BBD4D333617E6A3D560556E6F1C59050098D (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Postgrest.Helpers/<MakeRequest>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__3_SetStateMachine_m7C72BBABACDEFD3E75A577E9C493D186DACF077D (U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// Postgrest.Hooks Postgrest.Hooks::get__instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* Hooks_get__instance_m47CB721E58659DF6D8E3B2760F2989D3C3290368_inline (const RuntimeMethod* method) ;
// System.Void Postgrest.Hooks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks__ctor_mBB3C85A6C6CBAA5F008ACE1031770B020583C5BC (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Hooks::set__instance(Postgrest.Hooks)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hooks_set__instance_m5DECEA51B58E95E51AB084818FF7D03037D30BB2_inline (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>::.ctor()
inline void List_1__ctor_m466B5778ABEDA71011DCDA1A87004DA1D042B15B (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>::Contains(T)
inline bool List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23 (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>::Add(T)
inline void List_1_Add_mB4899328739782EB31BACF6FEEE0AB691725D19F_inline (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>::Remove(T)
inline bool List_1_Remove_m190F697908214F49DF893C953E8CE7035633AB05 (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>::Clear()
inline void List_1_Clear_m33452CA3F5E228F9E41ED648D582D2323045E2FE_inline (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void Postgrest.Debugger::Log(System.Object,System.String,Postgrest.Exceptions.PostgrestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_Log_mF594C3590E3F5549CA045AEC9360C8D561F9C500 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<Postgrest.OnRequestPreparedEventHandler>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* Enumerable_ToList_TisOnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168_m463AECB2AB8B6662931F83734F225BE7D909FBE9 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Postgrest.OnRequestPreparedEventHandler>::GetEnumerator()
inline Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD List_1_GetEnumerator_mEDFA9602C406AA69E2EEE18CB991B8B39C0A4C39 (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD (*) (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Postgrest.OnRequestPreparedEventHandler>::Dispose()
inline void Enumerator_Dispose_mC29C3B3958D60BCE5953AD321E92F5ACE785F98E (Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Postgrest.OnRequestPreparedEventHandler>::get_Current()
inline OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* Enumerator_get_Current_m23ABB34377E102F18CC50C54BEC5F2549114586A_inline (Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD* __this, const RuntimeMethod* method)
{
	return ((  OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* (*) (Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Postgrest.OnRequestPreparedEventHandler::Invoke(System.Object,Postgrest.ClientOptions,System.Net.Http.HttpMethod,System.String,Newtonsoft.Json.JsonSerializerSettings,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_inline (OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Postgrest.OnRequestPreparedEventHandler>::MoveNext()
inline bool Enumerator_MoveNext_m8879F49EB10E4DB85520370549F16AD87053F0FD (Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Postgrest.Index::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Index::get_IsFromEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Index_get_IsFromEnd_mC2397A557B468896F11F21B6A4BBABC97138F90D (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, const RuntimeMethod* method) ;
// Postgrest.Index Postgrest.Index::FromStart(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC_inline (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Postgrest.Index::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, const RuntimeMethod* method) ;
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method) ;
// Postgrest.Index Postgrest.IntRange::get_Start()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Index::Equals(Postgrest.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Index_Equals_m9775999D6FB56959A1BFA892A97B115CCCD76E59 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___0_other, const RuntimeMethod* method) ;
// Postgrest.Index Postgrest.IntRange::get_End()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) ;
// Postgrest.Index Postgrest.Index::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_get_End_m232CA9247B9476402135BAF6201C97A929BE0C53 (const RuntimeMethod* method) ;
// System.Void Postgrest.IntRange::.ctor(Postgrest.Index,Postgrest.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9 (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___0_start, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___1_end, const RuntimeMethod* method) ;
// Postgrest.Index Postgrest.Index::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_get_Start_m221F27B39862BC58C336DF11EA6BF26EDD0E8E5C (const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.ValueTuple`2<System.Int32,System.Int32>::.ctor(T1,T2)
inline void ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, int32_t ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, int32_t, int32_t, const RuntimeMethod*))ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_gshared)(__this, ___0_item1, ___1_item2, method);
}
// System.Void Postgrest.PostgrestContractResolver::set_IsUpdate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsUpdate_m4516CA8F429837CAADAA858884114548F086B5F3_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.PostgrestContractResolver::set_IsInsert(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsInsert_mC908DDF905EBC64F6A9730232D31745431ADF1A2_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.PostgrestContractResolver::set_IsUpsert(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsUpsert_mCC195666EACC9251A18F7273B0651EAE888313E3_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m64A4B9CB26B7D57D1FF281253F5D23C7A6B2E29A (U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* __this, const RuntimeMethod* method) ;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.DefaultContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* DefaultContractResolver_CreateProperty_m7C27609BD46BF2A2144D8D21F10419BFDF88374F (DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD* __this, MemberInfo_t* ___0_member, int32_t ___1_memberSerialization, const RuntimeMethod* method) ;
// System.Type Newtonsoft.Json.Serialization.JsonProperty::get_PropertyType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void Postgrest.Converters.RangeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConverter__ctor_mB429673F84BDDA8C83B8C43FAA63FA724196E786 (RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Converter(Newtonsoft.Json.JsonConverter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_Converter_mFC9963279952098BC4C2C67CB585A48EF9C725D8_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
// System.Void Postgrest.Converters.DateTimeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeConverter__ctor_mF1B24480DE0D7382D57BD2B6C51738988BE3510A (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Converters.IntArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntArrayConverter__ctor_m5BAE8957AD84EA2F5E7F27E38AFED0F0CB7D1F83 (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.CustomAttributeData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mB2CEFE620325CD63DB345E592BBF710406B312EA (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___0_source, method);
}
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Postgrest.Attributes.ColumnAttribute>(System.Reflection.MemberInfo)
inline ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* CustomAttributeExtensions_GetCustomAttribute_TisColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_mDD15F9B5EAE9EFD8FEBEDCBF58DC9175CC515776 (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.String Postgrest.Attributes.ColumnAttribute::get_ColumnName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_PropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonProperty_set_PropertyName_m9CED5A907D22FA06A57494405F5C1EE98E1054ED (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// Newtonsoft.Json.NullValueHandling Postgrest.Attributes.ColumnAttribute::get_NullValueHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ColumnAttribute_get_NullValueHandling_m9CDB5EDFD9DBD775F613D8B568CE5C4A76EE2F65_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Newtonsoft.Json.NullValueHandling>::.ctor(T)
inline void Nullable_1__ctor_mD1FB6279D3F0551989DE961B3C939626CC2C2F03 (Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___0_value, method);
}
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_NullValueHandling(System.Nullable`1<Newtonsoft.Json.NullValueHandling>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_NullValueHandling_m1975598294F96AAF9FB5C2EADBFA7A3B75B6B426_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ___0_value, const RuntimeMethod* method) ;
// System.Boolean Postgrest.PostgrestContractResolver::get_IsInsert()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsInsert_mD81B30965372B281DD1DD49C8ABBD81EC7FAC5B2_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Attributes.ColumnAttribute::get_IgnoreOnInsert()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ColumnAttribute_get_IgnoreOnInsert_mFC1920FFD53D438C3AF2A94A459C308A982D1B4B_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_Ignored(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_Ignored_m1F9CA36C6C94DD3E563A4A1C8462DE5FBA6F5558_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean Postgrest.PostgrestContractResolver::get_IsUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsUpdate_mF7FDD2AD2E0F01C05F2CB8371222B5579200851F_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Attributes.ColumnAttribute::get_IgnoreOnUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ColumnAttribute_get_IgnoreOnUpdate_m018670F7BB2CD11C3993611412FB0C41C0C2272A_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) ;
// System.Boolean Postgrest.PostgrestContractResolver::get_IsUpsert()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsUpsert_mB17EAD75DB90AEF78C7AA396487A22A13834FA11_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Postgrest.Attributes.ReferenceAttribute>(System.Reflection.MemberInfo)
inline ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* CustomAttributeExtensions_GetCustomAttribute_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_mD92B62A7BAA4648694C5A1A34F917F2E4DC00EB6 (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.String Postgrest.Attributes.ReferenceAttribute::get_ForeignKey()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// System.String Postgrest.Attributes.ReferenceAttribute::get_ColumnName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// System.String Postgrest.Attributes.ReferenceAttribute::get_TableName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// T System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Postgrest.Attributes.PrimaryKeyAttribute>(System.Reflection.MemberInfo)
inline PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* CustomAttributeExtensions_GetCustomAttribute_TisPrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_m8A8DEF69CE4D0FAE7883994C8F3AC606ED0956FD (MemberInfo_t* ___0_element, const RuntimeMethod* method)
{
	return ((  PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* (*) (MemberInfo_t*, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_m5B4B712DB5F08EBF4518A1973C9F11C15A4BEAE9_gshared)(___0_element, method);
}
// System.String Postgrest.Attributes.PrimaryKeyAttribute::get_ColumnName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20 (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Newtonsoft.Json.Serialization.JsonProperty::set_ShouldSerialize(System.Predicate`1<System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_ShouldSerialize_m46EE6AE304CECB231A5042488EA30F61A140741D_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_value, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultContractResolver__ctor_m52F3E230F523349797B923489423735999EA4A4E (DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD* __this, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Attributes.PrimaryKeyAttribute::get_ShouldInsert()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PrimaryKeyAttribute_get_ShouldInsert_m5FCBB0369761A25ADB9511FD88E14C5E4D0B046C_inline (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m4B5BB65E069D2146E808A1CE5F424ACA2F4D2281 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
// System.Void Postgrest.QueryFilter::set_Property(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9_inline (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.QueryFilter::set_Op(Postgrest.Constants/Operator)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.QueryFilter::set_Criteria(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Exceptions.PostgrestException::set_Reason(Postgrest.Exceptions.FailureHint/Reason)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.FullTextSearchConfig::set_QueryText(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FullTextSearchConfig_set_QueryText_mCA3F31E07BD211B3FDE562D1BAB16ADD9EC5C147_inline (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.FullTextSearchConfig::set_Config(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FullTextSearchConfig_set_Config_mEA5F76066ABDF922F787233A9BC511A31F462841_inline (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Boolean Postgrest.QueryOptions::get_Upsert()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QueryOptions_get_Upsert_m7A538CA82B129F9ABF35CF3C1974877508ECE8C4_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) ;
// Postgrest.QueryOptions/DuplicateResolutionType Postgrest.QueryOptions::get_DuplicateResolution()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QueryOptions_get_DuplicateResolution_m98D42E2E436175C3731AB3B1FEC682FA11ECF4B8_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) ;
// T Postgrest.Extensions.EnumExtensions::GetAttribute<Supabase.Core.Attributes.MapToAttribute>(System.Enum)
inline MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018 (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___0_value, const RuntimeMethod* method)
{
	return ((  MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* (*) (Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*, const RuntimeMethod*))EnumExtensions_GetAttribute_TisRuntimeObject_mDF3C0B81B2BF7DAA1C613A7FBBCBC916C2E0B6FA_gshared)(___0_value, method);
}
// System.String Supabase.Core.Attributes.MapToAttribute::get_Mapping()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MapToAttribute_get_Mapping_m5432E60DBE072A7A894EF505449C33CC6E88484D_inline (MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// Postgrest.QueryOptions/ReturnType Postgrest.QueryOptions::get_Returning()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QueryOptions_get_Returning_m3ABFDB8CCA2F937F62243D683A1994BC53A49BDB_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) ;
// Postgrest.QueryOptions/CountType Postgrest.QueryOptions::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QueryOptions_get_Count_m7FB70DC101EF3E0D0159E10BDE6CD511FC78150F_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___0_separator, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Responses.BaseResponse::set_ClientOptions(Postgrest.ClientOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseResponse_set_ClientOptions_mFD1C843E649CF53CBA251AC0806CEDC0B63CD81F_inline (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Responses.BaseResponse::set_ResponseMessage(System.Net.Http.HttpResponseMessage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseResponse_set_ResponseMessage_m053D20CD7E93ED04C9E676A677D3FE188FC95A96_inline (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Responses.BaseResponse::set_Content(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseResponse_set_Content_m8B31C14B9589FED1B443D080A0D417A7818B87B8_inline (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06 (MemberInfo_t* ___0_element, Type_t* ___1_attributeType, const RuntimeMethod* method) ;
// System.String Postgrest.Attributes.TableAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TableAttribute_get_Name_m5731CFBB26ED7B86A5C190597DBC850A33627EB3_inline (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>::.ctor()
inline void Dictionary_2__ctor_m78C7D632DA297529DD61FB55E747B351607C4154 (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6 (Type_t* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088 (PropertyInfo_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_mA8CFB5FE270D81FB865BC0FA57B7239685FDC036 (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* __this, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135*, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m4048047E4BF47E38F46EF63573E110A18A7C11A4 (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135*, const RuntimeMethod*))Dictionary_2_get_Count_m4DDA9442C238A443489115E22B026AD366851549_gshared)(__this, method);
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewArrayExpression::get_Expressions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* NewArrayExpression_get_Expressions_mBC8AE846F8167BA863B7BE9200C7947F2FB737EF_inline (NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41 (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// System.String Postgrest.Linq.SelectExpressionVisitor::GetColumnFromMemberExpression(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Postgrest.Linq.SelectExpressionVisitor::get_Columns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SelectExpressionVisitor_get_Columns_m263E90A4D9F20AFE39621EB7AD6FC7950822FDB3_inline (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline (UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* __this, const RuntimeMethod* method) ;
// System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104 (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* __this, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionVisitor__ctor_m2974B344C35DD823BDA6D6313DAE4C7F64541393 (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590* __this, const RuntimeMethod* method) ;
// System.String Postgrest.Linq.SetExpressionVisitor::GetColumnFromMemberExpression(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.SetExpressionVisitor::set_Column(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.SetExpressionVisitor::set_ExpectedType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, Type_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.SetExpressionVisitor::HandleKeyValuePair(System.Linq.Expressions.NewExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* ___0_node, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::get_Arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* NewExpression_get_Arguments_m153E264CF13BC082DEF2B0AB84331B1A6766B32E (NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>::get_Item(System.Int32)
inline Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502 (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___0_index, method);
}
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.Expression::Lambda(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* Expression_Lambda_m519B751EC5116A4165693FBF98D6D40BCFAEBABA (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_body, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___1_parameters, const RuntimeMethod* method) ;
// System.Delegate System.Linq.Expressions.LambdaExpression::Compile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7 (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Object System.Delegate::DynamicInvoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4 (Delegate_t* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.SetExpressionVisitor::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_Value_mAF2083CA480A9D4D253B0A01E914DA2C800BAB29_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Type Postgrest.Linq.SetExpressionVisitor::get_ExpectedType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SetExpressionVisitor_get_ExpectedType_mEC7321AEE47CF9EF102E26382168235908BD8B21_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) ;
// System.Object Postgrest.Linq.SetExpressionVisitor::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SetExpressionVisitor_get_Value_mA0976966093DCE9B06526F704BA0F0D59E02443C_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// Postgrest.Constants/Operator Postgrest.Linq.WhereExpressionVisitor::GetMappedOperator(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhereExpressionVisitor_GetMappedOperator_m27128B42DA7C44B680BE00D7B9A718517C80340F (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_node, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.WhereExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor__ctor_m409895514F56D28565CEB09799FA9894D25B864C (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline (BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::get_Right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline (BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>::.ctor()
inline void List_1__ctor_mA45494A2FBC10E0E4C5A3084FA881C83CE041948 (List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// Postgrest.QueryFilter Postgrest.Linq.WhereExpressionVisitor::get_Filter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* WhereExpressionVisitor_get_Filter_mF6063C5F5B8E8267A25E14D2AD8A9FE308E5E3B0_inline (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>::Add(T)
inline void List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_inline (List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Postgrest.QueryFilter::.ctor(Postgrest.Constants/Operator,System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_mCD8AB853E7DD2313A061107483A6D33F2BEF7C12 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, int32_t ___0_op, List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* ___1_filters, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.WhereExpressionVisitor::set_Filter(Postgrest.QueryFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* ___0_value, const RuntimeMethod* method) ;
// System.String Postgrest.Linq.WhereExpressionVisitor::GetColumnFromMemberExpression(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WhereExpressionVisitor_GetColumnFromMemberExpression_m88CC8BF47115CEA01C299802BCF3B5A2727F11AD (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleConstantExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.ConstantExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleConstantExpression_m353F927F9062FE9F6806C2183DB79769A15655DA (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___2_constantExpression, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleMemberExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleMemberExpression_m23B941936154AA26DF8581BA817A4705CF19FFFD (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___2_memberExpression, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleNewExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.NewExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleNewExpression_mDA37CBD79E96BD5F446B5A49CBD1F81A7BB3E3B4 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* ___2_newExpression, const RuntimeMethod* method) ;
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleUnaryExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleUnaryExpression_mE473B6161B7E43C63CB06146757BAEF833A87C11 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* ___2_unaryExpression, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::get_Object()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* MethodCallExpression_get_Object_m3E06943B2633E3F64AFF6E35D591DB017956299D (MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::get_Method()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* MethodCallExpression_get_Method_m76D210171E9633BD4E62F23C9300CF86098E5615_inline (MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Object> Postgrest.Linq.WhereExpressionVisitor::GetArgumentValues(System.Linq.Expressions.MethodCallExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* WhereExpressionVisitor_GetArgumentValues_mCCE881DCE6FFC8700AC207EB4E001D18F75AC79E (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* ___0_methodCall, const RuntimeMethod* method) ;
// System.Void Postgrest.QueryFilter::.ctor(System.String,Postgrest.Constants/Operator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_property, int32_t ___1_op, RuntimeObject* ___2_criteria, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::First<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_gshared)(___0_source, method);
}
// System.Void System.NotImplementedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742 (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Object System.Linq.Expressions.ConstantExpression::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConstantExpression_get_Value_mCC4506ED39F235D2D2A57728CC0DD36C390B4C17_inline (ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* __this, const RuntimeMethod* method) ;
// System.Object Postgrest.Linq.WhereExpressionVisitor::GetMemberExpressionValue(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereExpressionVisitor_GetMemberExpressionValue_mCC3698A10A75EF7AFFB90310019C442B55EC8258 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_member, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::get_Constructor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* NewExpression_get_Constructor_m3E55B5B89F1297D692E143FF9B89C7B5363BFC78_inline (NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_parameters, const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::get_Arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* MethodCallExpression_get_Arguments_m386763439BCBD07BD686689D32990FA5155076F5 (MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetInheritanceHierarchyU3Ed__0__ctor_mCC5790EF2C1E1C4F855BD22A059C0EC0B9065C17 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Type> Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetInheritanceHierarchyU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m87090A699AF6DC379507E66F0353E55CE272A299 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) ;
// System.String System.Uri::GetLeftPart(System.UriPartial)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_GetLeftPart_mCD76AFF4AF320A23BCB70AA59E2C1BF78120BC7D (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, int32_t ___0_part, const RuntimeMethod* method) ;
// System.String System.Uri::get_LocalPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_LocalPath_m60EE736E6F601238CBC20CE7DBB647C61F16DB0E (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.String Postgrest.Exceptions.PostgrestException::get_Content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) ;
// System.Int32 Postgrest.Exceptions.PostgrestException::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostgrestException_get_StatusCode_m38FB188E3201FE7D9187CD4704C6A9C34BCEB803_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// Postgrest.Exceptions.FailureHint/Reason Postgrest.Exceptions.FailureHint::DetectReason(Postgrest.Exceptions.PostgrestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FailureHint_DetectReason_mD4EFE1F2A10E2CCC68E5DFE2C715EFB9755959D9 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___0_pgex, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.DateTime> Postgrest.Converters.DateTimeConverter::ParseInfinity(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC DateTimeConverter_ParseInfinity_mAC453A43E1B905F37DA0C7B0344F5EAC0B1369FE (String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.DateTime>::get_HasValue()
inline bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.DateTime>::get_Value()
inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991 (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method)
{
	return ((  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, const RuntimeMethod*))Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_gshared)(__this, method);
}
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.DateTime>::.ctor()
inline void List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8 (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, const RuntimeMethod*))List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_gshared)(__this, method);
}
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807 (JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<Newtonsoft.Json.Linq.JToken>(System.Collections.Generic.IEnumerable`1<TSource>)
inline JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F* Enumerable_ToArray_TisJToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_m5AC9F87EF81C48BDB0EDE5B03C3F89CCF2792F6B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___0_source, method);
}
// System.Void System.Collections.Generic.List`1<System.DateTime>::Add(T)
inline void List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_inline (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Nullable`1<System.DateTime>::.ctor(T)
inline void Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_gshared)(__this, ___0_value, method);
}
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB (JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* __this, const RuntimeMethod* method) ;
// System.String System.String::Join<System.Int32>(System.String,System.Collections.Generic.IEnumerable`1<T>)
inline String_t* String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (String_t*, RuntimeObject*, const RuntimeMethod*))String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_gshared)(___0_separator, ___1_values, method);
}
// Postgrest.IntRange Postgrest.Converters.RangeConverter::ParseIntRange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* RangeConverter_ParseIntRange_m4E302D7561DF86EAC380B7BC9914461205063330 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.String Postgrest.Extensions.RangeExtensions::ToPostgresString(Postgrest.IntRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RangeExtensions_ToPostgresString_mF5FFDB3ED3A34CFD72D198EDAD0CA2C526D8CE28 (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* ___0_range, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F (String_t* ___0_input, String_t* ___1_pattern, const RuntimeMethod* method) ;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926 (MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* __this, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Group_t26371E9136D6F43782C487B63C67C5FC4F472881* GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3 (GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* __this, int32_t ___0_groupnum, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Capture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC (Capture_tE11B735186DAFEE5F7A3BF5A739E9CCCE99DC24A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// Postgrest.Index Postgrest.Index::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_op_Implicit_m665FD38C14AB578E0922C5E342E31D2B2EC06FC4 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ColumnAttribute::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColumnAttribute_set_NullValueHandling_m6CEB4CD95F9136E27BD356338D0BE5719B6B42D2_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute::.ctor(System.Type,System.Boolean,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute__ctor_m2333396C6785652D0ADAE289C06EAD387F73AB10 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, Type_t* ___0_model, bool ___1_includeInQuery, bool ___2_useInnerJoin, String_t* ___3_columnName, String_t* ___4_foreignKey, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Attributes.ReferenceAttribute::IsDerivedFromBaseModel(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_IsDerivedFromBaseModel_m0E362AE0A6D2857D0F260038B539597613F2557A (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute::set_IgnoreOnInsert(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_IgnoreOnInsert_m4080218C81FD66D20D22B6BA03385F6234FA456F_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute::set_IgnoreOnUpdate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_IgnoreOnUpdate_m794BEF0673B116F49645414AB1E03426D3DB86EA_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute::set_ColumnName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_ColumnName_mFB7A913820BB485D018625CC6075868B8810D5ED_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute::set_ForeignKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_ForeignKey_m15AC1F13205DE07BEDD70D3D331CEDD878062EDE_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>::.ctor()
inline void List_1__ctor_m963F0DDF612974E4E3639182219DEAF872EA42C9 (List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Postgrest.Attributes.ReferenceAttribute::ParseColumns(System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_ParseColumns_m12A9F6FFE49665719160EF06BC2CC3AD5B73FDB9 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29** ___0_seenRefs, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute::ParseRelationships(System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_ParseRelationships_mC5FF55C52126A02F7BB8FD0C9DAD1C56BB4FBF79 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* ___0_seenRefs, const RuntimeMethod* method) ;
// System.Type Postgrest.Attributes.ReferenceAttribute::get_Model()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Postgrest.Attributes.ReferenceAttribute::get_Columns()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m6C843189F020157FF3E8AAB74C33BD0940649248 (U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* __this, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Attributes.ReferenceAttribute::get_IncludeInQuery()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_IncludeInQuery_m5E29362E8B892997302ABB00824CE33C08EC68D0_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Postgrest.Attributes.ReferenceAttribute,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m530324BC74A84391E1427A1C730B679212809B4E (Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// TSource System.Linq.Enumerable::FirstOrDefault<Postgrest.Attributes.ReferenceAttribute>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* Enumerable_FirstOrDefault_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_m193DCADC99F0E56BB191C2920680F83B8C9D2A08 (RuntimeObject* ___0_source, Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A* ___1_predicate, const RuntimeMethod* method)
{
	return ((  ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* (*) (RuntimeObject*, Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___0_source, ___1_predicate, method);
}
// System.Void System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>::Add(T)
inline void List_1_Add_m2D09FADC083F8E12A112231E0079D36C72B562EE_inline (List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* __this, ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29*, ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void Postgrest.Attributes.ReferenceAttribute::ParseProperties(System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_ParseProperties_mF7BF271EB0E9114A362418915D3E8C0B053E0606 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* ___0_seenRefs, const RuntimeMethod* method) ;
// System.Boolean Postgrest.Attributes.ReferenceAttribute::get_UseInnerJoin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_UseInnerJoin_mEA31215B3125A07C142B69449F7C1E39095C5F55_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Type> Postgrest.Extensions.TypeExtensions::GetInheritanceHierarchy(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetInheritanceHierarchy_mB34133CF389AFD238E905F1C91A7CEB1D8FAB3B8 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D (RuntimeObject* ___0_source, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___1_predicate, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___0_source, ___1_predicate, method);
}
// System.Void Postgrest.Attributes.ReferenceAttribute/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB3877C29EEEDCA8009934DAF4FF6C2D7E1FC923 (U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.Attributes.TableAttribute::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableAttribute_set_Name_m03F1617440878EFA864E134879CABB20EBA4FE5F_inline (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_mEDD124DAF73EA2A4D00CA81D5FA3972EC6B707CE (EmbeddedAttribute_tD5E837A615E377DAA6FF516AEC9343133C7D0E30* __this, const RuntimeMethod* method) 
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
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m8B7D1A20A666D24BF07EDF4265B38CCBA82DB1BD (NullableAttribute_t919567099A6AA1A0840D16E86EFE781CBF551F27* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		uint8_t L_2 = ___0_p;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_2);
		__this->___NullableFlags_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_1);
		return;
	}
}
// System.Void System.Runtime.CompilerServices.NullableAttribute::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m6CDE202A26A76A8FF68F0D2DEADA6BD74C614498 (NullableAttribute_t919567099A6AA1A0840D16E86EFE781CBF551F27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_p;
		__this->___NullableFlags_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NullableFlags_0), (void*)L_0);
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
// System.Void System.Runtime.CompilerServices.NullableContextAttribute::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m0834278824392D9D4692B2506D6EB1FBA04B4071 (NullableContextAttribute_tA645844D38D91BDD1FDE252DC3E90EAA52F21197* __this, uint8_t ___0_p, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		uint8_t L_0 = ___0_p;
		__this->___Flag_0 = L_0;
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
// Newtonsoft.Json.JsonSerializerSettings Postgrest.Client::SerializerSettings(Postgrest.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* Client_SerializerSettings_m3DE1C3C4D2E3FCD227CD248ACF817D388A4C1139 (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F77F0C35CCA4F9E1D83DFC9C6739877A7987443);
		s_Il2CppMethodInitialized = true;
	}
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = ___0_options;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_1 = (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*)il2cpp_codegen_object_new(ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC(L_1, NULL);
		___0_options = L_1;
	}

IL_000a:
	{
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_2, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_3 = L_2;
		PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* L_4 = (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D*)il2cpp_codegen_object_new(PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PostgrestContractResolver__ctor_mCDE022FD27C299B9D7FE0471EC04AAA850F59CB5(L_4, NULL);
		NullCheck(L_3);
		JsonSerializerSettings_set_ContractResolver_m88FDD134350590ABDBD87BD2AC124B1A5C2385D5_inline(L_3, L_4, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_5 = L_3;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline(L_5, NULL);
		IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* L_7 = (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C*)il2cpp_codegen_object_new(IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		IsoDateTimeConverter__ctor_m826994A815114F0A06F4788BEAF6A1EE2AFD0432(L_7, NULL);
		IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* L_8 = L_7;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_9 = ___0_options;
		NullCheck(L_9);
		int32_t L_10 = L_9->___DateTimeStyles_1;
		NullCheck(L_8);
		IsoDateTimeConverter_set_DateTimeStyles_m097C810F76901D4DAD661A83416AA4D0DFAC2719_inline(L_8, L_10, NULL);
		IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* L_11 = L_8;
		NullCheck(L_11);
		IsoDateTimeConverter_set_DateTimeFormat_mE422F40170E5CDE98FE7AE5DB543122D9D7AA4D1(L_11, _stringLiteral3F77F0C35CCA4F9E1D83DFC9C6739877A7987443, NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<Newtonsoft.Json.JsonConverter>::Add(T) */, ICollection_1_tBA46B0B91EBAF6B08DED48AF18B2916FC06B7FC6_il2cpp_TypeInfo_var, L_6, L_11);
		return L_5;
	}
}
// System.String Postgrest.Client::get_BaseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Client_get_BaseUrl_mF6E69EDA55CAFFACEEB1E93BB1C619997E10F708 (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBaseUrlU3Ek__BackingField_0;
		return L_0;
	}
}
// Postgrest.ClientOptions Postgrest.Client::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = __this->___U3COptionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Client::AddRequestPreparedHandler(Postgrest.OnRequestPreparedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_AddRequestPreparedHandler_m8C0FC3F66857BEE04AAB6B13C60AC4F92C5BD145 (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_handler, const RuntimeMethod* method) 
{
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0;
		L_0 = Hooks_get_Instance_mF3B6840A51681BE758FCC44BB048CCDE15BBA771(NULL);
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_1 = ___0_handler;
		NullCheck(L_0);
		Hooks_AddRequestPreparedHandler_m79C16CAB722DEA48800C2773773882D26B39302A(L_0, L_1, NULL);
		return;
	}
}
// System.Void Postgrest.Client::RemoveRequestPreparedHandler(Postgrest.OnRequestPreparedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_RemoveRequestPreparedHandler_m347E4B670AF7202D8E22E38A47B8407D7DC305BE (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_handler, const RuntimeMethod* method) 
{
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0;
		L_0 = Hooks_get_Instance_mF3B6840A51681BE758FCC44BB048CCDE15BBA771(NULL);
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_1 = ___0_handler;
		NullCheck(L_0);
		Hooks_AddRequestPreparedHandler_m79C16CAB722DEA48800C2773773882D26B39302A(L_0, L_1, NULL);
		return;
	}
}
// System.Void Postgrest.Client::ClearRequestPreparedHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ClearRequestPreparedHandlers_mB9CF8EAD2BDE9F4EA78B7BA40B81EAA78E0467D6 (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0;
		L_0 = Hooks_get_Instance_mF3B6840A51681BE758FCC44BB048CCDE15BBA771(NULL);
		NullCheck(L_0);
		Hooks_ClearRequestPreparedHandlers_m0F3639612C3B45F37DF90A898929DC98EE15D56D(L_0, NULL);
		return;
	}
}
// System.Void Postgrest.Client::AddDebugHandler(Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_AddDebugHandler_m0E0E3AA698CC4A228810372AC3DAC64FD553A998 (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_handler, const RuntimeMethod* method) 
{
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0;
		L_0 = Debugger_get_Instance_m7527DFB0F76D0C1C3BC95B7F94AC2BEE767F600B(NULL);
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_1 = ___0_handler;
		NullCheck(L_0);
		Debugger_AddDebugHandler_mF820F26E8D2B31952D46A24684CF6D36A096C1A2(L_0, L_1, NULL);
		return;
	}
}
// System.Void Postgrest.Client::RemoveDebugHandler(Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_RemoveDebugHandler_mB80AD67C177AA098B17000C4C448C515FB0B060C (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_handler, const RuntimeMethod* method) 
{
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0;
		L_0 = Debugger_get_Instance_m7527DFB0F76D0C1C3BC95B7F94AC2BEE767F600B(NULL);
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_1 = ___0_handler;
		NullCheck(L_0);
		Debugger_RemoveDebugHandler_m09BA594694A301013D82203CE12A98E65B7773F3(L_0, L_1, NULL);
		return;
	}
}
// System.Void Postgrest.Client::ClearDebugHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_ClearDebugHandlers_mF0511E214B65E92AD9DB23F919E3D2129C3E37AE (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0;
		L_0 = Debugger_get_Instance_m7527DFB0F76D0C1C3BC95B7F94AC2BEE767F600B(NULL);
		NullCheck(L_0);
		Debugger_ClearDebugHandlers_m0AD498337ADBCFF954842AD1C4BC3BD983B95122(L_0, NULL);
		return;
	}
}
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Postgrest.Client::get_GetHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* Client_get_GetHeaders_mC367DA82A6400052FA7E83342C0BDEE567CA14FA (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = __this->___U3CGetHeadersU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.Client::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_GetHeaders_m2BAAB09278AE6547F5156C5D1327C5E67C8EC4BB (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ___0_value;
		__this->___U3CGetHeadersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetHeadersU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.Client::.ctor(System.String,Postgrest.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m98CE1A65950CEA483AD61CFC44F55626606246B5 (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, String_t* ___0_baseUrl, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* G_B2_0 = NULL;
	Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* G_B2_1 = NULL;
	ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* G_B1_0 = NULL;
	Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_baseUrl;
		__this->___U3CBaseUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseUrlU3Ek__BackingField_0), (void*)L_0);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_1 = ___1_options;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = __this;
			goto IL_0018;
		}
	}
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_3 = (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*)il2cpp_codegen_object_new(ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC(L_3, NULL);
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0018:
	{
		NullCheck(G_B2_1);
		G_B2_1->___U3COptionsU3Ek__BackingField_1 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___U3COptionsU3Ek__BackingField_1), (void*)G_B2_0);
		return;
	}
}
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Postgrest.Client::Rpc(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* Client_Rpc_m9EFEED03B693BDB5EABA20C9D814430738E448FE (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, String_t* ___0_procedureName, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44CD9958B3A6DB16C5812CB102698946DB55080D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* V_1 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_3 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		String_t* L_0;
		L_0 = Client_get_BaseUrl_mF6E69EDA55CAFFACEEB1E93BB1C619997E10F708_inline(__this, NULL);
		String_t* L_1 = ___0_procedureName;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_0, _stringLiteral44CD9958B3A6DB16C5812CB102698946DB55080D, L_1, NULL);
		UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_3 = (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*)il2cpp_codegen_object_new(UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UriBuilder__ctor_m782D0160E73CC61448E17FF5AEFAEA22B3BAC145(L_3, L_2, NULL);
		NullCheck(L_3);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4;
		L_4 = UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		V_0 = L_5;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_6;
		L_6 = Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C_inline(__this, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_7;
		L_7 = Client_SerializerSettings_m3DE1C3C4D2E3FCD227CD248ACF817D388A4C1139(L_6, NULL);
		V_1 = L_7;
		V_2 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		RuntimeObject* L_8 = ___1_parameters;
		if (!L_8)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_9 = ___1_parameters;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25(L_9, L_10, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12;
		L_12 = JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE(L_11, JsonConvert_DeserializeObject_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m30C078A3E2A53EBEEB795FB81DA5C7B87B137DFE_RuntimeMethod_var);
		V_2 = L_12;
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_13;
		L_13 = HttpMethod_get_Post_mEDC84247B73445A6922B43A065A10740C2F690CF_inline(NULL);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_14;
		L_14 = Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C_inline(__this, NULL);
		NullCheck(L_14);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15;
		L_15 = ClientOptions_get_Headers_m97AB19A4ECEFB2D9DB27670808D7A2C86DF0C7D7_inline(L_14, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_16, L_15, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_17;
		L_17 = Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_18;
		L_18 = Helpers_PrepareRequestHeaders_m2B16077B555A36778E49760040EFFA85D21874D0(L_13, L_16, L_17, ((int32_t)-2147483648LL), ((int32_t)-2147483648LL), NULL);
		V_3 = L_18;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_19;
		L_19 = Client_get_GetHeaders_mC367DA82A6400052FA7E83342C0BDEE567CA14FA_inline(__this, NULL);
		if (!L_19)
		{
			goto IL_008d;
		}
	}
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_20;
		L_20 = Client_get_GetHeaders_mC367DA82A6400052FA7E83342C0BDEE567CA14FA_inline(__this, NULL);
		NullCheck(L_20);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21;
		L_21 = Func_1_Invoke_m627232433A84B3B05747AAE47C120BEEC8E62720_inline(L_20, NULL);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_22 = (IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)SZArrayNew(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var, (uint32_t)1);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_23 = L_22;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = V_3;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25;
		L_25 = DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05(L_21, L_23, DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05_RuntimeMethod_var);
		V_3 = L_25;
	}

IL_008d:
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_26;
		L_26 = Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_27;
		L_27 = HttpMethod_get_Post_mEDC84247B73445A6922B43A065A10740C2F690CF_inline(NULL);
		String_t* L_28 = V_0;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_29 = V_1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_30 = V_2;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = V_3;
		il2cpp_codegen_initobj((&V_4), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_32 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var);
		Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* L_33;
		L_33 = Helpers_MakeRequest_m6998D05EB1C7637BAB1DB9C9700C639699EA74EC(L_26, L_27, L_28, L_29, L_30, L_31, L_32, NULL);
		return L_33;
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
// System.String Postgrest.ClientOptions::get_Schema()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ClientOptions_get_Schema_m04890046A7798F244832EA808FA41AE94CFBE7EE (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSchemaU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.ClientOptions::set_Schema(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions_set_Schema_mF2F9821D3750542504958A119F483712D4497BD3 (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSchemaU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemaU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.ClientOptions::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ClientOptions_get_Headers_m97AB19A4ECEFB2D9DB27670808D7A2C86DF0C7D7 (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CHeadersU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Postgrest.ClientOptions::set_Headers(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions_set_Headers_mB8F09FE1DEE793170E45E92656F9C723B5D4E421 (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CHeadersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.ClientOptions::get_QueryParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ClientOptions_get_QueryParams_mA327EE5EDD63447A2F7CC9A795F7E82296D4C31D (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CQueryParamsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Postgrest.ClientOptions::set_QueryParams(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions_set_QueryParams_mF60CB84A68AA5920001AC4CD73508C2736E5A9AE (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CQueryParamsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryParamsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.ClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CSchemaU3Ek__BackingField_0 = _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemaU3Ek__BackingField_0), (void*)_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43);
		__this->___DateTimeStyles_1 = ((int32_t)16);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CHeadersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField_3), (void*)L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CQueryParamsU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryParamsU3Ek__BackingField_4), (void*)L_1);
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
// Postgrest.Debugger Postgrest.Debugger::get__instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* Debugger_get__instance_mDEC6ED4A415CA2BBC193262E0E4F5546DD93D936 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0 = ((Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Debugger::set__instance(Postgrest.Debugger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_set__instance_m1E5FE8A023CFC694262B9084916D9E80B5B94533 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0 = ___0_value;
		((Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Postgrest.Debugger Postgrest.Debugger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* Debugger_get_Instance_m7527DFB0F76D0C1C3BC95B7F94AC2BEE767F600B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0;
		L_0 = Debugger_get__instance_mDEC6ED4A415CA2BBC193262E0E4F5546DD93D936_inline(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_1 = (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333*)il2cpp_codegen_object_new(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Debugger__ctor_m65F11C939145B244D16FC1DBB38479F6245CD0A6(L_1, NULL);
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_2 = L_1;
		Debugger_set__instance_m1E5FE8A023CFC694262B9084916D9E80B5B94533_inline(L_2, NULL);
	}

IL_0013:
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_3;
		L_3 = Debugger_get__instance_mDEC6ED4A415CA2BBC193262E0E4F5546DD93D936_inline(NULL);
		return L_3;
	}
}
// System.Void Postgrest.Debugger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger__ctor_m65F11C939145B244D16FC1DBB38479F6245CD0A6 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5634CE743ACB5B129DCD48C44B753D0D4E8023FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_0 = (List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD*)il2cpp_codegen_object_new(List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5634CE743ACB5B129DCD48C44B753D0D4E8023FA(L_0, List_1__ctor_m5634CE743ACB5B129DCD48C44B753D0D4E8023FA_RuntimeMethod_var);
		__this->____debugListeners_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____debugListeners_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Postgrest.Debugger::AddDebugHandler(Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_AddDebugHandler_mF820F26E8D2B31952D46A24684CF6D36A096C1A2 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2FA4164A32B5F968F0270235844FA768C984E3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_0 = __this->____debugListeners_1;
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_1 = ___0_handler;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238(L_0, L_1, List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_3 = __this->____debugListeners_1;
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_4 = ___0_handler;
		NullCheck(L_3);
		List_1_Add_m2FA4164A32B5F968F0270235844FA768C984E3AA_inline(L_3, L_4, List_1_Add_m2FA4164A32B5F968F0270235844FA768C984E3AA_RuntimeMethod_var);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Postgrest.Debugger::RemoveDebugHandler(Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_RemoveDebugHandler_m09BA594694A301013D82203CE12A98E65B7773F3 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1506A01A009EBC81B0977C0810CF2C0AF62745C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_0 = __this->____debugListeners_1;
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_1 = ___0_handler;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238(L_0, L_1, List_1_Contains_mD5A4D62DE5017B26F24817B02E4882CBE8C21238_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_3 = __this->____debugListeners_1;
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_4 = ___0_handler;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m1506A01A009EBC81B0977C0810CF2C0AF62745C1(L_3, L_4, List_1_Remove_m1506A01A009EBC81B0977C0810CF2C0AF62745C1_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Postgrest.Debugger::ClearDebugHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_ClearDebugHandlers_m0AD498337ADBCFF954842AD1C4BC3BD983B95122 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC26FCACB4CC3910C09CD1F5267AD83B95376D3A6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_0 = __this->____debugListeners_1;
		NullCheck(L_0);
		List_1_Clear_mC26FCACB4CC3910C09CD1F5267AD83B95376D3A6_inline(L_0, List_1_Clear_mC26FCACB4CC3910C09CD1F5267AD83B95376D3A6_RuntimeMethod_var);
		return;
	}
}
// System.Void Postgrest.Debugger::Log(System.Object,System.String,Postgrest.Exceptions.PostgrestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_Log_mF594C3590E3F5549CA045AEC9360C8D561F9C500 (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mADD5983A7D867B0F35EDFD6B3D7A3442F5AC07FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* V_0 = NULL;
	int32_t V_1 = 0;
	{
		List_1_t416EE443975A3E36EF988990D0FF8157A7563FCD* L_0 = __this->____debugListeners_1;
		NullCheck(L_0);
		DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* L_1;
		L_1 = List_1_ToArray_mADD5983A7D867B0F35EDFD6B3D7A3442F5AC07FE(L_0, List_1_ToArray_mADD5983A7D867B0F35EDFD6B3D7A3442F5AC07FE_RuntimeMethod_var);
		V_0 = L_1;
		V_1 = 0;
		goto IL_001f;
	}

IL_0010:
	{
		DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = ___0_sender;
		String_t* L_7 = ___1_message;
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_8 = ___2_exception;
		NullCheck(L_5);
		DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_inline(L_5, L_6, L_7, L_8, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_001f:
	{
		int32_t L_10 = V_1;
		DebugEventHandlerU5BU5D_t6404CC1986E30C74E51594B53394A4798E1E5356* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
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
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Postgrest.Helpers::MakeRequest(Postgrest.ClientOptions,System.Net.Http.HttpMethod,System.String,Newtonsoft.Json.JsonSerializerSettings,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* Helpers_MakeRequest_m6998D05EB1C7637BAB1DB9C9700C639699EA74EC (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___1_method, String_t* ___2_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___3_serializerSettings, RuntimeObject* ___4_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___5_headers, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___6_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m37A96D10DE92514DFFEB385FFD1E42224DF335D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_mA1B61AF0862E0DE2DF701D50800495631630964C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mD0B35629FE062D7B80432A0A77814F2FD1E645D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m37A96D10DE92514DFFEB385FFD1E42224DF335D9(AsyncTaskMethodBuilder_1_Create_m37A96D10DE92514DFFEB385FFD1E42224DF335D9_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_1 = ___0_clientOptions;
		(&V_0)->___clientOptions_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___clientOptions_8), (void*)L_1);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_2 = ___1_method;
		(&V_0)->___method_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___method_4), (void*)L_2);
		String_t* L_3 = ___2_url;
		(&V_0)->___url_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___url_2), (void*)L_3);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_4 = ___3_serializerSettings;
		(&V_0)->___serializerSettings_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___serializerSettings_5), (void*)L_4);
		RuntimeObject* L_5 = ___4_data;
		(&V_0)->___data_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___data_3), (void*)L_5);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = ___5_headers;
		(&V_0)->___headers_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___headers_6), (void*)L_6);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___6_cancellationToken;
		(&V_0)->___cancellationToken_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___cancellationToken_7))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_8 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_mA1B61AF0862E0DE2DF701D50800495631630964C(L_8, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_mA1B61AF0862E0DE2DF701D50800495631630964C_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_9 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* L_10;
		L_10 = AsyncTaskMethodBuilder_1_get_Task_mD0B35629FE062D7B80432A0A77814F2FD1E645D1(L_9, AsyncTaskMethodBuilder_1_get_Task_mD0B35629FE062D7B80432A0A77814F2FD1E645D1_RuntimeMethod_var);
		return L_10;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.Helpers::PrepareRequestHeaders(System.Net.Http.HttpMethod,System.Collections.Generic.Dictionary`2<System.String,System.String>,Postgrest.ClientOptions,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Helpers_PrepareRequestHeaders_m2B16077B555A36778E49760040EFFA85D21874D0 (HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___0_method, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___2_options, int32_t ___3_rangeFrom, int32_t ___4_rangeTo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B75051519367FF34289B53BBAF79585B3798604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2231B1E0242AFEBB12D1FA81705C7C03FA5DEA9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C2BC7E26223DFE0C04D22A8DC035DC5C5861261);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A8495D9C7F52B8FE6C7D4DBC4266CC3CAD329F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43F359D9C18671595E02BBB870F7FA5605FFB8A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF300D2310959AF105732D339376803869D9B2B91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B5_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B8_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* G_B9_1 = NULL;
	String_t* G_B14_0 = NULL;
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = ___2_options;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_1 = (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*)il2cpp_codegen_object_new(ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC(L_1, NULL);
		___2_options = L_1;
	}

IL_000a:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___1_headers;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_3 = ___2_options;
		NullCheck(L_3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = ClientOptions_get_Headers_m97AB19A4ECEFB2D9DB27670808D7A2C86DF0C7D7_inline(L_3, NULL);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_5 = (IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)SZArrayNew(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var, (uint32_t)1);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_6 = L_5;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___1_headers;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8;
		L_8 = DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05(L_4, L_6, DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_m8AD24FF1A73E0C526DBB5A7A6EF8C73A0EF0AA05_RuntimeMethod_var);
		G_B5_0 = L_8;
		goto IL_002f;
	}

IL_0024:
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_9 = ___2_options;
		NullCheck(L_9);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_10;
		L_10 = ClientOptions_get_Headers_m97AB19A4ECEFB2D9DB27670808D7A2C86DF0C7D7_inline(L_9, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9(L_11, L_10, Dictionary_2__ctor_m1D3CFAA07F0EE9405CAF58853C2E25690A51D0F9_RuntimeMethod_var);
		G_B5_0 = L_11;
	}

IL_002f:
	{
		___1_headers = G_B5_0;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_12 = ___2_options;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = ClientOptions_get_Schema_m04890046A7798F244832EA808FA41AE94CFBE7EE_inline(L_12, NULL);
		bool L_14;
		L_14 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_13, NULL);
		if (L_14)
		{
			goto IL_0063;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = ___1_headers;
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_16 = ___0_method;
		il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_17;
		L_17 = HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline(NULL);
		bool L_18;
		L_18 = HttpMethod_op_Equality_m5549A2F5F00602554CE79413B83539794D623E73(L_16, L_17, NULL);
		G_B7_0 = L_15;
		if (L_18)
		{
			G_B8_0 = L_15;
			goto IL_0053;
		}
	}
	{
		G_B9_0 = _stringLiteral2231B1E0242AFEBB12D1FA81705C7C03FA5DEA9A;
		G_B9_1 = G_B7_0;
		goto IL_0058;
	}

IL_0053:
	{
		G_B9_0 = _stringLiteral2C2BC7E26223DFE0C04D22A8DC035DC5C5861261;
		G_B9_1 = G_B8_0;
	}

IL_0058:
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_19 = ___2_options;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = ClientOptions_get_Schema_m04890046A7798F244832EA808FA41AE94CFBE7EE_inline(L_19, NULL);
		NullCheck(G_B9_1);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(G_B9_1, G_B9_0, L_20, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_0063:
	{
		int32_t L_21 = ___3_rangeFrom;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-2147483648LL))))
		{
			goto IL_00ab;
		}
	}
	{
		int32_t L_22 = ___4_rangeTo;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)-2147483648LL)))))
		{
			goto IL_0077;
		}
	}
	{
		G_B14_0 = ((String_t*)(NULL));
		goto IL_007e;
	}

IL_0077:
	{
		String_t* L_23;
		L_23 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___4_rangeTo), NULL);
		G_B14_0 = L_23;
	}

IL_007e:
	{
		V_0 = G_B14_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_24 = ___1_headers;
		NullCheck(L_24);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_24, _stringLiteral3A8495D9C7F52B8FE6C7D4DBC4266CC3CAD329F1, _stringLiteralF300D2310959AF105732D339376803869D9B2B91, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_25 = ___1_headers;
		int32_t L_26 = ___3_rangeFrom;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		String_t* L_29 = V_0;
		String_t* L_30;
		L_30 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBAF124AB08242B7785EC2B6DBC3C6459CB98BC8, L_28, L_29, NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_25, _stringLiteralF4C926E25326963C2B7FEF2E308523C33CF6D9F0, L_30, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_00ab:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = ___1_headers;
		NullCheck(L_31);
		bool L_32;
		L_32 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_31, _stringLiteral0B75051519367FF34289B53BBAF79585B3798604, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_32)
		{
			goto IL_0100;
		}
	}
	try
	{// begin try (depth: 1)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = ___1_headers;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		String_t* L_36;
		L_36 = Util_GetAssemblyVersion_mED3A311B4429B692E7A009761B0C87174B0B1AD8(L_35, NULL);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral43F359D9C18671595E02BBB870F7FA5605FFB8A8, L_36, NULL);
		NullCheck(L_33);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_33, _stringLiteral0B75051519367FF34289B53BBAF79585B3798604, L_37, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		goto IL_0100;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00de;
		}
		throw e;
	}

CATCH_00de:
	{// begin catch(System.Exception)
		Exception_t* L_38 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = ___1_headers;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var)));
		Guid_t L_40 = ((Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var))))->___AppSession_1;
		Guid_t L_41 = L_40;
		RuntimeObject* L_42 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var)), &L_41);
		String_t* L_43;
		L_43 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral93D55B32F54D9CFC32073EC187261A572B716B0B)), L_42, NULL);
		NullCheck(L_39);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0B75051519367FF34289B53BBAF79585B3798604)), L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0100;
	}// end catch (depth: 1)

IL_0100:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = ___1_headers;
		return L_44;
	}
}
// System.Void Postgrest.Helpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Helpers__cctor_m33FFA13304B8516327129759FFCAB572FAC06407 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_0 = (HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42*)il2cpp_codegen_object_new(HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HttpClient__ctor_mD64C48138600CF1398E7BB24BF33EB582ECB1AFD(L_0, NULL);
		((Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var))->___Client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var))->___Client_0), (void*)L_0);
		Guid_t L_1;
		L_1 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		((Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var))->___AppSession_1 = L_1;
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
// System.Void Postgrest.Helpers/<MakeRequest>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__3_MoveNext_m42A788876A59542466130A12BAE9E8BE6E9C993C (U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m5760BF256197B4D31A36F5E178EE25690EE5D900_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m89C2053F74C8314EB0E8079EC87C91F4A1BC65FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mFB1629EB469DFFE684BAC903E423C47C0CBD893B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* V_1 = NULL;
	UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* V_2 = NULL;
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* V_3 = NULL;
	String_t* V_4 = NULL;
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_5 = NULL;
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_6;
	memset((&V_6), 0, sizeof(V_6));
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_7;
	memset((&V_7), 0, sizeof(V_7));
	String_t* V_8 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_9;
	memset((&V_9), 0, sizeof(V_9));
	HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* V_10 = NULL;
	TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 V_11;
	memset((&V_11), 0, sizeof(V_11));
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Exception_t* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if ((!(((uint32_t)L_1) > ((uint32_t)1))))
			{
				goto IL_00b9_1;
			}
		}
		{
			String_t* L_2 = __this->___url_2;
			UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_3 = (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72*)il2cpp_codegen_object_new(UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			UriBuilder__ctor_m782D0160E73CC61448E17FF5AEFAEA22B3BAC145(L_3, L_2, NULL);
			V_2 = L_3;
			UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_4 = V_2;
			NullCheck(L_4);
			String_t* L_5;
			L_5 = UriBuilder_get_Query_m905F5864CB1B5D09FD81F29B148541DFB353F78E_inline(L_4, NULL);
			NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_6;
			L_6 = HttpUtility_ParseQueryString_m7F8828DBA344A88B76342B0DF79EC005FD9BE8A8(L_5, NULL);
			V_3 = L_6;
			RuntimeObject* L_7 = __this->___data_3;
			if (!L_7)
			{
				goto IL_0096_1;
			}
		}
		{
			HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_8 = __this->___method_4;
			il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
			HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_9;
			L_9 = HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline(NULL);
			bool L_10;
			L_10 = HttpMethod_op_Equality_m5549A2F5F00602554CE79413B83539794D623E73(L_8, L_9, NULL);
			if (!L_10)
			{
				goto IL_0096_1;
			}
		}
		{
			RuntimeObject* L_11 = __this->___data_3;
			V_5 = ((Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)IsInstClass((RuntimeObject*)L_11, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var));
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_12 = V_5;
			if (!L_12)
			{
				goto IL_0096_1;
			}
		}
		{
			Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = V_5;
			NullCheck(L_13);
			Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_14;
			L_14 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_13, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
			V_6 = L_14;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084_1:
				{// begin finally (depth: 2)
					{
						int32_t L_15 = V_0;
						if ((((int32_t)L_15) >= ((int32_t)0)))
						{
							goto IL_0095_1;
						}
					}
					{
						Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_6), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
					}

IL_0095_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0079_2;
				}

IL_005c_2:
				{
					KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_16;
					L_16 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_6), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
					V_7 = L_16;
					NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_17 = V_3;
					String_t* L_18;
					L_18 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_7), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
					String_t* L_19;
					L_19 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_7), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
					NullCheck(L_17);
					NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(L_17, L_18, L_19, NULL);
				}

IL_0079_2:
				{
					bool L_20;
					L_20 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_6), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
					if (L_20)
					{
						goto IL_005c_2;
					}
				}
				{
					goto IL_0096_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0096_1:
		{
			UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_21 = V_2;
			NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_22 = V_3;
			NullCheck(L_22);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
			NullCheck(L_21);
			UriBuilder_set_Query_m1B7AB6F65BBAC94C07681D79F2A8DBDB15E844ED(L_21, L_23, NULL);
			HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_24 = __this->___method_4;
			UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* L_25 = V_2;
			NullCheck(L_25);
			Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_26;
			L_26 = UriBuilder_get_Uri_mD0DF3F7DDF7C56CC99E2D29E06C959F80A4171A1(L_25, NULL);
			HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_27 = (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)il2cpp_codegen_object_new(HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			HttpRequestMessage__ctor_mF4583BF147D86D59669C63E6E063DC5102DC185B(L_27, L_24, L_26, NULL);
			__this->___U3CrequestMessageU3E5__2_9 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestMessageU3E5__2_9), (void*)L_27);
		}

IL_00b9_1:
		{
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_02bb_1:
				{// begin finally (depth: 2)
					{
						int32_t L_28 = V_0;
						if ((((int32_t)L_28) >= ((int32_t)0)))
						{
							goto IL_02d2_1;
						}
					}
					{
						HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_29 = __this->___U3CrequestMessageU3E5__2_9;
						if (!L_29)
						{
							goto IL_02d2_1;
						}
					}
					{
						HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_30 = __this->___U3CrequestMessageU3E5__2_9;
						NullCheck(L_30);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_30);
					}

IL_02d2_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					int32_t L_31 = V_0;
					if (!L_31)
					{
						goto IL_01cd_2;
					}
				}
				{
					int32_t L_32 = V_0;
					if ((((int32_t)L_32) == ((int32_t)1)))
					{
						goto IL_023f_2;
					}
				}
				{
					RuntimeObject* L_33 = __this->___data_3;
					if (!L_33)
					{
						goto IL_0127_2;
					}
				}
				{
					HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_34 = __this->___method_4;
					il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
					HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_35;
					L_35 = HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline(NULL);
					bool L_36;
					L_36 = HttpMethod_op_Inequality_m76D710EDF5822FA9A02F66D92D2849D535658D94(L_34, L_35, NULL);
					if (!L_36)
					{
						goto IL_0127_2;
					}
				}
				{
					RuntimeObject* L_37 = __this->___data_3;
					JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_38 = __this->___serializerSettings_5;
					il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
					String_t* L_39;
					L_39 = JsonConvert_SerializeObject_mEAA691E5567819FD0CDFEBB98629609ADB899D25(L_37, L_38, NULL);
					V_8 = L_39;
					String_t* L_40 = V_8;
					bool L_41;
					L_41 = String_IsNullOrWhiteSpace_m42E1F3B2C358068D645E46F01CF1834DC77A5A10(L_40, NULL);
					if (L_41)
					{
						goto IL_0127_2;
					}
				}
				{
					String_t* L_42 = V_8;
					il2cpp_codegen_runtime_class_init_inline(JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_il2cpp_TypeInfo_var);
					JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_43;
					L_43 = JToken_Parse_mF3738B896F97E0FD725676A44D69A96B500FECF4(L_42, NULL);
					NullCheck(L_43);
					bool L_44;
					L_44 = VirtualFuncInvoker0< bool >::Invoke(16 /* System.Boolean Newtonsoft.Json.Linq.JToken::get_HasValues() */, L_43);
					if (!L_44)
					{
						goto IL_0127_2;
					}
				}
				{
					HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_45 = __this->___U3CrequestMessageU3E5__2_9;
					String_t* L_46 = V_8;
					Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_47;
					L_47 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
					StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9* L_48 = (StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9*)il2cpp_codegen_object_new(StringContent_t8EA5FB1B3591FA3EBCDF3B6C8D8A932299370AF9_il2cpp_TypeInfo_var);
					NullCheck(L_48);
					StringContent__ctor_mFA0D8BF1997C7B433B2C8371976440840A45AA63(L_48, L_46, L_47, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
					NullCheck(L_45);
					HttpRequestMessage_set_Content_m522F62E997874DA5A3F77BD4DD7A1C7CA2629DC9_inline(L_45, L_48, NULL);
				}

IL_0127_2:
				{
					Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_49 = __this->___headers_6;
					if (!L_49)
					{
						goto IL_0183_2;
					}
				}
				{
					Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_50 = __this->___headers_6;
					NullCheck(L_50);
					Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_51;
					L_51 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_50, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
					V_6 = L_51;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0171_2:
						{// begin finally (depth: 3)
							{
								int32_t L_52 = V_0;
								if ((((int32_t)L_52) >= ((int32_t)0)))
								{
									goto IL_0182_2;
								}
							}
							{
								Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_6), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
							}

IL_0182_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							goto IL_0166_3;
						}

IL_013e_3:
						{
							KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_53;
							L_53 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_6), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
							V_9 = L_53;
							HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_54 = __this->___U3CrequestMessageU3E5__2_9;
							NullCheck(L_54);
							HttpRequestHeaders_tAC1E0B2246D915164C80B7A7925DE31283788DF7* L_55;
							L_55 = HttpRequestMessage_get_Headers_m96F9758D4AA6C78EDFAFEB222FA05767054EE78C(L_54, NULL);
							String_t* L_56;
							L_56 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_9), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
							String_t* L_57;
							L_57 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_9), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
							NullCheck(L_55);
							bool L_58;
							L_58 = HttpHeaders_TryAddWithoutValidation_m24F1C8D7DD9445C3B839B03B802759E7383A8D80(L_55, L_56, L_57, NULL);
						}

IL_0166_3:
						{
							bool L_59;
							L_59 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_6), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
							if (L_59)
							{
								goto IL_013e_3;
							}
						}
						{
							goto IL_0183_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0183_2:
				{
					il2cpp_codegen_runtime_class_init_inline(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var);
					HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* L_60 = ((Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_StaticFields*)il2cpp_codegen_static_fields_for(Helpers_tFD2BAE2DA8B7B1C4BE5B5E9368DF0FFA2EB97274_il2cpp_TypeInfo_var))->___Client_0;
					HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* L_61 = __this->___U3CrequestMessageU3E5__2_9;
					CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_62 = __this->___cancellationToken_7;
					NullCheck(L_60);
					Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023* L_63;
					L_63 = VirtualFuncInvoker2< Task_1_t152E82A8DF2C092B0FB381308DFF0AC49C862023*, HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(6 /* System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpMessageInvoker::SendAsync(System.Net.Http.HttpRequestMessage,System.Threading.CancellationToken) */, L_60, L_61, L_62);
					NullCheck(L_63);
					TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_64;
					L_64 = Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC(L_63, Task_1_GetAwaiter_mA3E2D3F1DA6F55760A0A6ED583A6A1E8527D6EDC_RuntimeMethod_var);
					V_11 = L_64;
					bool L_65;
					L_65 = TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE((&V_11), TaskAwaiter_1_get_IsCompleted_m112852C27629D0D199ECA0BB86C7FE89677300BE_RuntimeMethod_var);
					if (L_65)
					{
						goto IL_01ea_2;
					}
				}
				{
					int32_t L_66 = 0;
					V_0 = L_66;
					__this->___U3CU3E1__state_0 = L_66;
					TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_67 = V_11;
					__this->___U3CU3Eu__1_11 = L_67;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_11))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_68 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&__this->___U3CU3Et__builder_1);
					il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m89C2053F74C8314EB0E8079EC87C91F4A1BC65FE(L_68, (&V_11), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m89C2053F74C8314EB0E8079EC87C91F4A1BC65FE_RuntimeMethod_var);
					goto IL_031c;
				}

IL_01cd_2:
				{
					TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4 L_69 = __this->___U3CU3Eu__1_11;
					V_11 = L_69;
					TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4* L_70 = (TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4*)(&__this->___U3CU3Eu__1_11);
					il2cpp_codegen_initobj(L_70, sizeof(TaskAwaiter_1_tE38072315F6A88FBFA6F29739C27EDE17D53E6B4));
					int32_t L_71 = (-1);
					V_0 = L_71;
					__this->___U3CU3E1__state_0 = L_71;
				}

IL_01ea_2:
				{
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_72;
					L_72 = TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9((&V_11), TaskAwaiter_1_GetResult_m367AF608B24E025158242A6AA2770013C38FB8A9_RuntimeMethod_var);
					V_10 = L_72;
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_73 = V_10;
					__this->___U3CresponseU3E5__3_10 = L_73;
					Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__3_10), (void*)L_73);
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_74 = __this->___U3CresponseU3E5__3_10;
					NullCheck(L_74);
					HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_75;
					L_75 = HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline(L_74, NULL);
					NullCheck(L_75);
					Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_76;
					L_76 = HttpContent_ReadAsStringAsync_m69166E8C01E4287FFBA3E8E41805FF068362BF2B(L_75, NULL);
					NullCheck(L_76);
					TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_77;
					L_77 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_76, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
					V_12 = L_77;
					bool L_78;
					L_78 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_12), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
					if (L_78)
					{
						goto IL_025c_2;
					}
				}
				{
					int32_t L_79 = 1;
					V_0 = L_79;
					__this->___U3CU3E1__state_0 = L_79;
					TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_80 = V_12;
					__this->___U3CU3Eu__2_12 = L_80;
					Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_12))->___m_task_0), (void*)NULL);
					AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_81 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&__this->___U3CU3Et__builder_1);
					il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
					AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m5760BF256197B4D31A36F5E178EE25690EE5D900(L_81, (&V_12), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7_m5760BF256197B4D31A36F5E178EE25690EE5D900_RuntimeMethod_var);
					goto IL_031c;
				}

IL_023f_2:
				{
					TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_82 = __this->___U3CU3Eu__2_12;
					V_12 = L_82;
					TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_83 = (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6*)(&__this->___U3CU3Eu__2_12);
					il2cpp_codegen_initobj(L_83, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
					int32_t L_84 = (-1);
					V_0 = L_84;
					__this->___U3CU3E1__state_0 = L_84;
				}

IL_025c_2:
				{
					String_t* L_85;
					L_85 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_12), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
					V_4 = L_85;
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_86 = __this->___U3CresponseU3E5__3_10;
					NullCheck(L_86);
					bool L_87;
					L_87 = HttpResponseMessage_get_IsSuccessStatusCode_m2B9DA5ECF8EE760D5A1A511C798FA08EAA931B9C(L_86, NULL);
					if (!L_87)
					{
						goto IL_0288_2;
					}
				}
				{
					ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_88 = __this->___clientOptions_8;
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_89 = __this->___U3CresponseU3E5__3_10;
					String_t* L_90 = V_4;
					BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* L_91 = (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312*)il2cpp_codegen_object_new(BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312_il2cpp_TypeInfo_var);
					NullCheck(L_91);
					BaseResponse__ctor_m43F487D1387F73D0403D07CA41BA5CB4B7A4C8CC(L_91, L_88, L_89, L_90, NULL);
					V_1 = L_91;
					goto IL_02fa;
				}

IL_0288_2:
				{
					String_t* L_92 = V_4;
					PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_93 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
					NullCheck(L_93);
					PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_93, L_92, NULL);
					PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_94 = L_93;
					String_t* L_95 = V_4;
					NullCheck(L_94);
					PostgrestException_set_Content_mE438287FF9680DF30897CBCFF871676F059FF207_inline(L_94, L_95, NULL);
					PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_96 = L_94;
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_97 = __this->___U3CresponseU3E5__3_10;
					NullCheck(L_96);
					PostgrestException_set_Response_m4542C20B1D18760DA3BFC8A1FD19922C39F41E3C_inline(L_96, L_97, NULL);
					PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_98 = L_96;
					HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_99 = __this->___U3CresponseU3E5__3_10;
					NullCheck(L_99);
					int32_t L_100;
					L_100 = HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline(L_99, NULL);
					NullCheck(L_98);
					PostgrestException_set_StatusCode_m66D27E11EE4E1F43FB24A98D3C9E01C819FDDDE5_inline(L_98, L_100, NULL);
					PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_101 = L_98;
					NullCheck(L_101);
					PostgrestException_AddReason_m6B77204B2084AED3F19CE0C3EF6D71CBAD2C58B1(L_101, NULL);
					IL2CPP_RAISE_MANAGED_EXCEPTION(L_101, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMakeRequestU3Ed__3_MoveNext_m42A788876A59542466130A12BAE9E8BE6E9C993C_RuntimeMethod_var)));
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02d3;
		}
		throw e;
	}

CATCH_02d3:
	{// begin catch(System.Exception)
		Exception_t* L_102 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_13 = L_102;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestMessageU3E5__2_9 = (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestMessageU3E5__2_9), (void*)(HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)NULL);
		__this->___U3CresponseU3E5__3_10 = (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__3_10), (void*)(HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL);
		AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_103 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_104 = V_13;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m7599D24FD0890F930B44ED7D24ED6C69B219DF55(L_103, L_104, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m7599D24FD0890F930B44ED7D24ED6C69B219DF55_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_031c;
	}// end catch (depth: 1)

IL_02fa:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CrequestMessageU3E5__2_9 = (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestMessageU3E5__2_9), (void*)(HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2*)NULL);
		__this->___U3CresponseU3E5__3_10 = (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CresponseU3E5__3_10), (void*)(HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970*)NULL);
		AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_105 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&__this->___U3CU3Et__builder_1);
		BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* L_106 = V_1;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mFB1629EB469DFFE684BAC903E423C47C0CBD893B(L_105, L_106, AsyncTaskMethodBuilder_1_SetResult_mFB1629EB469DFFE684BAC903E423C47C0CBD893B_RuntimeMethod_var);
	}

IL_031c:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CMakeRequestU3Ed__3_MoveNext_m42A788876A59542466130A12BAE9E8BE6E9C993C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7*>(__this + _offset);
	U3CMakeRequestU3Ed__3_MoveNext_m42A788876A59542466130A12BAE9E8BE6E9C993C(_thisAdjusted, method);
}
// System.Void Postgrest.Helpers/<MakeRequest>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMakeRequestU3Ed__3_SetStateMachine_m7C72BBABACDEFD3E75A577E9C493D186DACF077D (U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_m1157BBD4D333617E6A3D560556E6F1C59050098D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC* L_0 = (AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t6EB016CC611F025CA6D3552C936E97E6D511CCDC_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_m1157BBD4D333617E6A3D560556E6F1C59050098D(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_m1157BBD4D333617E6A3D560556E6F1C59050098D_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CMakeRequestU3Ed__3_SetStateMachine_m7C72BBABACDEFD3E75A577E9C493D186DACF077D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CMakeRequestU3Ed__3_tA4D7AD2B055AE7EF8A11B62D3F4EA564311D23D7*>(__this + _offset);
	U3CMakeRequestU3Ed__3_SetStateMachine_m7C72BBABACDEFD3E75A577E9C493D186DACF077D(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_Multicast(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* currentDelegate = reinterpret_cast<OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenInst(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers, method);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenStatic(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers, method);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenStaticInvoker(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_ClosedStaticInvoker(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenVirtual(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker6< ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenInterface(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker6< ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenGenericVirtual(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker6< ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(method, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers);
}
void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenGenericInterface(OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker6< ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* >::Invoke(method, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers);
}
// System.Void Postgrest.OnRequestPreparedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestPreparedEventHandler__ctor_m679FE83B3BE10ED23B5DBD8AB8907CDAC2750011 (OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 7;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_Multicast;
}
// System.Void Postgrest.OnRequestPreparedEventHandler::Invoke(System.Object,Postgrest.ClientOptions,System.Net.Http.HttpMethod,System.String,Newtonsoft.Json.JsonSerializerSettings,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B (OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Postgrest.OnRequestPreparedEventHandler::BeginInvoke(System.Object,Postgrest.ClientOptions,System.Net.Http.HttpMethod,System.String,Newtonsoft.Json.JsonSerializerSettings,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnRequestPreparedEventHandler_BeginInvoke_m49038D0E2FEA0F0543CDA17F5314C004D6EE128B (OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___7_callback, RuntimeObject* ___8_object, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = ___1_clientOptions;
	__d_args[2] = ___2_method;
	__d_args[3] = ___3_url;
	__d_args[4] = ___4_serializerSettings;
	__d_args[5] = ___5_data;
	__d_args[6] = ___6_headers;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___7_callback, (RuntimeObject*)___8_object);
}
// System.Void Postgrest.OnRequestPreparedEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnRequestPreparedEventHandler_EndInvoke_m2610912F5BA041AAEE6A1A2D5DAB8FD844BB68F5 (OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Postgrest.Hooks Postgrest.Hooks::get__instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* Hooks_get__instance_m47CB721E58659DF6D8E3B2760F2989D3C3290368 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0 = ((Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields*)il2cpp_codegen_static_fields_for(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Hooks::set__instance(Postgrest.Hooks)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_set__instance_m5DECEA51B58E95E51AB084818FF7D03037D30BB2 (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0 = ___0_value;
		((Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields*)il2cpp_codegen_static_fields_for(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields*)il2cpp_codegen_static_fields_for(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Postgrest.Hooks Postgrest.Hooks::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* Hooks_get_Instance_mF3B6840A51681BE758FCC44BB048CCDE15BBA771 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0;
		L_0 = Hooks_get__instance_m47CB721E58659DF6D8E3B2760F2989D3C3290368_inline(NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_1 = (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806*)il2cpp_codegen_object_new(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Hooks__ctor_mBB3C85A6C6CBAA5F008ACE1031770B020583C5BC(L_1, NULL);
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_2 = L_1;
		Hooks_set__instance_m5DECEA51B58E95E51AB084818FF7D03037D30BB2_inline(L_2, NULL);
	}

IL_0013:
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_3;
		L_3 = Hooks_get__instance_m47CB721E58659DF6D8E3B2760F2989D3C3290368_inline(NULL);
		return L_3;
	}
}
// System.Void Postgrest.Hooks::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks__ctor_mBB3C85A6C6CBAA5F008ACE1031770B020583C5BC (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m466B5778ABEDA71011DCDA1A87004DA1D042B15B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_0 = (List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9*)il2cpp_codegen_object_new(List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m466B5778ABEDA71011DCDA1A87004DA1D042B15B(L_0, List_1__ctor_m466B5778ABEDA71011DCDA1A87004DA1D042B15B_RuntimeMethod_var);
		__this->____requestPreparedEventHandlers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____requestPreparedEventHandlers_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Postgrest.Hooks::AddRequestPreparedHandler(Postgrest.OnRequestPreparedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_AddRequestPreparedHandler_m79C16CAB722DEA48800C2773773882D26B39302A (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB4899328739782EB31BACF6FEEE0AB691725D19F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_0 = __this->____requestPreparedEventHandlers_1;
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_1 = ___0_handler;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23(L_0, L_1, List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_3 = __this->____requestPreparedEventHandlers_1;
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_4 = ___0_handler;
		NullCheck(L_3);
		List_1_Add_mB4899328739782EB31BACF6FEEE0AB691725D19F_inline(L_3, L_4, List_1_Add_mB4899328739782EB31BACF6FEEE0AB691725D19F_RuntimeMethod_var);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Postgrest.Hooks::RemoveRequestPreparedHandler(Postgrest.OnRequestPreparedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_RemoveRequestPreparedHandler_m8061295689FF764DDD487F759962914CFFE3D040 (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m190F697908214F49DF893C953E8CE7035633AB05_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_0 = __this->____requestPreparedEventHandlers_1;
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_1 = ___0_handler;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23(L_0, L_1, List_1_Contains_m143D200D02B8FC1A3BBC8884C2C3D739FFDBBB23_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_3 = __this->____requestPreparedEventHandlers_1;
		OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_4 = ___0_handler;
		NullCheck(L_3);
		bool L_5;
		L_5 = List_1_Remove_m190F697908214F49DF893C953E8CE7035633AB05(L_3, L_4, List_1_Remove_m190F697908214F49DF893C953E8CE7035633AB05_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// System.Void Postgrest.Hooks::ClearRequestPreparedHandlers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_ClearRequestPreparedHandlers_m0F3639612C3B45F37DF90A898929DC98EE15D56D (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m33452CA3F5E228F9E41ED648D582D2323045E2FE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_0 = __this->____requestPreparedEventHandlers_1;
		NullCheck(L_0);
		List_1_Clear_m33452CA3F5E228F9E41ED648D582D2323045E2FE_inline(L_0, List_1_Clear_m33452CA3F5E228F9E41ED648D582D2323045E2FE_RuntimeMethod_var);
		return;
	}
}
// System.Void Postgrest.Hooks::NotifyOnRequestPreparedHandlers(System.Object,Postgrest.ClientOptions,System.Net.Http.HttpMethod,System.String,Newtonsoft.Json.JsonSerializerSettings,System.Object,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hooks_NotifyOnRequestPreparedHandlers_m92EE26EC254A2AB52227A016BDD97CF16BE31132 (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisOnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168_m463AECB2AB8B6662931F83734F225BE7D909FBE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC29C3B3958D60BCE5953AD321E92F5ACE785F98E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8879F49EB10E4DB85520370549F16AD87053F0FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m23ABB34377E102F18CC50C54BEC5F2549114586A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEDFA9602C406AA69E2EEE18CB991B8B39C0A4C39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD1A038FDE47FB385B86035209E45E783225E815);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A127FB1AAE1EB048D2AB4975F9F91BF6212EA2);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0;
		L_0 = Debugger_get_Instance_m7527DFB0F76D0C1C3BC95B7F94AC2BEE767F600B(NULL);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_1 = ___2_method;
		String_t* L_2 = ___3_url;
		String_t* L_3;
		L_3 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralF3A127FB1AAE1EB048D2AB4975F9F91BF6212EA2, _stringLiteralDD1A038FDE47FB385B86035209E45E783225E815, L_1, L_2, NULL);
		NullCheck(L_0);
		Debugger_Log_mF594C3590E3F5549CA045AEC9360C8D561F9C500(L_0, __this, L_3, (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)NULL, NULL);
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_4 = __this->____requestPreparedEventHandlers_1;
		List_1_t289EEBC7A52446020B2F5F33D6B2B13BB6C64BC9* L_5;
		L_5 = Enumerable_ToList_TisOnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168_m463AECB2AB8B6662931F83734F225BE7D909FBE9(L_4, Enumerable_ToList_TisOnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168_m463AECB2AB8B6662931F83734F225BE7D909FBE9_RuntimeMethod_var);
		NullCheck(L_5);
		Enumerator_t3055D6B945899733864D1754FEE9200918EAC6CD L_6;
		L_6 = List_1_GetEnumerator_mEDFA9602C406AA69E2EEE18CB991B8B39C0A4C39(L_5, List_1_GetEnumerator_mEDFA9602C406AA69E2EEE18CB991B8B39C0A4C39_RuntimeMethod_var);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0053:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC29C3B3958D60BCE5953AD321E92F5ACE785F98E((&V_0), Enumerator_Dispose_mC29C3B3958D60BCE5953AD321E92F5ACE785F98E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0031_1:
			{
				OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* L_7;
				L_7 = Enumerator_get_Current_m23ABB34377E102F18CC50C54BEC5F2549114586A_inline((&V_0), Enumerator_get_Current_m23ABB34377E102F18CC50C54BEC5F2549114586A_RuntimeMethod_var);
				RuntimeObject* L_8 = ___0_sender;
				ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_9 = ___1_clientOptions;
				HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_10 = ___2_method;
				String_t* L_11 = ___3_url;
				JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_12 = ___4_serializerSettings;
				RuntimeObject* L_13 = ___5_data;
				Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = ___6_headers;
				NullCheck(L_7);
				OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_inline(L_7, L_8, L_9, L_10, L_11, L_12, L_13, L_14, NULL);
			}

IL_0048_1:
			{
				bool L_15;
				L_15 = Enumerator_MoveNext_m8879F49EB10E4DB85520370549F16AD87053F0FD((&V_0), Enumerator_MoveNext_m8879F49EB10E4DB85520370549F16AD87053F0FD_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_0031_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
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
// System.Void Postgrest.Index::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Index__ctor_m61C88BD1DBC5F4E12460F9B3C6BA9680D5960CB5 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, int32_t ___0_value, bool ___1_fromEnd, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E8B801EA7321CA1EC5BB1E3AC5C14B31119A13C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Index__ctor_m61C88BD1DBC5F4E12460F9B3C6BA9680D5960CB5_RuntimeMethod_var)));
	}

IL_001a:
	{
		bool L_2 = ___1_fromEnd;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_value;
		__this->____value_0 = ((~L_3));
		return;
	}

IL_0026:
	{
		int32_t L_4 = ___0_value;
		__this->____value_0 = L_4;
		return;
	}
}
// System.Void Postgrest.Index::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_value;
		__this->____value_0 = L_0;
		return;
	}
}
// Postgrest.Index Postgrest.Index::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_get_Start_m221F27B39862BC58C336DF11EA6BF26EDD0E8E5C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4*)il2cpp_codegen_object_new(Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831(L_0, 0, NULL);
		return L_0;
	}
}
// Postgrest.Index Postgrest.Index::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_get_End_m232CA9247B9476402135BAF6201C97A929BE0C53 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4*)il2cpp_codegen_object_new(Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831(L_0, (-1), NULL);
		return L_0;
	}
}
// Postgrest.Index Postgrest.Index::FromStart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E8B801EA7321CA1EC5BB1E3AC5C14B31119A13C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___0_value;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3 = (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4*)il2cpp_codegen_object_new(Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831(L_3, L_2, NULL);
		return L_3;
	}
}
// Postgrest.Index Postgrest.Index::FromEnd(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_FromEnd_m70CB841D8AF08A44736428584ED3B85FB63552DA (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E8B801EA7321CA1EC5BB1E3AC5C14B31119A13C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Index_FromEnd_m70CB841D8AF08A44736428584ED3B85FB63552DA_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___0_value;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3 = (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4*)il2cpp_codegen_object_new(Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831(L_3, ((~L_2)), NULL);
		return L_3;
	}
}
// System.Int32 Postgrest.Index::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____value_0;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->____value_0;
		return ((~L_1));
	}

IL_0011:
	{
		int32_t L_2 = __this->____value_0;
		return L_2;
	}
}
// System.Boolean Postgrest.Index::get_IsFromEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Index_get_IsFromEnd_mC2397A557B468896F11F21B6A4BBABC97138F90D (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____value_0;
		return (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 Postgrest.Index::GetOffset(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_GetOffset_m383E8622773EB113473DD8089A301AC94364A66D (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____value_0;
		V_0 = L_0;
		bool L_1;
		L_1 = Index_get_IsFromEnd_mC2397A557B468896F11F21B6A4BBABC97138F90D(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_length;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1))));
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Postgrest.Index::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Index_Equals_m9B4833C295B04CC8A091D0A41742B16FA978FD0E (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = ((Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4*)IsInstClass((RuntimeObject*)L_0, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var));
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = __this->____value_0;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->____value_0;
		return (bool)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
// System.Boolean Postgrest.Index::Equals(Postgrest.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Index_Equals_m9775999D6FB56959A1BFA892A97B115CCCD76E59 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___0_other, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____value_0;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1 = ___0_other;
		NullCheck(L_1);
		int32_t L_2 = L_1->____value_0;
		return (bool)((((int32_t)L_0) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Int32 Postgrest.Index::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Index_GetHashCode_mB017BD5ACB76DF3FF034888E773CCCDF707E7653 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____value_0;
		return L_0;
	}
}
// Postgrest.Index Postgrest.Index::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_op_Implicit_m665FD38C14AB578E0922C5E342E31D2B2EC06FC4 (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1;
		L_1 = Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC_inline(L_0, NULL);
		return L_1;
	}
}
// System.String Postgrest.Index::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Index_ToString_m2F967A67806BC065143308E5211B6B870495F4A2 (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF543E5CEBA28135FC0D7A2CDAD26732720D611);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Index_get_IsFromEnd_mC2397A557B468896F11F21B6A4BBABC97138F90D(__this, NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1;
		L_1 = Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06(__this, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7DF543E5CEBA28135FC0D7A2CDAD26732720D611, L_2, NULL);
		return L_3;
	}

IL_0021:
	{
		int32_t L_4;
		L_4 = Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06(__this, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154((&V_0), NULL);
		return L_5;
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
// Postgrest.Index Postgrest.IntRange::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) 
{
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = __this->___U3CStartU3Ek__BackingField_0;
		return L_0;
	}
}
// Postgrest.Index Postgrest.IntRange::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) 
{
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = __this->___U3CEndU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.IntRange::.ctor(Postgrest.Index,Postgrest.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9 (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___0_start, Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___1_end, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = ___0_start;
		__this->___U3CStartU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStartU3Ek__BackingField_0), (void*)L_0);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1 = ___1_end;
		__this->___U3CEndU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEndU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.Boolean Postgrest.IntRange::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntRange_Equals_m8E9A3D3753773D82935E08E26EF6B5BC8A316284 (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		V_0 = ((IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)IsInstClass((RuntimeObject*)L_0, IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var));
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_2 = V_0;
		NullCheck(L_2);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3;
		L_3 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(L_2, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_4;
		L_4 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(__this, NULL);
		NullCheck(L_3);
		bool L_5;
		L_5 = Index_Equals_m9775999D6FB56959A1BFA892A97B115CCCD76E59(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_6 = V_0;
		NullCheck(L_6);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_7;
		L_7 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(L_6, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_8;
		L_8 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(__this, NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = Index_Equals_m9775999D6FB56959A1BFA892A97B115CCCD76E59(L_7, L_8, NULL);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
// System.Boolean Postgrest.IntRange::Equals(Postgrest.IntRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntRange_Equals_m251702FC83691B3853F825B3B03AB8A373ABC6CA (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* ___0_other, const RuntimeMethod* method) 
{
	{
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_0 = ___0_other;
		NullCheck(L_0);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1;
		L_1 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(L_0, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_2;
		L_2 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(__this, NULL);
		NullCheck(L_1);
		bool L_3;
		L_3 = Index_Equals_m9775999D6FB56959A1BFA892A97B115CCCD76E59(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_4 = ___0_other;
		NullCheck(L_4);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_5;
		L_5 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(L_4, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_6;
		L_6 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(__this, NULL);
		NullCheck(L_5);
		bool L_7;
		L_7 = Index_Equals_m9775999D6FB56959A1BFA892A97B115CCCD76E59(L_5, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 Postgrest.IntRange::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntRange_GetHashCode_m97ABE5D96E6BC3A8F9E3AFF6208CF2E6A393BB0F (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) 
{
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0;
		L_0 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_2;
		L_2 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)31))), L_3));
	}
}
// System.String Postgrest.IntRange::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntRange_ToString_m2300A6724B42CA5CB4B70972240E2808E9AC84D9 (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		s_Il2CppMethodInitialized = true;
	}
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* G_B2_0 = NULL;
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	String_t* G_B5_2 = NULL;
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0;
		L_0 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(__this, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1 = L_0;
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
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3;
		L_3 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(__this, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_4 = L_3;
		G_B4_0 = L_4;
		G_B4_1 = _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
		G_B4_2 = G_B3_0;
		if (L_4)
		{
			G_B5_0 = L_4;
			G_B5_1 = _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
			G_B5_2 = G_B3_0;
			goto IL_0024;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		goto IL_0029;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0029:
	{
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B6_2, G_B6_1, G_B6_0, NULL);
		return L_6;
	}
}
// Postgrest.IntRange Postgrest.IntRange::StartAt(Postgrest.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* IntRange_StartAt_mE057821E8BE17920086218EEBCFDEC77E36621CE (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___0_start, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = ___0_start;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1;
		L_1 = Index_get_End_m232CA9247B9476402135BAF6201C97A929BE0C53(NULL);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_2 = (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)il2cpp_codegen_object_new(IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// Postgrest.IntRange Postgrest.IntRange::EndAt(Postgrest.Index)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* IntRange_EndAt_mE4F0F43765E1E6CD120BE4056E98CC92A056E18F (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* ___0_end, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0;
		L_0 = Index_get_Start_m221F27B39862BC58C336DF11EA6BF26EDD0E8E5C(NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1 = ___0_end;
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_2 = (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)il2cpp_codegen_object_new(IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// Postgrest.IntRange Postgrest.IntRange::get_All()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* IntRange_get_All_mD170F75DD7C6020F09D65CF79270B69DD76941EA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0;
		L_0 = Index_get_Start_m221F27B39862BC58C336DF11EA6BF26EDD0E8E5C(NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1;
		L_1 = Index_get_End_m232CA9247B9476402135BAF6201C97A929BE0C53(NULL);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_2 = (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)il2cpp_codegen_object_new(IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// System.ValueTuple`2<System.Int32,System.Int32> Postgrest.IntRange::GetOffsetAndLength(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D IntRange_GetOffsetAndLength_m4EB746F5928432B3D7A697F4597B6F7238392D5F (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, int32_t ___0_length, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* V_1 = NULL;
	int32_t V_2 = 0;
	Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* V_3 = NULL;
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0;
		L_0 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(__this, NULL);
		V_1 = L_0;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1 = V_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = Index_get_IsFromEnd_mC2397A557B468896F11F21B6A4BBABC97138F90D(L_1, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = ___0_length;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06(L_4, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_3, L_5));
		goto IL_0021;
	}

IL_001a:
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06(L_6, NULL);
		V_0 = L_7;
	}

IL_0021:
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_8;
		L_8 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(__this, NULL);
		V_3 = L_8;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_9 = V_3;
		NullCheck(L_9);
		bool L_10;
		L_10 = Index_get_IsFromEnd_mC2397A557B468896F11F21B6A4BBABC97138F90D(L_9, NULL);
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_11 = ___0_length;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_12 = V_3;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06(L_12, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_11, L_13));
		goto IL_0042;
	}

IL_003b:
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = Index_get_Value_mD681FD4DA6E44DE7D8F308A0AC4357EE0E9C6D06(L_14, NULL);
		V_2 = L_15;
	}

IL_0042:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = ___0_length;
		if ((!(((uint32_t)L_16) <= ((uint32_t)L_17))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_18) > ((uint32_t)L_19))))
		{
			goto IL_0055;
		}
	}

IL_004a:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_20 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntRange_GetOffsetAndLength_m4EB746F5928432B3D7A697F4597B6F7238392D5F_RuntimeMethod_var)));
	}

IL_0055:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_24;
		memset((&L_24), 0, sizeof(L_24));
		ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477((&L_24), L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), /*hidden argument*/ValueTuple_2__ctor_mF5D8FB18DBF2C4B2F879F8E8E12D8FB8FCDB5477_RuntimeMethod_var);
		return L_24;
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
// System.Boolean Postgrest.PostgrestContractResolver::get_IsUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsUpdate_mF7FDD2AD2E0F01C05F2CB8371222B5579200851F (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsUpdateU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Postgrest.PostgrestContractResolver::set_IsUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsUpdate_m4516CA8F429837CAADAA858884114548F086B5F3 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsUpdateU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Boolean Postgrest.PostgrestContractResolver::get_IsInsert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsInsert_mD81B30965372B281DD1DD49C8ABBD81EC7FAC5B2 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsInsertU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Postgrest.PostgrestContractResolver::set_IsInsert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsInsert_mC908DDF905EBC64F6A9730232D31745431ADF1A2 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsInsertU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Boolean Postgrest.PostgrestContractResolver::get_IsUpsert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsUpsert_mB17EAD75DB90AEF78C7AA396487A22A13834FA11 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsUpsertU3Ek__BackingField_14;
		return L_0;
	}
}
// System.Void Postgrest.PostgrestContractResolver::set_IsUpsert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsUpsert_mCC195666EACC9251A18F7273B0651EAE888313E3 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsUpsertU3Ek__BackingField_14 = L_0;
		return;
	}
}
// System.Void Postgrest.PostgrestContractResolver::SetState(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestContractResolver_SetState_m4397541496BC90262A9D401E008283685C42CF1F (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_isInsert, bool ___1_isUpdate, bool ___2_isUpsert, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___1_isUpdate;
		PostgrestContractResolver_set_IsUpdate_m4516CA8F429837CAADAA858884114548F086B5F3_inline(__this, L_0, NULL);
		bool L_1 = ___0_isInsert;
		PostgrestContractResolver_set_IsInsert_mC908DDF905EBC64F6A9730232D31745431ADF1A2_inline(__this, L_1, NULL);
		bool L_2 = ___2_isUpsert;
		PostgrestContractResolver_set_IsUpsert_mCC195666EACC9251A18F7273B0651EAE888313E3_inline(__this, L_2, NULL);
		return;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Postgrest.PostgrestContractResolver::CreateProperty(System.Reflection.MemberInfo,Newtonsoft.Json.MemberSerialization)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* PostgrestContractResolver_CreateProperty_m9AD1A4434A8CD048AC7196F437D6794B2784417E (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, MemberInfo_t* ___0_member, int32_t ___1_memberSerialization, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_mDD15F9B5EAE9EFD8FEBEDCBF58DC9175CC515776_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisPrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_m8A8DEF69CE4D0FAE7883994C8F3AC606ED0956FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_mD92B62A7BAA4648694C5A1A34F917F2E4DC00EB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mB2CEFE620325CD63DB345E592BBF710406B312EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mD1FB6279D3F0551989DE961B3C939626CC2C2F03_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCreatePropertyU3Eb__0_mDBBAE9EC9E7FA9047B0455D1CB2FB3FF59CA3442_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* V_0 = NULL;
	JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* V_1 = NULL;
	ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* V_2 = NULL;
	ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* V_3 = NULL;
	JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* G_B30_0 = NULL;
	JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* G_B29_0 = NULL;
	String_t* G_B31_0 = NULL;
	JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* G_B31_1 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* L_0 = (U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m64A4B9CB26B7D57D1FF281253F5D23C7A6B2E29A(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_1), (void*)__this);
		MemberInfo_t* L_2 = ___0_member;
		int32_t L_3 = ___1_memberSerialization;
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_4;
		L_4 = DefaultContractResolver_CreateProperty_m7C27609BD46BF2A2144D8D21F10419BFDF88374F(__this, L_2, L_3, NULL);
		V_1 = L_4;
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_5 = V_1;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_10 = V_1;
		RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129* L_11 = (RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129*)il2cpp_codegen_object_new(RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		RangeConverter__ctor_mB429673F84BDDA8C83B8C43FAA63FA724196E786(L_11, NULL);
		NullCheck(L_10);
		JsonProperty_set_Converter_mFC9963279952098BC4C2C67CB585A48EF9C725D8_inline(L_10, L_11, NULL);
		goto IL_00fb;
	}

IL_003d:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_12 = V_1;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_13, (Type_t*)NULL, NULL);
		if (!L_14)
		{
			goto IL_008b;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_15 = V_1;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (L_19)
		{
			goto IL_007e;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_20 = V_1;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_20, NULL);
		Type_t* L_22;
		L_22 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_008b;
		}
	}

IL_007e:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_26 = V_1;
		DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* L_27 = (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6*)il2cpp_codegen_object_new(DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		DateTimeConverter__ctor_mF1B24480DE0D7382D57BD2B6C51738988BE3510A(L_27, NULL);
		NullCheck(L_26);
		JsonProperty_set_Converter_mFC9963279952098BC4C2C67CB585A48EF9C725D8_inline(L_26, L_27, NULL);
		goto IL_00fb;
	}

IL_008b:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_28 = V_1;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00af;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_33 = V_1;
		IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* L_34 = (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A*)il2cpp_codegen_object_new(IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		IntArrayConverter__ctor_m5BAE8957AD84EA2F5E7F27E38AFED0F0CB7D1F83(L_34, NULL);
		NullCheck(L_33);
		JsonProperty_set_Converter_mFC9963279952098BC4C2C67CB585A48EF9C725D8_inline(L_33, L_34, NULL);
		goto IL_00fb;
	}

IL_00af:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_35 = V_1;
		NullCheck(L_35);
		Type_t* L_36;
		L_36 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_36, (Type_t*)NULL, NULL);
		if (!L_37)
		{
			goto IL_00fb;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_38 = V_1;
		NullCheck(L_38);
		Type_t* L_39;
		L_39 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (L_42)
		{
			goto IL_00f0;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_43 = V_1;
		NullCheck(L_43);
		Type_t* L_44;
		L_44 = JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline(L_43, NULL);
		Type_t* L_45;
		L_45 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_00fb;
		}
	}

IL_00f0:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_49 = V_1;
		DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* L_50 = (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6*)il2cpp_codegen_object_new(DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		DateTimeConverter__ctor_mF1B24480DE0D7382D57BD2B6C51738988BE3510A(L_50, NULL);
		NullCheck(L_49);
		JsonProperty_set_Converter_mFC9963279952098BC4C2C67CB585A48EF9C725D8_inline(L_49, L_50, NULL);
	}

IL_00fb:
	{
		MemberInfo_t* L_51 = ___0_member;
		NullCheck(L_51);
		RuntimeObject* L_52;
		L_52 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(15 /* System.Collections.Generic.IEnumerable`1<System.Reflection.CustomAttributeData> System.Reflection.MemberInfo::get_CustomAttributes() */, L_51);
		bool L_53;
		L_53 = Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mB2CEFE620325CD63DB345E592BBF710406B312EA(L_52, Enumerable_Any_TisCustomAttributeData_tC851BE158358D5CFB283E630148B10B7685DDC95_mB2CEFE620325CD63DB345E592BBF710406B312EA_RuntimeMethod_var);
		if (L_53)
		{
			goto IL_010a;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_54 = V_1;
		return L_54;
	}

IL_010a:
	{
		MemberInfo_t* L_55 = ___0_member;
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_56;
		L_56 = CustomAttributeExtensions_GetCustomAttribute_TisColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_mDD15F9B5EAE9EFD8FEBEDCBF58DC9175CC515776(L_55, CustomAttributeExtensions_GetCustomAttribute_TisColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_mDD15F9B5EAE9EFD8FEBEDCBF58DC9175CC515776_RuntimeMethod_var);
		V_2 = L_56;
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_57 = V_2;
		if (!L_57)
		{
			goto IL_0188;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_58 = V_1;
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_59 = V_2;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline(L_59, NULL);
		NullCheck(L_58);
		JsonProperty_set_PropertyName_m9CED5A907D22FA06A57494405F5C1EE98E1054ED(L_58, L_60, NULL);
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_61 = V_1;
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_62 = V_2;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = ColumnAttribute_get_NullValueHandling_m9CDB5EDFD9DBD775F613D8B568CE5C4A76EE2F65_inline(L_62, NULL);
		Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Nullable_1__ctor_mD1FB6279D3F0551989DE961B3C939626CC2C2F03((&L_64), L_63, /*hidden argument*/Nullable_1__ctor_mD1FB6279D3F0551989DE961B3C939626CC2C2F03_RuntimeMethod_var);
		NullCheck(L_61);
		JsonProperty_set_NullValueHandling_m1975598294F96AAF9FB5C2EADBFA7A3B75B6B426_inline(L_61, L_64, NULL);
		bool L_65;
		L_65 = PostgrestContractResolver_get_IsInsert_mD81B30965372B281DD1DD49C8ABBD81EC7FAC5B2_inline(__this, NULL);
		if (!L_65)
		{
			goto IL_0148;
		}
	}
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_66 = V_2;
		NullCheck(L_66);
		bool L_67;
		L_67 = ColumnAttribute_get_IgnoreOnInsert_mFC1920FFD53D438C3AF2A94A459C308A982D1B4B_inline(L_66, NULL);
		if (!L_67)
		{
			goto IL_0148;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_68 = V_1;
		NullCheck(L_68);
		JsonProperty_set_Ignored_m1F9CA36C6C94DD3E563A4A1C8462DE5FBA6F5558_inline(L_68, (bool)1, NULL);
	}

IL_0148:
	{
		bool L_69;
		L_69 = PostgrestContractResolver_get_IsUpdate_mF7FDD2AD2E0F01C05F2CB8371222B5579200851F_inline(__this, NULL);
		if (!L_69)
		{
			goto IL_015f;
		}
	}
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_70 = V_2;
		NullCheck(L_70);
		bool L_71;
		L_71 = ColumnAttribute_get_IgnoreOnUpdate_m018670F7BB2CD11C3993611412FB0C41C0C2272A_inline(L_70, NULL);
		if (!L_71)
		{
			goto IL_015f;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_72 = V_1;
		NullCheck(L_72);
		JsonProperty_set_Ignored_m1F9CA36C6C94DD3E563A4A1C8462DE5FBA6F5558_inline(L_72, (bool)1, NULL);
	}

IL_015f:
	{
		bool L_73;
		L_73 = PostgrestContractResolver_get_IsUpsert_mB17EAD75DB90AEF78C7AA396487A22A13834FA11_inline(__this, NULL);
		if (!L_73)
		{
			goto IL_016f;
		}
	}
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_74 = V_2;
		NullCheck(L_74);
		bool L_75;
		L_75 = ColumnAttribute_get_IgnoreOnUpdate_m018670F7BB2CD11C3993611412FB0C41C0C2272A_inline(L_74, NULL);
		if (L_75)
		{
			goto IL_017f;
		}
	}

IL_016f:
	{
		bool L_76;
		L_76 = PostgrestContractResolver_get_IsUpsert_mB17EAD75DB90AEF78C7AA396487A22A13834FA11_inline(__this, NULL);
		if (!L_76)
		{
			goto IL_0186;
		}
	}
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_77 = V_2;
		NullCheck(L_77);
		bool L_78;
		L_78 = ColumnAttribute_get_IgnoreOnInsert_mFC1920FFD53D438C3AF2A94A459C308A982D1B4B_inline(L_77, NULL);
		if (!L_78)
		{
			goto IL_0186;
		}
	}

IL_017f:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_79 = V_1;
		NullCheck(L_79);
		JsonProperty_set_Ignored_m1F9CA36C6C94DD3E563A4A1C8462DE5FBA6F5558_inline(L_79, (bool)1, NULL);
	}

IL_0186:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_80 = V_1;
		return L_80;
	}

IL_0188:
	{
		MemberInfo_t* L_81 = ___0_member;
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_82;
		L_82 = CustomAttributeExtensions_GetCustomAttribute_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_mD92B62A7BAA4648694C5A1A34F917F2E4DC00EB6(L_81, CustomAttributeExtensions_GetCustomAttribute_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_mD92B62A7BAA4648694C5A1A34F917F2E4DC00EB6_RuntimeMethod_var);
		V_3 = L_82;
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_83 = V_3;
		if (!L_83)
		{
			goto IL_01cc;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_84 = V_1;
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_85 = V_3;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E_inline(L_85, NULL);
		bool L_87;
		L_87 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_86, NULL);
		G_B29_0 = L_84;
		if (L_87)
		{
			G_B30_0 = L_84;
			goto IL_01a8;
		}
	}
	{
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_88 = V_3;
		NullCheck(L_88);
		String_t* L_89;
		L_89 = ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline(L_88, NULL);
		G_B31_0 = L_89;
		G_B31_1 = G_B29_0;
		goto IL_01ae;
	}

IL_01a8:
	{
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_90 = V_3;
		NullCheck(L_90);
		String_t* L_91;
		L_91 = ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline(L_90, NULL);
		G_B31_0 = L_91;
		G_B31_1 = G_B30_0;
	}

IL_01ae:
	{
		NullCheck(G_B31_1);
		JsonProperty_set_PropertyName_m9CED5A907D22FA06A57494405F5C1EE98E1054ED(G_B31_1, G_B31_0, NULL);
		bool L_92;
		L_92 = PostgrestContractResolver_get_IsInsert_mD81B30965372B281DD1DD49C8ABBD81EC7FAC5B2_inline(__this, NULL);
		if (L_92)
		{
			goto IL_01c3;
		}
	}
	{
		bool L_93;
		L_93 = PostgrestContractResolver_get_IsUpdate_mF7FDD2AD2E0F01C05F2CB8371222B5579200851F_inline(__this, NULL);
		if (!L_93)
		{
			goto IL_01ca;
		}
	}

IL_01c3:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_94 = V_1;
		NullCheck(L_94);
		JsonProperty_set_Ignored_m1F9CA36C6C94DD3E563A4A1C8462DE5FBA6F5558_inline(L_94, (bool)1, NULL);
	}

IL_01ca:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_95 = V_1;
		return L_95;
	}

IL_01cc:
	{
		U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* L_96 = V_0;
		MemberInfo_t* L_97 = ___0_member;
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_98;
		L_98 = CustomAttributeExtensions_GetCustomAttribute_TisPrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_m8A8DEF69CE4D0FAE7883994C8F3AC606ED0956FD(L_97, CustomAttributeExtensions_GetCustomAttribute_TisPrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_m8A8DEF69CE4D0FAE7883994C8F3AC606ED0956FD_RuntimeMethod_var);
		NullCheck(L_96);
		L_96->___primaryKeyAttribute_0 = L_98;
		Il2CppCodeGenWriteBarrier((void**)(&L_96->___primaryKeyAttribute_0), (void*)L_98);
		U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* L_99 = V_0;
		NullCheck(L_99);
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_100 = L_99->___primaryKeyAttribute_0;
		if (L_100)
		{
			goto IL_01e2;
		}
	}
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_101 = V_1;
		return L_101;
	}

IL_01e2:
	{
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_102 = V_1;
		U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* L_103 = V_0;
		NullCheck(L_103);
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_104 = L_103->___primaryKeyAttribute_0;
		NullCheck(L_104);
		String_t* L_105;
		L_105 = PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline(L_104, NULL);
		NullCheck(L_102);
		JsonProperty_set_PropertyName_m9CED5A907D22FA06A57494405F5C1EE98E1054ED(L_102, L_105, NULL);
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_106 = V_1;
		U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* L_107 = V_0;
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_108 = (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*)il2cpp_codegen_object_new(Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12_il2cpp_TypeInfo_var);
		NullCheck(L_108);
		Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20(L_108, L_107, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCreatePropertyU3Eb__0_mDBBAE9EC9E7FA9047B0455D1CB2FB3FF59CA3442_RuntimeMethod_var), NULL);
		NullCheck(L_106);
		JsonProperty_set_ShouldSerialize_m46EE6AE304CECB231A5042488EA30F61A140741D_inline(L_106, L_108, NULL);
		JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* L_109 = V_1;
		return L_109;
	}
}
// System.Void Postgrest.PostgrestContractResolver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestContractResolver__ctor_mCDE022FD27C299B9D7FE0471EC04AAA850F59CB5 (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DefaultContractResolver_t463A02A39C265D7EB415D4CEB2B2E32664A02CAD_il2cpp_TypeInfo_var);
		DefaultContractResolver__ctor_m52F3E230F523349797B923489423735999EA4A4E(__this, NULL);
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
// System.Void Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m64A4B9CB26B7D57D1FF281253F5D23C7A6B2E29A (U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Postgrest.PostgrestContractResolver/<>c__DisplayClass13_0::<CreateProperty>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass13_0_U3CCreatePropertyU3Eb__0_mDBBAE9EC9E7FA9047B0455D1CB2FB3FF59CA3442 (U3CU3Ec__DisplayClass13_0_t77D3A16B4083D0EBA57FBED120173292749C5EB0* __this, RuntimeObject* ___0_instance, const RuntimeMethod* method) 
{
	{
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_0 = __this->___primaryKeyAttribute_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = PrimaryKeyAttribute_get_ShouldInsert_m5FCBB0369761A25ADB9511FD88E14C5E4D0B046C_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		bool L_3;
		L_3 = PostgrestContractResolver_get_IsUpsert_mB17EAD75DB90AEF78C7AA396487A22A13834FA11_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_4 = ___0_instance;
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_4) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}

IL_0021:
	{
		return (bool)1;
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
// System.String Postgrest.QueryFilter::get_Property()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QueryFilter_get_Property_m2F16DA2F23F29BC8E5E7E9BD7730B087CB8E6C2B (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CPropertyU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.QueryFilter::set_Property(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPropertyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Postgrest.Constants/Operator Postgrest.QueryFilter::get_Op()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryFilter_get_Op_m780B43486373D2B7BB4313C8AA7C14F38D41DB37 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COpU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.QueryFilter::set_Op(Postgrest.Constants/Operator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3COpU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Object Postgrest.QueryFilter::get_Criteria()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* QueryFilter_get_Criteria_m693AB2EAD83FB4538FA486425AA7467B2CE3B31F (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCriteriaU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Postgrest.QueryFilter::set_Criteria(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCriteriaU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCriteriaU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.QueryFilter::.ctor(System.String,Postgrest.Constants/Operator,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_property, int32_t ___1_op, RuntimeObject* ___2_criteria, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___2_criteria;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		RuntimeObject* L_1 = ___2_criteria;
		V_0 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_1, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_2;
		L_2 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DateTime_ToString_m27637E1131A10BED8A95639D64339023D5EBBF00((&V_0), _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA, L_2, NULL);
		___2_criteria = L_3;
	}

IL_0028:
	{
		RuntimeObject* L_4 = ___2_criteria;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_4, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var)))
		{
			goto IL_004a;
		}
	}
	{
		RuntimeObject* L_5 = ___2_criteria;
		V_1 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_5, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6;
		L_6 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = DateTimeOffset_ToString_m4B5BB65E069D2146E808A1CE5F424ACA2F4D2281((&V_1), _stringLiteral10682F3387EA548C626C08591967BD5D821B3ACA, L_6, NULL);
		___2_criteria = L_7;
	}

IL_004a:
	{
		int32_t L_8 = ___1_op;
		switch (L_8)
		{
			case 0:
			{
				goto IL_00b6;
			}
			case 1:
			{
				goto IL_010d;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00b6;
			}
			case 4:
			{
				goto IL_00b6;
			}
			case 5:
			{
				goto IL_00b6;
			}
			case 6:
			{
				goto IL_00b6;
			}
			case 7:
			{
				goto IL_00b6;
			}
			case 8:
			{
				goto IL_00b6;
			}
			case 9:
			{
				goto IL_00b6;
			}
			case 10:
			{
				goto IL_00cc;
			}
			case 11:
			{
				goto IL_00b6;
			}
			case 12:
			{
				goto IL_010d;
			}
			case 13:
			{
				goto IL_010d;
			}
			case 14:
			{
				goto IL_010d;
			}
			case 15:
			{
				goto IL_010d;
			}
			case 16:
			{
				goto IL_00cc;
			}
			case 17:
			{
				goto IL_00cc;
			}
			case 18:
			{
				goto IL_00cc;
			}
			case 19:
			{
				goto IL_010d;
			}
			case 20:
			{
				goto IL_010d;
			}
			case 21:
			{
				goto IL_010d;
			}
			case 22:
			{
				goto IL_010d;
			}
			case 23:
			{
				goto IL_00b6;
			}
			case 24:
			{
				goto IL_00b6;
			}
		}
	}
	{
		goto IL_010d;
	}

IL_00b6:
	{
		String_t* L_9 = ___0_property;
		QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9_inline(__this, L_9, NULL);
		int32_t L_10 = ___1_op;
		QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline(__this, L_10, NULL);
		RuntimeObject* L_11 = ___2_criteria;
		QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline(__this, L_11, NULL);
		return;
	}

IL_00cc:
	{
		RuntimeObject* L_12 = ___2_criteria;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_12, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var)))
		{
			goto IL_00dc;
		}
	}
	{
		RuntimeObject* L_13 = ___2_criteria;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_13, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var)))
		{
			goto IL_00e0;
		}
	}

IL_00dc:
	{
		V_2 = (bool)1;
		goto IL_00e2;
	}

IL_00e0:
	{
		V_2 = (bool)0;
	}

IL_00e2:
	{
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_00fb;
		}
	}
	{
		String_t* L_15 = ___0_property;
		QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9_inline(__this, L_15, NULL);
		int32_t L_16 = ___1_op;
		QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline(__this, L_16, NULL);
		RuntimeObject* L_17 = ___2_criteria;
		QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline(__this, L_17, NULL);
		return;
	}

IL_00fb:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_18 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE0B8693DBCDC36C20C21E6B16F24CFCF2E46D511)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_19 = L_18;
		NullCheck(L_19);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_19, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A_RuntimeMethod_var)));
	}

IL_010d:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_20 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCCC33B89130FDBE3EE3D571CB5055E377D64C918)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_21 = L_20;
		NullCheck(L_21);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_21, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.QueryFilter::.ctor(System.String,Postgrest.Constants/Operator,Postgrest.FullTextSearchConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_mD635D33323821B29F090C3E178589AB6DA452AF2 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_property, int32_t ___1_op, FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* ___2_fullTextSearchConfig, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_op;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)12)))) <= ((uint32_t)3))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_1 = ___0_property;
		QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9_inline(__this, L_1, NULL);
		int32_t L_2 = ___1_op;
		QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline(__this, L_2, NULL);
		FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* L_3 = ___2_fullTextSearchConfig;
		QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline(__this, L_3, NULL);
		return;
	}

IL_0023:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_4 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral490E0C3BDC48307B749112910DCB8A80DCA26D26)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_5 = L_4;
		NullCheck(L_5);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_5, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueryFilter__ctor_mD635D33323821B29F090C3E178589AB6DA452AF2_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.QueryFilter::.ctor(System.String,Postgrest.Constants/Operator,Postgrest.IntRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_mAD2C4AFFB74B08F6C0D02173173B45100D4D584F (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_property, int32_t ___1_op, IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* ___2_range, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___1_op;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, ((int32_t)16)))) <= ((uint32_t)7))))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_1 = ___0_property;
		QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9_inline(__this, L_1, NULL);
		int32_t L_2 = ___1_op;
		QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline(__this, L_2, NULL);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_3 = ___2_range;
		QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline(__this, L_3, NULL);
		return;
	}

IL_0023:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_4 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral639F216AB902B469FFB53820F2EBC1E3D762E47F)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_5 = L_4;
		NullCheck(L_5);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_5, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueryFilter__ctor_mAD2C4AFFB74B08F6C0D02173173B45100D4D584F_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.QueryFilter::.ctor(Postgrest.Constants/Operator,System.Collections.Generic.List`1<Postgrest.Interfaces.IPostgrestQueryFilter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_mCD8AB853E7DD2313A061107483A6D33F2BEF7C12 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, int32_t ___0_op, List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* ___1_filters, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_op;
		if ((!(((uint32_t)L_0) <= ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = ___0_op;
		QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline(__this, L_1, NULL);
		List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* L_2 = ___1_filters;
		QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline(__this, L_2, NULL);
		return;
	}

IL_0019:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_3 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19CEFA3CF24B459BDA3797FF0B7F5FC5AD3CB095)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_4 = L_3;
		NullCheck(L_4);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_4, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueryFilter__ctor_mCD8AB853E7DD2313A061107483A6D33F2BEF7C12_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.QueryFilter::.ctor(Postgrest.Constants/Operator,Postgrest.Interfaces.IPostgrestQueryFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryFilter__ctor_mB4A48CB62B0AE0BEF2CC9DAE8B6BB20822DD68A3 (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, int32_t ___0_op, RuntimeObject* ___1_filter, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_op;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)24)))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = ___0_op;
		QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline(__this, L_1, NULL);
		RuntimeObject* L_2 = ___1_filter;
		QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline(__this, L_2, NULL);
		return;
	}

IL_001a:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_3 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8C991366B06A0BD8F49112BF10B2C7CF213CA320)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_4 = L_3;
		NullCheck(L_4);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_4, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QueryFilter__ctor_mB4A48CB62B0AE0BEF2CC9DAE8B6BB20822DD68A3_RuntimeMethod_var)));
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
// System.String Postgrest.FullTextSearchConfig::get_QueryText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FullTextSearchConfig_get_QueryText_mE9D7C0F751C3D7FF02EA94BD7209EA14D1D6FFBD (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CQueryTextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.FullTextSearchConfig::set_QueryText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullTextSearchConfig_set_QueryText_mCA3F31E07BD211B3FDE562D1BAB16ADD9EC5C147 (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CQueryTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Postgrest.FullTextSearchConfig::get_Config()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FullTextSearchConfig_get_Config_m485D9418A57A4734AD81F787F85CAADB20DDAD4E (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConfigU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.FullTextSearchConfig::set_Config(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullTextSearchConfig_set_Config_mEA5F76066ABDF922F787233A9BC511A31F462841 (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CConfigU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.FullTextSearchConfig::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullTextSearchConfig__ctor_m2C13D6F1120056BAD01291499F04F04C18A30A44 (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_queryText, String_t* ___1_config, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0D66746AFFA89D2C2C6BCE0DC66C680D01E5A24);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CConfigU3Ek__BackingField_1 = _stringLiteralD0D66746AFFA89D2C2C6BCE0DC66C680D01E5A24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField_1), (void*)_stringLiteralD0D66746AFFA89D2C2C6BCE0DC66C680D01E5A24);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_queryText;
		FullTextSearchConfig_set_QueryText_mCA3F31E07BD211B3FDE562D1BAB16ADD9EC5C147_inline(__this, L_0, NULL);
		String_t* L_1 = ___1_config;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_3 = ___1_config;
		FullTextSearchConfig_set_Config_mEA5F76066ABDF922F787233A9BC511A31F462841_inline(__this, L_3, NULL);
	}

IL_0027:
	{
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
// Postgrest.QueryOptions/ReturnType Postgrest.QueryOptions::get_Returning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryOptions_get_Returning_m3ABFDB8CCA2F937F62243D683A1994BC53A49BDB (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReturningU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.QueryOptions::set_Returning(Postgrest.QueryOptions/ReturnType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOptions_set_Returning_mD5133BBDC19245BF4D18050A6B217B3FF2BDD8CA (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturningU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Postgrest.QueryOptions/DuplicateResolutionType Postgrest.QueryOptions::get_DuplicateResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryOptions_get_DuplicateResolution_m98D42E2E436175C3731AB3B1FEC682FA11ECF4B8 (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDuplicateResolutionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.QueryOptions::set_DuplicateResolution(Postgrest.QueryOptions/DuplicateResolutionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOptions_set_DuplicateResolution_mE221B0CBF314687FDE4D5487C5E2B7403917D3AB (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CDuplicateResolutionU3Ek__BackingField_1 = L_0;
		return;
	}
}
// Postgrest.QueryOptions/CountType Postgrest.QueryOptions::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryOptions_get_Count_m7FB70DC101EF3E0D0159E10BDE6CD511FC78150F (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.QueryOptions::set_Count(Postgrest.QueryOptions/CountType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOptions_set_Count_m246BB9F73686C21BE1DDC61FF7A5A14764AA4486 (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean Postgrest.QueryOptions::get_Upsert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QueryOptions_get_Upsert_m7A538CA82B129F9ABF35CF3C1974877508ECE8C4 (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUpsertU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Postgrest.QueryOptions::set_Upsert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOptions_set_Upsert_m24B59C87C22AB078268C61797E43FD191AF22C2F (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CUpsertU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String Postgrest.QueryOptions::get_OnConflict()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QueryOptions_get_OnConflict_m551468277FDD514DCEDB85A9EFC915FF109D3420 (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3COnConflictU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Postgrest.QueryOptions::set_OnConflict(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOptions_set_OnConflict_m606FF54CA28B9C27E76C8C12A0881ED63C5F5E5E (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3COnConflictU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COnConflictU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Postgrest.QueryOptions::ToHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* QueryOptions_ToHeaders_mEB73960000887B11B429BF7F6D0DBA3458420E63 (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CountType_tF0A952EDCF61A5713F5A27EF783A8B6E6DC100C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplicateResolutionType_tBEA6F39CBF78B0447163BC959BA97AB9B7BAEA50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReturnType_t8C319BC9D4FC7B444BFD194A66E670FDE37A5EB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11088893C91AF88FD5578CCADD0EBE308FE5A17C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63226752B1B15A0D16EE7499EA91646BA4F6805D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95D8F8E7716DF6D218C29A88F950EFA77FF4E612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF35FC6063B266828B459DCF8A7A30CBA2649AF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* V_2 = NULL;
	MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* V_3 = NULL;
	MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* V_4 = NULL;
	String_t* G_B3_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B4_2 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_1, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_1;
		bool L_2;
		L_2 = QueryOptions_get_Upsert_m7A538CA82B129F9ABF35CF3C1974877508ECE8C4_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3;
		L_3 = QueryOptions_get_DuplicateResolution_m98D42E2E436175C3731AB3B1FEC682FA11ECF4B8_inline(__this, NULL);
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(DuplicateResolutionType_tBEA6F39CBF78B0447163BC959BA97AB9B7BAEA50_il2cpp_TypeInfo_var, &L_4);
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_6;
		L_6 = EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_5, EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018_RuntimeMethod_var);
		V_4 = L_6;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = V_1;
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_8 = V_4;
		G_B2_0 = _stringLiteral95D8F8E7716DF6D218C29A88F950EFA77FF4E612;
		G_B2_1 = L_7;
		if (L_8)
		{
			G_B3_0 = _stringLiteral95D8F8E7716DF6D218C29A88F950EFA77FF4E612;
			G_B3_1 = L_7;
			goto IL_0033;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_003a;
	}

IL_0033:
	{
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_9 = V_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = MapToAttribute_get_Mapping_m5432E60DBE072A7A894EF505449C33CC6E88484D_inline(L_9, NULL);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_003a:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B4_2, L_11, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0044:
	{
		int32_t L_12;
		L_12 = QueryOptions_get_Returning_m3ABFDB8CCA2F937F62243D683A1994BC53A49BDB_inline(__this, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(ReturnType_t8C319BC9D4FC7B444BFD194A66E670FDE37A5EB8_il2cpp_TypeInfo_var, &L_13);
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_15;
		L_15 = EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_14, EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018_RuntimeMethod_var);
		V_2 = L_15;
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_16 = V_2;
		if (!L_16)
		{
			goto IL_006e;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_1;
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_18 = V_2;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = MapToAttribute_get_Mapping_m5432E60DBE072A7A894EF505449C33CC6E88484D_inline(L_18, NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBF35FC6063B266828B459DCF8A7A30CBA2649AF8, L_19, NULL);
		NullCheck(L_17);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, L_20, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_006e:
	{
		int32_t L_21;
		L_21 = QueryOptions_get_Count_m7FB70DC101EF3E0D0159E10BDE6CD511FC78150F_inline(__this, NULL);
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(CountType_tF0A952EDCF61A5713F5A27EF783A8B6E6DC100C1_il2cpp_TypeInfo_var, &L_22);
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_24;
		L_24 = EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)L_23, EnumExtensions_GetAttribute_TisMapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A_m5C3F2DFC921011F99BC0EA2B4CC137679D3B4018_RuntimeMethod_var);
		V_3 = L_24;
		int32_t L_25;
		L_25 = QueryOptions_get_Count_m7FB70DC101EF3E0D0159E10BDE6CD511FC78150F_inline(__this, NULL);
		if (!L_25)
		{
			goto IL_00a0;
		}
	}
	{
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_26 = V_3;
		if (!L_26)
		{
			goto IL_00a0;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_27 = V_1;
		MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* L_28 = V_3;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = MapToAttribute_get_Mapping_m5432E60DBE072A7A894EF505449C33CC6E88484D_inline(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral63226752B1B15A0D16EE7499EA91646BA4F6805D, L_29, NULL);
		NullCheck(L_27);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_27, L_30, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_00a0:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_31 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_32 = V_1;
		NullCheck(L_32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33;
		L_33 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_32, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_34;
		L_34 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_33, NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_31, _stringLiteral11088893C91AF88FD5578CCADD0EBE308FE5A17C, L_34, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		int32_t L_35;
		L_35 = QueryOptions_get_Returning_m3ABFDB8CCA2F937F62243D683A1994BC53A49BDB_inline(__this, NULL);
		if (L_35)
		{
			goto IL_00d3;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_36 = V_0;
		NullCheck(L_36);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_36, _stringLiteral16D46E00A879AD1C9053ED90B4B148D721A45E92, _stringLiteral87811B8AF8DB46597B9C0A6BEAE14238FC7C81FF, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
	}

IL_00d3:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_37 = V_0;
		return L_37;
	}
}
// System.Void Postgrest.QueryOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOptions__ctor_m4EFE93A8747021B217764BCE7D848E73408BDEFB (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		__this->___U3CReturningU3Ek__BackingField_0 = 1;
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
// System.String Postgrest.QueryOrderer::get_ForeignTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QueryOrderer_get_ForeignTable_mA52D9A40D7F3425929D9B6F7E4FBF9DB3193A5AB (QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CForeignTableU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Postgrest.QueryOrderer::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QueryOrderer_get_Column_m4314A9C68DE7DFC24843C9064DA41AB056603EF2 (QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnU3Ek__BackingField_1;
		return L_0;
	}
}
// Postgrest.Constants/Ordering Postgrest.QueryOrderer::get_Ordering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryOrderer_get_Ordering_m2CD3469D1DDDE20EE175FC8BF33480333839A942 (QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3COrderingU3Ek__BackingField_2;
		return L_0;
	}
}
// Postgrest.Constants/NullPosition Postgrest.QueryOrderer::get_NullPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QueryOrderer_get_NullPosition_mE2C075DF917699C8F8F4201651F28DD65C33EA4B (QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNullPositionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Postgrest.QueryOrderer::.ctor(System.String,System.String,Postgrest.Constants/Ordering,Postgrest.Constants/NullPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueryOrderer__ctor_m2B2EA064874A78C1596621976355F4AE104A573A (QueryOrderer_tE0129DB584D6D330BFDD8CCA34923A7DAE488EB4* __this, String_t* ___0_foreignTable, String_t* ___1_column, int32_t ___2_ordering, int32_t ___3_nullPosition, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_foreignTable;
		__this->___U3CForeignTableU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CForeignTableU3Ek__BackingField_0), (void*)L_0);
		String_t* L_1 = ___1_column;
		__this->___U3CColumnU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnU3Ek__BackingField_1), (void*)L_1);
		int32_t L_2 = ___2_ordering;
		__this->___U3COrderingU3Ek__BackingField_2 = L_2;
		int32_t L_3 = ___3_nullPosition;
		__this->___U3CNullPositionU3Ek__BackingField_3 = L_3;
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
// System.Net.Http.HttpResponseMessage Postgrest.Responses.BaseResponse::get_ResponseMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* BaseResponse_get_ResponseMessage_m9994FCF1168A7049F2857969BC64D7ADB852FA18 (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, const RuntimeMethod* method) 
{
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_0 = __this->___U3CResponseMessageU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Responses.BaseResponse::set_ResponseMessage(System.Net.Http.HttpResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse_set_ResponseMessage_m053D20CD7E93ED04C9E676A677D3FE188FC95A96 (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_0 = ___0_value;
		__this->___U3CResponseMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String Postgrest.Responses.BaseResponse::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseResponse_get_Content_m6F1044012A6D1AE0332D13ACE55C824E5788BA7D (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CContentU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Responses.BaseResponse::set_Content(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse_set_Content_m8B31C14B9589FED1B443D080A0D417A7818B87B8 (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CContentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Postgrest.ClientOptions Postgrest.Responses.BaseResponse::get_ClientOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* BaseResponse_get_ClientOptions_mA96FE241F3280C599B65482A4CBAE3715264B451 (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = __this->___U3CClientOptionsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.Responses.BaseResponse::set_ClientOptions(Postgrest.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse_set_ClientOptions_mFD1C843E649CF53CBA251AC0806CEDC0B63CD81F (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_value, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = ___0_value;
		__this->___U3CClientOptionsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientOptionsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.Responses.BaseResponse::.ctor(Postgrest.ClientOptions,System.Net.Http.HttpResponseMessage,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseResponse__ctor_m43F487D1387F73D0403D07CA41BA5CB4B7A4C8CC (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_clientOptions, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___1_responseMessage, String_t* ___2_content, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = ___0_clientOptions;
		BaseResponse_set_ClientOptions_mFD1C843E649CF53CBA251AC0806CEDC0B63CD81F_inline(__this, L_0, NULL);
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_1 = ___1_responseMessage;
		BaseResponse_set_ResponseMessage_m053D20CD7E93ED04C9E676A677D3FE188FC95A96_inline(__this, L_1, NULL);
		String_t* L_2 = ___2_content;
		BaseResponse_set_Content_m8B31C14B9589FED1B443D080A0D417A7818B87B8_inline(__this, L_2, NULL);
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
// System.String Postgrest.Models.BaseModel::get_BaseUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseModel_get_BaseUrl_m6801642D905D78E37980D23431B78ACA3E089456 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBaseUrlU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Models.BaseModel::set_BaseUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseModel_set_BaseUrl_mE227986B28EBE25F4A5010C935052C23E308AEE6 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CBaseUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBaseUrlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Postgrest.ClientOptions Postgrest.Models.BaseModel::get_RequestClientOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* BaseModel_get_RequestClientOptions_mFC6B4F0F3BCC17ED5216C526D8CB13BD38D777BE (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = __this->___U3CRequestClientOptionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Models.BaseModel::set_RequestClientOptions(Postgrest.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseModel_set_RequestClientOptions_m9969978E03E16D3D579E74F08B7150E9EDB2EE5F (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_value, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = ___0_value;
		__this->___U3CRequestClientOptionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRequestClientOptionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Postgrest.Models.BaseModel::get_GetHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* BaseModel_get_GetHeaders_mA2F4D1718D549D50D4DBF5AB858DBF0C6CA2B481 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = __this->___U3CGetHeadersU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.Models.BaseModel::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseModel_set_GetHeaders_m407F1B237FE84C349EB0C1BBD08E305FADD17063 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ___0_value;
		__this->___U3CGetHeadersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetHeadersU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Postgrest.Models.BaseModel::get_TableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseModel_get_TableName_m7164E3DC9231DA34BC926C17E942CF0B948F0852 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* V_0 = NULL;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06(L_0, L_2, NULL);
		V_0 = ((TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F*)IsInstClass((RuntimeObject*)L_3, TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_il2cpp_TypeInfo_var));
		TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* L_4 = V_0;
		if (L_4)
		{
			goto IL_002a;
		}
	}
	{
		Type_t* L_5;
		L_5 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		return L_6;
	}

IL_002a:
	{
		TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = TableAttribute_get_Name_m5731CFBB26ED7B86A5C190597DBC850A33627EB3_inline(L_7, NULL);
		return L_8;
	}
}
// System.Collections.Generic.Dictionary`2<Postgrest.Attributes.PrimaryKeyAttribute,System.Object> Postgrest.Models.BaseModel::get_PrimaryKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* BaseModel_get_PrimaryKey_m84A01A92DAD47CCD9FE630AB4E63EEBA5E0CB929 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mA8CFB5FE270D81FB865BC0FA57B7239685FDC036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m78C7D632DA297529DD61FB55E747B351607C4154_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m4048047E4BF47E38F46EF63573E110A18A7C11A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* V_0 = NULL;
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_1 = NULL;
	int32_t V_2 = 0;
	PropertyInfo_t* V_3 = NULL;
	PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* V_4 = NULL;
	{
		Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* L_0 = (Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135*)il2cpp_codegen_object_new(Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m78C7D632DA297529DD61FB55E747B351607C4154(L_0, Dictionary_2__ctor_m78C7D632DA297529DD61FB55E747B351607C4154_RuntimeMethod_var);
		V_0 = L_0;
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_1);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2;
		L_2 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_1, NULL);
		V_1 = L_2;
		V_2 = 0;
		goto IL_0048;
	}

IL_0016:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PropertyInfo_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		PropertyInfo_t* L_7 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_10;
		L_10 = Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06(L_7, L_9, NULL);
		V_4 = ((PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6*)IsInstClass((RuntimeObject*)L_10, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var));
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* L_12 = V_0;
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_13 = V_4;
		PropertyInfo_t* L_14 = V_3;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = PropertyInfo_GetValue_m89576462107E2A4DF5B7775216AEC29D74FF6088(L_14, __this, NULL);
		NullCheck(L_12);
		Dictionary_2_Add_mA8CFB5FE270D81FB865BC0FA57B7239685FDC036(L_12, L_13, L_15, Dictionary_2_Add_mA8CFB5FE270D81FB865BC0FA57B7239685FDC036_RuntimeMethod_var);
	}

IL_0044:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_18 = V_1;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = Dictionary_2_get_Count_m4048047E4BF47E38F46EF63573E110A18A7C11A4(L_19, Dictionary_2_get_Count_m4048047E4BF47E38F46EF63573E110A18A7C11A4_RuntimeMethod_var);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		Dictionary_2_tC848A878CD6A782ABE48C295DB2F1F3F1B846135* L_21 = V_0;
		return L_21;
	}

IL_0059:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_22 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06E3ED3910061417F219E69E77E03EC465A5FEA4)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_23 = L_22;
		NullCheck(L_23);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_23, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BaseModel_get_PrimaryKey_m84A01A92DAD47CCD9FE630AB4E63EEBA5E0CB929_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.Models.BaseModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseModel__ctor_m1BF420659D8FA4687AF318F5BA714131E18B58D4 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) 
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
// System.Collections.Generic.List`1<System.String> Postgrest.Linq.SelectExpressionVisitor::get_Columns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SelectExpressionVisitor_get_Columns_m263E90A4D9F20AFE39621EB7AD6FC7950822FDB3 (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CColumnsU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.SelectExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* SelectExpressionVisitor_VisitNewArray_m0319833E0C4FBB49A1EA76531545AC8B6284A9E5 (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_1 = NULL;
	{
		NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* L_0 = ___0_node;
		NullCheck(L_0);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_1;
		L_1 = NewArrayExpression_get_Expressions_mBC8AE846F8167BA863B7BE9200C7947F2FB737EF_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41(L_1, ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0030;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001d_1;
			}

IL_000e_1:
			{
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6;
				L_6 = InterfaceFuncInvoker0< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression>::get_Current() */, IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7 = V_1;
				Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_8;
				L_8 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_7);
			}

IL_001d_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0031;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* L_11 = ___0_node;
		return L_11;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.SelectExpressionVisitor::VisitMember(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* SelectExpressionVisitor_VisitMember_m50863DC770ECF6776E47258F48A1D6E0A8B51411 (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_0 = ___0_node;
		String_t* L_1;
		L_1 = SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3;
		L_3 = SelectExpressionVisitor_get_Columns_m263E90A4D9F20AFE39621EB7AD6FC7950822FDB3_inline(__this, NULL);
		String_t* L_4 = V_0;
		NullCheck(L_3);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_3, L_4, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0017:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_5 = ___0_node;
		return L_5;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.SelectExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* SelectExpressionVisitor_VisitUnary_mB96C88AAB14FA5071B2CE5916C587A6E205CABB3 (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_0 = ___0_node;
		NullCheck(L_0);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_1;
		L_1 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_0, NULL);
		V_0 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_1, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_3 = V_0;
		String_t* L_4;
		L_4 = SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC(__this, L_3, NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
		L_6 = SelectExpressionVisitor_get_Columns_m263E90A4D9F20AFE39621EB7AD6FC7950822FDB3_inline(__this, NULL);
		String_t* L_7 = V_1;
		NullCheck(L_6);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_6, L_7, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0026:
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_8 = ___0_node;
		return L_8;
	}
}
// System.String Postgrest.Linq.SelectExpressionVisitor::GetColumnFromMemberExpression(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* V_3 = NULL;
	PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* V_4 = NULL;
	Type_t* G_B2_0 = NULL;
	Type_t* G_B1_0 = NULL;
	PropertyInfo_t* G_B3_0 = NULL;
	PropertyInfo_t* G_B5_0 = NULL;
	PropertyInfo_t* G_B4_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_0 = NULL;
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_0 = ___0_node;
		NullCheck(L_0);
		MemberInfo_t* L_1;
		L_1 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_1);
		Type_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((PropertyInfo_t*)(NULL));
		goto IL_0022;
	}

IL_0012:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_4 = ___0_node;
		NullCheck(L_4);
		MemberInfo_t* L_5;
		L_5 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(G_B2_0);
		PropertyInfo_t* L_7;
		L_7 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(G_B2_0, L_6, NULL);
		G_B3_0 = L_7;
	}

IL_0022:
	{
		PropertyInfo_t* L_8 = G_B3_0;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0029;
		}
	}
	{
		G_B6_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(NULL));
		goto IL_002f;
	}

IL_0029:
	{
		NullCheck(G_B5_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, G_B5_0, (bool)1);
		G_B6_0 = L_9;
	}

IL_002f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = G_B6_0;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0052;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_11 = ___0_node;
		NullCheck(L_11);
		MemberInfo_t* L_12;
		L_12 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7C0A2DF8E699BDD685F89C9A1270C89A8049F05)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC6DEF84EBC03F751571A600F394770D78EF268F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC_RuntimeMethod_var)));
	}

IL_0052:
	{
		V_0 = G_B8_0;
		V_1 = 0;
		goto IL_0086;
	}

IL_0057:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = L_19;
		RuntimeObject* L_20 = V_2;
		V_3 = ((ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5*)IsInstClass((RuntimeObject*)L_20, ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var));
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_21 = V_3;
		if (L_21)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_22 = V_2;
		V_4 = ((PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6*)IsInstClass((RuntimeObject*)L_22, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var));
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_23 = V_4;
		if (L_23)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0082;
	}

IL_0073:
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline(L_24, NULL);
		return L_25;
	}

IL_007a:
	{
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_26 = V_4;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline(L_26, NULL);
		return L_27;
	}

IL_0082:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0057;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_31 = ___0_node;
		NullCheck(L_31);
		MemberInfo_t* L_32;
		L_32 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7C0A2DF8E699BDD685F89C9A1270C89A8049F05)), L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC6DEF84EBC03F751571A600F394770D78EF268F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SelectExpressionVisitor_GetColumnFromMemberExpression_m0FD307781F24DFC1503FB36F0800D3EDDA617BEC_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.Linq.SelectExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectExpressionVisitor__ctor_mF2E4CCEAD0E23642CC3963D7C84F88801193D52A (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CColumnsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnsU3Ek__BackingField_0), (void*)L_0);
		ExpressionVisitor__ctor_m2974B344C35DD823BDA6D6313DAE4C7F64541393(__this, NULL);
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
// System.String Postgrest.Linq.SetExpressionVisitor::get_Column()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetExpressionVisitor_get_Column_m1B6452D4D71CFEEE5E74FE6A3B6464DB74DAAA15 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Linq.SetExpressionVisitor::set_Column(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CColumnU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Type Postgrest.Linq.SetExpressionVisitor::get_ExpectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* SetExpressionVisitor_get_ExpectedType_mEC7321AEE47CF9EF102E26382168235908BD8B21 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CExpectedTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Linq.SetExpressionVisitor::set_ExpectedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CExpectedTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpectedTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Object Postgrest.Linq.SetExpressionVisitor::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetExpressionVisitor_get_Value_mA0976966093DCE9B06526F704BA0F0D59E02443C (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.Linq.SetExpressionVisitor::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_Value_mAF2083CA480A9D4D253B0A01E914DA2C800BAB29 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.SetExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* SetExpressionVisitor_VisitUnary_m06CF6B75A71382B2535C91A7B1EE1C371AAEA538 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_0 = ___0_node;
		NullCheck(L_0);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_1;
		L_1 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_0, NULL);
		V_0 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_1, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_2 = V_0;
		if (L_2)
		{
			goto IL_0011;
		}
	}
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_3 = ___0_node;
		return L_3;
	}

IL_0011:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_4 = V_0;
		String_t* L_5;
		L_5 = SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3(__this, L_4, NULL);
		V_1 = L_5;
		String_t* L_6 = V_1;
		SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D_inline(__this, L_6, NULL);
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_7 = V_0;
		NullCheck(L_7);
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_7);
		SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014_inline(__this, L_8, NULL);
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_9 = ___0_node;
		return L_9;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.SetExpressionVisitor::VisitMember(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* SetExpressionVisitor_VisitMember_m56D0936DDAD43235AB9C50DA78A6468E242100C2 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_0 = ___0_node;
		String_t* L_1;
		L_1 = SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3(__this, L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D_inline(__this, L_2, NULL);
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_3 = ___0_node;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_3);
		SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014_inline(__this, L_4, NULL);
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_5 = ___0_node;
		return L_5;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.SetExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* SetExpressionVisitor_VisitNew_m3B352157F3BDE976021370323723FF51C1185081 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_2 = ___0_node;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_2);
		NullCheck(L_1);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_3);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_5 = ___0_node;
		SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF(__this, L_5, NULL);
	}

IL_001e:
	{
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_6 = ___0_node;
		return L_6;
	}
}
// System.Void Postgrest.Linq.SetExpressionVisitor::HandleKeyValuePair(System.Linq.Expressions.NewExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_2 = NULL;
	UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* V_3 = NULL;
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_4 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B4_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B3_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B10_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B6_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B5_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B9_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B7_0 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* G_B8_0 = NULL;
	{
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_0 = ___0_node;
		NullCheck(L_0);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_1;
		L_1 = NewExpression_get_Arguments_m153E264CF13BC082DEF2B0AB84331B1A6766B32E(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F(L_1, ReadOnlyCollection_1_get_Count_mF1C20F5D5D5D299F5602DDD1C112D7CDB86D1A8F_RuntimeMethod_var);
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0019;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D1F99B231F806BA85674F67BD920A5F5E8509CE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF_RuntimeMethod_var)));
	}

IL_0019:
	{
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_4 = ___0_node;
		NullCheck(L_4);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_5;
		L_5 = NewExpression_get_Arguments_m153E264CF13BC082DEF2B0AB84331B1A6766B32E(L_4, NULL);
		NullCheck(L_5);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_6;
		L_6 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_5, 0, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		V_0 = L_6;
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_7 = ___0_node;
		NullCheck(L_7);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_8;
		L_8 = NewExpression_get_Arguments_m153E264CF13BC082DEF2B0AB84331B1A6766B32E(L_7, NULL);
		NullCheck(L_8);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_9;
		L_9 = ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502(L_8, 1, ReadOnlyCollection_1_get_Item_mD12D51E0F96DDA7734DC44758FA07B0C18B1A502_RuntimeMethod_var);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_10 = V_0;
		G_B3_0 = L_9;
		if (!((NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51*)IsInstClass((RuntimeObject*)L_10, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var)))
		{
			G_B4_0 = L_9;
			goto IL_0044;
		}
	}
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_11 = V_0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_12;
		L_12 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_11);
		G_B10_0 = G_B3_0;
		goto IL_00ac;
	}

IL_0044:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13 = V_0;
		V_2 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_13, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_14 = V_2;
		G_B5_0 = G_B4_0;
		if (!L_14)
		{
			G_B6_0 = G_B4_0;
			goto IL_0069;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_15 = V_2;
		String_t* L_16;
		L_16 = SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3(__this, L_15, NULL);
		SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D_inline(__this, L_16, NULL);
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_17 = V_2;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_17);
		SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014_inline(__this, L_18, NULL);
		G_B10_0 = G_B5_0;
		goto IL_00ac;
	}

IL_0069:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_19 = V_0;
		V_3 = ((UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96*)IsInstSealed((RuntimeObject*)L_19, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96_il2cpp_TypeInfo_var));
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_20 = V_3;
		G_B7_0 = G_B6_0;
		if (!L_20)
		{
			G_B9_0 = G_B6_0;
			goto IL_00a1;
		}
	}
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_21 = V_3;
		NullCheck(L_21);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22;
		L_22 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_21, NULL);
		V_4 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_22, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_23 = V_4;
		G_B8_0 = G_B7_0;
		if (!L_23)
		{
			G_B9_0 = G_B7_0;
			goto IL_00a1;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_24 = V_4;
		String_t* L_25;
		L_25 = SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3(__this, L_24, NULL);
		SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D_inline(__this, L_25, NULL);
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_26 = V_4;
		NullCheck(L_26);
		Type_t* L_27;
		L_27 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_26);
		SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014_inline(__this, L_27, NULL);
		G_B10_0 = G_B8_0;
		goto IL_00ac;
	}

IL_00a1:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA0252B6EDE05391803D0F8653F04ED530E5AF1E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF_RuntimeMethod_var)));
	}

IL_00ac:
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_29;
		L_29 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_30;
		L_30 = Expression_Lambda_m519B751EC5116A4165693FBF98D6D40BCFAEBABA(G_B10_0, L_29, NULL);
		NullCheck(L_30);
		Delegate_t* L_31;
		L_31 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_30, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32;
		L_32 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_31, L_32, NULL);
		V_1 = L_33;
		RuntimeObject* L_34 = V_1;
		SetExpressionVisitor_set_Value_mAF2083CA480A9D4D253B0A01E914DA2C800BAB29_inline(__this, L_34, NULL);
		Type_t* L_35;
		L_35 = SetExpressionVisitor_get_ExpectedType_mEC7321AEE47CF9EF102E26382168235908BD8B21_inline(__this, NULL);
		RuntimeObject* L_36;
		L_36 = SetExpressionVisitor_get_Value_mA0976966093DCE9B06526F704BA0F0D59E02443C_inline(__this, NULL);
		NullCheck(L_35);
		bool L_37;
		L_37 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(120 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_35, L_36);
		if (L_37)
		{
			goto IL_012a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CD0E23C3EFBCA752A994ED55444E50DE4A9650A)));
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CD0E23C3EFBCA752A994ED55444E50DE4A9650A)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		Type_t* L_41;
		L_41 = SetExpressionVisitor_get_ExpectedType_mEC7321AEE47CF9EF102E26382168235908BD8B21_inline(__this, NULL);
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_41);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_42);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_40;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AF893C28292F4A91C2320EBEA1F0C1E61F0CB38)));
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6AF893C28292F4A91C2320EBEA1F0C1E61F0CB38)));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		RuntimeObject* L_45;
		L_45 = SetExpressionVisitor_get_Value_mA0976966093DCE9B06526F704BA0F0D59E02443C_inline(__this, NULL);
		NullCheck(L_45);
		Type_t* L_46;
		L_46 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_45, NULL);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_44;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
		String_t* L_49;
		L_49 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_48, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_50 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_50);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_50, L_49, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SetExpressionVisitor_HandleKeyValuePair_m5B4217BF055CED3CCB1145C46AE4D6002CA1B3AF_RuntimeMethod_var)));
	}

IL_012a:
	{
		return;
	}
}
// System.String Postgrest.Linq.SetExpressionVisitor::GetColumnFromMemberExpression(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* V_3 = NULL;
	PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* V_4 = NULL;
	Type_t* G_B2_0 = NULL;
	Type_t* G_B1_0 = NULL;
	PropertyInfo_t* G_B3_0 = NULL;
	PropertyInfo_t* G_B5_0 = NULL;
	PropertyInfo_t* G_B4_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B8_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B7_0 = NULL;
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_0 = ___0_node;
		NullCheck(L_0);
		MemberInfo_t* L_1;
		L_1 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_1);
		Type_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((PropertyInfo_t*)(NULL));
		goto IL_0022;
	}

IL_0012:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_4 = ___0_node;
		NullCheck(L_4);
		MemberInfo_t* L_5;
		L_5 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(G_B2_0);
		PropertyInfo_t* L_7;
		L_7 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(G_B2_0, L_6, NULL);
		G_B3_0 = L_7;
	}

IL_0022:
	{
		PropertyInfo_t* L_8 = G_B3_0;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0029;
		}
	}
	{
		G_B6_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(NULL));
		goto IL_002f;
	}

IL_0029:
	{
		NullCheck(G_B5_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, G_B5_0, (bool)1);
		G_B6_0 = L_9;
	}

IL_002f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = G_B6_0;
		G_B7_0 = L_10;
		if (L_10)
		{
			G_B8_0 = L_10;
			goto IL_0052;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_11 = ___0_node;
		NullCheck(L_11);
		MemberInfo_t* L_12;
		L_12 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		String_t* L_14;
		L_14 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7C0A2DF8E699BDD685F89C9A1270C89A8049F05)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31588841D5DC72F9FDF48CD35FE10C7DBF01FDF4)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3_RuntimeMethod_var)));
	}

IL_0052:
	{
		V_0 = G_B8_0;
		V_1 = 0;
		goto IL_0086;
	}

IL_0057:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = L_19;
		RuntimeObject* L_20 = V_2;
		V_3 = ((ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5*)IsInstClass((RuntimeObject*)L_20, ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var));
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_21 = V_3;
		if (L_21)
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_22 = V_2;
		V_4 = ((PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6*)IsInstClass((RuntimeObject*)L_22, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var));
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_23 = V_4;
		if (L_23)
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0082;
	}

IL_0073:
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline(L_24, NULL);
		return L_25;
	}

IL_007a:
	{
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_26 = V_4;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline(L_26, NULL);
		return L_27;
	}

IL_0082:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0086:
	{
		int32_t L_29 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0057;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_31 = ___0_node;
		NullCheck(L_31);
		MemberInfo_t* L_32;
		L_32 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_32);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7C0A2DF8E699BDD685F89C9A1270C89A8049F05)), L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31588841D5DC72F9FDF48CD35FE10C7DBF01FDF4)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_35 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_35, L_34, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SetExpressionVisitor_GetColumnFromMemberExpression_mB01A33A6D74BDF007332E7782E74FCCE62FFA5E3_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.Linq.SetExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetExpressionVisitor__ctor_m3E64A3533DE292E6EF2D4E672733F1C4DE995A41 (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) 
{
	{
		ExpressionVisitor__ctor_m2974B344C35DD823BDA6D6313DAE4C7F64541393(__this, NULL);
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
// Postgrest.QueryFilter Postgrest.Linq.WhereExpressionVisitor::get_Filter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* WhereExpressionVisitor_get_Filter_mF6063C5F5B8E8267A25E14D2AD8A9FE308E5E3B0 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, const RuntimeMethod* method) 
{
	{
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_0 = __this->___U3CFilterU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Linq.WhereExpressionVisitor::set_Filter(Postgrest.QueryFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* ___0_value, const RuntimeMethod* method) 
{
	{
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_0 = ___0_value;
		__this->___U3CFilterU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilterU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.WhereExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* WhereExpressionVisitor_VisitBinary_m5A46D54D8C4DFD48339D1B1697A50564630D7B27 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA45494A2FBC10E0E4C5A3084FA881C83CE041948_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_1 = NULL;
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_2 = NULL;
	String_t* V_3 = NULL;
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_4 = NULL;
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* V_5 = NULL;
	WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* V_6 = NULL;
	WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* V_7 = NULL;
	int32_t V_8 = 0;
	UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* V_9 = NULL;
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_10 = NULL;
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_11 = NULL;
	NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* V_12 = NULL;
	UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* V_13 = NULL;
	{
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_0 = ___0_node;
		int32_t L_1;
		L_1 = WhereExpressionVisitor_GetMappedOperator_m27128B42DA7C44B680BE00D7B9A718517C80340F(__this, L_0, NULL);
		V_0 = L_1;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_2 = ___0_node;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_2);
		V_8 = L_3;
		int32_t L_4 = V_8;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, 2))) > ((uint32_t)1))))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_5 = V_8;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)36)))) <= ((uint32_t)1))))
		{
			goto IL_0076;
		}
	}

IL_001f:
	{
		WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* L_6 = (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED*)il2cpp_codegen_object_new(WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WhereExpressionVisitor__ctor_m409895514F56D28565CEB09799FA9894D25B864C(L_6, NULL);
		V_6 = L_6;
		WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* L_7 = V_6;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_8 = ___0_node;
		NullCheck(L_8);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_9;
		L_9 = BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline(L_8, NULL);
		NullCheck(L_7);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_10;
		L_10 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_7, L_9);
		WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* L_11 = (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED*)il2cpp_codegen_object_new(WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		WhereExpressionVisitor__ctor_m409895514F56D28565CEB09799FA9894D25B864C(L_11, NULL);
		V_7 = L_11;
		WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* L_12 = V_7;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_13 = ___0_node;
		NullCheck(L_13);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_14;
		L_14 = BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline(L_13, NULL);
		NullCheck(L_12);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_15;
		L_15 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, L_12, L_14);
		int32_t L_16 = V_0;
		List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* L_17 = (List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F*)il2cpp_codegen_object_new(List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		List_1__ctor_mA45494A2FBC10E0E4C5A3084FA881C83CE041948(L_17, List_1__ctor_mA45494A2FBC10E0E4C5A3084FA881C83CE041948_RuntimeMethod_var);
		List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* L_18 = L_17;
		WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* L_19 = V_6;
		NullCheck(L_19);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_20;
		L_20 = WhereExpressionVisitor_get_Filter_mF6063C5F5B8E8267A25E14D2AD8A9FE308E5E3B0_inline(L_19, NULL);
		NullCheck(L_18);
		List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_inline(L_18, L_20, List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_RuntimeMethod_var);
		List_1_t8955F98CCD7362B80A8FCFA8D7A5472A135F1C6F* L_21 = L_18;
		WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* L_22 = V_7;
		NullCheck(L_22);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_23;
		L_23 = WhereExpressionVisitor_get_Filter_mF6063C5F5B8E8267A25E14D2AD8A9FE308E5E3B0_inline(L_22, NULL);
		NullCheck(L_21);
		List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_inline(L_21, L_23, List_1_Add_m093E69228DC9FF051475A53BBBF151F1F5C48550_RuntimeMethod_var);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_24 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		QueryFilter__ctor_mCD8AB853E7DD2313A061107483A6D33F2BEF7C12(L_24, L_16, L_21, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_24, NULL);
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_25 = ___0_node;
		return L_25;
	}

IL_0076:
	{
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_26 = ___0_node;
		NullCheck(L_26);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27;
		L_27 = BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline(L_26, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_28;
		L_28 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_27);
		V_1 = L_28;
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_29 = ___0_node;
		NullCheck(L_29);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_30;
		L_30 = BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline(L_29, NULL);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_31;
		L_31 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, __this, L_30);
		V_2 = L_31;
		V_3 = (String_t*)NULL;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_32 = V_1;
		V_4 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_32, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_33 = V_4;
		if (!L_33)
		{
			goto IL_00a9;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_34 = V_4;
		String_t* L_35;
		L_35 = WhereExpressionVisitor_GetColumnFromMemberExpression_m88CC8BF47115CEA01C299802BCF3B5A2727F11AD(__this, L_34, NULL);
		V_3 = L_35;
		goto IL_00db;
	}

IL_00a9:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_36 = V_1;
		V_9 = ((UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96*)IsInstSealed((RuntimeObject*)L_36, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96_il2cpp_TypeInfo_var));
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_37 = V_9;
		if (!L_37)
		{
			goto IL_00db;
		}
	}
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_38 = V_9;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_38);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00db;
		}
	}
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_40 = V_9;
		NullCheck(L_40);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_41;
		L_41 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_40, NULL);
		V_10 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_41, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_42 = V_10;
		if (!L_42)
		{
			goto IL_00db;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_43 = V_10;
		String_t* L_44;
		L_44 = WhereExpressionVisitor_GetColumnFromMemberExpression_m88CC8BF47115CEA01C299802BCF3B5A2727F11AD(__this, L_43, NULL);
		V_3 = L_44;
	}

IL_00db:
	{
		String_t* L_45 = V_3;
		if (L_45)
		{
			goto IL_00ef;
		}
	}
	{
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_46 = ___0_node;
		String_t* L_47;
		L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral157EA16B1400FCCE0E6DB3930150B95AC2A3FD89)), L_46, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_48 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_48);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_48, L_47, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_48, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhereExpressionVisitor_VisitBinary_m5A46D54D8C4DFD48339D1B1697A50564630D7B27_RuntimeMethod_var)));
	}

IL_00ef:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_49 = V_2;
		V_5 = ((ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547*)IsInstClass((RuntimeObject*)L_49, ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547_il2cpp_TypeInfo_var));
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_50 = V_5;
		if (!L_50)
		{
			goto IL_0107;
		}
	}
	{
		String_t* L_51 = V_3;
		int32_t L_52 = V_0;
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_53 = V_5;
		WhereExpressionVisitor_HandleConstantExpression_m353F927F9062FE9F6806C2183DB79769A15655DA(__this, L_51, L_52, L_53, NULL);
		goto IL_014d;
	}

IL_0107:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_54 = V_2;
		V_11 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_54, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_55 = V_11;
		if (!L_55)
		{
			goto IL_011f;
		}
	}
	{
		String_t* L_56 = V_3;
		int32_t L_57 = V_0;
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_58 = V_11;
		WhereExpressionVisitor_HandleMemberExpression_m23B941936154AA26DF8581BA817A4705CF19FFFD(__this, L_56, L_57, L_58, NULL);
		goto IL_014d;
	}

IL_011f:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_59 = V_2;
		V_12 = ((NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51*)IsInstClass((RuntimeObject*)L_59, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var));
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_60 = V_12;
		if (!L_60)
		{
			goto IL_0137;
		}
	}
	{
		String_t* L_61 = V_3;
		int32_t L_62 = V_0;
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_63 = V_12;
		WhereExpressionVisitor_HandleNewExpression_mDA37CBD79E96BD5F446B5A49CBD1F81A7BB3E3B4(__this, L_61, L_62, L_63, NULL);
		goto IL_014d;
	}

IL_0137:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_64 = V_2;
		V_13 = ((UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96*)IsInstSealed((RuntimeObject*)L_64, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96_il2cpp_TypeInfo_var));
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_65 = V_13;
		if (!L_65)
		{
			goto IL_014d;
		}
	}
	{
		String_t* L_66 = V_3;
		int32_t L_67 = V_0;
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_68 = V_13;
		WhereExpressionVisitor_HandleUnaryExpression_mE473B6161B7E43C63CB06146757BAEF833A87C11(__this, L_66, L_67, L_68, NULL);
	}

IL_014d:
	{
		BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* L_69 = ___0_node;
		return L_69;
	}
}
// System.Linq.Expressions.Expression Postgrest.Linq.WhereExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* WhereExpressionVisitor_VisitMethodCall_m99D2539ED315A1C6F9F82D7498580E048A686857 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA7B88886FB24B3F19FA3221438C8E27A5F9DB25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7);
		s_Il2CppMethodInitialized = true;
	}
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B9_2 = 0;
	String_t* G_B9_3 = NULL;
	WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* G_B9_4 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	int32_t G_B8_2 = 0;
	String_t* G_B8_3 = NULL;
	WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* G_B8_4 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	int32_t G_B10_2 = 0;
	String_t* G_B10_3 = NULL;
	WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* G_B10_4 = NULL;
	{
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_0 = ___0_node;
		NullCheck(L_0);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_1;
		L_1 = MethodCallExpression_get_Object_m3E06943B2633E3F64AFF6E35D591DB017956299D(L_0, NULL);
		V_0 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_1, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_2 = V_0;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_3 = ___0_node;
		NullCheck(L_3);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4;
		L_4 = MethodCallExpression_get_Object_m3E06943B2633E3F64AFF6E35D591DB017956299D(L_3, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral95A925AED27FB02CEACC8F0F132B2869187FB087)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhereExpressionVisitor_VisitMethodCall_m99D2539ED315A1C6F9F82D7498580E048A686857_RuntimeMethod_var)));
	}

IL_0025:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_7 = V_0;
		String_t* L_8;
		L_8 = WhereExpressionVisitor_GetColumnFromMemberExpression_m88CC8BF47115CEA01C299802BCF3B5A2727F11AD(__this, L_7, NULL);
		V_1 = L_8;
		String_t* L_9 = V_1;
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_10 = ___0_node;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA8F141FA67FF5C63A04A7E5F73831995F0F462C5)), L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE3B3D53B57DED8F9AAC2CBBE1CBCC33B46CAF6C)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhereExpressionVisitor_VisitMethodCall_m99D2539ED315A1C6F9F82D7498580E048A686857_RuntimeMethod_var)));
	}

IL_004b:
	{
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_14 = ___0_node;
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = MethodCallExpression_get_Method_m76D210171E9633BD4E62F23C9300CF86098E5615_inline(L_14, NULL);
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		bool L_17;
		L_17 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, _stringLiteralDA7B88886FB24B3F19FA3221438C8E27A5F9DB25, NULL);
		if (!L_17)
		{
			goto IL_00cb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_20 = ___0_node;
		NullCheck(L_20);
		MethodInfo_t* L_21;
		L_21 = MethodCallExpression_get_Method_m76D210171E9633BD4E62F23C9300CF86098E5615_inline(L_20, NULL);
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_21);
		NullCheck(L_19);
		bool L_23;
		L_23 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(24 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_19, L_22);
		if (!L_23)
		{
			goto IL_0095;
		}
	}
	{
		String_t* L_24 = V_1;
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_25 = ___0_node;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_26;
		L_26 = WhereExpressionVisitor_GetArgumentValues_mCCE881DCE6FFC8700AC207EB4E001D18F75AC79E(__this, L_25, NULL);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_27 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_27, L_24, ((int32_t)16), L_26, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_27, NULL);
		goto IL_00d6;
	}

IL_0095:
	{
		String_t* L_28 = V_1;
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_29 = ___0_node;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_30;
		L_30 = WhereExpressionVisitor_GetArgumentValues_mCCE881DCE6FFC8700AC207EB4E001D18F75AC79E(__this, L_29, NULL);
		RuntimeObject* L_31;
		L_31 = Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6(L_30, Enumerable_First_TisRuntimeObject_mEFECF1B8C3201589C5AF34176DCBF8DD926642D6_RuntimeMethod_var);
		RuntimeObject* L_32 = L_31;
		G_B8_0 = L_32;
		G_B8_1 = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
		G_B8_2 = 8;
		G_B8_3 = L_28;
		G_B8_4 = __this;
		if (L_32)
		{
			G_B9_0 = L_32;
			G_B9_1 = _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7;
			G_B9_2 = 8;
			G_B9_3 = L_28;
			G_B9_4 = __this;
			goto IL_00b0;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_1;
		G_B10_2 = G_B8_2;
		G_B10_3 = G_B8_3;
		G_B10_4 = G_B8_4;
		goto IL_00b5;
	}

IL_00b0:
	{
		NullCheck(G_B9_0);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B9_0);
		G_B10_0 = L_33;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		G_B10_4 = G_B9_4;
	}

IL_00b5:
	{
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B10_1, G_B10_0, _stringLiteralE280D065A824A791F8305234D3E093FC9A5A90C7, NULL);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_35 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_35, G_B10_3, G_B10_2, L_34, NULL);
		NullCheck(G_B10_4);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(G_B10_4, L_35, NULL);
		goto IL_00d6;
	}

IL_00cb:
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_36 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		NotImplementedException__ctor_m8339D1A685E8D77CAC9D3260C06B38B5C7CA7742(L_36, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9DF7209D6995B092EC27708CB55B69C40584F07A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WhereExpressionVisitor_VisitMethodCall_m99D2539ED315A1C6F9F82D7498580E048A686857_RuntimeMethod_var)));
	}

IL_00d6:
	{
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_37 = ___0_node;
		return L_37;
	}
}
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleConstantExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.ConstantExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleConstantExpression_m353F927F9062FE9F6806C2183DB79769A15655DA (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* ___2_constantExpression, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_0 = ___2_constantExpression;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(5 /* System.Type System.Linq.Expressions.Expression::get_Type() */, L_0);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsEnum() */, L_1);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_3 = ___2_constantExpression;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ConstantExpression_get_Value_mCC4506ED39F235D2D2A57728CC0DD36C390B4C17_inline(L_3, NULL);
		V_0 = L_4;
		String_t* L_5 = ___0_column;
		int32_t L_6 = ___1_op;
		RuntimeObject* L_7 = V_0;
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_8 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_8, L_5, L_6, L_7, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_8, NULL);
		return;
	}

IL_0023:
	{
		String_t* L_9 = ___0_column;
		int32_t L_10 = ___1_op;
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_11 = ___2_constantExpression;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = ConstantExpression_get_Value_mCC4506ED39F235D2D2A57728CC0DD36C390B4C17_inline(L_11, NULL);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_13 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_13, L_9, L_10, L_12, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_13, NULL);
		return;
	}
}
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleMemberExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleMemberExpression_m23B941936154AA26DF8581BA817A4705CF19FFFD (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___2_memberExpression, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_column;
		int32_t L_1 = ___1_op;
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_2 = ___2_memberExpression;
		RuntimeObject* L_3;
		L_3 = WhereExpressionVisitor_GetMemberExpressionValue_mCC3698A10A75EF7AFFB90310019C442B55EC8258(__this, L_2, NULL);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_4 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_4, L_0, L_1, L_3, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_4, NULL);
		return;
	}
}
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleUnaryExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleUnaryExpression_mE473B6161B7E43C63CB06146757BAEF833A87C11 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* ___2_unaryExpression, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* V_0 = NULL;
	MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* V_1 = NULL;
	NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* V_2 = NULL;
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_0 = ___2_unaryExpression;
		NullCheck(L_0);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_1;
		L_1 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_0, NULL);
		V_0 = ((ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547*)IsInstClass((RuntimeObject*)L_1, ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547_il2cpp_TypeInfo_var));
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___0_column;
		int32_t L_4 = ___1_op;
		ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* L_5 = V_0;
		WhereExpressionVisitor_HandleConstantExpression_m353F927F9062FE9F6806C2183DB79769A15655DA(__this, L_3, L_4, L_5, NULL);
		return;
	}

IL_0019:
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_6 = ___2_unaryExpression;
		NullCheck(L_6);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
		L_7 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_6, NULL);
		V_1 = ((MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89*)IsInstClass((RuntimeObject*)L_7, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89_il2cpp_TypeInfo_var));
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_9 = ___0_column;
		int32_t L_10 = ___1_op;
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_11 = V_1;
		WhereExpressionVisitor_HandleMemberExpression_m23B941936154AA26DF8581BA817A4705CF19FFFD(__this, L_9, L_10, L_11, NULL);
		return;
	}

IL_0032:
	{
		UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* L_12 = ___2_unaryExpression;
		NullCheck(L_12);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_13;
		L_13 = UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline(L_12, NULL);
		V_2 = ((NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51*)IsInstClass((RuntimeObject*)L_13, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51_il2cpp_TypeInfo_var));
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_14 = V_2;
		if (!L_14)
		{
			goto IL_004a;
		}
	}
	{
		String_t* L_15 = ___0_column;
		int32_t L_16 = ___1_op;
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_17 = V_2;
		WhereExpressionVisitor_HandleNewExpression_mDA37CBD79E96BD5F446B5A49CBD1F81A7BB3E3B4(__this, L_15, L_16, L_17, NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Postgrest.Linq.WhereExpressionVisitor::HandleNewExpression(System.String,Postgrest.Constants/Operator,System.Linq.Expressions.NewExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor_HandleNewExpression_mDA37CBD79E96BD5F446B5A49CBD1F81A7BB3E3B4 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, String_t* ___0_column, int32_t ___1_op, NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* ___2_newExpression, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Guid_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Delegate_t* V_3 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_4;
	memset((&V_4), 0, sizeof(V_4));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Guid_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_1 = ___2_newExpression;
		NullCheck(L_1);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_2;
		L_2 = NewExpression_get_Arguments_m153E264CF13BC082DEF2B0AB84331B1A6766B32E(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41(L_2, ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_2;
					if (!L_4)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_5 = V_2;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_6 = V_2;
				NullCheck(L_6);
				Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
				L_7 = InterfaceFuncInvoker0< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression>::get_Current() */, IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var, L_6);
				ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_8;
				L_8 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
				LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_9;
				L_9 = Expression_Lambda_m519B751EC5116A4165693FBF98D6D40BCFAEBABA(L_7, L_8, NULL);
				NullCheck(L_9);
				Delegate_t* L_10;
				L_10 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_9, NULL);
				V_3 = L_10;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = V_0;
				Delegate_t* L_12 = V_3;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
				L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_12);
				RuntimeObject* L_14;
				L_14 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_12, L_13, NULL);
				NullCheck(L_11);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_11, L_14, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
			}

IL_003b_1:
			{
				RuntimeObject* L_15 = V_2;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* L_17 = ___2_newExpression;
		NullCheck(L_17);
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_18;
		L_18 = NewExpression_get_Constructor_m3E55B5B89F1297D692E143FF9B89C7B5363BFC78_inline(L_17, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_19 = V_0;
		NullCheck(L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20;
		L_20 = List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F(L_19, List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_RuntimeMethod_var);
		NullCheck(L_18);
		RuntimeObject* L_21;
		L_21 = ConstructorInfo_Invoke_m15FDF2B682BD01CC934BE4D314EF2193103CECFE(L_18, L_20, NULL);
		V_1 = L_21;
		RuntimeObject* L_22 = V_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_22, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var)))
		{
			goto IL_0073;
		}
	}
	{
		RuntimeObject* L_23 = V_1;
		V_4 = ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_23, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))));
		goto IL_0097;
	}

IL_0073:
	{
		RuntimeObject* L_24 = V_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_24, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var)))
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_25 = V_1;
		V_5 = ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_25, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var))));
		goto IL_00ac;
	}

IL_0085:
	{
		RuntimeObject* L_26 = V_1;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_26, Guid_t_il2cpp_TypeInfo_var)))
		{
			goto IL_00dc;
		}
	}
	{
		RuntimeObject* L_27 = V_1;
		V_6 = ((*(Guid_t*)((Guid_t*)(Guid_t*)UnBox(L_27, Guid_t_il2cpp_TypeInfo_var))));
		goto IL_00c1;
	}

IL_0097:
	{
		String_t* L_28 = ___0_column;
		int32_t L_29 = ___1_op;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_30 = V_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31 = L_30;
		RuntimeObject* L_32 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_31);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_33 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_33, L_28, L_29, L_32, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_33, NULL);
		return;
	}

IL_00ac:
	{
		String_t* L_34 = ___0_column;
		int32_t L_35 = ___1_op;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_36 = V_5;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_37 = L_36;
		RuntimeObject* L_38 = Box(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_il2cpp_TypeInfo_var, &L_37);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_39 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_39, L_34, L_35, L_38, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_39, NULL);
		return;
	}

IL_00c1:
	{
		String_t* L_40 = ___0_column;
		int32_t L_41 = ___1_op;
		String_t* L_42;
		L_42 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_6), NULL);
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_43 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_43, L_40, L_41, L_42, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_43, NULL);
		return;
	}

IL_00dc:
	{
		RuntimeObject* L_44 = V_1;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_44, NULL);
		NullCheck(L_45);
		bool L_46;
		L_46 = VirtualFuncInvoker0< bool >::Invoke(71 /* System.Boolean System.Type::get_IsEnum() */, L_45);
		if (!L_46)
		{
			goto IL_00f7;
		}
	}
	{
		String_t* L_47 = ___0_column;
		int32_t L_48 = ___1_op;
		RuntimeObject* L_49 = V_1;
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_50 = (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913*)il2cpp_codegen_object_new(QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		QueryFilter__ctor_m29BCC9C77E6E1931DA89A6EA6FF443719F07F13A(L_50, L_47, L_48, L_49, NULL);
		WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline(__this, L_50, NULL);
	}

IL_00f7:
	{
		return;
	}
}
// System.String Postgrest.Linq.WhereExpressionVisitor::GetColumnFromMemberExpression(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WhereExpressionVisitor_GetColumnFromMemberExpression_m88CC8BF47115CEA01C299802BCF3B5A2727F11AD (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_node, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* V_4 = NULL;
	PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* V_5 = NULL;
	Type_t* G_B2_0 = NULL;
	Type_t* G_B1_0 = NULL;
	PropertyInfo_t* G_B3_0 = NULL;
	PropertyInfo_t* G_B5_0 = NULL;
	PropertyInfo_t* G_B4_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B6_0 = NULL;
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_0 = ___0_node;
		NullCheck(L_0);
		MemberInfo_t* L_1;
		L_1 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_1);
		Type_t* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((PropertyInfo_t*)(NULL));
		goto IL_0022;
	}

IL_0012:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_4 = ___0_node;
		NullCheck(L_4);
		MemberInfo_t* L_5;
		L_5 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_4, NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		NullCheck(G_B2_0);
		PropertyInfo_t* L_7;
		L_7 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(G_B2_0, L_6, NULL);
		G_B3_0 = L_7;
	}

IL_0022:
	{
		PropertyInfo_t* L_8 = G_B3_0;
		G_B4_0 = L_8;
		if (L_8)
		{
			G_B5_0 = L_8;
			goto IL_0029;
		}
	}
	{
		G_B6_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(NULL));
		goto IL_002f;
	}

IL_0029:
	{
		NullCheck(G_B5_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9;
		L_9 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, G_B5_0, (bool)1);
		G_B6_0 = L_9;
	}

IL_002f:
	{
		V_0 = G_B6_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = V_0;
		if (L_10)
		{
			goto IL_003f;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_11 = ___0_node;
		NullCheck(L_11);
		MemberInfo_t* L_12;
		L_12 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_11, NULL);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		return L_13;
	}

IL_003f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		V_1 = L_14;
		V_2 = 0;
		goto IL_0077;
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		RuntimeObject* L_19 = V_3;
		V_4 = ((ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5*)IsInstClass((RuntimeObject*)L_19, ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var));
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_20 = V_4;
		if (L_20)
		{
			goto IL_0063;
		}
	}
	{
		RuntimeObject* L_21 = V_3;
		V_5 = ((PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6*)IsInstClass((RuntimeObject*)L_21, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var));
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_22 = V_5;
		if (L_22)
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0073;
	}

IL_0063:
	{
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_23 = V_4;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline(L_23, NULL);
		return L_24;
	}

IL_006b:
	{
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_25 = V_5;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline(L_25, NULL);
		return L_26;
	}

IL_0073:
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0077:
	{
		int32_t L_28 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = V_1;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_30 = ___0_node;
		NullCheck(L_30);
		MemberInfo_t* L_31;
		L_31 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_30, NULL);
		NullCheck(L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_31);
		return L_32;
	}
}
// System.Object Postgrest.Linq.WhereExpressionVisitor::GetMemberExpressionValue(System.Linq.Expressions.MemberExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereExpressionVisitor_GetMemberExpressionValue_mCC3698A10A75EF7AFFB90310019C442B55EC8258 (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_0 = ___0_member;
		NullCheck(L_0);
		MemberInfo_t* L_1;
		L_1 = MemberExpression_get_Member_m30A7DCC7673A38BE9F06597DC9F5305E61B88104(L_0, NULL);
		V_0 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_1, FieldInfo_t_il2cpp_TypeInfo_var));
		FieldInfo_t* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_3 = ___0_member;
		NullCheck(L_3);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_4;
		L_4 = MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline(L_3, NULL);
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_5;
		L_5 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_6;
		L_6 = Expression_Lambda_m519B751EC5116A4165693FBF98D6D40BCFAEBABA(L_4, L_5, NULL);
		NullCheck(L_6);
		Delegate_t* L_7;
		L_7 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_6, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8;
		L_8 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_7, L_8, NULL);
		V_1 = L_9;
		FieldInfo_t* L_10 = V_0;
		RuntimeObject* L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(27 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_10, L_11);
		return L_12;
	}

IL_0037:
	{
		MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* L_13 = ___0_member;
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_14;
		L_14 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_15;
		L_15 = Expression_Lambda_m519B751EC5116A4165693FBF98D6D40BCFAEBABA(L_13, L_14, NULL);
		NullCheck(L_15);
		Delegate_t* L_16;
		L_16 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_15, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17;
		L_17 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_16);
		RuntimeObject* L_18;
		L_18 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_16, L_17, NULL);
		return L_18;
	}
}
// Postgrest.Constants/Operator Postgrest.Linq.WhereExpressionVisitor::GetMappedOperator(System.Linq.Expressions.Expression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WhereExpressionVisitor_GetMappedOperator_m27128B42DA7C44B680BE00D7B9A718517C80340F (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ___0_node, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = ___0_node;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType() */, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		if ((((int32_t)L_2) > ((int32_t)3)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0066;
		}
	}
	{
		goto IL_008a;
	}

IL_0015:
	{
		int32_t L_5 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)13))))
		{
			case 0:
			{
				goto IL_0072;
			}
			case 1:
			{
				goto IL_008a;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0086;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_008a;
			}
			case 6:
			{
				goto IL_008a;
			}
			case 7:
			{
				goto IL_007a;
			}
			case 8:
			{
				goto IL_0082;
			}
		}
	}
	{
		int32_t L_6 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, ((int32_t)34))))
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_006e;
			}
			case 3:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_008a;
	}

IL_005d:
	{
		V_0 = ((int32_t)24);
		goto IL_008c;
	}

IL_0062:
	{
		V_0 = 0;
		goto IL_008c;
	}

IL_0066:
	{
		V_0 = 0;
		goto IL_008c;
	}

IL_006a:
	{
		V_0 = 1;
		goto IL_008c;
	}

IL_006e:
	{
		V_0 = 1;
		goto IL_008c;
	}

IL_0072:
	{
		V_0 = 2;
		goto IL_008c;
	}

IL_0076:
	{
		V_0 = 7;
		goto IL_008c;
	}

IL_007a:
	{
		V_0 = 5;
		goto IL_008c;
	}

IL_007e:
	{
		V_0 = 3;
		goto IL_008c;
	}

IL_0082:
	{
		V_0 = 6;
		goto IL_008c;
	}

IL_0086:
	{
		V_0 = 4;
		goto IL_008c;
	}

IL_008a:
	{
		V_0 = 2;
	}

IL_008c:
	{
		int32_t L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.List`1<System.Object> Postgrest.Linq.WhereExpressionVisitor::GetArgumentValues(System.Linq.Expressions.MethodCallExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* WhereExpressionVisitor_GetArgumentValues_mCCE881DCE6FFC8700AC207EB4E001D18F75AC79E (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* ___0_methodCall, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Delegate_t* V_2 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* L_1 = ___0_methodCall;
		NullCheck(L_1);
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_2;
		L_2 = MethodCallExpression_get_Arguments_m386763439BCBD07BD686689D32990FA5155076F5(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41(L_2, ReadOnlyCollection_1_GetEnumerator_mFFB8104C4171DB4DDD3662933B2AFB7EA971AA41_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_4 = V_1;
					if (!L_4)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_5 = V_1;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003b_1;
			}

IL_0014_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_7;
				L_7 = InterfaceFuncInvoker0< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Linq.Expressions.Expression>::get_Current() */, IEnumerator_1_tE2C6D8FF4106CBC76BEFF569D8B90B191E9E9FC6_il2cpp_TypeInfo_var, L_6);
				ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_8;
				L_8 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_il2cpp_TypeInfo_var);
				LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* L_9;
				L_9 = Expression_Lambda_m519B751EC5116A4165693FBF98D6D40BCFAEBABA(L_7, L_8, NULL);
				NullCheck(L_9);
				Delegate_t* L_10;
				L_10 = LambdaExpression_Compile_mB7D2253AA0DC2B2B10C9D02E89492A663FB39BA7(L_9, NULL);
				V_2 = L_10;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_11 = V_0;
				Delegate_t* L_12 = V_2;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13;
				L_13 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
				NullCheck(L_12);
				RuntimeObject* L_14;
				L_14 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_12, L_13, NULL);
				NullCheck(L_11);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_11, L_14, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
			}

IL_003b_1:
			{
				RuntimeObject* L_15 = V_1;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = V_0;
		return L_17;
	}
}
// System.Void Postgrest.Linq.WhereExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereExpressionVisitor__ctor_m409895514F56D28565CEB09799FA9894D25B864C (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, const RuntimeMethod* method) 
{
	{
		ExpressionVisitor__ctor_m2974B344C35DD823BDA6D6313DAE4C7F64541393(__this, NULL);
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
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_Multicast(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* currentDelegate = reinterpret_cast<DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_sender, ___1_message, ___2_exception, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenInst(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_message, ___2_exception, method);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenStatic(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_sender, ___1_message, ___2_exception, method);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenStaticInvoker(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_sender, ___1_message, ___2_exception);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_ClosedStaticInvoker(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_sender, ___1_message, ___2_exception);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenVirtual(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	VirtualActionInvoker2< String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_sender, ___1_message, ___2_exception);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenInterface(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	InterfaceActionInvoker2< String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_sender, ___1_message, ___2_exception);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenGenericVirtual(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericVirtualActionInvoker2< String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* >::Invoke(method, ___0_sender, ___1_message, ___2_exception);
}
void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenGenericInterface(DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method)
{
	NullCheck(___0_sender);
	GenericInterfaceActionInvoker2< String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* >::Invoke(method, ___0_sender, ___1_message, ___2_exception);
}
// System.Void Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEventHandler__ctor_m24B9F2B986259D4B8653FDDBD97880BB517C4175 (DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_Multicast;
}
// System.Void Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler::Invoke(System.Object,System.String,Postgrest.Exceptions.PostgrestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F (DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_message, ___2_exception, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler::BeginInvoke(System.Object,System.String,Postgrest.Exceptions.PostgrestException,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DebugEventHandler_BeginInvoke_mFC3611C4C7BC555BC17C3AB90FD4E6C255BC51EF (DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	__d_args[0] = ___0_sender;
	__d_args[1] = ___1_message;
	__d_args[2] = ___2_exception;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void Postgrest.Interfaces.IPostgrestDebugger/DebugEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugEventHandler_EndInvoke_mEE2846DF5F500C5DDA4CB5F1ACF2CD537676E16B (DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
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
// System.String Postgrest.Extensions.RangeExtensions::ToPostgresString(Postgrest.IntRange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RangeExtensions_ToPostgresString_mF5FFDB3ED3A34CFD72D198EDAD0CA2C526D8CE28 (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* ___0_range, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_0 = ___0_range;
		NullCheck(L_0);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_1;
		L_1 = IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline(L_0, NULL);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_2 = ___0_range;
		NullCheck(L_2);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3;
		L_3 = IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2DC756233000EEEBA87373FF3E461EF12B79A2F8, L_1, L_3, NULL);
		return L_4;
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
// System.Collections.Generic.IEnumerable`1<System.Type> Postgrest.Extensions.TypeExtensions::GetInheritanceHierarchy(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetInheritanceHierarchy_mB34133CF389AFD238E905F1C91A7CEB1D8FAB3B8 (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* L_0 = (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A*)il2cpp_codegen_object_new(U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetInheritanceHierarchyU3Ed__0__ctor_mCC5790EF2C1E1C4F855BD22A059C0EC0B9065C17(L_0, ((int32_t)-2), NULL);
		U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* L_1 = L_0;
		Type_t* L_2 = ___0_type;
		NullCheck(L_1);
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		return L_1;
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
// System.Void Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetInheritanceHierarchyU3Ed__0__ctor_mCC5790EF2C1E1C4F855BD22A059C0EC0B9065C17 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetInheritanceHierarchyU3Ed__0_System_IDisposable_Dispose_m02965A7D8BB8C71782BB6D319615D59AC87BEB5B (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetInheritanceHierarchyU3Ed__0_MoveNext_mB09C0A7D9278B02B9C7182F442CB5F4F202283C2 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_3 = __this->___type_3;
		__this->___U3CcurrentU3E5__2_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_5), (void*)L_3);
		goto IL_0052;
	}

IL_0025:
	{
		Type_t* L_4 = __this->___U3CcurrentU3E5__2_5;
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_5 = __this->___U3CcurrentU3E5__2_5;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(117 /* System.Type System.Type::get_BaseType() */, L_5);
		__this->___U3CcurrentU3E5__2_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_5), (void*)L_6);
	}

IL_0052:
	{
		Type_t* L_7 = __this->___U3CcurrentU3E5__2_5;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_7, (Type_t*)NULL, NULL);
		if (L_8)
		{
			goto IL_0025;
		}
	}
	{
		__this->___U3CcurrentU3E5__2_5 = (Type_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_5), (void*)(Type_t*)NULL);
		return (bool)0;
	}
}
// System.Type Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CGetInheritanceHierarchyU3Ed__0_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_m6A97055F4BF930190D7D9A214AA2234981D90EFD (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetInheritanceHierarchyU3Ed__0_System_Collections_IEnumerator_Reset_mB833FA0F07B5E8AD6C505935794DDFA58E47F766 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetInheritanceHierarchyU3Ed__0_System_Collections_IEnumerator_Reset_mB833FA0F07B5E8AD6C505935794DDFA58E47F766_RuntimeMethod_var)));
	}
}
// System.Object Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetInheritanceHierarchyU3Ed__0_System_Collections_IEnumerator_get_Current_mA625E942AA42D5D6C708254AB08EB7F5C210A987 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetInheritanceHierarchyU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m87090A699AF6DC379507E66F0353E55CE272A299 (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* L_3 = (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A*)il2cpp_codegen_object_new(U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetInheritanceHierarchyU3Ed__0__ctor_mCC5790EF2C1E1C4F855BD22A059C0EC0B9065C17(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator Postgrest.Extensions.TypeExtensions/<GetInheritanceHierarchy>d__0::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetInheritanceHierarchyU3Ed__0_System_Collections_IEnumerable_GetEnumerator_m09E902FBBB580EBDD9521460B0D00408E198D8DB (U3CGetInheritanceHierarchyU3Ed__0_t336F76DDD340316EFD350C3239B3EFC1981EC60A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetInheritanceHierarchyU3Ed__0_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m87090A699AF6DC379507E66F0353E55CE272A299(__this, NULL);
		return L_0;
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
// System.String Postgrest.Extensions.UriExtensions::GetInstanceUrl(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UriExtensions_GetInstanceUrl_mDFF2403DD8561C28C62A697BFC96B5DCB6BAD662 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, const RuntimeMethod* method) 
{
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___0_uri;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Uri_GetLeftPart_mCD76AFF4AF320A23BCB70AA59E2C1BF78120BC7D(L_0, 1, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___0_uri;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Uri_get_LocalPath_m60EE736E6F601238CBC20CE7DBB647C61F16DB0E(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_1, L_3, NULL);
		return L_4;
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
// Postgrest.Exceptions.FailureHint/Reason Postgrest.Exceptions.FailureHint::DetectReason(Postgrest.Exceptions.PostgrestException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FailureHint_DetectReason_mD4EFE1F2A10E2CCC68E5DFE2C715EFB9755959D9 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___0_pgex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BB373FF9C5539D7A94BCE063132628099AF4638);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C38411379641E1C909EB65874DCAD590568DC36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4EFE4902B451EF1F5FC7E383F5057737D4E63093);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EF5395F8463431DD42DA6FC080677F9316640D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7765950CBB0538F7B9462B22486EEB12D5B2B9A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_0 = ___0_pgex;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000a:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_2 = ___0_pgex;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PostgrestException_get_StatusCode_m38FB188E3201FE7D9187CD4704C6A9C34BCEB803_inline(L_2, NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)401))))
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_00b5;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_0059;
			}
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)409))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)500))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_00b5;
	}

IL_003f:
	{
		V_0 = 1;
		goto IL_00b7;
	}

IL_0043:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_7 = ___0_pgex;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral8EF5395F8463431DD42DA6FC080677F9316640D4, NULL);
		if (!L_9)
		{
			goto IL_00b5;
		}
	}
	{
		V_0 = 1;
		goto IL_00b7;
	}

IL_0059:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_10 = ___0_pgex;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline(L_10, NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_11, _stringLiteral4EFE4902B451EF1F5FC7E383F5057737D4E63093, NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		V_0 = 5;
		goto IL_00b7;
	}

IL_006f:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_13 = ___0_pgex;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_14, _stringLiteralA7765950CBB0538F7B9462B22486EEB12D5B2B9A, NULL);
		if (!L_15)
		{
			goto IL_00b5;
		}
	}
	{
		V_0 = 6;
		goto IL_00b7;
	}

IL_0085:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_16 = ___0_pgex;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline(L_16, NULL);
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_17, _stringLiteral1BB373FF9C5539D7A94BCE063132628099AF4638, NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}
	{
		V_0 = 2;
		goto IL_00b7;
	}

IL_009b:
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_19 = ___0_pgex;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline(L_19, NULL);
		NullCheck(L_20);
		bool L_21;
		L_21 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_20, _stringLiteral1C38411379641E1C909EB65874DCAD590568DC36, NULL);
		if (!L_21)
		{
			goto IL_00b5;
		}
	}
	{
		V_0 = 3;
		goto IL_00b7;
	}

IL_00b1:
	{
		V_0 = 4;
		goto IL_00b7;
	}

IL_00b5:
	{
		V_0 = 0;
	}

IL_00b7:
	{
		int32_t L_22 = V_0;
		return L_22;
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
// System.Void Postgrest.Exceptions.PostgrestException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void Postgrest.Exceptions.PostgrestException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException__ctor_mC6D72BFBCB1C138CCBDCACF4F017CD0AB201A931 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerException;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Net.Http.HttpResponseMessage Postgrest.Exceptions.PostgrestException::get_Response()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* PostgrestException_get_Response_mD6CDB284B0DDBBAF4BF216620663558C860AC3E7 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_0 = __this->___U3CResponseU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Postgrest.Exceptions.PostgrestException::set_Response(System.Net.Http.HttpResponseMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException_set_Response_m4542C20B1D18760DA3BFC8A1FD19922C39F41E3C (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_0 = ___0_value;
		__this->___U3CResponseU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
// System.String Postgrest.Exceptions.PostgrestException::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CContentU3Ek__BackingField_19;
		return L_0;
	}
}
// System.Void Postgrest.Exceptions.PostgrestException::set_Content(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException_set_Content_mE438287FF9680DF30897CBCFF871676F059FF207 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CContentU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
// System.Int32 Postgrest.Exceptions.PostgrestException::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostgrestException_get_StatusCode_m38FB188E3201FE7D9187CD4704C6A9C34BCEB803 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_20;
		return L_0;
	}
}
// System.Void Postgrest.Exceptions.PostgrestException::set_StatusCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException_set_StatusCode_m66D27E11EE4E1F43FB24A98D3C9E01C819FDDDE5 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CStatusCodeU3Ek__BackingField_20 = L_0;
		return;
	}
}
// Postgrest.Exceptions.FailureHint/Reason Postgrest.Exceptions.PostgrestException::get_Reason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PostgrestException_get_Reason_m512C2199874ABD928537DC0D3CFA8A4FA6270270 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReasonU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Postgrest.Exceptions.PostgrestException::set_Reason(Postgrest.Exceptions.FailureHint/Reason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void Postgrest.Exceptions.PostgrestException::AddReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PostgrestException_AddReason_m6B77204B2084AED3F19CE0C3EF6D71CBAD2C58B1 (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = FailureHint_DetectReason_mD4EFE1F2A10E2CCC68E5DFE2C715EFB9755959D9(__this, NULL);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(__this, L_0, NULL);
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
// System.Boolean Postgrest.Converters.DateTimeConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeConverter_CanConvert_m394D1EF15B15EF016A130E313E6368CFE32DF63E (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeConverter_CanConvert_m394D1EF15B15EF016A130E313E6368CFE32DF63E_RuntimeMethod_var)));
	}
}
// System.Boolean Postgrest.Converters.DateTimeConverter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DateTimeConverter_get_CanWrite_m6A484719F6466494879C7DA26FD4706E17975C34 (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object Postgrest.Converters.DateTimeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DateTimeConverter_ReadJson_mB7D7A7D1A91F97BBF19603FA74D0FA875704E589 (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisJToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_m5AC9F87EF81C48BDB0EDE5B03C3F89CCF2792F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* V_0 = NULL;
	String_t* V_1 = NULL;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_2;
	memset((&V_2), 0, sizeof(V_2));
	JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F* V_3 = NULL;
	int32_t V_4 = 0;
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_5;
	memset((&V_5), 0, sizeof(V_5));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_6;
	memset((&V_6), 0, sizeof(V_6));
	RuntimeObject* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___0_reader;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_0);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___0_reader;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		V_1 = L_4;
		String_t* L_5 = V_1;
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_6;
		L_6 = DateTimeConverter_ParseInfinity_mAC453A43E1B905F37DA0C7B0344F5EAC0B1369FE(L_5, NULL);
		V_2 = L_6;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_2), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
		if (!L_7)
		{
			goto IL_0031;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8;
		L_8 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_2), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = L_8;
		RuntimeObject* L_10 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}

IL_0031:
	{
		String_t* L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		L_12 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(L_11, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_13 = L_12;
		RuntimeObject* L_14 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_13);
		return L_14;
	}

IL_003d:
	{
		List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_15 = (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*)il2cpp_codegen_object_new(List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8(L_15, List_1__ctor_mAADC04A1B450585D79D52A92A3892DD7CB8910C8_RuntimeMethod_var);
		V_0 = L_15;
	}
	try
	{// begin try (depth: 1)
		{
			JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_16 = ___0_reader;
			JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_17;
			L_17 = JArray_Load_mE90CEEC0A22EBC876F7D7E239A0E096E4691C807(L_16, NULL);
			JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F* L_18;
			L_18 = Enumerable_ToArray_TisJToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_m5AC9F87EF81C48BDB0EDE5B03C3F89CCF2792F6B(L_17, Enumerable_ToArray_TisJToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_m5AC9F87EF81C48BDB0EDE5B03C3F89CCF2792F6B_RuntimeMethod_var);
			V_3 = L_18;
			V_4 = 0;
			goto IL_0090_1;
		}

IL_0054_1:
		{
			JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F* L_19 = V_3;
			int32_t L_20 = V_4;
			NullCheck(L_19);
			int32_t L_21 = L_20;
			JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			NullCheck(L_22);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
			String_t* L_24 = L_23;
			Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_25;
			L_25 = DateTimeConverter_ParseInfinity_mAC453A43E1B905F37DA0C7B0344F5EAC0B1369FE(L_24, NULL);
			V_5 = L_25;
			bool L_26;
			L_26 = Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_inline((&V_5), Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_RuntimeMethod_var);
			G_B7_0 = L_24;
			if (!L_26)
			{
				G_B8_0 = L_24;
				goto IL_007b_1;
			}
		}
		{
			List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_27 = V_0;
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28;
			L_28 = Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991((&V_5), Nullable_1_get_Value_m5A868F663848BC21C18F056731D3AC404CE59991_RuntimeMethod_var);
			NullCheck(L_27);
			List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_inline(L_27, L_28, List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_RuntimeMethod_var);
			G_B8_0 = G_B7_0;
		}

IL_007b_1:
		{
			il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_29;
			L_29 = DateTime_Parse_m2DE2BF8FC3E6A6FB695ACE7A2D39A812D1D806DB(G_B8_0, NULL);
			V_6 = L_29;
			List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_30 = V_0;
			DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_31 = V_6;
			NullCheck(L_30);
			List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_inline(L_30, L_31, List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_RuntimeMethod_var);
			int32_t L_32 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_32, 1));
		}

IL_0090_1:
		{
			int32_t L_33 = V_4;
			JTokenU5BU5D_t43FB3829DBCF6CF25B63DF2164C727D3D6AE5C9F* L_34 = V_3;
			NullCheck(L_34);
			if ((((int32_t)L_33) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))
			{
				goto IL_0054_1;
			}
		}
		{
			goto IL_009f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0099;
		}
		throw e;
	}

CATCH_0099:
	{// begin catch(Newtonsoft.Json.JsonReaderException)
		JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA* L_35 = ((JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA*)IL2CPP_GET_ACTIVE_EXCEPTION(JsonReaderException_t44F3F6F2980FC806231B19A65F37D1E034B218DA*));;
		V_7 = NULL;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00a1;
	}// end catch (depth: 1)

IL_009f:
	{
		List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_36 = V_0;
		return L_36;
	}

IL_00a1:
	{
		RuntimeObject* L_37 = V_7;
		return L_37;
	}
}
// System.Nullable`1<System.DateTime> Postgrest.Converters.DateTimeConverter::ParseInfinity(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC DateTimeConverter_ParseInfinity_mAC453A43E1B905F37DA0C7B0344F5EAC0B1369FE (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral902EE46ED529FAA3EB512845B29D79D32C9E2180);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	{
		String_t* L_0 = ___0_input;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_0, _stringLiteral902EE46ED529FAA3EB512845B29D79D32C9E2180, NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_2 = ___0_input;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33;
		G_B4_0 = L_4;
		goto IL_0026;
	}

IL_0021:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32;
		G_B4_0 = L_5;
	}

IL_0026:
	{
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF((&L_6), G_B4_0, /*hidden argument*/Nullable_1__ctor_mB17304720EA19F5469A4883827F53A75FEB492CF_RuntimeMethod_var);
		return L_6;
	}

IL_002c:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC));
		Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC L_7 = V_0;
		return L_7;
	}
}
// System.Void Postgrest.Converters.DateTimeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeConverter_WriteJson_mF032BDDE2529FE6D574F8D4EA9C58668F6D0B92F (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DateTimeConverter_WriteJson_mF032BDDE2529FE6D574F8D4EA9C58668F6D0B92F_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.Converters.DateTimeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeConverter__ctor_mF1B24480DE0D7382D57BD2B6C51738988BE3510A (DateTimeConverter_t56DAD57C5DD9379EADD60C9A21506FD4333DBDB6* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Boolean Postgrest.Converters.IntArrayConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntArrayConverter_CanConvert_mB840F61DA286430DC94B1DE891708787B9CF9EDF (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntArrayConverter_CanConvert_mB840F61DA286430DC94B1DE891708787B9CF9EDF_RuntimeMethod_var)));
	}
}
// System.Boolean Postgrest.Converters.IntArrayConverter::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntArrayConverter_get_CanRead_mDC540C5C7EECE118EF13A1FE7B7AA71F92CCC255 (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object Postgrest.Converters.IntArrayConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IntArrayConverter_ReadJson_m55822146D0FF8365532110F124864338084F4D74 (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IntArrayConverter_ReadJson_m55822146D0FF8365532110F124864338084F4D74_RuntimeMethod_var)));
	}
}
// System.Void Postgrest.Converters.IntArrayConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntArrayConverter_WriteJson_m4F67B8C9C2AEE848861C0866A40C623E6FE613B0 (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_value;
		V_0 = ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)IsInstClass((RuntimeObject*)L_0, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_3, String_Join_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3954E1690A53FDAE651340E931E00877D887458C_RuntimeMethod_var);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, L_4, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_2, L_5);
	}

IL_002a:
	{
		return;
	}
}
// System.Void Postgrest.Converters.IntArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntArrayConverter__ctor_m5BAE8957AD84EA2F5E7F27E38AFED0F0CB7D1F83 (IntArrayConverter_tC93063DAF54FDC8B8C3453339FBB011B952B024A* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.Boolean Postgrest.Converters.RangeConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeConverter_CanConvert_mEFBAC7D5E5EAF11D9C6F60F5B762765FD1F5C14E (RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129* __this, Type_t* ___0_objectType, const RuntimeMethod* method) 
{
	{
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RangeConverter_CanConvert_mEFBAC7D5E5EAF11D9C6F60F5B762765FD1F5C14E_RuntimeMethod_var)));
	}
}
// System.Object Postgrest.Converters.RangeConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RangeConverter_ReadJson_mBFE2432D72F6E26B28E4777944AD7A8F6C68E84C (RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129* __this, JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* ___0_reader, Type_t* ___1_objectType, RuntimeObject* ___2_existingValue, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___3_serializer, const RuntimeMethod* method) 
{
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_0 = ___0_reader;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return NULL;
	}

IL_000a:
	{
		JsonReader_tB90522FA9D4C1C218A3F2C529A27D95123847765* L_2 = ___0_reader;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_5;
		L_5 = RangeConverter_ParseIntRange_m4E302D7561DF86EAC380B7BC9914461205063330(L_4, NULL);
		return L_5;
	}
}
// System.Void Postgrest.Converters.RangeConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConverter_WriteJson_m9711C07510BEB17E4720EAAEFE8C33D27CB426E1 (RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129* __this, JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* ___0_writer, RuntimeObject* ___1_value, JsonSerializer_t3D625A6ADB5711D3C55A7CEC5F17D74260ACCB59* ___2_serializer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___1_value;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = ___1_value;
		V_0 = ((IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)CastclassClass((RuntimeObject*)L_1, IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var));
		JsonWriter_t1750495CE81BD2D7BF7335A8468E2F960CA3ABC3* L_2 = ___0_writer;
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_3 = V_0;
		String_t* L_4;
		L_4 = RangeExtensions_ToPostgresString_mF5FFDB3ED3A34CFD72D198EDAD0CA2C526D8CE28(L_3, NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(86 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_2, L_4);
		return;
	}
}
// Postgrest.IntRange Postgrest.Converters.RangeConverter::ParseIntRange(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* RangeConverter_ParseIntRange_m4E302D7561DF86EAC380B7BC9914461205063330 (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBE5B6C2E0D327EFF2C2B92D342EE338CA95AF8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* G_B2_0 = NULL;
	MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* G_B1_0 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	{
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_1;
		L_1 = Regex_Matches_m6173BAB925E8664D3E962C59D780625528CAC22F(L_0, _stringLiteralBBE5B6C2E0D327EFF2C2B92D342EE338CA95AF8A, NULL);
		MatchCollection_t84805BAED3D556A405EE3FD165856045026106BC* L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MatchCollection_get_Count_mF9D979B5B9D3835CC61977CBFB4110173B1CC926(L_2, NULL);
		G_B1_0 = L_2;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			G_B2_0 = L_2;
			goto IL_0026;
		}
	}
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_4 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBB5D97CBB39F0CFB59A4739E2F631C37ECF14F88)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_5 = L_4;
		NullCheck(L_5);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_5, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RangeConverter_ParseIntRange_m4E302D7561DF86EAC380B7BC9914461205063330_RuntimeMethod_var)));
	}

IL_0026:
	{
		NullCheck(G_B2_0);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_6;
		L_6 = VirtualFuncInvoker1< Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F*, int32_t >::Invoke(35 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, G_B2_0, 0);
		NullCheck(L_6);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_7;
		L_7 = VirtualFuncInvoker0< GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* >::Invoke(5 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_6);
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_8 = L_7;
		NullCheck(L_8);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_9;
		L_9 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_8, 1, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_9, NULL);
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		V_0 = L_11;
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_12 = L_8;
		NullCheck(L_12);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_13;
		L_13 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_12, 4, NULL);
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_13, NULL);
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		V_1 = L_15;
		GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E* L_16 = L_12;
		NullCheck(L_16);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_17;
		L_17 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_16, 2, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_17, NULL);
		int32_t L_19;
		L_19 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_18, NULL);
		V_2 = L_19;
		NullCheck(L_16);
		Group_t26371E9136D6F43782C487B63C67C5FC4F472881* L_20;
		L_20 = GroupCollection_get_Item_m40EC174D4AC8FDD68F8819C35B779C79A44322F3(L_16, 3, NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Capture_get_Value_m1AB4193C2FC4B0D08AA34FECF10D03876D848BDC(L_20, NULL);
		int32_t L_22;
		L_22 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_21, NULL);
		V_3 = L_22;
		bool L_23 = V_0;
		if (L_23)
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_24 = V_2;
		G_B5_0 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		goto IL_008b;
	}

IL_008a:
	{
		int32_t L_25 = V_2;
		G_B5_0 = L_25;
	}

IL_008b:
	{
		V_4 = G_B5_0;
		bool L_26 = V_1;
		if (L_26)
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_27 = V_3;
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		goto IL_0096;
	}

IL_0095:
	{
		int32_t L_28 = V_3;
		G_B8_0 = L_28;
	}

IL_0096:
	{
		V_5 = G_B8_0;
		int32_t L_29 = V_5;
		int32_t L_30 = V_4;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_00b2;
		}
	}
	{
		int32_t L_31 = V_4;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_32;
		L_32 = Index_op_Implicit_m665FD38C14AB578E0922C5E342E31D2B2EC06FC4(L_31, NULL);
		int32_t L_33 = V_5;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_34;
		L_34 = Index_op_Implicit_m665FD38C14AB578E0922C5E342E31D2B2EC06FC4(L_33, NULL);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_35 = (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)il2cpp_codegen_object_new(IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9(L_35, L_32, L_34, NULL);
		return L_35;
	}

IL_00b2:
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_36;
		L_36 = Index_op_Implicit_m665FD38C14AB578E0922C5E342E31D2B2EC06FC4(0, NULL);
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_37;
		L_37 = Index_op_Implicit_m665FD38C14AB578E0922C5E342E31D2B2EC06FC4(0, NULL);
		IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* L_38 = (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A*)il2cpp_codegen_object_new(IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		IntRange__ctor_m1E42627D93E9DF4A253D045F8D42E8980BB32CE9(L_38, L_36, L_37, NULL);
		return L_38;
	}
}
// System.Void Postgrest.Converters.RangeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeConverter__ctor_mB429673F84BDDA8C83B8C43FAA63FA724196E786 (RangeConverter_tCA4A3336D1B1CA7CF45DAB0943232289A74DC129* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m47F59D2FF8CFBA449BDFBA405BDEEF6361139DAB(__this, NULL);
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
// System.String Postgrest.Attributes.ColumnAttribute::get_ColumnName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118 (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_0;
		return L_0;
	}
}
// Newtonsoft.Json.NullValueHandling Postgrest.Attributes.ColumnAttribute::get_NullValueHandling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColumnAttribute_get_NullValueHandling_m9CDB5EDFD9DBD775F613D8B568CE5C4A76EE2F65 (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNullValueHandlingU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ColumnAttribute::set_NullValueHandling(Newtonsoft.Json.NullValueHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnAttribute_set_NullValueHandling_m6CEB4CD95F9136E27BD356338D0BE5719B6B42D2 (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CNullValueHandlingU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Postgrest.Attributes.ColumnAttribute::get_IgnoreOnInsert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColumnAttribute_get_IgnoreOnInsert_mFC1920FFD53D438C3AF2A94A459C308A982D1B4B (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreOnInsertU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean Postgrest.Attributes.ColumnAttribute::get_IgnoreOnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColumnAttribute_get_IgnoreOnUpdate_m018670F7BB2CD11C3993611412FB0C41C0C2272A (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreOnUpdateU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ColumnAttribute::.ctor(System.String,Newtonsoft.Json.NullValueHandling,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColumnAttribute__ctor_mF9A1C47D4433452BB82F3CAF1B64E7632961B21A (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, String_t* ___0_columnName, int32_t ___1_nullValueHandling, bool ___2_ignoreOnInsert, bool ___3_ignoreOnUpdate, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_columnName;
		__this->___U3CColumnNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnNameU3Ek__BackingField_0), (void*)L_0);
		int32_t L_1 = ___1_nullValueHandling;
		ColumnAttribute_set_NullValueHandling_m6CEB4CD95F9136E27BD356338D0BE5719B6B42D2_inline(__this, L_1, NULL);
		bool L_2 = ___2_ignoreOnInsert;
		__this->___U3CIgnoreOnInsertU3Ek__BackingField_2 = L_2;
		bool L_3 = ___3_ignoreOnUpdate;
		__this->___U3CIgnoreOnUpdateU3Ek__BackingField_3 = L_3;
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
// System.String Postgrest.Attributes.PrimaryKeyAttribute::get_ColumnName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6 (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean Postgrest.Attributes.PrimaryKeyAttribute::get_ShouldInsert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimaryKeyAttribute_get_ShouldInsert_m5FCBB0369761A25ADB9511FD88E14C5E4D0B046C (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CShouldInsertU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.PrimaryKeyAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrimaryKeyAttribute__ctor_m5C1FF05E6FA2631101431606E14283F8162FA7A4 (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, String_t* ___0_columnName, bool ___1_shouldInsert, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_columnName;
		__this->___U3CColumnNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnNameU3Ek__BackingField_0), (void*)L_0);
		bool L_1 = ___1_shouldInsert;
		__this->___U3CShouldInsertU3Ek__BackingField_1 = L_1;
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
// System.Type Postgrest.Attributes.ReferenceAttribute::get_Model()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CModelU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Postgrest.Attributes.ReferenceAttribute::get_ColumnName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::set_ColumnName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_set_ColumnName_mFB7A913820BB485D018625CC6075868B8810D5ED (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CColumnNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Postgrest.Attributes.ReferenceAttribute::get_ForeignKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CForeignKeyU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::set_ForeignKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_set_ForeignKey_m15AC1F13205DE07BEDD70D3D331CEDD878062EDE (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CForeignKeyU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CForeignKeyU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Postgrest.Attributes.ReferenceAttribute::get_TableName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTableNameU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Collections.Generic.List`1<System.String> Postgrest.Attributes.ReferenceAttribute::get_Columns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CColumnsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::set_Columns(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_set_Columns_m38DFCE7E836F2A865F3FAE8C3BACACDFBDB33F18 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_value;
		__this->___U3CColumnsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnsU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute::get_IgnoreOnInsert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_IgnoreOnInsert_m18F80EA01403FA75C80DB80CF41485ABAE09198B (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreOnInsertU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::set_IgnoreOnInsert(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_set_IgnoreOnInsert_m4080218C81FD66D20D22B6BA03385F6234FA456F (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIgnoreOnInsertU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute::get_IgnoreOnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_IgnoreOnUpdate_mA8B06C7C98A5D7F58D13AF350F092324E8973C8E (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreOnUpdateU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::set_IgnoreOnUpdate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_set_IgnoreOnUpdate_m794BEF0673B116F49645414AB1E03426D3DB86EA (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIgnoreOnUpdateU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute::get_IncludeInQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_IncludeInQuery_m5E29362E8B892997302ABB00824CE33C08EC68D0 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeInQueryU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute::get_UseInnerJoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_UseInnerJoin_mEA31215B3125A07C142B69449F7C1E39095C5F55 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUseInnerJoinU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::.ctor(System.Type,Postgrest.Attributes.ReferenceAttribute/JoinType,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute__ctor_mF264A67A5B777FA33E90088FE5960CFFF3E0D141 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, Type_t* ___0_model, int32_t ___1_joinType, bool ___2_includeInQuery, String_t* ___3_columnName, String_t* ___4_foreignKey, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_model;
		bool L_1 = ___2_includeInQuery;
		int32_t L_2 = ___1_joinType;
		String_t* L_3 = ___3_columnName;
		String_t* L_4 = ___4_foreignKey;
		ReferenceAttribute__ctor_m2333396C6785652D0ADAE289C06EAD387F73AB10(__this, L_0, L_1, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), L_3, L_4, NULL);
		return;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::.ctor(System.Type,System.Boolean,System.Boolean,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute__ctor_m2333396C6785652D0ADAE289C06EAD387F73AB10 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, Type_t* ___0_model, bool ___1_includeInQuery, bool ___2_useInnerJoin, String_t* ___3_columnName, String_t* ___4_foreignKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_0 = NULL;
	TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* V_1 = NULL;
	ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* G_B4_0 = NULL;
	ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* G_B5_1 = NULL;
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_0, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		__this->___U3CColumnsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnsU3Ek__BackingField_4), (void*)L_0);
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_1 = ___0_model;
		bool L_2;
		L_2 = ReferenceAttribute_IsDerivedFromBaseModel_m0E362AE0A6D2857D0F260038B539597613F2557A(L_1, NULL);
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_3 = (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		PostgrestException__ctor_mA882CE7CB17A55B8AE1670E2651A7A601C6D5442(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1B2118056AEC0EE85186D7389663E8606C74FF1C)), NULL);
		PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* L_4 = L_3;
		NullCheck(L_4);
		PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline(L_4, 7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReferenceAttribute__ctor_m2333396C6785652D0ADAE289C06EAD387F73AB10_RuntimeMethod_var)));
	}

IL_002b:
	{
		Type_t* L_5 = ___0_model;
		__this->___U3CModelU3Ek__BackingField_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CModelU3Ek__BackingField_0), (void*)L_5);
		bool L_6 = ___1_includeInQuery;
		__this->___U3CIncludeInQueryU3Ek__BackingField_7 = L_6;
		ReferenceAttribute_set_IgnoreOnInsert_m4080218C81FD66D20D22B6BA03385F6234FA456F_inline(__this, (bool)1, NULL);
		ReferenceAttribute_set_IgnoreOnUpdate_m794BEF0673B116F49645414AB1E03426D3DB86EA_inline(__this, (bool)1, NULL);
		String_t* L_7 = ___3_columnName;
		ReferenceAttribute_set_ColumnName_mFB7A913820BB485D018625CC6075868B8810D5ED_inline(__this, L_7, NULL);
		bool L_8 = ___2_useInnerJoin;
		__this->___U3CUseInnerJoinU3Ek__BackingField_8 = L_8;
		String_t* L_9 = ___4_foreignKey;
		ReferenceAttribute_set_ForeignKey_m15AC1F13205DE07BEDD70D3D331CEDD878062EDE_inline(__this, L_9, NULL);
		Type_t* L_10 = ___0_model;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_13;
		L_13 = Attribute_GetCustomAttribute_mF48604D4722E67239F3D6A48CFCCBCDE7BCFFB06(L_10, L_12, NULL);
		V_0 = L_13;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_14 = V_0;
		V_1 = ((TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F*)IsInstClass((RuntimeObject*)L_14, TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F_il2cpp_TypeInfo_var));
		TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* L_15 = V_1;
		G_B3_0 = __this;
		if (L_15)
		{
			G_B4_0 = __this;
			goto IL_0082;
		}
	}
	{
		Type_t* L_16 = ___0_model;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		G_B5_0 = L_17;
		G_B5_1 = G_B3_0;
		goto IL_0088;
	}

IL_0082:
	{
		TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* L_18 = V_1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = TableAttribute_get_Name_m5731CFBB26ED7B86A5C190597DBC850A33627EB3_inline(L_18, NULL);
		G_B5_0 = L_19;
		G_B5_1 = G_B4_0;
	}

IL_0088:
	{
		NullCheck(G_B5_1);
		G_B5_1->___U3CTableNameU3Ek__BackingField_3 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___U3CTableNameU3Ek__BackingField_3), (void*)G_B5_0);
		return;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::ParseProperties(System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_ParseProperties_mF7BF271EB0E9114A362418915D3E8C0B053E0606 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* ___0_seenRefs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m963F0DDF612974E4E3639182219DEAF872EA42C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* L_0 = ___0_seenRefs;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* L_1 = (List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29*)il2cpp_codegen_object_new(List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m963F0DDF612974E4E3639182219DEAF872EA42C9(L_1, List_1__ctor_m963F0DDF612974E4E3639182219DEAF872EA42C9_RuntimeMethod_var);
		___0_seenRefs = L_1;
	}

IL_000a:
	{
		ReferenceAttribute_ParseColumns_m12A9F6FFE49665719160EF06BC2CC3AD5B73FDB9(__this, (&___0_seenRefs), NULL);
		List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* L_2 = ___0_seenRefs;
		ReferenceAttribute_ParseRelationships_mC5FF55C52126A02F7BB8FD0C9DAD1C56BB4FBF79(__this, L_2, NULL);
		return;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::ParseColumns(System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_ParseColumns_m12A9F6FFE49665719160EF06BC2CC3AD5B73FDB9 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29** ___0_seenRefs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* V_5 = NULL;
	PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* V_6 = NULL;
	{
		Type_t* L_0;
		L_0 = ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591_inline(__this, NULL);
		NullCheck(L_0);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_1;
		L_1 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0073;
	}

IL_0010:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)1);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0069;
	}

IL_001e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		RuntimeObject* L_11 = V_4;
		V_5 = ((ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5*)IsInstClass((RuntimeObject*)L_11, ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5_il2cpp_TypeInfo_var));
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_12 = V_5;
		if (L_12)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_13 = V_4;
		V_6 = ((PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6*)IsInstClass((RuntimeObject*)L_13, PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6_il2cpp_TypeInfo_var));
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_14 = V_6;
		if (L_14)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_0065;
	}

IL_003f:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15;
		L_15 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(__this, NULL);
		ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* L_16 = V_5;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline(L_16, NULL);
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_17, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_0065;
	}

IL_0053:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18;
		L_18 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(__this, NULL);
		PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* L_19 = V_6;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline(L_19, NULL);
		NullCheck(L_18);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_18, L_20, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0065:
	{
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0069:
	{
		int32_t L_22 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_2;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0073:
	{
		int32_t L_25 = V_1;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_Equals_mD84B00062FBF40AA6FEEC954DE6D5CBA7D0E3694 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_obj;
		V_0 = ((ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E*)IsInstClass((RuntimeObject*)L_0, ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_il2cpp_TypeInfo_var));
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_2;
		L_2 = ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline(__this, NULL);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_6;
		L_6 = ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline(__this, NULL);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		Type_t* L_10;
		L_10 = ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591_inline(__this, NULL);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_11 = V_0;
		NullCheck(L_11);
		Type_t* L_12;
		L_12 = ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591_inline(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		return L_13;
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		return (bool)0;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute::ParseRelationships(System.Collections.Generic.List`1<Postgrest.Attributes.ReferenceAttribute>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceAttribute_ParseRelationships_mC5FF55C52126A02F7BB8FD0C9DAD1C56BB4FBF79 (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* ___0_seenRefs, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_m193DCADC99F0E56BB191C2920680F83B8C9D2A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2D09FADC083F8E12A112231E0079D36C72B562EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_U3CParseRelationshipsU3Eb__0_m3D4F845820619073696A30E53CF7B5F3D768C844_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33510B81CADCC221468DF6936B28ACAE3790B5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* V_5 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B8_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B9_1 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B12_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B11_0 = NULL;
	String_t* G_B13_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* G_B13_1 = NULL;
	{
		Type_t* L_0;
		L_0 = ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591_inline(__this, NULL);
		NullCheck(L_0);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_1;
		L_1 = Type_GetProperties_m090A935168ED8AEE2CE95BDF6D69F3AAAF71B2D6(L_0, NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_020d;
	}

IL_0013:
	{
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(13 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_5, (bool)1);
		V_2 = L_6;
		V_3 = 0;
		goto IL_0200;
	}

IL_0024:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_4 = L_10;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_11 = (U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		U3CU3Ec__DisplayClass38_0__ctor_m6C843189F020157FF3E8AAB74C33BD0940649248(L_11, NULL);
		V_5 = L_11;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_12 = V_5;
		RuntimeObject* L_13 = V_4;
		NullCheck(L_12);
		L_12->___refAttr_0 = ((ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E*)IsInstClass((RuntimeObject*)L_13, ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___refAttr_0), (void*)((ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E*)IsInstClass((RuntimeObject*)L_13, ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_il2cpp_TypeInfo_var)));
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_14 = V_5;
		NullCheck(L_14);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_15 = L_14->___refAttr_0;
		if (!L_15)
		{
			goto IL_01fc;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_16 = V_5;
		NullCheck(L_16);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_17 = L_16->___refAttr_0;
		NullCheck(L_17);
		bool L_18;
		L_18 = ReferenceAttribute_get_IncludeInQuery_m5E29362E8B892997302ABB00824CE33C08EC68D0_inline(L_17, NULL);
		if (!L_18)
		{
			goto IL_01fc;
		}
	}
	{
		List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* L_19 = ___0_seenRefs;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_20 = V_5;
		Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A* L_21 = (Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A*)il2cpp_codegen_object_new(Func_2_tDB711D4F5AAB9D3A63754BC8CDD601E1F43B202A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Func_2__ctor_m530324BC74A84391E1427A1C730B679212809B4E(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass38_0_U3CParseRelationshipsU3Eb__0_m3D4F845820619073696A30E53CF7B5F3D768C844_RuntimeMethod_var), NULL);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_22;
		L_22 = Enumerable_FirstOrDefault_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_m193DCADC99F0E56BB191C2920680F83B8C9D2A08(L_19, L_21, Enumerable_FirstOrDefault_TisReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E_m193DCADC99F0E56BB191C2920680F83B8C9D2A08_RuntimeMethod_var);
		if (L_22)
		{
			goto IL_01fc;
		}
	}
	{
		List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* L_23 = ___0_seenRefs;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_24 = V_5;
		NullCheck(L_24);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_25 = L_24->___refAttr_0;
		NullCheck(L_23);
		List_1_Add_m2D09FADC083F8E12A112231E0079D36C72B562EE_inline(L_23, L_25, List_1_Add_m2D09FADC083F8E12A112231E0079D36C72B562EE_RuntimeMethod_var);
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_26 = V_5;
		NullCheck(L_26);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_27 = L_26->___refAttr_0;
		List_1_t12918A210C68BFAC741CF4FC495561CFE2451D29* L_28 = ___0_seenRefs;
		NullCheck(L_27);
		ReferenceAttribute_ParseProperties_mF7BF271EB0E9114A362418915D3E8C0B053E0606(L_27, L_28, NULL);
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_29 = V_5;
		NullCheck(L_29);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_30 = L_29->___refAttr_0;
		NullCheck(L_30);
		String_t* L_31;
		L_31 = ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E_inline(L_30, NULL);
		bool L_32;
		L_32 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_31, NULL);
		if (L_32)
		{
			goto IL_017b;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_33;
		L_33 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(__this, NULL);
		bool L_34;
		L_34 = ReferenceAttribute_get_UseInnerJoin_mEA31215B3125A07C142B69449F7C1E39095C5F55_inline(__this, NULL);
		G_B7_0 = L_33;
		if (L_34)
		{
			G_B8_0 = L_33;
			goto IL_0112;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_35;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_37 = V_5;
		NullCheck(L_37);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_38 = L_37->___refAttr_0;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline(L_38, NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_36;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = L_40;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_42 = V_5;
		NullCheck(L_42);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_43 = L_42->___refAttr_0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E_inline(L_43, NULL);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_44);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_41;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_47 = V_5;
		NullCheck(L_47);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_48 = L_47->___refAttr_0;
		NullCheck(L_48);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_49;
		L_49 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(L_48, NULL);
		NullCheck(L_49);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50;
		L_50 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_49, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_51;
		L_51 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_50, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_51);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_46;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_53;
		L_53 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_52, NULL);
		G_B9_0 = L_53;
		G_B9_1 = G_B7_0;
		goto IL_0171;
	}

IL_0112:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_54 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_55 = L_54;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_56 = V_5;
		NullCheck(L_56);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_57 = L_56->___refAttr_0;
		NullCheck(L_57);
		String_t* L_58;
		L_58 = ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline(L_57, NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_58);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_58);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_55;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_60 = L_59;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_61 = V_5;
		NullCheck(L_61);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_62 = L_61->___refAttr_0;
		NullCheck(L_62);
		String_t* L_63;
		L_63 = ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E_inline(L_62, NULL);
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_63);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_63);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_60;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, _stringLiteralB33510B81CADCC221468DF6936B28ACAE3790B5C);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralB33510B81CADCC221468DF6936B28ACAE3790B5C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_66 = V_5;
		NullCheck(L_66);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_67 = L_66->___refAttr_0;
		NullCheck(L_67);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_68;
		L_68 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(L_67, NULL);
		NullCheck(L_68);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69;
		L_69 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_68, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_70;
		L_70 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_69, NULL);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_70);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_70);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = L_65;
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_72;
		L_72 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_71, NULL);
		G_B9_0 = L_72;
		G_B9_1 = G_B8_0;
	}

IL_0171:
	{
		NullCheck(G_B9_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B9_1, G_B9_0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		goto IL_01fc;
	}

IL_017b:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_73;
		L_73 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(__this, NULL);
		bool L_74;
		L_74 = ReferenceAttribute_get_UseInnerJoin_mEA31215B3125A07C142B69449F7C1E39095C5F55_inline(__this, NULL);
		G_B11_0 = L_73;
		if (L_74)
		{
			G_B12_0 = L_73;
			goto IL_01c1;
		}
	}
	{
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_75 = V_5;
		NullCheck(L_75);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_76 = L_75->___refAttr_0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline(L_76, NULL);
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_78 = V_5;
		NullCheck(L_78);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_79 = L_78->___refAttr_0;
		NullCheck(L_79);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_80;
		L_80 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(L_79, NULL);
		NullCheck(L_80);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81;
		L_81 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_80, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_82;
		L_82 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_81, NULL);
		String_t* L_83;
		L_83 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_77, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, L_82, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		G_B13_0 = L_83;
		G_B13_1 = G_B11_0;
		goto IL_01f7;
	}

IL_01c1:
	{
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_84 = V_5;
		NullCheck(L_84);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_85 = L_84->___refAttr_0;
		NullCheck(L_85);
		String_t* L_86;
		L_86 = ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline(L_85, NULL);
		U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* L_87 = V_5;
		NullCheck(L_87);
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_88 = L_87->___refAttr_0;
		NullCheck(L_88);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_89;
		L_89 = ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline(L_88, NULL);
		NullCheck(L_89);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_90;
		L_90 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_89, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_91;
		L_91 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_90, NULL);
		String_t* L_92;
		L_92 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_86, _stringLiteralB33510B81CADCC221468DF6936B28ACAE3790B5C, L_91, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		G_B13_0 = L_92;
		G_B13_1 = G_B12_0;
	}

IL_01f7:
	{
		NullCheck(G_B13_1);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(G_B13_1, G_B13_0, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_01fc:
	{
		int32_t L_93 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_0200:
	{
		int32_t L_94 = V_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_95 = V_2;
		NullCheck(L_95);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_96 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_020d:
	{
		int32_t L_97 = V_1;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_98 = V_0;
		NullCheck(L_98);
		if ((((int32_t)L_97) < ((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute::IsDerivedFromBaseModel(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceAttribute_IsDerivedFromBaseModel_m0E362AE0A6D2857D0F260038B539597613F2557A (Type_t* ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CIsDerivedFromBaseModelU3Eb__39_0_mED47ACBA69799C97B5B423D40FB2EED44C1668A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		Type_t* L_0 = ___0_type;
		RuntimeObject* L_1;
		L_1 = TypeExtensions_GetInheritanceHierarchy_mB34133CF389AFD238E905F1C91A7CEB1D8FAB3B8(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_2 = ((U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var);
		U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B* L_4 = ((U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_5 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CIsDerivedFromBaseModelU3Eb__39_0_mED47ACBA69799C97B5B423D40FB2EED44C1668A6_RuntimeMethod_var), NULL);
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_6 = L_5;
		((U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var))->___U3CU3E9__39_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		bool L_7;
		L_7 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D(G_B2_1, G_B2_0, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		return L_7;
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
// System.Void Postgrest.Attributes.ReferenceAttribute/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mAAF344C4F113A688261F69B42F7F08281D45079F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B* L_0 = (U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B*)il2cpp_codegen_object_new(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFB3877C29EEEDCA8009934DAF4FF6C2D7E1FC923(L_0, NULL);
		((U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.Attributes.ReferenceAttribute/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFB3877C29EEEDCA8009934DAF4FF6C2D7E1FC923 (U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute/<>c::<IsDerivedFromBaseModel>b__39_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CIsDerivedFromBaseModelU3Eb__39_0_mED47ACBA69799C97B5B423D40FB2EED44C1668A6 (U3CU3Ec_tF5E7383E080DDACD731AC886C887466F9DA42F8B* __this, Type_t* ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___0_t;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
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
// System.Void Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m6C843189F020157FF3E8AAB74C33BD0940649248 (U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Postgrest.Attributes.ReferenceAttribute/<>c__DisplayClass38_0::<ParseRelationships>b__0(Postgrest.Attributes.ReferenceAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass38_0_U3CParseRelationshipsU3Eb__0_m3D4F845820619073696A30E53CF7B5F3D768C844 (U3CU3Ec__DisplayClass38_0_tC43B3E41F97C11BC6D8CD2FCE902270134AAA30D* __this, ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* ___0_r, const RuntimeMethod* method) 
{
	{
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_0 = ___0_r;
		ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* L_1 = __this->___refAttr_0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, L_1);
		return L_2;
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
// System.String Postgrest.Attributes.TableAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TableAttribute_get_Name_m5731CFBB26ED7B86A5C190597DBC850A33627EB3 (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Postgrest.Attributes.TableAttribute::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAttribute_set_Name_m03F1617440878EFA864E134879CABB20EBA4FE5F (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Postgrest.Attributes.TableAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableAttribute__ctor_m5C8E5C6DE308876D515F6E5CF4DE818FBA10B6BE (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, String_t* ___0_tableName, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___0_tableName;
		TableAttribute_set_Name_m03F1617440878EFA864E134879CABB20EBA4FE5F_inline(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_ContractResolver_m88FDD134350590ABDBD87BD2AC124B1A5C2385D5_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CContractResolverU3Ek__BackingField_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContractResolverU3Ek__BackingField_47), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* JsonSerializerSettings_get_Converters_mB7EE43E74FA48980B6C0976D7A2160B2174C8FCA_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CConvertersU3Ek__BackingField_46;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void IsoDateTimeConverter_set_DateTimeStyles_m097C810F76901D4DAD661A83416AA4D0DFAC2719_inline (IsoDateTimeConverter_t13F31560EB7046EDCEAA38C47A8EC8A09256850C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____dateTimeStyles_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Client_get_BaseUrl_mF6E69EDA55CAFFACEEB1E93BB1C619997E10F708_inline (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CBaseUrlU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* Client_get_Options_mA3D270A014713D6A2A5C0F1AAE0706BEF642829C_inline (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = __this->___U3COptionsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpMethod_get_Post_mEDC84247B73445A6922B43A065A10740C2F690CF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_0 = ((HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_StaticFields*)il2cpp_codegen_static_fields_for(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var))->___post_method_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ClientOptions_get_Headers_m97AB19A4ECEFB2D9DB27670808D7A2C86DF0C7D7_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___U3CHeadersU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* Client_get_GetHeaders_mC367DA82A6400052FA7E83342C0BDEE567CA14FA_inline (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, const RuntimeMethod* method) 
{
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = __this->___U3CGetHeadersU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* Debugger_get__instance_mDEC6ED4A415CA2BBC193262E0E4F5546DD93D936_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0 = ((Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Debugger_set__instance_m1E5FE8A023CFC694262B9084916D9E80B5B94533_inline (Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Debugger_tE0F30413C0BC7C5AEE4450540576325558631333* L_0 = ___0_value;
		((Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tE0F30413C0BC7C5AEE4450540576325558631333_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DebugEventHandler_Invoke_m6942CE374E12484E24398E91D2369A8F57BD9D0F_inline (DebugEventHandler_t9FD635E452308DEAD36EFA0A31C31C4B3082B897* __this, RuntimeObject* ___0_sender, String_t* ___1_message, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* ___2_exception, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, String_t*, PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_message, ___2_exception, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ClientOptions_get_Schema_m04890046A7798F244832EA808FA41AE94CFBE7EE_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CSchemaU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* HttpMethod_get_Get_mAD94BF07B40B20DAF42CBEEC2E910FC5CE0DA670_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var);
		HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* L_0 = ((HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_StaticFields*)il2cpp_codegen_static_fields_for(HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E_il2cpp_TypeInfo_var))->___get_method_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* UriBuilder_get_Query_m905F5864CB1B5D09FD81F29B148541DFB353F78E_inline (UriBuilder_t7931690A4195FCF7400D95D3107C3FB1D55A1C72* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____query_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HttpRequestMessage_set_Content_m522F62E997874DA5A3F77BD4DD7A1C7CA2629DC9_inline (HttpRequestMessage_t74681B0588D722488483789091C3CF356C729DF2* __this, HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = ___0_value;
		__this->___U3CContentU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* HttpResponseMessage_get_Content_m2350C12EA59DAD014A59B17398E5B50F62202AF6_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		HttpContent_tD09737BB27CB151BC9688882F785208620211E1C* L_0 = __this->___U3CContentU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_Content_mE438287FF9680DF30897CBCFF871676F059FF207_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CContentU3Ek__BackingField_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_19), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_Response_m4542C20B1D18760DA3BFC8A1FD19922C39F41E3C_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_0 = ___0_value;
		__this->___U3CResponseU3Ek__BackingField_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseU3Ek__BackingField_18), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HttpResponseMessage_get_StatusCode_m63BE26E4C79137B35F3066C6BA6A5FF5F3D16AAA_inline (HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___statusCode_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_StatusCode_m66D27E11EE4E1F43FB24A98D3C9E01C819FDDDE5_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CStatusCodeU3Ek__BackingField_20 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* Hooks_get__instance_m47CB721E58659DF6D8E3B2760F2989D3C3290368_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0 = ((Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields*)il2cpp_codegen_static_fields_for(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hooks_set__instance_m5DECEA51B58E95E51AB084818FF7D03037D30BB2_inline (Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806* L_0 = ___0_value;
		((Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields*)il2cpp_codegen_static_fields_for(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_StaticFields*)il2cpp_codegen_static_fields_for(Hooks_t64F72889B3DD397C8F692AB62A4AE348DC772806_il2cpp_TypeInfo_var))->___U3C_instanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnRequestPreparedEventHandler_Invoke_m4C69456B3BE718A321DA400C3882ABEBA0C6864B_inline (OnRequestPreparedEventHandler_t2C37D3102CE1E06CF8DDA6A742187213BC1C4168* __this, RuntimeObject* ___0_sender, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_clientOptions, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E* ___2_method, String_t* ___3_url, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___4_serializerSettings, RuntimeObject* ___5_data, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___6_headers, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*, HttpMethod_t9AB9E2BAC0D02F479F4624271A4F79E70221258E*, String_t*, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*, RuntimeObject*, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_sender, ___1_clientOptions, ___2_method, ___3_url, ___4_serializerSettings, ___5_data, ___6_headers, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_value;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E8B801EA7321CA1EC5BB1E3AC5C14B31119A13C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Index_FromStart_mFEEC4124BBEDFCBE12FAEC250F92BE8E2259F2DC_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = ___0_value;
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_3 = (Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4*)il2cpp_codegen_object_new(Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Index__ctor_m790BC780DF9E4DE6DB5E3EF8BF1F5D6D88992831(L_3, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* IntRange_get_Start_m1617301BB1DED610CB8AF11525E483CCF8BC12BD_inline (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) 
{
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = __this->___U3CStartU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* IntRange_get_End_mD5EBE40CB56E9358BFCA13ACB466C3AF103EB8FD_inline (IntRange_tB4EDC10E1C1A1C833C245464EBDED9AEFD75564A* __this, const RuntimeMethod* method) 
{
	{
		Index_tC9320C54AE725555BE82E48AFE10D1DF19B27BC4* L_0 = __this->___U3CEndU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsUpdate_m4516CA8F429837CAADAA858884114548F086B5F3_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsUpdateU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsInsert_mC908DDF905EBC64F6A9730232D31745431ADF1A2_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsInsertU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestContractResolver_set_IsUpsert_mCC195666EACC9251A18F7273B0651EAE888313E3_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIsUpsertU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* JsonProperty_get_PropertyType_mA68B958EF3FA448DE8073330143B58DE59274C02_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->____propertyType_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_Converter_mFC9963279952098BC4C2C67CB585A48EF9C725D8_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* ___0_value, const RuntimeMethod* method) 
{
	{
		JsonConverter_tE765D011CD34CDF28759E6D58FDBF05AA5EA0F16* L_0 = ___0_value;
		__this->___U3CConverterU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ColumnAttribute_get_ColumnName_m88D8A88BC538C746E1F99AF7AAE81D94395A8118_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ColumnAttribute_get_NullValueHandling_m9CDB5EDFD9DBD775F613D8B568CE5C4A76EE2F65_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CNullValueHandlingU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_NullValueHandling_m1975598294F96AAF9FB5C2EADBFA7A3B75B6B426_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 L_0 = ___0_value;
		__this->___U3CNullValueHandlingU3Ek__BackingField_19 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsInsert_mD81B30965372B281DD1DD49C8ABBD81EC7FAC5B2_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsInsertU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ColumnAttribute_get_IgnoreOnInsert_mFC1920FFD53D438C3AF2A94A459C308A982D1B4B_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreOnInsertU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_Ignored_m1F9CA36C6C94DD3E563A4A1C8462DE5FBA6F5558_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIgnoredU3Ek__BackingField_14 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsUpdate_mF7FDD2AD2E0F01C05F2CB8371222B5579200851F_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsUpdateU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ColumnAttribute_get_IgnoreOnUpdate_m018670F7BB2CD11C3993611412FB0C41C0C2272A_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIgnoreOnUpdateU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PostgrestContractResolver_get_IsUpsert_mB17EAD75DB90AEF78C7AA396487A22A13834FA11_inline (PostgrestContractResolver_t6A97101CB20E98DF13D50A5DA6996516D74A606D* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsUpsertU3Ek__BackingField_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_ForeignKey_m6D5484A793C6902170054D01D4E79B62A88AA74E_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CForeignKeyU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_ColumnName_mB5DE0844BE4FDD9006B03456F616A670DBF9E257_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ReferenceAttribute_get_TableName_m1BA0FBCDB97F83044EBA4E56C94DA50A0C933A48_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTableNameU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PrimaryKeyAttribute_get_ColumnName_mDCE86D9EE96A7D0C31E322C0E7EAC3EB04B921F6_inline (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CColumnNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonProperty_set_ShouldSerialize_m46EE6AE304CECB231A5042488EA30F61A140741D_inline (JsonProperty_t8AC6AE6C6E97559E27739FDD2B6A3DA659FF04F3* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_value, const RuntimeMethod* method) 
{
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_value;
		__this->___U3CShouldSerializeU3Ek__BackingField_24 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CShouldSerializeU3Ek__BackingField_24), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PrimaryKeyAttribute_get_ShouldInsert_m5FCBB0369761A25ADB9511FD88E14C5E4D0B046C_inline (PrimaryKeyAttribute_tFBD4E8863F1ECD5D1310DF24552637089B1946B6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CShouldInsertU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryFilter_set_Property_mE9CC64B55ADA67ABC8E29875F9FB5D64396C74A9_inline (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CPropertyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryFilter_set_Op_m201F80B50C0F0794C09A0C0175974F73D31C39A0_inline (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3COpU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void QueryFilter_set_Criteria_m92A07E94DF44FC272935DFF447D977C77C65E4BB_inline (QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCriteriaU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCriteriaU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PostgrestException_set_Reason_mD6D072E2E5C160249D15DB77D3DA960F6999B118_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReasonU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FullTextSearchConfig_set_QueryText_mCA3F31E07BD211B3FDE562D1BAB16ADD9EC5C147_inline (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CQueryTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CQueryTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FullTextSearchConfig_set_Config_mEA5F76066ABDF922F787233A9BC511A31F462841_inline (FullTextSearchConfig_t10AA33C11B794DDD28B0F7471FFA9BDD95F2C910* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CConfigU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConfigU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool QueryOptions_get_Upsert_m7A538CA82B129F9ABF35CF3C1974877508ECE8C4_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUpsertU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QueryOptions_get_DuplicateResolution_m98D42E2E436175C3731AB3B1FEC682FA11ECF4B8_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CDuplicateResolutionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MapToAttribute_get_Mapping_m5432E60DBE072A7A894EF505449C33CC6E88484D_inline (MapToAttribute_t349376F38A7CC3D8E4F6D05B4FF8F74A9C519E5A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMappingU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QueryOptions_get_Returning_m3ABFDB8CCA2F937F62243D683A1994BC53A49BDB_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReturningU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t QueryOptions_get_Count_m7FB70DC101EF3E0D0159E10BDE6CD511FC78150F_inline (QueryOptions_tF5FEC637B0E80321C5E10C7A6E33A02164ECDA82* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseResponse_set_ClientOptions_mFD1C843E649CF53CBA251AC0806CEDC0B63CD81F_inline (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___0_value, const RuntimeMethod* method) 
{
	{
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_0 = ___0_value;
		__this->___U3CClientOptionsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClientOptionsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseResponse_set_ResponseMessage_m053D20CD7E93ED04C9E676A677D3FE188FC95A96_inline (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* ___0_value, const RuntimeMethod* method) 
{
	{
		HttpResponseMessage_t5D2737606E4036A6E3E50FB0D651D3F76C61A970* L_0 = ___0_value;
		__this->___U3CResponseMessageU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResponseMessageU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseResponse_set_Content_m8B31C14B9589FED1B443D080A0D417A7818B87B8_inline (BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CContentU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CContentU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TableAttribute_get_Name_m5731CFBB26ED7B86A5C190597DBC850A33627EB3_inline (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* NewArrayExpression_get_Expressions_mBC8AE846F8167BA863B7BE9200C7947F2FB737EF_inline (NewArrayExpression_t456788ECCA135056C26BDD0CB8DE88D32D1EFD5E* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t76DB6014D5D8866A0D28561F8D56D2303331614E* L_0 = __this->___U3CExpressionsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* SelectExpressionVisitor_get_Columns_m263E90A4D9F20AFE39621EB7AD6FC7950822FDB3_inline (SelectExpressionVisitor_t1E69D4F47B1095F04658276E769535CADB99F658* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CColumnsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* UnaryExpression_get_Operand_mE144387E98BABF0D3FD8E4640612A726D91E2943_inline (UnaryExpression_tFB4F40A211A2FF9B58F1A86E0EDB474121867B96* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->___U3COperandU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_Column_m08D8899EFE1B6FCBA4D87465307B5EFBD6B7473D_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CColumnU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_ExpectedType_m4DA0FC66B39D03C9A0B1C5ECDB687850D7C81014_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, Type_t* ___0_value, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_value;
		__this->___U3CExpectedTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpectedTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SetExpressionVisitor_set_Value_mAF2083CA480A9D4D253B0A01E914DA2C800BAB29_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CValueU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* SetExpressionVisitor_get_ExpectedType_mEC7321AEE47CF9EF102E26382168235908BD8B21_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CExpectedTypeU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SetExpressionVisitor_get_Value_mA0976966093DCE9B06526F704BA0F0D59E02443C_inline (SetExpressionVisitor_t26E7E0A1BECEDD33822962FA575670FCFD6F09D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* BinaryExpression_get_Left_m89AE3E53F38023AB796E12A8126F82ECA20B7E55_inline (BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->___U3CLeftU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* BinaryExpression_get_Right_m2BF6D385EC48C3CDB0B6688975C9D158BC593398_inline (BinaryExpression_t4D7BC929A5BBC587BBC045505C9029557B8D32B4* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->___U3CRightU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* WhereExpressionVisitor_get_Filter_mF6063C5F5B8E8267A25E14D2AD8A9FE308E5E3B0_inline (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, const RuntimeMethod* method) 
{
	{
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_0 = __this->___U3CFilterU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WhereExpressionVisitor_set_Filter_mDE77BABA2D9B9A3055BE4AAC88C13560B16DDCC8_inline (WhereExpressionVisitor_tB020779473B45F6F8270FA6D7B904EFAA07E45ED* __this, QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* ___0_value, const RuntimeMethod* method) 
{
	{
		QueryFilter_tC558DCAEF8479F9EE0C5AEBF458C517F56C56913* L_0 = ___0_value;
		__this->___U3CFilterU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFilterU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MethodInfo_t* MethodCallExpression_get_Method_m76D210171E9633BD4E62F23C9300CF86098E5615_inline (MethodCallExpression_tC95F5EFAB9E7AB984F7F6931F57E6A2D094C22DB* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___U3CMethodU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ConstantExpression_get_Value_mCC4506ED39F235D2D2A57728CC0DD36C390B4C17_inline (ConstantExpression_t4BE6B7DFD889CC0EA42B45C32BD511F2764E1547* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* NewExpression_get_Constructor_m3E55B5B89F1297D692E143FF9B89C7B5363BFC78_inline (NewExpression_t71592C0B1A33F4FD5FA0283BC2657C31D95EED51* __this, const RuntimeMethod* method) 
{
	{
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_0 = __this->___U3CConstructorU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* MemberExpression_get_Expression_mF422466944A9875383573A4FD01CD661C64B7503_inline (MemberExpression_t133C12A9CE765EF02D622D660CE80E146B15EF89* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->___U3CExpressionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PostgrestException_get_Content_m340DDBEBD7C8CE7E2AA1ABBBBBCA6279A7BB1661_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CContentU3Ek__BackingField_19;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PostgrestException_get_StatusCode_m38FB188E3201FE7D9187CD4704C6A9C34BCEB803_inline (PostgrestException_t4B6452F524BB960F61AEFC2C3A8B64A6B39B282A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ColumnAttribute_set_NullValueHandling_m6CEB4CD95F9136E27BD356338D0BE5719B6B42D2_inline (ColumnAttribute_tD407A9684A672C151B9298F3D5E37B2EF2C030D5* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CNullValueHandlingU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_IgnoreOnInsert_m4080218C81FD66D20D22B6BA03385F6234FA456F_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIgnoreOnInsertU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_IgnoreOnUpdate_m794BEF0673B116F49645414AB1E03426D3DB86EA_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CIgnoreOnUpdateU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_ColumnName_mFB7A913820BB485D018625CC6075868B8810D5ED_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CColumnNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CColumnNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReferenceAttribute_set_ForeignKey_m15AC1F13205DE07BEDD70D3D331CEDD878062EDE_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CForeignKeyU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CForeignKeyU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* ReferenceAttribute_get_Model_mEDD065D9DBBE222D72133E112BE39DFF62C66591_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CModelU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ReferenceAttribute_get_Columns_m985DAB0FC2ADBCC765ED073206F05D6E901DB24B_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CColumnsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_IncludeInQuery_m5E29362E8B892997302ABB00824CE33C08EC68D0_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIncludeInQueryU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReferenceAttribute_get_UseInnerJoin_mEA31215B3125A07C142B69449F7C1E39095C5F55_inline (ReferenceAttribute_tE4826BE7AC917604386D4DFA978743D5C5F25F1E* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CUseInnerJoinU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TableAttribute_set_Name_m03F1617440878EFA864E134879CABB20EBA4FE5F_inline (TableAttribute_t03B21EEC4075C2C6922D5DFA2BB20A40007BE71F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m092C73DCE052BFB5C60A39EF9F4E3401AA95221C_gshared_inline (Nullable_1_tEADC262F7F8B8BC4CC0A003DBDD3CA7C1B63F9AC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m283C063CE803F000F2D2DD94FCEBD7DA55741098_gshared_inline (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___0_item, const RuntimeMethod* method) 
{
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_6 = V_0;
		int32_t L_7 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D)L_8);
		return;
	}

IL_0034:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9 = ___0_item;
		((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
