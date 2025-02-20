#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Object,System.Action`1<System.String>>
struct Action_2_t1844458A74E7FBD07ADB272EC5029DE80FF1B5C4;
// System.Action`2<System.String,System.Action`1<Supabase.Realtime.Socket.SocketResponse>>
struct Action_2_tEB222A7224B70F62D5DD891308BEA62A65358908;
// Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<System.Object,System.Object>
struct AuthEventHandler_tED86D1243F78FF1C76D8F95A5CE8F42A368721D8;
// Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>
struct AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,Supabase.Realtime.RealtimeChannel>
struct Dictionary_2_tB4483469787610E09E445603662D0D35B8A6115F;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<Supabase.Realtime.PostgresChanges.PostgresChangesOptions/ListenType,System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/PostgresChangesHandler>>
struct Dictionary_2_t9E3B4EE91B12A711165753097D080F7D12014FCE;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Int32,System.TimeSpan>
struct Func_2_t817C40E6D2BC4CDA2D74FED0CDD51DFB672EDF9C;
// System.Collections.Generic.ICollection`1<Supabase.Realtime.RealtimeChannel>
struct ICollection_1_tDEA2CE0EA20D0DEE6D2038A3ECD2A1D558ECF2F0;
// System.Collections.Generic.IDictionary`2<System.String,Supabase.Realtime.RealtimeChannel>
struct IDictionary_2_t0D9E4E58AE4282282CF350858677E79E90199475;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<Supabase.Realtime.RealtimeChannel>
struct IEnumerator_1_t8430B934DE3346C76B1D1815B81D520FA895A9CF;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// Supabase.Gotrue.Interfaces.IGotrueAdminClient`1<Supabase.Gotrue.User>
struct IGotrueAdminClient_1_t6417D0B1287F6BDD466BABF631BA3FB2717E9906;
// Supabase.Gotrue.Interfaces.IGotrueApi`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>
struct IGotrueApi_2_tF5103A09D8E1B0267B586376FB93A20C715E0F4E;
// Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>
struct IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C;
// Supabase.Gotrue.Interfaces.IGotruePersistenceListener`1<Supabase.Gotrue.Session>
struct IGotruePersistenceListener_1_tE513BC5DF960023EF371584D35B760ABA88B1234;
// Supabase.Gotrue.Interfaces.IGotrueSessionPersistence`1<Supabase.Gotrue.Session>
struct IGotrueSessionPersistence_1_t6A360555BF67856998E0FB7EE5A497CD39248CBA;
// Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>
struct IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D;
// Supabase.Storage.Interfaces.IStorageClient`2<Supabase.Storage.Bucket,Supabase.Storage.FileObject>
struct IStorageClient_2_t2F842B8A07BD727CCCD95378194B503D6DC77A85;
// Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>
struct ISupabaseClient_6_tCF056756F036F008599009251887571735E4926A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,Supabase.Realtime.RealtimeChannel>
struct KeyCollection_tAEB1288294B85148BDEDA97AF24FB48665CB0B89;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>>
struct List_1_tDFFFD3CD0744DB62663F5A7886B9FAF4F4EE015E;
// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeClient`2/SocketStateEventHandler<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>
struct List_1_t323CA44CD14D90F2E3AEF32C4B3153A3D89F20D0;
// System.Collections.Generic.List`1<Supabase.Realtime.PostgresChanges.PostgresChangesOptions>
struct List_1_t8A8EBAE4A429437C35DF5F9FDA2B36BD593D784E;
// System.Collections.Generic.List`1<Supabase.Realtime.Channel.Push>
struct List_1_tAE8E5893D00DDFDE909321F9DEBD228FD085CF31;
// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/ErrorEventHandler>
struct List_1_t1E22706655245B5968C9476BF702DB70AFEE51D7;
// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/MessageReceivedHandler>
struct List_1_t9E8A98878DE3210242FE03072A561DB15DD78F55;
// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/StateChangedHandler>
struct List_1_t7BAC8F0031D93E66DB9CFF21717944560A05B6E5;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Supabase.Realtime.RealtimeChannel>
struct ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA;
// System.Threading.Tasks.TaskFactory`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>
struct TaskFactory_1_t58630466A661C493F8AD8B8BBD5DAE0394E5B831;
// System.Threading.Tasks.TaskFactory`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>
struct TaskFactory_1_tE2C5458D8987E9CD48A4BC853B96CAB8270B42CC;
// System.Threading.Tasks.TaskFactory`1<Postgrest.Responses.BaseResponse>
struct TaskFactory_1_tF1867C36AA812A32C0BE91FB67B394AE399C8932;
// System.Threading.Tasks.TaskFactory`1<Supabase.Gotrue.Session>
struct TaskFactory_1_t18C28E0CD65D175275BCB5D5F10B296C3D168692;
// System.Threading.Tasks.Task`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>
struct Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3;
// System.Threading.Tasks.Task`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>
struct Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59;
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>
struct Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<Supabase.Gotrue.Session>
struct Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t09000EDB52BE30440649C648D0D8F589B427815E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Supabase.Realtime.RealtimeChannel>
struct ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
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
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Supabase.Gotrue.AdminClient
struct AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// Postgrest.Models.BaseModel
struct BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0;
// Postgrest.Responses.BaseResponse
struct BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Supabase.Realtime.Broadcast.BroadcastOptions
struct BroadcastOptions_t349BDEEB2557B7771AF62658D2D2621578D6BC50;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t38405272BD6A6DA77CD51487FD39624C6E95CC93;
// Supabase.Realtime.Channel.ChannelOptions
struct ChannelOptions_tAA3E649970B22F6F49A3DCD53FDE0BFF7DF96417;
// Postgrest.Client
struct Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8;
// Supabase.Client
struct Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5;
// Supabase.Functions.Client
struct Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924;
// Supabase.Gotrue.Client
struct Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604;
// Supabase.Realtime.Client
struct Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81;
// Supabase.Storage.Client
struct Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F;
// Postgrest.ClientOptions
struct ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7;
// Supabase.Gotrue.ClientOptions
struct ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926;
// Supabase.Realtime.ClientOptions
struct ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E;
// Supabase.Storage.ClientOptions
struct ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Supabase.Gotrue.DebugNotification
struct DebugNotification_t81DF3B9AEFD6500BA93C18FBBB6260E60A750E39;
// Supabase.DefaultSupabaseSessionHandler
struct DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t93FB6EDD6993A413171A70EA86752A241DEBF5BC;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_tFFA1789730DD9EA122FBE77DC03BFEDCC3F2945E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.Http.HttpClient
struct HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Supabase.Functions.Interfaces.IFunctionsClient
struct IFunctionsClient_t348D916EFC9D1D47927B073ECB71EE4B67944AFB;
// Postgrest.Interfaces.IPostgrestClient
struct IPostgrestClient_tF2C94860C187F816A1DE88DA98C8DAC82429E172;
// Supabase.Realtime.Interfaces.IRealtimeBroadcast
struct IRealtimeBroadcast_t99D8B53A83B830489D8BFEFFB34225451D84711D;
// Supabase.Realtime.Interfaces.IRealtimeChannel
struct IRealtimeChannel_t97E14BFE2E605B9D60B01A741F325B17CA054481;
// Supabase.Realtime.Interfaces.IRealtimePresence
struct IRealtimePresence_tFB0284305EC19D50D877CCD02C471FE06A64EF16;
// Supabase.Realtime.Interfaces.IRealtimeSocket
struct IRealtimeSocket_t1D2E0151B90EF7F8F8B1CA6DAF2E1F97757CFF03;
// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t503CD6B1285CFCB69054543FF50CFB8C7FA18CAB;
// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t31D418BAC97B8E3F471A1F4B0B481C92920C1B70;
// Supabase.Realtime.Presence.PresenceOptions
struct PresenceOptions_t4683F14E20B066CA9ED5E377E61DDEC2B14C85D5;
// Supabase.Realtime.Channel.Push
struct Push_tD038B6CD82AEAA7DEEF19D95C08560932DDBAB4B;
// Supabase.Realtime.RealtimeChannel
struct RealtimeChannel_tD455C17326FCFC6D638EC89437D93051791E4E8B;
// Supabase.Realtime.Exceptions.RealtimeException
struct RealtimeException_tFE30F580F09EB6E72258C399B774BEB93E3F469E;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Supabase.Gotrue.Session
struct Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413;
// Supabase.Realtime.Socket.SocketOptionsParameters
struct SocketOptionsParameters_t44CA09DBF6EDBC88A7958EB258FC8A96DCB5856F;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// Supabase.SupabaseModel
struct SupabaseModel_tD2054D441CECAFCF99DAE1CD4A70873340F7A998;
// Supabase.SupabaseOptions
struct SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B;
// Supabase.Gotrue.TokenRefresh
struct TokenRefresh_t8C8F5A8D96A4436580920E69C5205A5D1A945C1D;
// System.Type
struct Type_t;
// Supabase.Gotrue.User
struct User_t3CD3729F8D1F55A446ED274D4141BBEAE4D9A5B1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Supabase.Realtime.RealtimeChannel/BroadcastEventHandler
struct BroadcastEventHandler_t34207968495BE5EA2995F471D162AE80702685F1;
// Supabase.Realtime.RealtimeChannel/PresenceDiffHandler
struct PresenceDiffHandler_tDE9CEE2D3DE666E99925B577C0AA315C0AA908A3;
// Supabase.Realtime.RealtimeChannel/PresenceSyncHandler
struct PresenceSyncHandler_t56F26E6A77D330681A38FA01837C465932062E05;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Supabase.StatelessClient/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AuthState_t08754D2E0AB95596556177E5EF928EB811154E30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8430B934DE3346C76B1D1815B81D520FA895A9CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGettableHeaders_t2FD617A5DD72E6868166948D88C0B5435B7E1E05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPostgrestClient_tF2C94860C187F816A1DE88DA98C8DAC82429E172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02A78316CAFD286E8F66D1F4982FA2CBBBE6C5FB;
IL2CPP_EXTERN_C String_t* _stringLiteral0B75051519367FF34289B53BBAF79585B3798604;
IL2CPP_EXTERN_C String_t* _stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50;
IL2CPP_EXTERN_C String_t* _stringLiteral2939BF2B8688AFC71B530D93E9ED9B81154CE7BF;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0588D6A180756A9E2D3048B2E9EDF0B0B9A3BA;
IL2CPP_EXTERN_C String_t* _stringLiteral5479C8C80E22F0300B7B582DAD1ABF8D200DC5C7;
IL2CPP_EXTERN_C String_t* _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95;
IL2CPP_EXTERN_C String_t* _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF;
IL2CPP_EXTERN_C String_t* _stringLiteral9042DB96F30E178E24E9398022FFB45EB22409EF;
IL2CPP_EXTERN_C String_t* _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907;
IL2CPP_EXTERN_C String_t* _stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44;
IL2CPP_EXTERN_C String_t* _stringLiteralB684E811F37A268F0D270E0F05D78A2F472A30C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC;
IL2CPP_EXTERN_C String_t* _stringLiteralCAE9ECD98A34C76C0C52667C85AD3110805F0D61;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AE1A25F0580CF495FD4825DB40A6A1BC65B533;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_mC849CE17F5002751E144F52002EE742B539066D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m265FA8F3F22C4C744FB7C78C1A53FC29DC7236BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m9D1A11E9BF5C3D12EA6DDC3C46B126D4868808B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m3AFE1DFDD10CC8C0157606817643F2C0391E351F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mD1072AB5DAAAD5A334CE96E840B60A4D8D886E2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetStateMachine_mDF32944934651271F9D6FE424168889D5DEE7D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m724A38AD585416D99959C384A61BDDAE211A3722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mA8FEA35E87BCF625FCC8D233F367C3EE6A3ABFE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m1A7378DC9307F6B86D70A81755D8E73E4573C18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m3B2C4C0C23D111F26AA9E236F3D6F9261D60A588_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m91EAF3DEA28CD13A149E4A553E51C63D5F8C1052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mA6BBC2BCC9B22277CA04E3B0BD43127FEF0E0FC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m05F6355DD24FCB1846F8D3E4DB269A3697C7F92E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m66B4210F6B671D58E439146ACF6F7B885E20A433_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CFunctionsU3Eb__0_mC8A99C4D6E34BC34BA004E5A7B4DAFF08C43FEFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m3762C3D6C363147082E45527A590B1540A06C182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t58D39766CBE0F309EE7CB859F3908D5E059654CE 
{
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

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Supabase.Realtime.RealtimeChannel>
struct ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_tAEB1288294B85148BDEDA97AF24FB48665CB0B89* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0* ____values_3;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Supabase.Realtime.RealtimeChannel>
struct ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0  : public RuntimeObject
{
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_collection
	RuntimeObject* ____collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// Supabase.Gotrue.AdminClient
struct AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458  : public RuntimeObject
{
	// Supabase.Gotrue.ClientOptions Supabase.Gotrue.AdminClient::<Options>k__BackingField
	ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* ___U3COptionsU3Ek__BackingField_0;
	// Supabase.Gotrue.Interfaces.IGotrueApi`2<Supabase.Gotrue.User,Supabase.Gotrue.Session> Supabase.Gotrue.AdminClient::_api
	RuntimeObject* ____api_1;
	// System.String Supabase.Gotrue.AdminClient::_serviceKey
	String_t* ____serviceKey_2;
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

// Supabase.Client
struct Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5  : public RuntimeObject
{
	// Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session> Supabase.Client::_auth
	RuntimeObject* ____auth_0;
	// Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel> Supabase.Client::_realtime
	RuntimeObject* ____realtime_1;
	// Supabase.Functions.Interfaces.IFunctionsClient Supabase.Client::_functions
	RuntimeObject* ____functions_2;
	// Postgrest.Interfaces.IPostgrestClient Supabase.Client::_postgrest
	RuntimeObject* ____postgrest_3;
	// Supabase.Storage.Interfaces.IStorageClient`2<Supabase.Storage.Bucket,Supabase.Storage.FileObject> Supabase.Client::_storage
	RuntimeObject* ____storage_4;
	// System.String Supabase.Client::_supabaseUrl
	String_t* ____supabaseUrl_5;
	// System.String Supabase.Client::_supabaseKey
	String_t* ____supabaseKey_6;
	// Supabase.SupabaseOptions Supabase.Client::_options
	SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ____options_7;
};

// Supabase.Functions.Client
struct Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924  : public RuntimeObject
{
	// System.Net.Http.HttpClient Supabase.Functions.Client::_httpClient
	HttpClient_t18C26B758AF7E9331DC8A86A2AD715B53BBA9D42* ____httpClient_0;
	// System.String Supabase.Functions.Client::_baseUrl
	String_t* ____baseUrl_1;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Supabase.Functions.Client::<GetHeaders>k__BackingField
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___U3CGetHeadersU3Ek__BackingField_2;
};

// Supabase.Gotrue.Client
struct Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604  : public RuntimeObject
{
	// Supabase.Gotrue.Interfaces.IGotrueApi`2<Supabase.Gotrue.User,Supabase.Gotrue.Session> Supabase.Gotrue.Client::_api
	RuntimeObject* ____api_0;
	// System.Collections.Generic.List`1<Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>> Supabase.Gotrue.Client::_authEventHandlers
	List_1_tDFFFD3CD0744DB62663F5A7886B9FAF4F4EE015E* ____authEventHandlers_1;
	// Supabase.Gotrue.DebugNotification Supabase.Gotrue.Client::_debugNotification
	DebugNotification_t81DF3B9AEFD6500BA93C18FBBB6260E60A750E39* ____debugNotification_2;
	// Supabase.Gotrue.Interfaces.IGotruePersistenceListener`1<Supabase.Gotrue.Session> Supabase.Gotrue.Client::_sessionPersistence
	RuntimeObject* ____sessionPersistence_3;
	// Supabase.Gotrue.TokenRefresh Supabase.Gotrue.Client::<TokenRefresh>k__BackingField
	TokenRefresh_t8C8F5A8D96A4436580920E69C5205A5D1A945C1D* ___U3CTokenRefreshU3Ek__BackingField_4;
	// Supabase.Gotrue.ClientOptions Supabase.Gotrue.Client::<Options>k__BackingField
	ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* ___U3COptionsU3Ek__BackingField_5;
	// System.Boolean Supabase.Gotrue.Client::<Online>k__BackingField
	bool ___U3COnlineU3Ek__BackingField_6;
	// Supabase.Gotrue.Session Supabase.Gotrue.Client::<CurrentSession>k__BackingField
	Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* ___U3CCurrentSessionU3Ek__BackingField_7;
};

// Supabase.Realtime.Client
struct Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81  : public RuntimeObject
{
	// Supabase.Realtime.Interfaces.IRealtimeSocket Supabase.Realtime.Client::<Socket>k__BackingField
	RuntimeObject* ___U3CSocketU3Ek__BackingField_0;
	// Supabase.Realtime.ClientOptions Supabase.Realtime.Client::<Options>k__BackingField
	ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* ___U3COptionsU3Ek__BackingField_1;
	// System.String Supabase.Realtime.Client::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_2;
	// System.String Supabase.Realtime.Client::_realtimeUrl
	String_t* ____realtimeUrl_3;
	// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeClient`2/SocketStateEventHandler<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>> Supabase.Realtime.Client::_socketEventHandlers
	List_1_t323CA44CD14D90F2E3AEF32C4B3153A3D89F20D0* ____socketEventHandlers_4;
	// System.Collections.Generic.Dictionary`2<System.String,Supabase.Realtime.RealtimeChannel> Supabase.Realtime.Client::_subscriptions
	Dictionary_2_tB4483469787610E09E445603662D0D35B8A6115F* ____subscriptions_5;
};

// Supabase.Gotrue.ClientOptions
struct ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926  : public RuntimeObject
{
	// System.String Supabase.Gotrue.ClientOptions::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.Gotrue.ClientOptions::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_1;
	// System.Boolean Supabase.Gotrue.ClientOptions::<AutoRefreshToken>k__BackingField
	bool ___U3CAutoRefreshTokenU3Ek__BackingField_2;
	// System.Boolean Supabase.Gotrue.ClientOptions::<DebugRefreshToken>k__BackingField
	bool ___U3CDebugRefreshTokenU3Ek__BackingField_3;
	// System.Int32 Supabase.Gotrue.ClientOptions::<MaximumRefreshWaitTime>k__BackingField
	int32_t ___U3CMaximumRefreshWaitTimeU3Ek__BackingField_4;
	// System.Boolean Supabase.Gotrue.ClientOptions::<AllowUnconfirmedUserSessions>k__BackingField
	bool ___U3CAllowUnconfirmedUserSessionsU3Ek__BackingField_5;
};

// Supabase.DefaultSupabaseSessionHandler
struct DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18  : public RuntimeObject
{
};

// Supabase.Extensions.DictionaryExtensions
struct DictionaryExtensions_tE9E8B0B19632BAB6B3A18AD402A30E3E49D63282  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Supabase.Realtime.Socket.SocketOptionsParameters
struct SocketOptionsParameters_t44CA09DBF6EDBC88A7958EB258FC8A96DCB5856F  : public RuntimeObject
{
	// System.String Supabase.Realtime.Socket.SocketOptionsParameters::<Token>k__BackingField
	String_t* ___U3CTokenU3Ek__BackingField_0;
	// System.String Supabase.Realtime.Socket.SocketOptionsParameters::<ApiKey>k__BackingField
	String_t* ___U3CApiKeyU3Ek__BackingField_1;
};

// Supabase.StatelessClient
struct StatelessClient_t26986048F7EACF8BD73AB67E608A1E0E8329C5B4  : public RuntimeObject
{
};

// Supabase.Storage.StorageBucketApi
struct StorageBucketApi_t49C40413FAEDB9B33E83AF4342C7E68694023742  : public RuntimeObject
{
	// Supabase.Storage.ClientOptions Supabase.Storage.StorageBucketApi::<Options>k__BackingField
	ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* ___U3COptionsU3Ek__BackingField_0;
	// System.String Supabase.Storage.StorageBucketApi::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.Storage.StorageBucketApi::_initializedHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____initializedHeaders_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.Storage.StorageBucketApi::_headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____headers_3;
	// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>> Supabase.Storage.StorageBucketApi::<GetHeaders>k__BackingField
	Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___U3CGetHeadersU3Ek__BackingField_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Supabase.SupabaseOptions
struct SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8  : public RuntimeObject
{
	// System.String Supabase.SupabaseOptions::Schema
	String_t* ___Schema_0;
	// System.Boolean Supabase.SupabaseOptions::<AutoRefreshToken>k__BackingField
	bool ___U3CAutoRefreshTokenU3Ek__BackingField_1;
	// System.Boolean Supabase.SupabaseOptions::<AutoConnectRealtime>k__BackingField
	bool ___U3CAutoConnectRealtimeU3Ek__BackingField_2;
	// Supabase.Gotrue.Interfaces.IGotrueSessionPersistence`1<Supabase.Gotrue.Session> Supabase.SupabaseOptions::<SessionHandler>k__BackingField
	RuntimeObject* ___U3CSessionHandlerU3Ek__BackingField_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.SupabaseOptions::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_4;
	// Supabase.Storage.ClientOptions Supabase.SupabaseOptions::<StorageClientOptions>k__BackingField
	ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* ___U3CStorageClientOptionsU3Ek__BackingField_5;
	// System.String Supabase.SupabaseOptions::<AuthUrlFormat>k__BackingField
	String_t* ___U3CAuthUrlFormatU3Ek__BackingField_6;
	// System.String Supabase.SupabaseOptions::<RestUrlFormat>k__BackingField
	String_t* ___U3CRestUrlFormatU3Ek__BackingField_7;
	// System.String Supabase.SupabaseOptions::<RealtimeUrlFormat>k__BackingField
	String_t* ___U3CRealtimeUrlFormatU3Ek__BackingField_8;
	// System.String Supabase.SupabaseOptions::<StorageUrlFormat>k__BackingField
	String_t* ___U3CStorageUrlFormatU3Ek__BackingField_9;
	// System.String Supabase.SupabaseOptions::<FunctionsUrlFormat>k__BackingField
	String_t* ___U3CFunctionsUrlFormatU3Ek__BackingField_10;
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

// Supabase.StatelessClient/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.StatelessClient/<>c__DisplayClass3_0::headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>
struct TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session>
struct TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C* ___m_task_0;
};

// System.Threading.Tasks.Task`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>
struct Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>
struct Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>
struct Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	BaseResponse_t3D8B79E9E13A1F1442BB526B1089F8BA3E4CE312* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Supabase.Gotrue.Session>
struct Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* ___m_result_22;
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

// Supabase.Storage.Client
struct Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F  : public StorageBucketApi_t49C40413FAEDB9B33E83AF4342C7E68694023742
{
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t93FB6EDD6993A413171A70EA86752A241DEBF5BC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// System.Runtime.CompilerServices.NullableAttribute
struct NullableAttribute_t503CD6B1285CFCB69054543FF50CFB8C7FA18CAB  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte[] System.Runtime.CompilerServices.NullableAttribute::NullableFlags
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___NullableFlags_0;
};

// System.Runtime.CompilerServices.NullableContextAttribute
struct NullableContextAttribute_t31D418BAC97B8E3F471A1F4B0B481C92920C1B70  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Byte System.Runtime.CompilerServices.NullableContextAttribute::Flag
	uint8_t ___Flag_0;
};

// Supabase.SupabaseModel
struct SupabaseModel_tD2054D441CECAFCF99DAE1CD4A70873340F7A998  : public BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>
struct AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_2;
};

// Supabase.Storage.ClientOptions
struct ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965  : public RuntimeObject
{
	// System.TimeSpan Supabase.Storage.ClientOptions::HttpUploadTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___HttpUploadTimeout_0;
	// System.TimeSpan Supabase.Storage.ClientOptions::HttpDownloadTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___HttpDownloadTimeout_1;
	// System.TimeSpan Supabase.Storage.ClientOptions::HttpRequestTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___HttpRequestTimeout_2;
};

// System.Globalization.DateTimeStyles
struct DateTimeStyles_t68D2C41B347837759F064D04F256AC268AF50465 
{
	// System.Int32 System.Globalization.DateTimeStyles::value__
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

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Supabase.Gotrue.Session
struct Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413  : public RuntimeObject
{
	// System.String Supabase.Gotrue.Session::<AccessToken>k__BackingField
	String_t* ___U3CAccessTokenU3Ek__BackingField_0;
	// System.Int64 Supabase.Gotrue.Session::<ExpiresIn>k__BackingField
	int64_t ___U3CExpiresInU3Ek__BackingField_1;
	// System.String Supabase.Gotrue.Session::<RefreshToken>k__BackingField
	String_t* ___U3CRefreshTokenU3Ek__BackingField_2;
	// System.String Supabase.Gotrue.Session::<TokenType>k__BackingField
	String_t* ___U3CTokenTypeU3Ek__BackingField_3;
	// Supabase.Gotrue.User Supabase.Gotrue.Session::<User>k__BackingField
	User_t3CD3729F8D1F55A446ED274D4141BBEAE4D9A5B1* ___U3CUserU3Ek__BackingField_4;
	// System.DateTime Supabase.Gotrue.Session::<CreatedAt>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CCreatedAtU3Ek__BackingField_5;
};

// System.Net.WebSockets.WebSocketCloseStatus
struct WebSocketCloseStatus_tED432212F88FCCA42F59AAA6BCF82962A2CFF4DF 
{
	// System.Int32 System.Net.WebSockets.WebSocketCloseStatus::value__
	int32_t ___value___2;
};

// Supabase.Gotrue.Constants/AuthState
struct AuthState_t08754D2E0AB95596556177E5EF928EB811154E30 
{
	// System.Int32 Supabase.Gotrue.Constants/AuthState::value__
	int32_t ___value___2;
};

// Supabase.Realtime.Constants/ChannelState
struct ChannelState_t5B63F7BC93832D64591D6D9F4D34B52D9038E02D 
{
	// System.Int32 Supabase.Realtime.Constants/ChannelState::value__
	int32_t ___value___2;
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

// Supabase.Realtime.ClientOptions
struct ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E  : public RuntimeObject
{
	// System.Action`2<System.Object,System.Action`1<System.String>> Supabase.Realtime.ClientOptions::<Encode>k__BackingField
	Action_2_t1844458A74E7FBD07ADB272EC5029DE80FF1B5C4* ___U3CEncodeU3Ek__BackingField_0;
	// System.Action`2<System.String,System.Action`1<Supabase.Realtime.Socket.SocketResponse>> Supabase.Realtime.ClientOptions::<Decode>k__BackingField
	Action_2_tEB222A7224B70F62D5DD891308BEA62A65358908* ___U3CDecodeU3Ek__BackingField_1;
	// System.String Supabase.Realtime.ClientOptions::<Transport>k__BackingField
	String_t* ___U3CTransportU3Ek__BackingField_2;
	// System.TimeSpan Supabase.Realtime.ClientOptions::<Timeout>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CTimeoutU3Ek__BackingField_3;
	// System.Int32 Supabase.Realtime.ClientOptions::<EventsPerSecond>k__BackingField
	int32_t ___U3CEventsPerSecondU3Ek__BackingField_4;
	// System.TimeSpan Supabase.Realtime.ClientOptions::<HeartbeatInterval>k__BackingField
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___U3CHeartbeatIntervalU3Ek__BackingField_5;
	// System.Func`2<System.Int32,System.TimeSpan> Supabase.Realtime.ClientOptions::<ReconnectAfterInterval>k__BackingField
	Func_2_t817C40E6D2BC4CDA2D74FED0CDD51DFB672EDF9C* ___U3CReconnectAfterIntervalU3Ek__BackingField_6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Supabase.Realtime.ClientOptions::Headers
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___Headers_7;
	// Supabase.Realtime.Socket.SocketOptionsParameters Supabase.Realtime.ClientOptions::Parameters
	SocketOptionsParameters_t44CA09DBF6EDBC88A7958EB258FC8A96DCB5856F* ___Parameters_8;
	// System.Globalization.DateTimeStyles Supabase.Realtime.ClientOptions::DateTimeStyles
	int32_t ___DateTimeStyles_9;
	// System.String Supabase.Realtime.ClientOptions::<DateTimeFormat>k__BackingField
	String_t* ___U3CDateTimeFormatU3Ek__BackingField_10;
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

// Supabase.Realtime.RealtimeChannel
struct RealtimeChannel_tD455C17326FCFC6D638EC89437D93051791E4E8B  : public RuntimeObject
{
	// System.String Supabase.Realtime.RealtimeChannel::<Topic>k__BackingField
	String_t* ___U3CTopicU3Ek__BackingField_0;
	// Supabase.Realtime.Constants/ChannelState Supabase.Realtime.RealtimeChannel::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_1;
	// Supabase.Realtime.Channel.ChannelOptions Supabase.Realtime.RealtimeChannel::<Options>k__BackingField
	ChannelOptions_tAA3E649970B22F6F49A3DCD53FDE0BFF7DF96417* ___U3COptionsU3Ek__BackingField_2;
	// Supabase.Realtime.Broadcast.BroadcastOptions Supabase.Realtime.RealtimeChannel::<BroadcastOptions>k__BackingField
	BroadcastOptions_t349BDEEB2557B7771AF62658D2D2621578D6BC50* ___U3CBroadcastOptionsU3Ek__BackingField_3;
	// Supabase.Realtime.Presence.PresenceOptions Supabase.Realtime.RealtimeChannel::<PresenceOptions>k__BackingField
	PresenceOptions_t4683F14E20B066CA9ED5E377E61DDEC2B14C85D5* ___U3CPresenceOptionsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Supabase.Realtime.PostgresChanges.PostgresChangesOptions> Supabase.Realtime.RealtimeChannel::<PostgresChangesOptions>k__BackingField
	List_1_t8A8EBAE4A429437C35DF5F9FDA2B36BD593D784E* ___U3CPostgresChangesOptionsU3Ek__BackingField_5;
	// System.Boolean Supabase.Realtime.RealtimeChannel::<HasJoinedOnce>k__BackingField
	bool ___U3CHasJoinedOnceU3Ek__BackingField_6;
	// System.Boolean Supabase.Realtime.RealtimeChannel::IsSubscribed
	bool ___IsSubscribed_7;
	// Supabase.Realtime.Channel.Push Supabase.Realtime.RealtimeChannel::JoinPush
	Push_tD038B6CD82AEAA7DEEF19D95C08560932DDBAB4B* ___JoinPush_8;
	// Supabase.Realtime.Channel.Push Supabase.Realtime.RealtimeChannel::LastPush
	Push_tD038B6CD82AEAA7DEEF19D95C08560932DDBAB4B* ___LastPush_9;
	// Supabase.Realtime.RealtimeChannel/BroadcastEventHandler Supabase.Realtime.RealtimeChannel::BroadcastHandler
	BroadcastEventHandler_t34207968495BE5EA2995F471D162AE80702685F1* ___BroadcastHandler_10;
	// Supabase.Realtime.RealtimeChannel/PresenceDiffHandler Supabase.Realtime.RealtimeChannel::PresenceDiff
	PresenceDiffHandler_tDE9CEE2D3DE666E99925B577C0AA315C0AA908A3* ___PresenceDiff_11;
	// Supabase.Realtime.RealtimeChannel/PresenceSyncHandler Supabase.Realtime.RealtimeChannel::PresenceSync
	PresenceSyncHandler_t56F26E6A77D330681A38FA01837C465932062E05* ___PresenceSync_12;
	// System.Collections.Generic.List`1<Supabase.Realtime.Channel.Push> Supabase.Realtime.RealtimeChannel::_buffer
	List_1_tAE8E5893D00DDFDE909321F9DEBD228FD085CF31* ____buffer_13;
	// Supabase.Realtime.Interfaces.IRealtimeSocket Supabase.Realtime.RealtimeChannel::_socket
	RuntimeObject* ____socket_14;
	// Supabase.Realtime.Interfaces.IRealtimePresence Supabase.Realtime.RealtimeChannel::_presence
	RuntimeObject* ____presence_15;
	// Supabase.Realtime.Interfaces.IRealtimeBroadcast Supabase.Realtime.RealtimeChannel::_broadcast
	RuntimeObject* ____broadcast_16;
	// Supabase.Realtime.Exceptions.RealtimeException Supabase.Realtime.RealtimeChannel::_exception
	RealtimeException_tFE30F580F09EB6E72258C399B774BEB93E3F469E* ____exception_17;
	// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/StateChangedHandler> Supabase.Realtime.RealtimeChannel::_stateChangedHandlers
	List_1_t7BAC8F0031D93E66DB9CFF21717944560A05B6E5* ____stateChangedHandlers_18;
	// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/MessageReceivedHandler> Supabase.Realtime.RealtimeChannel::_messageReceivedHandlers
	List_1_t9E8A98878DE3210242FE03072A561DB15DD78F55* ____messageReceivedHandlers_19;
	// System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/ErrorEventHandler> Supabase.Realtime.RealtimeChannel::_errorEventHandlers
	List_1_t1E22706655245B5968C9476BF702DB70AFEE51D7* ____errorEventHandlers_20;
	// System.Collections.Generic.Dictionary`2<Supabase.Realtime.PostgresChanges.PostgresChangesOptions/ListenType,System.Collections.Generic.List`1<Supabase.Realtime.Interfaces.IRealtimeChannel/PostgresChangesHandler>> Supabase.Realtime.RealtimeChannel::_postgresChangesHandlers
	Dictionary_2_t9E3B4EE91B12A711165753097D080F7D12014FCE* ____postgresChangesHandlers_21;
	// System.Boolean Supabase.Realtime.RealtimeChannel::_hasJoinedOnce
	bool ____hasJoinedOnce_22;
	// System.Timers.Timer Supabase.Realtime.RealtimeChannel::_rejoinTimer
	Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* ____rejoinTimer_23;
	// System.Boolean Supabase.Realtime.RealtimeChannel::_isRejoining
	bool ____isRejoining_24;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
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

// Supabase.Client/<InitializeAsync>d__26
struct U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80 
{
	// System.Int32 Supabase.Client/<InitializeAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>> Supabase.Client/<InitializeAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C ___U3CU3Et__builder_1;
	// Supabase.Client Supabase.Client/<InitializeAsync>d__26::<>4__this
	Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session> Supabase.Client/<InitializeAsync>d__26::<>u__1
	TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>> Supabase.Client/<InitializeAsync>d__26::<>u__2
	TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 ___U3CU3Eu__2_4;
};

// Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>
struct AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Supabase.Realtime.RealtimeChannel>

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Supabase.Realtime.RealtimeChannel>

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Supabase.Realtime.RealtimeChannel>

// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Supabase.Realtime.RealtimeChannel>

// Supabase.Gotrue.AdminClient

// Supabase.Gotrue.AdminClient

// System.Attribute

// System.Attribute

// Postgrest.Models.BaseModel

// Postgrest.Models.BaseModel

// Postgrest.Client

// Postgrest.Client

// Supabase.Client

// Supabase.Client

// Supabase.Functions.Client

// Supabase.Functions.Client

// Supabase.Gotrue.Client

// Supabase.Gotrue.Client

// Supabase.Realtime.Client

// Supabase.Realtime.Client

// Supabase.Gotrue.ClientOptions

// Supabase.Gotrue.ClientOptions

// Supabase.DefaultSupabaseSessionHandler

// Supabase.DefaultSupabaseSessionHandler

// Supabase.Extensions.DictionaryExtensions

// Supabase.Extensions.DictionaryExtensions

// Supabase.Realtime.Socket.SocketOptionsParameters

// Supabase.Realtime.Socket.SocketOptionsParameters

// Supabase.StatelessClient

// Supabase.StatelessClient

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Supabase.SupabaseOptions

// Supabase.SupabaseOptions

// Supabase.StatelessClient/<>c__DisplayClass3_0

// Supabase.StatelessClient/<>c__DisplayClass3_0

// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>

// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session>

// System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session>

// System.Threading.Tasks.Task`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>
struct Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t58630466A661C493F8AD8B8BBD5DAE0394E5B831* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>

// System.Threading.Tasks.Task`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>
struct Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tE2C5458D8987E9CD48A4BC853B96CAB8270B42CC* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>

// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>
struct Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF1867C36AA812A32C0BE91FB67B394AE399C8932* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse>

// System.Threading.Tasks.Task`1<Supabase.Gotrue.Session>
struct Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t18C28E0CD65D175275BCB5D5F10B296C3D168692* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Supabase.Gotrue.Session>

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

// Supabase.Storage.Client

// Supabase.Storage.Client

// Microsoft.CodeAnalysis.EmbeddedAttribute

// Microsoft.CodeAnalysis.EmbeddedAttribute

// System.Text.RegularExpressions.Group
struct Group_t26371E9136D6F43782C487B63C67C5FC4F472881_StaticFields
{
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::s_emptyGroup
	Group_t26371E9136D6F43782C487B63C67C5FC4F472881* ___s_emptyGroup_3;
};

// System.Text.RegularExpressions.Group

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// System.Runtime.CompilerServices.NullableContextAttribute

// Supabase.SupabaseModel

// Supabase.SupabaseModel

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>
struct AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>
struct AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>

// Supabase.Storage.ClientOptions

// Supabase.Storage.ClientOptions

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Text.RegularExpressions.Match
struct Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F_StaticFields
{
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::<Empty>k__BackingField
	Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* ___U3CEmptyU3Ek__BackingField_17;
};

// System.Text.RegularExpressions.Match

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Supabase.Gotrue.Session

// Supabase.Gotrue.Session

// System.Net.WebSockets.WebSocketCloseStatus

// System.Net.WebSockets.WebSocketCloseStatus

// Supabase.Gotrue.Constants/AuthState

// Supabase.Gotrue.Constants/AuthState

// Postgrest.ClientOptions

// Postgrest.ClientOptions

// Supabase.Realtime.ClientOptions

// Supabase.Realtime.ClientOptions

// Supabase.Realtime.RealtimeChannel

// Supabase.Realtime.RealtimeChannel

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.Text.RegularExpressions.Regex

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

// Supabase.Client/<InitializeAsync>d__26

// Supabase.Client/<InitializeAsync>d__26

// Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>

// Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
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


// System.Void Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuthEventHandler__ctor_m9E6CC18AAA3A5F909EB5C21286BCEABD0BB5CD23_gshared (AuthEventHandler_tED86D1243F78FF1C76D8F95A5CE8F42A368721D8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0 AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::Start<Supabase.Client/<InitializeAsync>d__26>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m604D57398C0A30CD84328A980C1084AD50BD3236_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t09000EDB52BE30440649C648D0D8F589B427815E* ReadOnlyDictionary_2_get_Values_m403F7C14516837BF7D0003E3AC389449941EC29B_gshared (ReadOnlyDictionary_2_tA5E205F3BBEB6B67DBCA3C316E87352486DFF1C2* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_GetEnumerator_mAD0883BF8C99C6359DD8A7C4C1BD878E750A0F67_gshared (ValueCollection_t09000EDB52BE30440649C648D0D8F589B427815E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Supabase.Client/<InitializeAsync>d__26>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m0209D521A190B0CA5840F59DE6B58D39384234B4_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* ___1_stateMachine, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Object>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared (AsyncTaskMethodBuilder_1_tE810F083929D7952F192036D298085BD4B048AD0* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// T Supabase.Extensions.DictionaryExtensions::MergeLeft<System.Object,System.Object,System.Object>(T,System.Collections.Generic.IDictionary`2<K,V>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DictionaryExtensions_MergeLeft_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m5E537403E93459108E1F011B90F9A1956031799C_gshared (RuntimeObject* ___0_me, IDictionary_2U5BU5D_t50D9A419A7D96F5E8A533BE79EA986B47AC05026* ___1_others, const RuntimeMethod* method) ;

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<Supabase.Gotrue.User,Supabase.Gotrue.Session>::.ctor(System.Object,System.IntPtr)
inline void AuthEventHandler__ctor_mFA642F052D1BF8855535C32B6188D6A4CFE2E62A (AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B*, RuntimeObject*, intptr_t, const RuntimeMethod*))AuthEventHandler__ctor_m9E6CC18AAA3A5F909EB5C21286BCEABD0BB5CD23_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Supabase.Gotrue.ClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions__ctor_m0E75E2709891C5A98DC11E8CA909AF3E37B9FF12 (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* __this, const RuntimeMethod* method) ;
// System.String Supabase.SupabaseOptions::get_AuthUrlFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_AuthUrlFormat_mA72D73CEA8D485B9AFE0A6EFA3F6037E2F5303E7_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Supabase.Gotrue.ClientOptions::set_Url(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_Url_mB9DDFF9D3C53B869ED9A73F3B91EB85700F384BF_inline (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean Supabase.SupabaseOptions::get_AutoRefreshToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupabaseOptions_get_AutoRefreshToken_m25E50DF14D93E7A34DC5CD6C3C4A8F277A9E8F57_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Gotrue.ClientOptions::set_AutoRefreshToken(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_AutoRefreshToken_m9AEEAFD5ABBC71B4611E2A6EF0460C6A9B2780EA_inline (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Supabase.Gotrue.AdminClient::.ctor(System.String,Supabase.Gotrue.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminClient__ctor_m88AACCB19B86BF67BDB274F9CFB137320B8A5FE1 (AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458* __this, String_t* ___0_serviceKey, ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* ___1_options, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void Supabase.Gotrue.AdminClient::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdminClient_set_GetHeaders_mE7A359F1DAE7BFADA9D84EDA619F90E8BB36D130 (AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458* __this, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Supabase.SupabaseOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.String Supabase.SupabaseOptions::get_RestUrlFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_RestUrlFormat_mE08CEC5FBF1FA79EF72D9FB5A9310E2DDC86F46A_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.String Supabase.SupabaseOptions::get_RealtimeUrlFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_RealtimeUrlFormat_mDE83EB8F0D84EB927C4BF8A7C238250B741D4731_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String Supabase.SupabaseOptions::get_StorageUrlFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_StorageUrlFormat_m479B65C9FF606E1AA7DF042A63F35B28F215D8F5_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_pattern, const RuntimeMethod* method) ;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___0_input, const RuntimeMethod* method) ;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F (Group_t26371E9136D6F43782C487B63C67C5FC4F472881* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String Supabase.SupabaseOptions::get_FunctionsUrlFormat()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_FunctionsUrlFormat_mA4B7E2F0A1101566859E6C32918FA35A6DEAA3CC_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Gotrue.Client::.ctor(Supabase.Gotrue.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m38410BD2A447FF3711DF4EAFE88C641DCA3F1FAC (Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604* __this, ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* ___0_options, const RuntimeMethod* method) ;
// Supabase.Gotrue.Interfaces.IGotrueSessionPersistence`1<Supabase.Gotrue.Session> Supabase.SupabaseOptions::get_SessionHandler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SupabaseOptions_get_SessionHandler_m5586405F955CEB9AD9401968160BCC5A36C6B723_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Realtime.ClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions__ctor_mE2730ED5FA609C95AC2EDB498B1F976904BE7482 (ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Realtime.Socket.SocketOptionsParameters::set_ApiKey(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketOptionsParameters_set_ApiKey_mBB6AA03B71DCFB40241C09D427010BF8D2C172B9_inline (SocketOptionsParameters_t44CA09DBF6EDBC88A7958EB258FC8A96DCB5856F* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Supabase.Realtime.Client::.ctor(System.String,Supabase.Realtime.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mD38403B68D816A11ED626D91C3E29E073733EF2E (Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81* __this, String_t* ___0_realtimeUrl, ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* ___1_options, const RuntimeMethod* method) ;
// System.Void Postgrest.ClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, const RuntimeMethod* method) ;
// System.Void Postgrest.ClientOptions::set_Schema(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_Schema_mF2F9821D3750542504958A119F483712D4497BD3_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void Postgrest.Client::.ctor(System.String,Postgrest.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m98CE1A65950CEA483AD61CFC44F55626606246B5 (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, String_t* ___0_baseUrl, ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* ___1_options, const RuntimeMethod* method) ;
// System.Void Supabase.Functions.Client::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mF4AEAA59A2E526EB1D7143C740EAB666C2DA3F65 (Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924* __this, String_t* ___0_baseUrl, const RuntimeMethod* method) ;
// Supabase.Storage.ClientOptions Supabase.SupabaseOptions::get_StorageClientOptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* SupabaseOptions_get_StorageClientOptions_mEDF56E91D3E59650AB66E88D9C6A991083C0859F_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Storage.Client::.ctor(System.String,Supabase.Storage.ClientOptions,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_mA0E05B66E6CBCDC199C5CB2171BA4CF3103ED4DE (Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F* __this, String_t* ___0_url, ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* ___1_options, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::Create()
inline AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C AsyncTaskMethodBuilder_1_Create_m9D1A11E9BF5C3D12EA6DDC3C46B126D4868808B4 (const RuntimeMethod* method)
{
	return ((  AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m6A59453D00C0143F178809ADFD98C90E8C291ABB_gshared)(method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::Start<Supabase.Client/<InitializeAsync>d__26>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m724A38AD585416D99959C384A61BDDAE211A3722 (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m604D57398C0A30CD84328A980C1084AD50BD3236_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::get_Task()
inline Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59* AsyncTaskMethodBuilder_1_get_Task_mA8FEA35E87BCF625FCC8D233F367C3EE6A3ABFE9 (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59* (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_mEA092EC6F1324A9D694CF6056FA8583F2A2BDC89_gshared)(__this, method);
}
// Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session> Supabase.Client::get_Auth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B_inline (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) ;
// System.String Supabase.Gotrue.Session::get_AccessToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Session_get_AccessToken_m3C5C3E101E5FEE7A69C4223A9CC8B0934B044034_inline (Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* __this, const RuntimeMethod* method) ;
// Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel> Supabase.Client::get_Realtime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532_inline (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,Supabase.Realtime.RealtimeChannel>::get_Values()
inline ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0* ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD (ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0* (*) (ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA*, const RuntimeMethod*))ReadOnlyDictionary_2_get_Values_m403F7C14516837BF7D0003E3AC389449941EC29B_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,Supabase.Realtime.RealtimeChannel>::GetEnumerator()
inline RuntimeObject* ValueCollection_GetEnumerator_m3762C3D6C363147082E45527A590B1540A06C182 (ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0*, const RuntimeMethod*))ValueCollection_GetEnumerator_mAD0883BF8C99C6359DD8A7C4C1BD878E750A0F67_gshared)(__this, method);
}
// Supabase.Realtime.Interfaces.IRealtimeChannel Supabase.Realtime.RealtimeChannel::Unsubscribe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RealtimeChannel_Unsubscribe_m17A76AF736271EC4B4FBE0734372CCF1AA5E468E (RealtimeChannel_tD455C17326FCFC6D638EC89437D93051791E4E8B* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String Supabase.Core.Util::GetAssemblyVersion(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Util_GetAssemblyVersion_mED3A311B4429B692E7A009761B0C87174B0B1AD8 (Type_t* ___0_clientType, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Supabase.Gotrue.Session>::GetAwaiter()
inline TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB Task_1_GetAwaiter_m66B4210F6B671D58E439146ACF6F7B885E20A433 (Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB (*) (Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m91EAF3DEA28CD13A149E4A553E51C63D5F8C1052 (TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session>,Supabase.Client/<InitializeAsync>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_mC849CE17F5002751E144F52002EE742B539066D6 (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB* ___0_awaiter, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB*, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m0209D521A190B0CA5840F59DE6B58D39384234B4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Gotrue.Session>::GetResult()
inline Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* TaskAwaiter_1_GetResult_m1A7378DC9307F6B86D70A81755D8E73E4573C18F (TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB* __this, const RuntimeMethod* method)
{
	return ((  Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* (*) (TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Boolean Supabase.SupabaseOptions::get_AutoConnectRealtime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupabaseOptions_get_AutoConnectRealtime_m19607A4B2DA67113135BE18DA85B9262AD2A4E66_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>::GetAwaiter()
inline TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 Task_1_GetAwaiter_m05F6355DD24FCB1846F8D3E4DB269A3697C7F92E (Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 (*) (Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mA6BBC2BCC9B22277CA04E3B0BD43127FEF0E0FC1 (TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>,Supabase.Client/<InitializeAsync>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m265FA8F3F22C4C744FB7C78C1A53FC29DC7236BB (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0* ___0_awaiter, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0*, U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m0209D521A190B0CA5840F59DE6B58D39384234B4_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m3B2C4C0C23D111F26AA9E236F3D6F9261D60A588 (TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m3AFE1DFDD10CC8C0157606817643F2C0391E351F (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_mC2F74B26F5303F9F960965220E2866D777F1A5C6_gshared)(__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mD1072AB5DAAAD5A334CE96E840B60A4D8D886E2E (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_m0D83195F995F9825D7A6DCDC3835D6917C43B5A6_gshared)(__this, ___0_result, method);
}
// System.Void Supabase.Client/<InitializeAsync>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__26_MoveNext_mA2860F4208CF8146EC355EB601B993588B4634E5 (U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>>::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
inline void AsyncTaskMethodBuilder_1_SetStateMachine_mDF32944934651271F9D6FE424168889D5DEE7D62 (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*, RuntimeObject*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetStateMachine_m3BE54983634ABF5BE05200C7894AD0F9F20BDD65_gshared)(__this, ___0_stateMachine, method);
}
// System.Void Supabase.Client/<InitializeAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__26_SetStateMachine_m14B618907B1EA3021792D2F68476218ED00C4079 (U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.StatelessClient::GetAuthHeaders(System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* StatelessClient_GetAuthHeaders_m84DDA69EFE0A1C732A6E0568727D09B462F11932 (String_t* ___0_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___1_options, const RuntimeMethod* method) ;
// T Supabase.Extensions.DictionaryExtensions::MergeLeft<System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String,System.String>(T,System.Collections.Generic.IDictionary`2<K,V>[])
inline Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_me, IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* ___1_others, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*, const RuntimeMethod*))DictionaryExtensions_MergeLeft_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m5E537403E93459108E1F011B90F9A1956031799C_gshared)(___0_me, ___1_others, method);
}
// System.Void Postgrest.ClientOptions::set_Headers(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_Headers_mB8F09FE1DEE793170E45E92656F9C723B5D4E421_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) ;
// System.Void Supabase.Storage.Client::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m62791311CEAFEF109E7CF56D0C503A7F769E8C77 (Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F* __this, String_t* ___0_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, const RuntimeMethod* method) ;
// System.Void Supabase.StatelessClient/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m0301CAFCB7F644E7AED3BEEFF9F38D7D528638A6 (U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Functions.Client::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Client_set_GetHeaders_m21F22C7C570567A0D5529D083574DC12E96D670F_inline (Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924* __this, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_value, const RuntimeMethod* method) ;
// Postgrest.ClientOptions Supabase.StatelessClient::GetRestOptions(System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* StatelessClient_GetRestOptions_mA0FB09DF4C18478FBF170E622BF008A8583FEC05 (String_t* ___0_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___1_options, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Postgrest.Client::Rpc(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* Client_Rpc_m9EFEED03B693BDB5EABA20C9D814430738E448FE (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* __this, String_t* ___0_procedureName, RuntimeObject* ___1_parameters, const RuntimeMethod* method) ;
// System.Void Postgrest.Models.BaseModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseModel__ctor_m1BF420659D8FA4687AF318F5BA714131E18B58D4 (BaseModel_tE4374413865C1B08E00A0DF2E6A70F22271EAAC0* __this, const RuntimeMethod* method) ;
// System.Void Supabase.DefaultSupabaseSessionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultSupabaseSessionHandler__ctor_m77727CE0F52952D043C9464F5BA60601EBAA4D6D (DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18* __this, const RuntimeMethod* method) ;
// System.Void Supabase.Storage.ClientOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClientOptions__ctor_m01B0CDABA37A74241D4231F28201641AB489F620 (ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* __this, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m4F27137A43E90FCEE4194489DFC6D78C87D8FA28 (EmbeddedAttribute_t93FB6EDD6993A413171A70EA86752A241DEBF5BC* __this, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m2F1F4293AF9A15535EE91A94CD1FCDC4A0453618 (NullableAttribute_t503CD6B1285CFCB69054543FF50CFB8C7FA18CAB* __this, uint8_t ___0_p, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableAttribute__ctor_m7C35FE7990C89D2680E86DDFF939D79A3821B07D (NullableAttribute_t503CD6B1285CFCB69054543FF50CFB8C7FA18CAB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_p, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableContextAttribute__ctor_m1DCEB923BAA08130A7A62FE7B898C82AD169FFF0 (NullableContextAttribute_t31D418BAC97B8E3F471A1F4B0B481C92920C1B70* __this, uint8_t ___0_p, const RuntimeMethod* method) 
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
// Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session> Supabase.Client::get_Auth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____auth_0;
		return L_0;
	}
}
// System.Void Supabase.Client::set_Auth(Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_Auth_mCE01FD7E97D51CF32C71F65A9B9E705FF09C44E1 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____auth_0;
		AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* L_1 = (AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B*)il2cpp_codegen_object_new(AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AuthEventHandler__ctor_mFA642F052D1BF8855535C32B6188D6A4CFE2E62A(L_1, __this, (intptr_t)((void*)Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* >::Invoke(6 /* System.Void Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::RemoveStateChangedListener(Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<TUser,TSession>) */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_0, L_1);
		RuntimeObject* L_2 = ___0_value;
		__this->____auth_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____auth_0), (void*)L_2);
		RuntimeObject* L_3 = __this->____auth_0;
		AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* L_4 = (AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B*)il2cpp_codegen_object_new(AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AuthEventHandler__ctor_mFA642F052D1BF8855535C32B6188D6A4CFE2E62A(L_4, __this, (intptr_t)((void*)Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* >::Invoke(5 /* System.Void Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::AddStateChangedListener(Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<TUser,TSession>) */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_3, L_4);
		return;
	}
}
// Supabase.Gotrue.Interfaces.IGotrueAdminClient`1<Supabase.Gotrue.User> Supabase.Client::AdminAuth(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_AdminAuth_m09F3F20D47BC7808BA292F0F3ACB7710E7BCAE88 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, String_t* ___0_serviceKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_serviceKey;
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_1 = (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926*)il2cpp_codegen_object_new(ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ClientOptions__ctor_m0E75E2709891C5A98DC11E8CA909AF3E37B9FF12(L_1, NULL);
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_2 = L_1;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_3 = __this->____options_7;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = SupabaseOptions_get_AuthUrlFormat_mA72D73CEA8D485B9AFE0A6EFA3F6037E2F5303E7_inline(L_3, NULL);
		String_t* L_5 = __this->____supabaseUrl_5;
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_4, L_5, NULL);
		NullCheck(L_2);
		ClientOptions_set_Url_mB9DDFF9D3C53B869ED9A73F3B91EB85700F384BF_inline(L_2, L_6, NULL);
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_7 = L_2;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_8 = __this->____options_7;
		NullCheck(L_8);
		bool L_9;
		L_9 = SupabaseOptions_get_AutoRefreshToken_m25E50DF14D93E7A34DC5CD6C3C4A8F277A9E8F57_inline(L_8, NULL);
		NullCheck(L_7);
		ClientOptions_set_AutoRefreshToken_m9AEEAFD5ABBC71B4611E2A6EF0460C6A9B2780EA_inline(L_7, L_9, NULL);
		AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458* L_10 = (AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458*)il2cpp_codegen_object_new(AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		AdminClient__ctor_m88AACCB19B86BF67BDB274F9CFB137320B8A5FE1(L_10, L_0, L_7, NULL);
		AdminClient_t68E123801612E7E6B32F45F08811BA71993F8458* L_11 = L_10;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_12 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_12, __this, (intptr_t)((void*)Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		AdminClient_set_GetHeaders_mE7A359F1DAE7BFADA9D84EDA619F90E8BB36D130(L_11, L_12, NULL);
		return L_11;
	}
}
// Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel> Supabase.Client::get_Realtime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____realtime_1;
		return L_0;
	}
}
// System.Void Supabase.Client::set_Realtime(Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_Realtime_m95C4518ABE99FB1E18DADAB7A800FC88831DD6F2 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2939BF2B8688AFC71B530D93E9ED9B81154CE7BF);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____realtime_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(14 /* Supabase.Realtime.Interfaces.IRealtimeClient`2<TSocket,TChannel> Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>::Disconnect(System.Net.WebSockets.WebSocketCloseStatus,System.String) */, IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var, L_0, ((int32_t)1000), _stringLiteral2939BF2B8688AFC71B530D93E9ED9B81154CE7BF);
		RuntimeObject* L_2 = ___0_value;
		__this->____realtime_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____realtime_1), (void*)L_2);
		return;
	}
}
// Supabase.Functions.Interfaces.IFunctionsClient Supabase.Client::get_Functions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Functions_mDA457145D5CAAEAF4F622752B588EDEBB68FE2BD (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____functions_2;
		return L_0;
	}
}
// System.Void Supabase.Client::set_Functions(Supabase.Functions.Interfaces.IFunctionsClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_Functions_m80BCEEB7A9839362B2A366D1E55EC1CD44756F92 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->____functions_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____functions_2), (void*)L_0);
		return;
	}
}
// Postgrest.Interfaces.IPostgrestClient Supabase.Client::get_Postgrest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Postgrest_mEC31E22DE30C9C6AC1D63D51D2E7729BF5B1C12B (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____postgrest_3;
		return L_0;
	}
}
// System.Void Supabase.Client::set_Postgrest(Postgrest.Interfaces.IPostgrestClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_Postgrest_mE8D591162292A97F7489261D5EDCCFEE83942D9E (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->____postgrest_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postgrest_3), (void*)L_0);
		return;
	}
}
// Supabase.Storage.Interfaces.IStorageClient`2<Supabase.Storage.Bucket,Supabase.Storage.FileObject> Supabase.Client::get_Storage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Storage_mF80382856EC65DCB58CE0F03387FD4E6EF7E7ED9 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____storage_4;
		return L_0;
	}
}
// System.Void Supabase.Client::set_Storage(Supabase.Storage.Interfaces.IStorageClient`2<Supabase.Storage.Bucket,Supabase.Storage.FileObject>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_set_Storage_m75031C737152746176AE7D63B1BBC32486BB2A7E (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->____storage_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____storage_4), (void*)L_0);
		return;
	}
}
// System.Void Supabase.Client::.ctor(Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>,Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>,Supabase.Functions.Interfaces.IFunctionsClient,Postgrest.Interfaces.IPostgrestClient,Supabase.Storage.Interfaces.IStorageClient`2<Supabase.Storage.Bucket,Supabase.Storage.FileObject>,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m6743B50BCB1CBA366A01D98967130348511701DA (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_auth, RuntimeObject* ___1_realtime, RuntimeObject* ___2_functions, RuntimeObject* ___3_postgrest, RuntimeObject* ___4_storage, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___5_options, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___0_auth;
		__this->____auth_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____auth_0), (void*)L_0);
		RuntimeObject* L_1 = ___1_realtime;
		__this->____realtime_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____realtime_1), (void*)L_1);
		RuntimeObject* L_2 = ___2_functions;
		__this->____functions_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____functions_2), (void*)L_2);
		RuntimeObject* L_3 = ___3_postgrest;
		__this->____postgrest_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postgrest_3), (void*)L_3);
		RuntimeObject* L_4 = ___4_storage;
		__this->____storage_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____storage_4), (void*)L_4);
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_5 = ___5_options;
		__this->____options_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____options_7), (void*)L_5);
		return;
	}
}
// System.Void Supabase.Client::.ctor(System.String,System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m8A8919137DB852EEC309C85448E348FE5A0B9863 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, String_t* ___0_supabaseUrl, String_t* ___1_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGettableHeaders_t2FD617A5DD72E6868166948D88C0B5435B7E1E05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB684E811F37A268F0D270E0F05D78A2F472A30C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* V_6 = NULL;
	ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* V_7 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_8 = NULL;
	SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* G_B2_0 = NULL;
	Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* G_B2_1 = NULL;
	SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* G_B1_0 = NULL;
	Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* G_B1_1 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_supabaseUrl;
		__this->____supabaseUrl_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____supabaseUrl_5), (void*)L_0);
		String_t* L_1 = ___1_supabaseKey;
		__this->____supabaseKey_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____supabaseKey_6), (void*)L_1);
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_2 = ___2_options;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = __this;
			goto IL_001f;
		}
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_4 = (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8*)il2cpp_codegen_object_new(SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696(L_4, NULL);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_001f:
	{
		NullCheck(G_B2_1);
		G_B2_1->____options_7 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->____options_7), (void*)G_B2_0);
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_5 = __this->____options_7;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SupabaseOptions_get_AuthUrlFormat_mA72D73CEA8D485B9AFE0A6EFA3F6037E2F5303E7_inline(L_5, NULL);
		String_t* L_7 = ___0_supabaseUrl;
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_6, L_7, NULL);
		V_0 = L_8;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_9 = __this->____options_7;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = SupabaseOptions_get_RestUrlFormat_mE08CEC5FBF1FA79EF72D9FB5A9310E2DDC86F46A_inline(L_9, NULL);
		String_t* L_11 = ___0_supabaseUrl;
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_10, L_11, NULL);
		V_1 = L_12;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_13 = __this->____options_7;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = SupabaseOptions_get_RealtimeUrlFormat_mDE83EB8F0D84EB927C4BF8A7C238250B741D4731_inline(L_13, NULL);
		String_t* L_15 = ___0_supabaseUrl;
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_14, L_15, NULL);
		NullCheck(L_16);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_16, _stringLiteral58B716FF5428F7961E1403E6D969E605D0F27EAF, _stringLiteral587B0E053519266A1A5628C5DBE03AA33A3BBE95, NULL);
		V_2 = L_17;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_18 = __this->____options_7;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = SupabaseOptions_get_StorageUrlFormat_m479B65C9FF606E1AA7DF042A63F35B28F215D8F5_inline(L_18, NULL);
		String_t* L_20 = ___0_supabaseUrl;
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_19, L_20, NULL);
		V_3 = L_21;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_22 = __this->____options_7;
		NullCheck(L_22);
		String_t* L_23 = L_22->___Schema_0;
		V_4 = L_23;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_24 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_24, _stringLiteralB684E811F37A268F0D270E0F05D78A2F472A30C8, NULL);
		String_t* L_25 = ___0_supabaseUrl;
		NullCheck(L_24);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_26;
		L_26 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_24, L_25, NULL);
		NullCheck(L_26);
		bool L_27;
		L_27 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_26, NULL);
		if (!L_27)
		{
			goto IL_00e6;
		}
	}
	{
		String_t* L_28 = ___0_supabaseUrl;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = L_29;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31;
		L_31 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_28, L_30, NULL);
		V_8 = L_31;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = V_8;
		NullCheck(L_34);
		int32_t L_35 = 0;
		String_t* L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_36);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_36);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = L_33;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = V_8;
		NullCheck(L_39);
		int32_t L_40 = 1;
		String_t* L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_41);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_38;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = V_8;
		NullCheck(L_44);
		int32_t L_45 = 2;
		String_t* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_46);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_46);
		String_t* L_47;
		L_47 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_43, NULL);
		V_5 = L_47;
		goto IL_00f9;
	}

IL_00e6:
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_48 = __this->____options_7;
		NullCheck(L_48);
		String_t* L_49;
		L_49 = SupabaseOptions_get_FunctionsUrlFormat_mA4B7E2F0A1101566859E6C32918FA35A6DEAA3CC_inline(L_48, NULL);
		String_t* L_50 = ___0_supabaseUrl;
		String_t* L_51;
		L_51 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_49, L_50, NULL);
		V_5 = L_51;
	}

IL_00f9:
	{
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_52 = (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926*)il2cpp_codegen_object_new(ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ClientOptions__ctor_m0E75E2709891C5A98DC11E8CA909AF3E37B9FF12(L_52, NULL);
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_53 = L_52;
		String_t* L_54 = V_0;
		NullCheck(L_53);
		ClientOptions_set_Url_mB9DDFF9D3C53B869ED9A73F3B91EB85700F384BF_inline(L_53, L_54, NULL);
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_55 = L_53;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_56 = __this->____options_7;
		NullCheck(L_56);
		bool L_57;
		L_57 = SupabaseOptions_get_AutoRefreshToken_m25E50DF14D93E7A34DC5CD6C3C4A8F277A9E8F57_inline(L_56, NULL);
		NullCheck(L_55);
		ClientOptions_set_AutoRefreshToken_m9AEEAFD5ABBC71B4611E2A6EF0460C6A9B2780EA_inline(L_55, L_57, NULL);
		V_6 = L_55;
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_58 = V_6;
		Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604* L_59 = (Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604*)il2cpp_codegen_object_new(Client_tB78D19E00A90266A597EC5FFD071E191D7F6E604_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		Client__ctor_m38410BD2A447FF3711DF4EAFE88C641DCA3F1FAC(L_59, L_58, NULL);
		__this->____auth_0 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____auth_0), (void*)L_59);
		RuntimeObject* L_60 = __this->____auth_0;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_61 = __this->____options_7;
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = SupabaseOptions_get_SessionHandler_m5586405F955CEB9AD9401968160BCC5A36C6B723_inline(L_61, NULL);
		NullCheck(L_60);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::SetPersistence(Supabase.Gotrue.Interfaces.IGotrueSessionPersistence`1<TSession>) */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_60, L_62);
		RuntimeObject* L_63 = __this->____auth_0;
		AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* L_64 = (AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B*)il2cpp_codegen_object_new(AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		AuthEventHandler__ctor_mFA642F052D1BF8855535C32B6188D6A4CFE2E62A(L_64, __this, (intptr_t)((void*)Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var), NULL);
		NullCheck(L_63);
		InterfaceActionInvoker1< AuthEventHandler_t039EB1C8166A037257E4851DDAB74F6D9255D72B* >::Invoke(5 /* System.Void Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::AddStateChangedListener(Supabase.Gotrue.Interfaces.IGotrueClient`2/AuthEventHandler<TUser,TSession>) */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_63, L_64);
		RuntimeObject* L_65 = __this->____auth_0;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_66 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_66, __this, (intptr_t)((void*)Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var), NULL);
		NullCheck(L_65);
		InterfaceActionInvoker1< Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* >::Invoke(1 /* System.Void Supabase.Core.Interfaces.IGettableHeaders::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>) */, IGettableHeaders_t2FD617A5DD72E6868166948D88C0B5435B7E1E05_il2cpp_TypeInfo_var, L_65, L_66);
		ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* L_67 = (ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E*)il2cpp_codegen_object_new(ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		ClientOptions__ctor_mE2730ED5FA609C95AC2EDB498B1F976904BE7482(L_67, NULL);
		ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* L_68 = L_67;
		NullCheck(L_68);
		SocketOptionsParameters_t44CA09DBF6EDBC88A7958EB258FC8A96DCB5856F* L_69 = L_68->___Parameters_8;
		String_t* L_70 = __this->____supabaseKey_6;
		NullCheck(L_69);
		SocketOptionsParameters_set_ApiKey_mBB6AA03B71DCFB40241C09D427010BF8D2C172B9_inline(L_69, L_70, NULL);
		V_7 = L_68;
		String_t* L_71 = V_2;
		ClientOptions_t62B18132F09E22B40DB0934942106A55F8C4430E* L_72 = V_7;
		Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81* L_73 = (Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81*)il2cpp_codegen_object_new(Client_tA34E15D12E5FAD4518D9CD6BD3CCDD859F5E9E81_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Client__ctor_mD38403B68D816A11ED626D91C3E29E073733EF2E(L_73, L_71, L_72, NULL);
		__this->____realtime_1 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____realtime_1), (void*)L_73);
		String_t* L_74 = V_1;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_75 = (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*)il2cpp_codegen_object_new(ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC(L_75, NULL);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_76 = L_75;
		String_t* L_77 = V_4;
		NullCheck(L_76);
		ClientOptions_set_Schema_mF2F9821D3750542504958A119F483712D4497BD3_inline(L_76, L_77, NULL);
		Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* L_78 = (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8*)il2cpp_codegen_object_new(Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		Client__ctor_m98CE1A65950CEA483AD61CFC44F55626606246B5(L_78, L_74, L_76, NULL);
		__this->____postgrest_3 = L_78;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postgrest_3), (void*)L_78);
		RuntimeObject* L_79 = __this->____postgrest_3;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_80 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_80, __this, (intptr_t)((void*)Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var), NULL);
		NullCheck(L_79);
		InterfaceActionInvoker1< Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* >::Invoke(1 /* System.Void Supabase.Core.Interfaces.IGettableHeaders::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>) */, IGettableHeaders_t2FD617A5DD72E6868166948D88C0B5435B7E1E05_il2cpp_TypeInfo_var, L_79, L_80);
		String_t* L_81 = V_5;
		Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924* L_82 = (Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924*)il2cpp_codegen_object_new(Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		Client__ctor_mF4AEAA59A2E526EB1D7143C740EAB666C2DA3F65(L_82, L_81, NULL);
		__this->____functions_2 = L_82;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____functions_2), (void*)L_82);
		RuntimeObject* L_83 = __this->____functions_2;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_84 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_84);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_84, __this, (intptr_t)((void*)Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var), NULL);
		NullCheck(L_83);
		InterfaceActionInvoker1< Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* >::Invoke(1 /* System.Void Supabase.Core.Interfaces.IGettableHeaders::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>) */, IGettableHeaders_t2FD617A5DD72E6868166948D88C0B5435B7E1E05_il2cpp_TypeInfo_var, L_83, L_84);
		String_t* L_85 = V_3;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_86 = __this->____options_7;
		NullCheck(L_86);
		ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* L_87;
		L_87 = SupabaseOptions_get_StorageClientOptions_mEDF56E91D3E59650AB66E88D9C6A991083C0859F_inline(L_86, NULL);
		Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F* L_88 = (Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F*)il2cpp_codegen_object_new(Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F_il2cpp_TypeInfo_var);
		NullCheck(L_88);
		Client__ctor_mA0E05B66E6CBCDC199C5CB2171BA4CF3103ED4DE(L_88, L_85, L_87, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		__this->____storage_4 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____storage_4), (void*)L_88);
		RuntimeObject* L_89 = __this->____storage_4;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_90 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_90);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_90, __this, (intptr_t)((void*)Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D_RuntimeMethod_var), NULL);
		NullCheck(L_89);
		InterfaceActionInvoker1< Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* >::Invoke(1 /* System.Void Supabase.Core.Interfaces.IGettableHeaders::set_GetHeaders(System.Func`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>) */, IGettableHeaders_t2FD617A5DD72E6868166948D88C0B5435B7E1E05_il2cpp_TypeInfo_var, L_89, L_90);
		return;
	}
}
// System.Threading.Tasks.Task`1<Supabase.Interfaces.ISupabaseClient`6<Supabase.Gotrue.User,Supabase.Gotrue.Session,Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel,Supabase.Storage.Bucket,Supabase.Storage.FileObject>> Supabase.Client::InitializeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59* Client_InitializeAsync_m7FD820CF8F44346EE1A4C1C157782D151C9A6AB5 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m9D1A11E9BF5C3D12EA6DDC3C46B126D4868808B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m724A38AD585416D99959C384A61BDDAE211A3722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mA8FEA35E87BCF625FCC8D233F367C3EE6A3ABFE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C L_0;
		L_0 = AsyncTaskMethodBuilder_1_Create_m9D1A11E9BF5C3D12EA6DDC3C46B126D4868808B4(AsyncTaskMethodBuilder_1_Create_m9D1A11E9BF5C3D12EA6DDC3C46B126D4868808B4_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_1 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m724A38AD585416D99959C384A61BDDAE211A3722(L_1, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m724A38AD585416D99959C384A61BDDAE211A3722_RuntimeMethod_var);
		AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_2 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&(&V_0)->___U3CU3Et__builder_1);
		Task_1_t9E9748F54187B2119F69AF976D19C1A731451B59* L_3;
		L_3 = AsyncTaskMethodBuilder_1_get_Task_mA8FEA35E87BCF625FCC8D233F367C3EE6A3ABFE9(L_2, AsyncTaskMethodBuilder_1_get_Task_mA8FEA35E87BCF625FCC8D233F367C3EE6A3ABFE9_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Supabase.Client::Auth_StateChanged(System.Object,Supabase.Gotrue.Constants/AuthState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72 (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, RuntimeObject* ___0_sender, int32_t ___1_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8430B934DE3346C76B1D1815B81D520FA895A9CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m3762C3D6C363147082E45527A590B1540A06C182_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* G_B4_0 = NULL;
	Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	{
		int32_t L_0 = ___1_e;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0020;
			}
			case 1:
			{
				goto IL_0055;
			}
			case 2:
			{
				goto IL_0020;
			}
			case 3:
			{
				goto IL_00b1;
			}
			case 4:
			{
				goto IL_0020;
			}
			case 5:
			{
				goto IL_00b1;
			}
		}
	}
	{
		goto IL_009f;
	}

IL_0020:
	{
		RuntimeObject* L_1;
		L_1 = Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B_inline(__this, NULL);
		NullCheck(L_1);
		Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* L_2;
		L_2 = InterfaceFuncInvoker0< Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* >::Invoke(2 /* TSession Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::get_CurrentSession() */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_1);
		Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		String_t* L_4;
		L_4 = Session_get_AccessToken_m3C5C3E101E5FEE7A69C4223A9CC8B0934B044034_inline(G_B4_0, NULL);
		G_B5_0 = L_4;
	}

IL_0037:
	{
		if (!G_B5_0)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_5;
		L_5 = Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532_inline(__this, NULL);
		RuntimeObject* L_6;
		L_6 = Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B_inline(__this, NULL);
		NullCheck(L_6);
		Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* L_7;
		L_7 = InterfaceFuncInvoker0< Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* >::Invoke(2 /* TSession Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::get_CurrentSession() */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Session_get_AccessToken_m3C5C3E101E5FEE7A69C4223A9CC8B0934B044034_inline(L_7, NULL);
		NullCheck(L_5);
		InterfaceActionInvoker1< String_t* >::Invoke(16 /* System.Void Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>::SetAuth(System.String) */, IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var, L_5, L_8);
		return;
	}

IL_0055:
	{
		RuntimeObject* L_9;
		L_9 = Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532_inline(__this, NULL);
		NullCheck(L_9);
		ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA* L_10;
		L_10 = InterfaceFuncInvoker0< ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA* >::Invoke(3 /* System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,TChannel> Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>::get_Subscriptions() */, IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0* L_11;
		L_11 = ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD(L_10, ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_12;
		L_12 = Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532_inline(__this, NULL);
		NullCheck(L_12);
		ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA* L_13;
		L_13 = InterfaceFuncInvoker0< ReadOnlyDictionary_2_t8901D5835EA7C34C2C2A733DF9E270632487D1AA* >::Invoke(3 /* System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,TChannel> Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>::get_Subscriptions() */, IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var, L_12);
		NullCheck(L_13);
		ValueCollection_t311F82C22430D04CD4C6719F25E5871245388AE0* L_14;
		L_14 = ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD(L_13, ReadOnlyDictionary_2_get_Values_m2BA13836F444CA44C5BA9E2679EFCB814E96FAAD_RuntimeMethod_var);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = ValueCollection_GetEnumerator_m3762C3D6C363147082E45527A590B1540A06C182(L_14, ValueCollection_GetEnumerator_m3762C3D6C363147082E45527A590B1540A06C182_RuntimeMethod_var);
		V_0 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0095:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_16 = V_0;
					if (!L_16)
					{
						goto IL_009e;
					}
				}
				{
					RuntimeObject* L_17 = V_0;
					NullCheck(L_17);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
				}

IL_009e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008b_1;
			}

IL_007f_1:
			{
				RuntimeObject* L_18 = V_0;
				NullCheck(L_18);
				RealtimeChannel_tD455C17326FCFC6D638EC89437D93051791E4E8B* L_19;
				L_19 = InterfaceFuncInvoker0< RealtimeChannel_tD455C17326FCFC6D638EC89437D93051791E4E8B* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Supabase.Realtime.RealtimeChannel>::get_Current() */, IEnumerator_1_t8430B934DE3346C76B1D1815B81D520FA895A9CF_il2cpp_TypeInfo_var, L_18);
				NullCheck(L_19);
				RuntimeObject* L_20;
				L_20 = RealtimeChannel_Unsubscribe_m17A76AF736271EC4B4FBE0734372CCF1AA5E468E(L_19, NULL);
			}

IL_008b_1:
			{
				RuntimeObject* L_21 = V_0;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_007f_1;
				}
			}
			{
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009f:
	{
		int32_t L_23 = ___1_e;
		int32_t L_24 = L_23;
		RuntimeObject* L_25 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AuthState_t08754D2E0AB95596556177E5EF928EB811154E30_il2cpp_TypeInfo_var)), &L_24);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_26 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), L_25, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Client_Auth_StateChanged_m92B7E19DF84E84487F9E77508446B1B6757D7B72_RuntimeMethod_var)));
	}

IL_00b1:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Supabase.Client::Rpc(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* Client_Rpc_mDB1CF3089050DFE67D2F2862D9F31DADD5256CDB (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, String_t* ___0_procedureName, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPostgrestClient_tF2C94860C187F816A1DE88DA98C8DAC82429E172_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____postgrest_3;
		String_t* L_1 = ___0_procedureName;
		RuntimeObject* L_2 = ___1_parameters;
		NullCheck(L_0);
		Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* L_3;
		L_3 = InterfaceFuncInvoker2< Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79*, String_t*, RuntimeObject* >::Invoke(8 /* System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Postgrest.Interfaces.IPostgrestClient::Rpc(System.String,System.Object) */, IPostgrestClient_tF2C94860C187F816A1DE88DA98C8DAC82429E172_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.Client::GetAuthHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* Client_GetAuthHeaders_mD3DC563BA286402DBF880997BC027D3634CF1D1D (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B75051519367FF34289B53BBAF79585B3798604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* G_B6_0 = NULL;
	Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* G_B5_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = Util_GetAssemblyVersion_mED3A311B4429B692E7A009761B0C87174B0B1AD8(L_3, NULL);
		NullCheck(L_1);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_1, _stringLiteral0B75051519367FF34289B53BBAF79585B3798604, L_4, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_5 = __this->____supabaseKey_6;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		String_t* L_7 = __this->____supabaseKey_6;
		NullCheck(L_6);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_6, _stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50, L_7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0039:
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_8 = __this->____options_7;
		NullCheck(L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = L_8->___Headers_4;
		NullCheck(L_9);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_9, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, (&V_1), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = V_0;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_11, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_12, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_0098;
	}

IL_0060:
	{
		RuntimeObject* L_13;
		L_13 = Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B_inline(__this, NULL);
		NullCheck(L_13);
		Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* L_14;
		L_14 = InterfaceFuncInvoker0< Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* >::Invoke(2 /* TSession Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::get_CurrentSession() */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_13);
		Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* L_15 = L_14;
		G_B5_0 = L_15;
		if (L_15)
		{
			G_B6_0 = L_15;
			goto IL_0072;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_0077;
	}

IL_0072:
	{
		NullCheck(G_B6_0);
		String_t* L_16;
		L_16 = Session_get_AccessToken_m3C5C3E101E5FEE7A69C4223A9CC8B0934B044034_inline(G_B6_0, NULL);
		G_B7_0 = L_16;
	}

IL_0077:
	{
		String_t* L_17 = G_B7_0;
		G_B8_0 = L_17;
		if (L_17)
		{
			G_B9_0 = L_17;
			goto IL_0081;
		}
	}
	{
		String_t* L_18 = __this->____supabaseKey_6;
		G_B9_0 = L_18;
	}

IL_0081:
	{
		V_2 = G_B9_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_19 = V_0;
		String_t* L_20 = V_2;
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_20, NULL);
		NullCheck(L_19);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_19, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_21, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0098:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = V_0;
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
// System.Void Supabase.Client/<InitializeAsync>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__26_MoveNext_mA2860F4208CF8146EC355EB601B993588B4634E5 (U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_mC849CE17F5002751E144F52002EE742B539066D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m265FA8F3F22C4C744FB7C78C1A53FC29DC7236BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mD1072AB5DAAAD5A334CE96E840B60A4D8D886E2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m1A7378DC9307F6B86D70A81755D8E73E4573C18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m3B2C4C0C23D111F26AA9E236F3D6F9261D60A588_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m91EAF3DEA28CD13A149E4A553E51C63D5F8C1052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mA6BBC2BCC9B22277CA04E3B0BD43127FEF0E0FC1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m05F6355DD24FCB1846F8D3E4DB269A3697C7F92E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m66B4210F6B671D58E439146ACF6F7B885E20A433_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB V_3;
	memset((&V_3), 0, sizeof(V_3));
	TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0055_1;
			}
		}
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c2_1;
			}
		}
		{
			Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B_inline(L_4, NULL);
			NullCheck(L_5);
			Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C* L_6;
			L_6 = InterfaceFuncInvoker0< Task_1_t779A941B104F5BDD44BFB1928830ED7DC458F54C* >::Invoke(13 /* System.Threading.Tasks.Task`1<TSession> Supabase.Gotrue.Interfaces.IGotrueClient`2<Supabase.Gotrue.User,Supabase.Gotrue.Session>::RetrieveSessionAsync() */, IGotrueClient_2_t5D0F078B83941860C79C8D192AD9DE976E7AF73C_il2cpp_TypeInfo_var, L_5);
			NullCheck(L_6);
			TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB L_7;
			L_7 = Task_1_GetAwaiter_m66B4210F6B671D58E439146ACF6F7B885E20A433(L_6, Task_1_GetAwaiter_m66B4210F6B671D58E439146ACF6F7B885E20A433_RuntimeMethod_var);
			V_3 = L_7;
			bool L_8;
			L_8 = TaskAwaiter_1_get_IsCompleted_m91EAF3DEA28CD13A149E4A553E51C63D5F8C1052((&V_3), TaskAwaiter_1_get_IsCompleted_m91EAF3DEA28CD13A149E4A553E51C63D5F8C1052_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0071_1;
			}
		}
		{
			int32_t L_9 = 0;
			V_0 = L_9;
			__this->___U3CU3E1__state_0 = L_9;
			TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB L_10 = V_3;
			__this->___U3CU3Eu__1_3 = L_10;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_11 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_mC849CE17F5002751E144F52002EE742B539066D6(L_11, (&V_3), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_mC849CE17F5002751E144F52002EE742B539066D6_RuntimeMethod_var);
			goto IL_0118;
		}

IL_0055_1:
		{
			TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB L_12 = __this->___U3CU3Eu__1_3;
			V_3 = L_12;
			TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB* L_13 = (TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_13, sizeof(TaskAwaiter_1_t3DFD264DF403B88595E1368CC2065234406888AB));
			int32_t L_14 = (-1);
			V_0 = L_14;
			__this->___U3CU3E1__state_0 = L_14;
		}

IL_0071_1:
		{
			Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* L_15;
			L_15 = TaskAwaiter_1_GetResult_m1A7378DC9307F6B86D70A81755D8E73E4573C18F((&V_3), TaskAwaiter_1_GetResult_m1A7378DC9307F6B86D70A81755D8E73E4573C18F_RuntimeMethod_var);
			Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* L_16 = V_1;
			NullCheck(L_16);
			SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_17 = L_16->____options_7;
			NullCheck(L_17);
			bool L_18;
			L_18 = SupabaseOptions_get_AutoConnectRealtime_m19607A4B2DA67113135BE18DA85B9262AD2A4E66_inline(L_17, NULL);
			if (!L_18)
			{
				goto IL_00e7_1;
			}
		}
		{
			Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* L_19 = V_1;
			NullCheck(L_19);
			RuntimeObject* L_20;
			L_20 = Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532_inline(L_19, NULL);
			NullCheck(L_20);
			Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3* L_21;
			L_21 = InterfaceFuncInvoker0< Task_1_t94D704F3178B51EDEEAA45170444A35D541088C3* >::Invoke(13 /* System.Threading.Tasks.Task`1<Supabase.Realtime.Interfaces.IRealtimeClient`2<TSocket,TChannel>> Supabase.Realtime.Interfaces.IRealtimeClient`2<Supabase.Realtime.RealtimeSocket,Supabase.Realtime.RealtimeChannel>::ConnectAsync() */, IRealtimeClient_2_tE966C64DD2403C6342D79BB310F4B0F35D1B172D_il2cpp_TypeInfo_var, L_20);
			NullCheck(L_21);
			TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 L_22;
			L_22 = Task_1_GetAwaiter_m05F6355DD24FCB1846F8D3E4DB269A3697C7F92E(L_21, Task_1_GetAwaiter_m05F6355DD24FCB1846F8D3E4DB269A3697C7F92E_RuntimeMethod_var);
			V_4 = L_22;
			bool L_23;
			L_23 = TaskAwaiter_1_get_IsCompleted_mA6BBC2BCC9B22277CA04E3B0BD43127FEF0E0FC1((&V_4), TaskAwaiter_1_get_IsCompleted_mA6BBC2BCC9B22277CA04E3B0BD43127FEF0E0FC1_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_00df_1;
			}
		}
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->___U3CU3E1__state_0 = L_24;
			TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 L_25 = V_4;
			__this->___U3CU3Eu__2_4 = L_25;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_4))->___m_task_0), (void*)NULL);
			AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_26 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&__this->___U3CU3Et__builder_1);
			il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m265FA8F3F22C4C744FB7C78C1A53FC29DC7236BB(L_26, (&V_4), __this, AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0_TisU3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80_m265FA8F3F22C4C744FB7C78C1A53FC29DC7236BB_RuntimeMethod_var);
			goto IL_0118;
		}

IL_00c2_1:
		{
			TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0 L_27 = __this->___U3CU3Eu__2_4;
			V_4 = L_27;
			TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0* L_28 = (TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0*)(&__this->___U3CU3Eu__2_4);
			il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t93B09F4B60A052E8AB19B6F7AD079CFCB33489A0));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->___U3CU3E1__state_0 = L_29;
		}

IL_00df_1:
		{
			RuntimeObject* L_30;
			L_30 = TaskAwaiter_1_GetResult_m3B2C4C0C23D111F26AA9E236F3D6F9261D60A588((&V_4), TaskAwaiter_1_GetResult_m3B2C4C0C23D111F26AA9E236F3D6F9261D60A588_RuntimeMethod_var);
		}

IL_00e7_1:
		{
			Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* L_31 = V_1;
			V_2 = L_31;
			goto IL_0104;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00eb;
		}
		throw e;
	}

CATCH_00eb:
	{// begin catch(System.Exception)
		Exception_t* L_32 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_5 = L_32;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_33 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_34 = V_5;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var)));
		AsyncTaskMethodBuilder_1_SetException_m3AFE1DFDD10CC8C0157606817643F2C0391E351F(L_33, L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m3AFE1DFDD10CC8C0157606817643F2C0391E351F_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0118;
	}// end catch (depth: 1)

IL_0104:
	{
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_35 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_36 = V_2;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetResult_mD1072AB5DAAAD5A334CE96E840B60A4D8D886E2E(L_35, L_36, AsyncTaskMethodBuilder_1_SetResult_mD1072AB5DAAAD5A334CE96E840B60A4D8D886E2E_RuntimeMethod_var);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__26_MoveNext_mA2860F4208CF8146EC355EB601B993588B4634E5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80*>(__this + _offset);
	U3CInitializeAsyncU3Ed__26_MoveNext_mA2860F4208CF8146EC355EB601B993588B4634E5(_thisAdjusted, method);
}
// System.Void Supabase.Client/<InitializeAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__26_SetStateMachine_m14B618907B1EA3021792D2F68476218ED00C4079 (U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetStateMachine_mDF32944934651271F9D6FE424168889D5DEE7D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C* L_0 = (AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t640B89EA9E0BD5788E06FAC6AB4289ECC9A19B2C_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_SetStateMachine_mDF32944934651271F9D6FE424168889D5DEE7D62(L_0, L_1, AsyncTaskMethodBuilder_1_SetStateMachine_mDF32944934651271F9D6FE424168889D5DEE7D62_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeAsyncU3Ed__26_SetStateMachine_m14B618907B1EA3021792D2F68476218ED00C4079_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeAsyncU3Ed__26_t853FD3AF095D6647B84C1294019BA32CF150FC80*>(__this + _offset);
	U3CInitializeAsyncU3Ed__26_SetStateMachine_m14B618907B1EA3021792D2F68476218ED00C4079(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Supabase.DefaultSupabaseSessionHandler::SaveSession(Supabase.Gotrue.Session)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultSupabaseSessionHandler_SaveSession_mE6D9ACCC7D149D00EE037F0F07B7A24CE533C8DF (DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18* __this, Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* ___0_session, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Supabase.DefaultSupabaseSessionHandler::DestroySession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultSupabaseSessionHandler_DestroySession_m2C2BC2F2CC944B5F76C444C434B83FABEAB3A594 (DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Supabase.Gotrue.Session Supabase.DefaultSupabaseSessionHandler::LoadSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* DefaultSupabaseSessionHandler_LoadSession_m8C625FE48069317066FAB9C33677F449119A550A (DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18* __this, const RuntimeMethod* method) 
{
	{
		return (Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413*)NULL;
	}
}
// System.Void Supabase.DefaultSupabaseSessionHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultSupabaseSessionHandler__ctor_m77727CE0F52952D043C9464F5BA60601EBAA4D6D (DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18* __this, const RuntimeMethod* method) 
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
// Supabase.Gotrue.ClientOptions Supabase.StatelessClient::GetAuthOptions(System.String,System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* StatelessClient_GetAuthOptions_mA8B4E135E43B55F8560A1D9EF6265725D92047AF (String_t* ___0_supabaseUrl, String_t* ___1_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_0 = ___2_options;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_1 = (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8*)il2cpp_codegen_object_new(SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696(L_1, NULL);
		___2_options = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___1_supabaseKey;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_3 = ___2_options;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = StatelessClient_GetAuthHeaders_m84DDA69EFE0A1C732A6E0568727D09B462F11932(L_2, L_3, NULL);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_5 = (IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)SZArrayNew(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var, (uint32_t)1);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_6 = L_5;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_7 = ___2_options;
		NullCheck(L_7);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = L_7->___Headers_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9;
		L_9 = DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D(L_4, L_6, DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		V_0 = L_9;
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_10 = (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926*)il2cpp_codegen_object_new(ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ClientOptions__ctor_m0E75E2709891C5A98DC11E8CA909AF3E37B9FF12(L_10, NULL);
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_11 = L_10;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_12 = ___2_options;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = SupabaseOptions_get_AuthUrlFormat_mA72D73CEA8D485B9AFE0A6EFA3F6037E2F5303E7_inline(L_12, NULL);
		String_t* L_14 = ___0_supabaseUrl;
		String_t* L_15;
		L_15 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_13, L_14, NULL);
		NullCheck(L_11);
		ClientOptions_set_Url_mB9DDFF9D3C53B869ED9A73F3B91EB85700F384BF_inline(L_11, L_15, NULL);
		ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* L_16 = L_11;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = V_0;
		NullCheck(L_16);
		L_16->___Headers_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___Headers_1), (void*)L_17);
		return L_16;
	}
}
// Postgrest.ClientOptions Supabase.StatelessClient::GetRestOptions(System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* StatelessClient_GetRestOptions_mA0FB09DF4C18478FBF170E622BF008A8583FEC05 (String_t* ___0_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_0 = ___1_options;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_1 = (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8*)il2cpp_codegen_object_new(SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696(L_1, NULL);
		___1_options = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___0_supabaseKey;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_3 = ___1_options;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = StatelessClient_GetAuthHeaders_m84DDA69EFE0A1C732A6E0568727D09B462F11932(L_2, L_3, NULL);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_5 = (IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)SZArrayNew(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var, (uint32_t)1);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_6 = L_5;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_7 = ___1_options;
		NullCheck(L_7);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = L_7->___Headers_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9;
		L_9 = DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D(L_4, L_6, DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		V_0 = L_9;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_10 = (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7*)il2cpp_codegen_object_new(ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ClientOptions__ctor_m6A211222B9047A0A50B0582BC08F8E668FE2DABC(L_10, NULL);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_11 = L_10;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_12 = ___1_options;
		NullCheck(L_12);
		String_t* L_13 = L_12->___Schema_0;
		NullCheck(L_11);
		ClientOptions_set_Schema_mF2F9821D3750542504958A119F483712D4497BD3_inline(L_11, L_13, NULL);
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_14 = L_11;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_15 = V_0;
		NullCheck(L_14);
		ClientOptions_set_Headers_mB8F09FE1DEE793170E45E92656F9C723B5D4E421_inline(L_14, L_15, NULL);
		return L_14;
	}
}
// Supabase.Storage.Interfaces.IStorageClient`2<Supabase.Storage.Bucket,Supabase.Storage.FileObject> Supabase.StatelessClient::Storage(System.String,System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatelessClient_Storage_mCD5134ED5A37B4A8E0F317187862DED3AB8BDC63 (String_t* ___0_supabaseUrl, String_t* ___1_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_0 = ___2_options;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_1 = (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8*)il2cpp_codegen_object_new(SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696(L_1, NULL);
		___2_options = L_1;
	}

IL_000a:
	{
		String_t* L_2 = ___1_supabaseKey;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_3 = ___2_options;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = StatelessClient_GetAuthHeaders_m84DDA69EFE0A1C732A6E0568727D09B462F11932(L_2, L_3, NULL);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_5 = (IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)SZArrayNew(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var, (uint32_t)1);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_6 = L_5;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_7 = ___2_options;
		NullCheck(L_7);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_8 = L_7->___Headers_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9;
		L_9 = DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D(L_4, L_6, DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		V_0 = L_9;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_10 = ___2_options;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = SupabaseOptions_get_StorageUrlFormat_m479B65C9FF606E1AA7DF042A63F35B28F215D8F5_inline(L_10, NULL);
		String_t* L_12 = ___0_supabaseUrl;
		String_t* L_13;
		L_13 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_11, L_12, NULL);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = V_0;
		Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F* L_15 = (Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F*)il2cpp_codegen_object_new(Client_t3EE017D9519218ACFCB55A79063BBF0154F3650F_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Client__ctor_m62791311CEAFEF109E7CF56D0C503A7F769E8C77(L_15, L_13, L_14, NULL);
		return L_15;
	}
}
// Supabase.Functions.Interfaces.IFunctionsClient Supabase.StatelessClient::Functions(System.String,System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatelessClient_Functions_m35122A2BBE651B086F7DF6CA689495B245621F17 (String_t* ___0_supabaseUrl, String_t* ___1_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___2_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CFunctionsU3Eb__0_mC8A99C4D6E34BC34BA004E5A7B4DAFF08C43FEFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0588D6A180756A9E2D3048B2E9EDF0B0B9A3BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* L_0 = (U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m0301CAFCB7F644E7AED3BEEFF9F38D7D528638A6(L_0, NULL);
		V_0 = L_0;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_1 = ___2_options;
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_2 = (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8*)il2cpp_codegen_object_new(SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696(L_2, NULL);
		___2_options = L_2;
	}

IL_0010:
	{
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_3, _stringLiteral4B0588D6A180756A9E2D3048B2E9EDF0B0B9A3BA, NULL);
		String_t* L_4 = ___0_supabaseUrl;
		NullCheck(L_3);
		Match_tFBEBCF225BD8EA17BCE6CE3FE5C1BD8E3074105F* L_5;
		L_5 = Regex_Match_m58565ECF23ACCD2CA77D6F10A6A182B03CF0FF84(L_3, L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = Group_get_Success_m4E0238EE4B1E7F927E2AF13E2E5901BCA92BE62F(L_5, NULL);
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_7 = ___0_supabaseUrl;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_7, L_9, NULL);
		V_2 = L_10;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = 0;
		String_t* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralA95E3BEBC3FB46B77F0AB74E7386D40B1D883D44);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19 = 1;
		String_t* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_2;
		NullCheck(L_23);
		int32_t L_24 = 2;
		String_t* L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_22, NULL);
		V_1 = L_26;
		goto IL_0076;
	}

IL_0069:
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_27 = ___2_options;
		NullCheck(L_27);
		String_t* L_28;
		L_28 = SupabaseOptions_get_FunctionsUrlFormat_mA4B7E2F0A1101566859E6C32918FA35A6DEAA3CC_inline(L_27, NULL);
		String_t* L_29 = ___0_supabaseUrl;
		String_t* L_30;
		L_30 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_28, L_29, NULL);
		V_1 = L_30;
	}

IL_0076:
	{
		U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* L_31 = V_0;
		String_t* L_32 = ___1_supabaseKey;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_33 = ___2_options;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_34;
		L_34 = StatelessClient_GetAuthHeaders_m84DDA69EFE0A1C732A6E0568727D09B462F11932(L_32, L_33, NULL);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_35 = (IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3*)SZArrayNew(IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3_il2cpp_TypeInfo_var, (uint32_t)1);
		IDictionary_2U5BU5D_t248DF1D3388705914731A0E284E0A2F6B6AE24F3* L_36 = L_35;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_37 = ___2_options;
		NullCheck(L_37);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_38 = L_37->___Headers_4;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39;
		L_39 = DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D(L_34, L_36, DictionaryExtensions_MergeLeft_TisDictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_TisString_t_TisString_t_mDDBCFB102CF302D88122321DBE4980B9DD7F403D_RuntimeMethod_var);
		NullCheck(L_31);
		L_31->___headers_0 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_31->___headers_0), (void*)L_39);
		String_t* L_40 = V_1;
		Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924* L_41 = (Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924*)il2cpp_codegen_object_new(Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Client__ctor_mF4AEAA59A2E526EB1D7143C740EAB666C2DA3F65(L_41, L_40, NULL);
		Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924* L_42 = L_41;
		U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* L_43 = V_0;
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_44 = (Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627*)il2cpp_codegen_object_new(Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		Func_1__ctor_m814B8E7C54894711132601334E53D9A14E4DA16B(L_44, L_43, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CFunctionsU3Eb__0_mC8A99C4D6E34BC34BA004E5A7B4DAFF08C43FEFC_RuntimeMethod_var), NULL);
		NullCheck(L_42);
		Client_set_GetHeaders_m21F22C7C570567A0D5529D083574DC12E96D670F_inline(L_42, L_44, NULL);
		return L_42;
	}
}
// System.Threading.Tasks.Task`1<Postgrest.Responses.BaseResponse> Supabase.StatelessClient::Rpc(System.String,System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* StatelessClient_Rpc_m2AA5F30D7873CCC96BD7870E5C5959A37AC05C4A (String_t* ___0_supabaseUrl, String_t* ___1_supabaseKey, String_t* ___2_procedureName, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___3_parameters, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___4_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_0 = ___4_options;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_1 = (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8*)il2cpp_codegen_object_new(SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696(L_1, NULL);
		___4_options = L_1;
	}

IL_000b:
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_2 = ___4_options;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SupabaseOptions_get_RestUrlFormat_mE08CEC5FBF1FA79EF72D9FB5A9310E2DDC86F46A_inline(L_2, NULL);
		String_t* L_4 = ___0_supabaseUrl;
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(L_3, L_4, NULL);
		String_t* L_6 = ___1_supabaseKey;
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_7 = ___4_options;
		ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* L_8;
		L_8 = StatelessClient_GetRestOptions_mA0FB09DF4C18478FBF170E622BF008A8583FEC05(L_6, L_7, NULL);
		Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8* L_9 = (Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8*)il2cpp_codegen_object_new(Client_tCBF479155AE68B493E5C9EB16501A70C14E5AAC8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Client__ctor_m98CE1A65950CEA483AD61CFC44F55626606246B5(L_9, L_5, L_8, NULL);
		String_t* L_10 = ___2_procedureName;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = ___3_parameters;
		NullCheck(L_9);
		Task_1_tBC43BF09E680D5980D93E2E8B95FD6DBF2A87D79* L_12;
		L_12 = Client_Rpc_m9EFEED03B693BDB5EABA20C9D814430738E448FE(L_9, L_10, L_11, NULL);
		return L_12;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.StatelessClient::GetAuthHeaders(System.String,Supabase.SupabaseOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* StatelessClient_GetAuthHeaders_m84DDA69EFE0A1C732A6E0568727D09B462F11932 (String_t* ___0_supabaseKey, SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B75051519367FF34289B53BBAF79585B3798604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = Util_GetAssemblyVersion_mED3A311B4429B692E7A009761B0C87174B0B1AD8(L_3, NULL);
		NullCheck(L_1);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_1, _stringLiteral0B75051519367FF34289B53BBAF79585B3798604, L_4, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		String_t* L_5 = ___0_supabaseKey;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = V_0;
		String_t* L_7 = ___0_supabaseKey;
		NullCheck(L_6);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_6, _stringLiteral2026E6291795A6F7CBD277311B6F00E4CD423A50, L_7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_002f:
	{
		SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* L_8 = ___1_options;
		NullCheck(L_8);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = L_8->___Headers_4;
		NullCheck(L_9);
		bool L_10;
		L_10 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_9, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, (&V_1), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_0051;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = V_0;
		String_t* L_12 = V_1;
		NullCheck(L_11);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_11, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_12, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		goto IL_0067;
	}

IL_0051:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_13 = V_0;
		String_t* L_14 = ___0_supabaseKey;
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC2DA60AE96E2C9EF3EAF20897A5AA957AFDF64EC, L_14, NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_13, _stringLiteral9D5A3AE3D2B0B5E5AF5AB489000D9B88FA11E907, L_15, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0067:
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_16 = V_0;
		return L_16;
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
// System.Void Supabase.StatelessClient/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m0301CAFCB7F644E7AED3BEEFF9F38D7D528638A6 (U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> Supabase.StatelessClient/<>c__DisplayClass3_0::<Functions>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* U3CU3Ec__DisplayClass3_0_U3CFunctionsU3Eb__0_mC8A99C4D6E34BC34BA004E5A7B4DAFF08C43FEFC (U3CU3Ec__DisplayClass3_0_t4760B2913E3182BB0203836F1584C78BCC6AF27D* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___headers_0;
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
// System.Void Supabase.SupabaseModel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseModel__ctor_mBAEEB3D4DDA5BA3146E0A69EC62591B3F4598A63 (SupabaseModel_tD2054D441CECAFCF99DAE1CD4A70873340F7A998* __this, const RuntimeMethod* method) 
{
	{
		BaseModel__ctor_m1BF420659D8FA4687AF318F5BA714131E18B58D4(__this, NULL);
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
// System.Boolean Supabase.SupabaseOptions::get_AutoRefreshToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupabaseOptions_get_AutoRefreshToken_m25E50DF14D93E7A34DC5CD6C3C4A8F277A9E8F57 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAutoRefreshTokenU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_AutoRefreshToken(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_AutoRefreshToken_m8696A843E4E127CF135E52425D63B6D6649154F2 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CAutoRefreshTokenU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean Supabase.SupabaseOptions::get_AutoConnectRealtime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SupabaseOptions_get_AutoConnectRealtime_m19607A4B2DA67113135BE18DA85B9262AD2A4E66 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAutoConnectRealtimeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_AutoConnectRealtime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_AutoConnectRealtime_m5DF7DDA5A22B3FE1B0285A4F007AF07B9886821B (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CAutoConnectRealtimeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Supabase.Gotrue.Interfaces.IGotrueSessionPersistence`1<Supabase.Gotrue.Session> Supabase.SupabaseOptions::get_SessionHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SupabaseOptions_get_SessionHandler_m5586405F955CEB9AD9401968160BCC5A36C6B723 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSessionHandlerU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_SessionHandler(Supabase.Gotrue.Interfaces.IGotrueSessionPersistence`1<Supabase.Gotrue.Session>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_SessionHandler_mC4946A24435C5BDA103828C91BEAA68AEFBD4F5B (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CSessionHandlerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionHandlerU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Supabase.Storage.ClientOptions Supabase.SupabaseOptions::get_StorageClientOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* SupabaseOptions_get_StorageClientOptions_mEDF56E91D3E59650AB66E88D9C6A991083C0859F (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* L_0 = __this->___U3CStorageClientOptionsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_StorageClientOptions(Supabase.Storage.ClientOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_StorageClientOptions_m241E02C18EBF5921EF3055D316ADC7B7A7AC3B27 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* ___0_value, const RuntimeMethod* method) 
{
	{
		ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* L_0 = ___0_value;
		__this->___U3CStorageClientOptionsU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageClientOptionsU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Supabase.SupabaseOptions::get_AuthUrlFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_AuthUrlFormat_mA72D73CEA8D485B9AFE0A6EFA3F6037E2F5303E7 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthUrlFormatU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_AuthUrlFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_AuthUrlFormat_mC1CC2367ADC84ACAFE9EBCA11884355C89B0E41C (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CAuthUrlFormatU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthUrlFormatU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String Supabase.SupabaseOptions::get_RestUrlFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_RestUrlFormat_mE08CEC5FBF1FA79EF72D9FB5A9310E2DDC86F46A (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRestUrlFormatU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_RestUrlFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_RestUrlFormat_m75C761E2C04C449325C00356C2E0879628121189 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRestUrlFormatU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRestUrlFormatU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// System.String Supabase.SupabaseOptions::get_RealtimeUrlFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_RealtimeUrlFormat_mDE83EB8F0D84EB927C4BF8A7C238250B741D4731 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRealtimeUrlFormatU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_RealtimeUrlFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_RealtimeUrlFormat_m412B32DEDFF7B127720B738B3ECBE9694732F890 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CRealtimeUrlFormatU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRealtimeUrlFormatU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.String Supabase.SupabaseOptions::get_StorageUrlFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_StorageUrlFormat_m479B65C9FF606E1AA7DF042A63F35B28F215D8F5 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CStorageUrlFormatU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_StorageUrlFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_StorageUrlFormat_m47705F06832B476F8DABA624F0C4189DDD78CFC9 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CStorageUrlFormatU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageUrlFormatU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.String Supabase.SupabaseOptions::get_FunctionsUrlFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_FunctionsUrlFormat_mA4B7E2F0A1101566859E6C32918FA35A6DEAA3CC (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFunctionsUrlFormatU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Supabase.SupabaseOptions::set_FunctionsUrlFormat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions_set_FunctionsUrlFormat_mE5DED2AD551B053F03CBAE2C47C4B2476DE2B4DB (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CFunctionsUrlFormatU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFunctionsUrlFormatU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// System.Void Supabase.SupabaseOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupabaseOptions__ctor_mAC746E5110FBDF51986D2E3C3E86C2A90761A696 (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A78316CAFD286E8F66D1F4982FA2CBBBE6C5FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5479C8C80E22F0300B7B582DAD1ABF8D200DC5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9042DB96F30E178E24E9398022FFB45EB22409EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAE9ECD98A34C76C0C52667C85AD3110805F0D61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AE1A25F0580CF495FD4825DB40A6A1BC65B533);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___Schema_0 = _stringLiteral934962903D946CC131DF8E5E4E575453098EEF43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Schema_0), (void*)_stringLiteral934962903D946CC131DF8E5E4E575453098EEF43);
		__this->___U3CAutoRefreshTokenU3Ek__BackingField_1 = (bool)1;
		DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18* L_0 = (DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18*)il2cpp_codegen_object_new(DefaultSupabaseSessionHandler_t16E24C1E3D5B54D7D81F65EE3A68B489C259DF18_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultSupabaseSessionHandler__ctor_m77727CE0F52952D043C9464F5BA60601EBAA4D6D(L_0, NULL);
		__this->___U3CSessionHandlerU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSessionHandlerU3Ek__BackingField_3), (void*)L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_1, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___Headers_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_4), (void*)L_1);
		ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* L_2 = (ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965*)il2cpp_codegen_object_new(ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ClientOptions__ctor_m01B0CDABA37A74241D4231F28201641AB489F620(L_2, NULL);
		__this->___U3CStorageClientOptionsU3Ek__BackingField_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageClientOptionsU3Ek__BackingField_5), (void*)L_2);
		__this->___U3CAuthUrlFormatU3Ek__BackingField_6 = _stringLiteralF0AE1A25F0580CF495FD4825DB40A6A1BC65B533;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAuthUrlFormatU3Ek__BackingField_6), (void*)_stringLiteralF0AE1A25F0580CF495FD4825DB40A6A1BC65B533);
		__this->___U3CRestUrlFormatU3Ek__BackingField_7 = _stringLiteralCAE9ECD98A34C76C0C52667C85AD3110805F0D61;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRestUrlFormatU3Ek__BackingField_7), (void*)_stringLiteralCAE9ECD98A34C76C0C52667C85AD3110805F0D61);
		__this->___U3CRealtimeUrlFormatU3Ek__BackingField_8 = _stringLiteral02A78316CAFD286E8F66D1F4982FA2CBBBE6C5FB;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRealtimeUrlFormatU3Ek__BackingField_8), (void*)_stringLiteral02A78316CAFD286E8F66D1F4982FA2CBBBE6C5FB);
		__this->___U3CStorageUrlFormatU3Ek__BackingField_9 = _stringLiteral9042DB96F30E178E24E9398022FFB45EB22409EF;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageUrlFormatU3Ek__BackingField_9), (void*)_stringLiteral9042DB96F30E178E24E9398022FFB45EB22409EF);
		__this->___U3CFunctionsUrlFormatU3Ek__BackingField_10 = _stringLiteral5479C8C80E22F0300B7B582DAD1ABF8D200DC5C7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFunctionsUrlFormatU3Ek__BackingField_10), (void*)_stringLiteral5479C8C80E22F0300B7B582DAD1ABF8D200DC5C7);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_AuthUrlFormat_mA72D73CEA8D485B9AFE0A6EFA3F6037E2F5303E7_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAuthUrlFormatU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_Url_mB9DDFF9D3C53B869ED9A73F3B91EB85700F384BF_inline (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUrlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupabaseOptions_get_AutoRefreshToken_m25E50DF14D93E7A34DC5CD6C3C4A8F277A9E8F57_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAutoRefreshTokenU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_AutoRefreshToken_m9AEEAFD5ABBC71B4611E2A6EF0460C6A9B2780EA_inline (ClientOptions_tD2437C39379810F88080AE6E5AF22ED17D088926* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CAutoRefreshTokenU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_RestUrlFormat_mE08CEC5FBF1FA79EF72D9FB5A9310E2DDC86F46A_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRestUrlFormatU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_RealtimeUrlFormat_mDE83EB8F0D84EB927C4BF8A7C238250B741D4731_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CRealtimeUrlFormatU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_StorageUrlFormat_m479B65C9FF606E1AA7DF042A63F35B28F215D8F5_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CStorageUrlFormatU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SupabaseOptions_get_FunctionsUrlFormat_mA4B7E2F0A1101566859E6C32918FA35A6DEAA3CC_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CFunctionsUrlFormatU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SupabaseOptions_get_SessionHandler_m5586405F955CEB9AD9401968160BCC5A36C6B723_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CSessionHandlerU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SocketOptionsParameters_set_ApiKey_mBB6AA03B71DCFB40241C09D427010BF8D2C172B9_inline (SocketOptionsParameters_t44CA09DBF6EDBC88A7958EB258FC8A96DCB5856F* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CApiKeyU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CApiKeyU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_Schema_mF2F9821D3750542504958A119F483712D4497BD3_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CSchemaU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSchemaU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* SupabaseOptions_get_StorageClientOptions_mEDF56E91D3E59650AB66E88D9C6A991083C0859F_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		ClientOptions_tFF4F227C627E12FA25BBD7025F0E2FE2B65A7965* L_0 = __this->___U3CStorageClientOptionsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Auth_m7F5616619A5358B175737CA160D8D54A1025786B_inline (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____auth_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Session_get_AccessToken_m3C5C3E101E5FEE7A69C4223A9CC8B0934B044034_inline (Session_tEE9BC6BFA19F61D86F522A8AA5DE02682266F413* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CAccessTokenU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Client_get_Realtime_m45DA51B0C7D1C31085733820155C32EA68470532_inline (Client_tB81F63068DD8973E2F8CFC433BE7BB5921789EE5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____realtime_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SupabaseOptions_get_AutoConnectRealtime_m19607A4B2DA67113135BE18DA85B9262AD2A4E66_inline (SupabaseOptions_t2A9BAB3ABEF987004D5BC17B948C024BA1880AF8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAutoConnectRealtimeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ClientOptions_set_Headers_mB8F09FE1DEE793170E45E92656F9C723B5D4E421_inline (ClientOptions_t4921958739F6450CF45ADC7B7AC4C76925DDF2C7* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_value, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_value;
		__this->___U3CHeadersU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CHeadersU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Client_set_GetHeaders_m21F22C7C570567A0D5529D083574DC12E96D670F_inline (Client_tF50EC8F65D26BEF9D3C970F98887EC63B1748924* __this, Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* ___0_value, const RuntimeMethod* method) 
{
	{
		Func_1_tDF56F0FBA686CAC5C4C234A701F97D1FCBB2C627* L_0 = ___0_value;
		__this->___U3CGetHeadersU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGetHeadersU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
