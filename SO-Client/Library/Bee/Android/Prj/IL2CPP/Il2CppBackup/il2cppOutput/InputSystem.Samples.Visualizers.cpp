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

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>
struct Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D;
// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
// System.Action`2<System.Object,System.Int32Enum>
struct Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>>
struct Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]>
struct Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout>
struct Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String>
struct Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type>
struct Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D;
// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout>
struct Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString>
struct HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>
struct List_1_tE1DF165936F3562084DB454140315041796A957F;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>
struct List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>
struct List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher>
struct List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>
struct ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>
struct ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>
struct ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503;
// UnityEngine.InputSystem.Gamepad[]
struct GamepadU5BU5D_t907383551E67ACF51B8B4ECCC0E399DAE2AB3762;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810;
// UnityEngine.InputSystem.Samples.InputActionVisualizer[]
struct InputActionVisualizerU5BU5D_t3FDFF1F162B19D8497F62F4B9DAAC65D3ECEAD32;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
// UnityEngine.InputSystem.Samples.InputControlVisualizer[]
struct InputControlVisualizerU5BU5D_tA0F39417C6BA8A0233F6AC1A18B3C84E94CB0761;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[]
struct ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE;
// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[]
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[]
struct ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample[]
struct FrameSampleU5BU5D_tA4E1BE2B1983F3423795D7DE022B1A1844F23CF5;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample[]
struct TimeSampleU5BU5D_tEA52CA271E5DECC17E0053DAC4822EDDC76C9D03;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline[]
struct TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// UnityEngine.InputSystem.Controls.AxisControl
struct AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.InputSystem.Controls.ButtonControl
struct ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.InputSystem.Controls.DeltaControl
struct DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B;
// UnityEngine.InputSystem.Controls.DpadControl
struct DpadControl_t517E87BF3EB22369B71EA1941648079B468A45AB;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;
// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580;
// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95;
// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.InputSystem.IInputInteraction
struct IInputInteraction_t689E6823744061ED815FB936C3EB3FDD3594B844;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700;
// UnityEngine.InputSystem.Samples.InputActionVisualizer
struct InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357;
// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E;
// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D;
// UnityEngine.InputSystem.Samples.InputControlVisualizer
struct InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA;
// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
// UnityEngine.InputSystem.LowLevel.InputEvent
struct InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5;
// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF;
// UnityEngine.InputSystem.Samples.InputVisualizer
struct InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3;
// UnityEngine.InputSystem.Controls.IntegerControl
struct IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.Pen
struct Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF;
// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A;
// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.InputSystem.Controls.StickControl
struct StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.InputSystem.Controls.Vector2Control
struct Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState
struct ObserverState_t147E85316A8DB8E0C6B3D4485B1480B41EA6A1A8;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer
struct CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer
struct TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer
struct Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer
struct Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7;
IL2CPP_EXTERN_C String_t* _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE7F0B9FDD5F8620EA07E4472F7641A988C1766;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralAF29A356E2E2350A3712E86EFEC38A631035EEDC;
IL2CPP_EXTERN_C String_t* _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A;
IL2CPP_EXTERN_C String_t* _stringLiteralBFAA26C9FC48F3323D995356D082AB41979FFE6A;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A3783CC15F62D9BA371F6EB72C7E9BDC2E4BD0;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6A2B38DC2432574D81DC487BCF0A5E25DE305E;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisInputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_m6BD63DA5E9E4EBDAAEA521707A3A60C6E3EC6546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurrentDeviceVisualizer_AddSample_m830EBF986B09EF3FFFD7203C163272EFD55BAAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mDBE4823BFBC144A195D358673603D08BEA62BA66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m37BC912859AF965950A6BF924BF26071EA660F28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m12F8EA6BF373316A7269723E4DEBB0E26530E83B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputActionVisualizer_OnActionChange_m53D67F4BDFE91D0D5FD086A350792D31B66BAC3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlList_1_Dispose_m1FD2281787B2A125095CD9203E77BA4A0F15AA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlList_1_get_Count_m5B820C76C808D235DDFA474A8025370547ECC993_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlVisualizer_OnDeviceChange_m41B7D9685925817EA32887978B5E63AEDE120905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlVisualizer_OnEvent_mD9299AA91D76612D04EE1C9AAB8332B6F1C30DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputControlVisualizer_SetupVisualizer_m98C1154DB63B92146B6D28E191B2DF6088143226_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC9EEB069D24F6B245215D7ACD2F4372004ECA16F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mD41ADE5884D63597B631BA9E4B888E302A1A3032_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB5A980DCDA43C4387541E14E264C67826DA20589_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1E47EB4A2199E96BB05A1B0FCE570857108B1112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m7B1DBF5982BA1DDCC1D2C501CD878F7E9C2697D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0DA0863FDDBDE2DC04EBDAD7102BFF26A5709520_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9F38FA10689CE2CC84E132D13477C9F63AB9DD41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_m218A59EE14B00E2FC0D9D8E5EB5B70D049875DAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimelineVisualizer_AddSample_m43C0183BC058F1A2BBF9F5AA494E0471832F4462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VisualizationHelpers_DrawAxis_m6FBA7B1B0EF9F92382DA48F9A828A2B5B28A5E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2;;
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com;
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com;;
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke;
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke;;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com;
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com;
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke;
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4;;
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com;
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com;;
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke;
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke;;
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t00B6770E7424ED0E68BE2D726B7636C9C52CE669 
{
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>
struct List_1_tE1DF165936F3562084DB454140315041796A957F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>
struct List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputActionVisualizerU5BU5D_t3FDFF1F162B19D8497F62F4B9DAAC65D3ECEAD32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>
struct List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InputControlVisualizerU5BU5D_tA0F39417C6BA8A0233F6AC1A18B3C84E94CB0761* ____items_1;
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

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2  : public RuntimeObject
{
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};

// UnityEngine.InputSystem.LowLevel.InputUpdate
struct InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD  : public RuntimeObject
{
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

// UnityEngine.InputSystem.Samples.VisualizationHelpers
struct VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808  : public RuntimeObject
{
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer
struct Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>
struct Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE1DF165936F3562084DB454140315041796A957F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ____current_3;
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

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76* ___additionalValues_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent>
struct RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	GUIContentU5BU5D_t98DA1EEA8D0A2C4AE42CE11C4840B627CADFC503* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Int32>
struct RingBuffer_1_tB9199CA18775B39923AE32D7E01B6C3721DAFAA5 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Object>
struct RingBuffer_1_tE41CEA8A3C3D6E94A68A4A6F04FF540A2CECFDB4 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Single>
struct RingBuffer_1_t2BC20AF2D037EBC1D27E2064ABAEA7F36E6D917B 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>
struct RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>
struct RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	FrameSampleU5BU5D_tA4E1BE2B1983F3423795D7DE022B1A1844F23CF5* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>
struct RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C 
{
	// TValue[] UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::array
	TimeSampleU5BU5D_tEA52CA271E5DECC17E0053DAC4822EDDC76C9D03* ___array_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::head
	int32_t ___head_1;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1::count
	int32_t ___count_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.InputSystem.Haptics.DualMotorRumble
struct DualMotorRumble_t7FF13D9599E8A574E5041726BD84CB8897E42701 
{
	// System.Single UnityEngine.InputSystem.Haptics.DualMotorRumble::<lowFrequencyMotorSpeed>k__BackingField
	float ___U3ClowFrequencyMotorSpeedU3Ek__BackingField_0;
	// System.Single UnityEngine.InputSystem.Haptics.DualMotorRumble::<highFrequencyMotorSpeed>k__BackingField
	float ___U3ChighFrequencyMotorSpeedU3Ek__BackingField_1;
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

// UnityEngine.InputSystem.Utilities.FourCC
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.FourCC::m_Code
	int32_t ___m_Code_0;
};

// UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F 
{
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_InterfaceName
	String_t* ___m_InterfaceName_0;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_DeviceClass
	String_t* ___m_DeviceClass_1;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Manufacturer
	String_t* ___m_Manufacturer_2;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Product
	String_t* ___m_Product_3;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Serial
	String_t* ___m_Serial_4;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Version
	String_t* ___m_Version_5;
	// System.String UnityEngine.InputSystem.Layouts.InputDeviceDescription::m_Capabilities
	String_t* ___m_Capabilities_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_pinvoke
{
	char* ___m_InterfaceName_0;
	char* ___m_DeviceClass_1;
	char* ___m_Manufacturer_2;
	char* ___m_Product_3;
	char* ___m_Serial_4;
	char* ___m_Version_5;
	char* ___m_Capabilities_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputDeviceDescription
struct InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F_marshaled_com
{
	Il2CppChar* ___m_InterfaceName_0;
	Il2CppChar* ___m_DeviceClass_1;
	Il2CppChar* ___m_Manufacturer_2;
	Il2CppChar* ___m_Product_3;
	Il2CppChar* ___m_Serial_4;
	Il2CppChar* ___m_Version_5;
	Il2CppChar* ___m_Capabilities_6;
};

// UnityEngine.InputSystem.LowLevel.InputEventListener
struct InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D 
{
	union
	{
		struct
		{
		};
		uint8_t InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D__padding[1];
	};
};

// UnityEngine.InputSystem.LowLevel.InputEventPtr
struct InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 
{
	// UnityEngine.InputSystem.LowLevel.InputEvent* UnityEngine.InputSystem.LowLevel.InputEventPtr::m_EventPtr
	InputEvent_t10F727342D1A79DCFC06529C203BB61C194AEBC5* ___m_EventPtr_0;
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

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
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

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 
{
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_pinvoke
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8_marshaled_com
{
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E 
{
	// System.Boolean UnityEngine.InputSystem.InputActionMap/DeviceArray::m_HaveValue
	bool ___m_HaveValue_0;
	// System.Int32 UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceCount
	int32_t ___m_DeviceCount_1;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap/DeviceArray::m_DeviceArray
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_pinvoke
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionMap/DeviceArray
struct DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E_marshaled_com
{
	int32_t ___m_HaveValue_0;
	int32_t ___m_DeviceCount_1;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___m_DeviceArray_2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Cache::table
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_pinvoke
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Cache
struct Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB_marshaled_com
{
	Dictionary_2_t058B78C04CBFB0F1C72F95C9880AE09DA041219F* ___table_0;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Type> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutTypes
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.String> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutStrings
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,System.Func`1<UnityEngine.InputSystem.Layouts.InputControlLayout>> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutBuilders
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::baseLayoutTable
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString[]> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrides
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutOverrideNames
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	// System.Collections.Generic.Dictionary`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/PrecompiledLayout> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::precompiledLayouts
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Layouts.InputControlLayout/Collection/LayoutMatcher> UnityEngine.InputSystem.Layouts.InputControlLayout/Collection::layoutMatchers
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_pinvoke
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Layouts.InputControlLayout/Collection
struct Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5_marshaled_com
{
	Dictionary_2_t1FFEE4C9AF6AF524CAD4FDCEA8F3AB34E585451D* ___layoutTypes_1;
	Dictionary_2_tEB3FF1660C6129E11F3B4771A549DE9F169B5103* ___layoutStrings_2;
	Dictionary_2_tFF0F3921D8B2465193365C2463B7D6A977E874DA* ___layoutBuilders_3;
	Dictionary_2_t433D1FE2CDB69C9F583F79D5252A34112439D0AD* ___baseLayoutTable_4;
	Dictionary_2_tA8E192E813E347FF19EC3868E2C565607445394C* ___layoutOverrides_5;
	HashSet_1_t87C47CF88B1B88398D4F9A1E51E92F834CF5160B* ___layoutOverrideNames_6;
	Dictionary_2_tD68C40116E127FE79F9E7AF07820CFDDBF20A8C1* ___precompiledLayouts_7;
	List_1_t4E502B2E42676E48E6F9A8F0251ADB1DF4BD490E* ___layoutMatchers_8;
};

// UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
struct UpdateStepCount_tF3C9095BD6614FD4E6024DAF43DE8F5602D8E324 
{
	// System.Boolean UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount::m_WasUpdated
	bool ___m_WasUpdated_0;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount::<value>k__BackingField
	uint32_t ___U3CvalueU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
struct UpdateStepCount_tF3C9095BD6614FD4E6024DAF43DE8F5602D8E324_marshaled_pinvoke
{
	int32_t ___m_WasUpdated_0;
	uint32_t ___U3CvalueU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
struct UpdateStepCount_tF3C9095BD6614FD4E6024DAF43DE8F5602D8E324_marshaled_com
{
	int32_t ___m_WasUpdated_0;
	uint32_t ___U3CvalueU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer
struct CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C  : public Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4
{
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer::m_CurrentDevice
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_CurrentDevice_0;
};

// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 
{
	// System.Boolean UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CannotMutateCallbacksArray
	bool ___m_CannotMutateCallbacksArray_0;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_Callbacks
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_Callbacks_1;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToAdd
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToAdd_2;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<TDelegate> UnityEngine.InputSystem.Utilities.CallbackArray`1::m_CallbacksToRemove
	InlinedArray_1_tC208D319D19C2B3DF550BD9CDC11549F23D8F91B ___m_CallbacksToRemove_3;
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString>
struct InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 
{
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___additionalValues_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<System.Int32>
struct ValueVisualizer_1_tBE491974FC6A77A22D4CEC27FA2B7CFFF3ABCC29  : public Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4
{
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<TValue> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samples
	RingBuffer_1_tB9199CA18775B39923AE32D7E01B6C3721DAFAA5 ___samples_0;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samplesText
	RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F ___samplesText_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<System.Single>
struct ValueVisualizer_1_tFE0951F6EA268A87F54131525AD3C023E94F809F  : public Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4
{
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<TValue> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samples
	RingBuffer_1_t2BC20AF2D037EBC1D27E2064ABAEA7F36E6D917B ___samples_0;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samplesText
	RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F ___samplesText_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>
struct ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138  : public Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4
{
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<TValue> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samples
	RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F ___samples_0;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent> UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1::samplesText
	RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F ___samplesText_1;
};

// Unity.Collections.Allocator
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	// System.Int32 Unity.Collections.Allocator::value__
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

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Event::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.EventType
struct EventType_tC62F0D77DB08D7326B58B2D8CF43BD45CFD3203E 
{
	// System.Int32 UnityEngine.EventType::value__
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

// UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com* ___m_SourceStyle_1;
};

// UnityEngine.InputSystem.InputActionChange
struct InputActionChange_t74A940E885D3DE6C4E6F76E542A99616E331A360 
{
	// System.Int32 UnityEngine.InputSystem.InputActionChange::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputActionPhase
struct InputActionPhase_t79D9374C1940AA7248377075A0E83122540334C6 
{
	// System.Int32 UnityEngine.InputSystem.InputActionPhase::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t7E3615BDDF3C84F39712E5889559D3AD8E773108 
{
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputDeviceChange
struct InputDeviceChange_t1AD7D7058ABBDAA185C1A2B3A9B5E8FE115D7A78 
{
	// System.Int32 UnityEngine.InputSystem.InputDeviceChange::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.LowLevel.InputStateBlock
struct InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 
{
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.LowLevel.InputStateBlock::<format>k__BackingField
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField_40;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::m_ByteOffset
	uint32_t ___m_ByteOffset_41;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<bitOffset>k__BackingField
	uint32_t ___U3CbitOffsetU3Ek__BackingField_42;
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputStateBlock::<sizeInBits>k__BackingField
	uint32_t ___U3CsizeInBitsU3Ek__BackingField_43;
};

// UnityEngine.InputSystem.LowLevel.InputUpdateType
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	// System.Int32 UnityEngine.InputSystem.LowLevel.InputUpdateType::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5  : public RuntimeObject
{
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject* ___m_SourceStyle_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
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

// System.TypeCode
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputAction/ActionFlags
struct ActionFlags_t639BD2944E073F8DD263CE2CA581FC62C401AB1E 
{
	// System.Int32 UnityEngine.InputSystem.InputAction/ActionFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputActionMap/Flags
struct Flags_tC94B4BEC896F8152609F412172F9CFD6F6BDB523 
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap/Flags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization
struct Visualization_tCCB69460FE30A665B3CD8A8E5FC83C213B3159AD 
{
	// System.Int32 UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputControl/ControlFlags
struct ControlFlags_t9C297F208DE19CEB00A0560F7FDE59F6A2004132 
{
	// System.Int32 UnityEngine.InputSystem.InputControl/ControlFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags
struct Flags_t193C2E9B0D9701ACB7ABD982BA8B3B2DB2F74230 
{
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout/Flags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode
struct Mode_t0D4FE81BD544880645096D83C42739A4DAFA9A4F 
{
	// System.Int32 UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputDevice/DeviceFlags
struct DeviceFlags_tF02F85DA24FF16879A67B540FCA560EC955CE728 
{
	// System.Int32 UnityEngine.InputSystem.InputDevice/DeviceFlags::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputSettings/BackgroundBehavior
struct BackgroundBehavior_t4D397A0FC3ECD31C1A4DB8C2D09BBC4E71BFC1D6 
{
	// System.Int32 UnityEngine.InputSystem.InputSettings/BackgroundBehavior::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode
struct EditorInputBehaviorInPlayMode_tC47B44FACCF39F8E2DCA21270D51417B5DEF814D 
{
	// System.Int32 UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.InputSettings/UpdateMode
struct UpdateMode_tCD49766B755C4CD8E1F2DE8D57798DAC2C5CBF32 
{
	// System.Int32 UnityEngine.InputSystem.InputSettings/UpdateMode::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis
struct Axis_t817DD75E85A3957103B593CB18E8C6211D478839 
{
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType
struct PlotType_t52E8A07F5F35071D37B4F4DB67AE2C4DAB2B635C 
{
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType::value__
	int32_t ___value___2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit
struct TimeUnit_t3C6D7355E5623CC67F51223A43BA7C9FDE26E9DE 
{
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit::value__
	int32_t ___value___2;
};

// Unity.Collections.NativeArray`1<System.UInt64>
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>
struct ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83  : public ValueVisualizer_1_tBE491974FC6A77A22D4CEC27FA2B7CFFF3ABCC29
{
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMin
	int32_t ___limitMin_2;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMax
	int32_t ___limitMax_3;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::min
	int32_t ___min_4;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::max
	int32_t ___max_5;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>
struct ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75  : public ValueVisualizer_1_tFE0951F6EA268A87F54131525AD3C023E94F809F
{
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMin
	float ___limitMin_2;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::limitMax
	float ___limitMax_3;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::min
	float ___min_4;
	// TValue UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1::max
	float ___max_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580  : public RuntimeObject
{
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Overflow_12;
	// System.String UnityEngine.GUIStyle::m_Name
	String_t* ___m_Name_13;
};
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_pinvoke ___m_Overflow_12;
	char* ___m_Name_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Normal_1;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Hover_2;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Active_3;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_Focused_4;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95_marshaled_com* ___m_OnFocused_8;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Border_9;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Padding_10;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Margin_11;
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5_marshaled_com* ___m_Overflow_12;
	Il2CppChar* ___m_Name_13;
};

// UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D  : public RuntimeObject
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_2;
	// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::m_Type
	Type_t* ___m_Type_3;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_4;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateFormat
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat_5;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::m_StateSizeInBytes
	int32_t ___m_StateSizeInBytes_6;
	// System.Nullable`1<System.Boolean> UnityEngine.InputSystem.Layouts.InputControlLayout::m_UpdateBeforeRender
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___m_UpdateBeforeRender_7;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_BaseLayouts
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_BaseLayouts_8;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<UnityEngine.InputSystem.Utilities.InternedString> UnityEngine.InputSystem.Layouts.InputControlLayout::m_AppliedOverrides
	InlinedArray_1_tAFDFE0972A71B9760077CFA9D4A1DBD7BE435800 ___m_AppliedOverrides_9;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_CommonUsages
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_CommonUsages_10;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/ControlItem[] UnityEngine.InputSystem.Layouts.InputControlLayout::m_Controls
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Controls_11;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_DisplayName
	String_t* ___m_DisplayName_12;
	// System.String UnityEngine.InputSystem.Layouts.InputControlLayout::m_Description
	String_t* ___m_Description_13;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Flags UnityEngine.InputSystem.Layouts.InputControlLayout::m_Flags
	int32_t ___m_Flags_14;
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

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer
struct TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE  : public Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4
{
	// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<showLegend>k__BackingField
	bool ___U3CshowLegendU3Ek__BackingField_0;
	// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<showLimits>k__BackingField
	bool ___U3CshowLimitsU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<timeUnit>k__BackingField
	int32_t ___U3CtimeUnitU3Ek__BackingField_2;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<valueUnit>k__BackingField
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___U3CvalueUnitU3Ek__BackingField_3;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::<historyDepth>k__BackingField
	int32_t ___U3ChistoryDepthU3Ek__BackingField_4;
	// System.Single UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_TotalTimeUnitsShown
	float ___m_TotalTimeUnitsShown_5;
	// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_LimitsY
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LimitsY_6;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_LimitsYMin
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_LimitsYMin_7;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_LimitsYMax
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_LimitsYMax_8;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline[] UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::m_Timelines
	TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* ___m_Timelines_9;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer
struct Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A  : public ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138
{
	// UnityEngine.Vector2[] UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::maximums
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___maximums_2;
	// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::limits
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___limits_3;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::limitsXText
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___limitsXText_4;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::limitsYText
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___limitsYText_5;
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D  : public MulticastDelegate_t
{
};

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>
struct InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// UnityEngine.InputSystem.InputControlList`1<System.Object>
struct InputControlList_1_t48EC0F64E524A57EFE5948AFCA4A576846FC1C31 
{
	// System.Int32 UnityEngine.InputSystem.InputControlList`1::m_Count
	int32_t ___m_Count_0;
	// Unity.Collections.NativeArray`1<System.UInt64> UnityEngine.InputSystem.InputControlList`1::m_Indices
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices_1;
	// Unity.Collections.Allocator UnityEngine.InputSystem.InputControlList`1::m_Allocator
	int32_t ___m_Allocator_2;
};

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionReference::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_4;
	// System.String UnityEngine.InputSystem.InputActionReference::m_ActionId
	String_t* ___m_ActionId_5;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_6;
};

// UnityEngine.InputSystem.InputControl
struct InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E  : public RuntimeObject
{
	// UnityEngine.InputSystem.LowLevel.InputStateBlock UnityEngine.InputSystem.InputControl::m_StateBlock
	InputStateBlock_t0E05211ACF29A99C0FE7FC9EA7042196BFF1F3B5 ___m_StateBlock_0;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Name
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Name_1;
	// System.String UnityEngine.InputSystem.InputControl::m_Path
	String_t* ___m_Path_2;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayName
	String_t* ___m_DisplayName_3;
	// System.String UnityEngine.InputSystem.InputControl::m_DisplayNameFromLayout
	String_t* ___m_DisplayNameFromLayout_4;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayName
	String_t* ___m_ShortDisplayName_5;
	// System.String UnityEngine.InputSystem.InputControl::m_ShortDisplayNameFromLayout
	String_t* ___m_ShortDisplayNameFromLayout_6;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Layout
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Layout_7;
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.InputControl::m_Variants
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___m_Variants_8;
	// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::m_Device
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___m_Device_9;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputControl::m_Parent
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Parent_10;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageCount
	int32_t ___m_UsageCount_11;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_UsageStartIndex
	int32_t ___m_UsageStartIndex_12;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasCount
	int32_t ___m_AliasCount_13;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_AliasStartIndex
	int32_t ___m_AliasStartIndex_14;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildCount
	int32_t ___m_ChildCount_15;
	// System.Int32 UnityEngine.InputSystem.InputControl::m_ChildStartIndex
	int32_t ___m_ChildStartIndex_16;
	// UnityEngine.InputSystem.InputControl/ControlFlags UnityEngine.InputSystem.InputControl::m_ControlFlags
	int32_t ___m_ControlFlags_17;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_CachedValueIsStale
	bool ___m_CachedValueIsStale_18;
	// System.Boolean UnityEngine.InputSystem.InputControl::m_UnprocessedCachedValueIsStale
	bool ___m_UnprocessedCachedValueIsStale_19;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_DefaultState
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_DefaultState_20;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MinValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MinValue_21;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.InputControl::m_MaxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___m_MaxValue_22;
	// UnityEngine.InputSystem.Utilities.FourCC UnityEngine.InputSystem.InputControl::m_OptimizedControlDataType
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_OptimizedControlDataType_23;
};

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String[] UnityEngine.InputSystem.InputSettings::m_SupportedDevices
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_SupportedDevices_4;
	// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::m_UpdateMode
	int32_t ___m_UpdateMode_5;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxEventBytesPerUpdate
	int32_t ___m_MaxEventBytesPerUpdate_6;
	// System.Int32 UnityEngine.InputSystem.InputSettings::m_MaxQueuedEventsPerUpdate
	int32_t ___m_MaxQueuedEventsPerUpdate_7;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_CompensateForScreenOrientation
	bool ___m_CompensateForScreenOrientation_8;
	// UnityEngine.InputSystem.InputSettings/BackgroundBehavior UnityEngine.InputSystem.InputSettings::m_BackgroundBehavior
	int32_t ___m_BackgroundBehavior_9;
	// UnityEngine.InputSystem.InputSettings/EditorInputBehaviorInPlayMode UnityEngine.InputSystem.InputSettings::m_EditorInputBehaviorInPlayMode
	int32_t ___m_EditorInputBehaviorInPlayMode_10;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMin
	float ___m_DefaultDeadzoneMin_11;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultDeadzoneMax
	float ___m_DefaultDeadzoneMax_12;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultButtonPressPoint
	float ___m_DefaultButtonPressPoint_13;
	// System.Single UnityEngine.InputSystem.InputSettings::m_ButtonReleaseThreshold
	float ___m_ButtonReleaseThreshold_14;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultTapTime
	float ___m_DefaultTapTime_15;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultSlowTapTime
	float ___m_DefaultSlowTapTime_16;
	// System.Single UnityEngine.InputSystem.InputSettings::m_DefaultHoldTime
	float ___m_DefaultHoldTime_17;
	// System.Single UnityEngine.InputSystem.InputSettings::m_TapRadius
	float ___m_TapRadius_18;
	// System.Single UnityEngine.InputSystem.InputSettings::m_MultiTapDelayTime
	float ___m_MultiTapDelayTime_19;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_DisableRedundantEventsMerging
	bool ___m_DisableRedundantEventsMerging_20;
	// System.Boolean UnityEngine.InputSystem.InputSettings::m_ShortcutKeysConsumeInputs
	bool ___m_ShortcutKeysConsumeInputs_21;
	// System.Collections.Generic.HashSet`1<System.String> UnityEngine.InputSystem.InputSettings::m_FeatureFlags
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___m_FeatureFlags_22;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
struct FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619 
{
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample::value
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___value_0;
	// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample::frame
	int32_t ___frame_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
struct FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_pinvoke
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___value_0;
	int32_t ___frame_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
struct FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_com
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___value_0;
	int32_t ___frame_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
struct TimeSample_t6099397A78C68E4197D716D06930B34979A5235F 
{
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample::value
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___value_0;
	// System.Single UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample::time
	float ___time_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
struct TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_pinvoke
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___value_0;
	float ___time_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
struct TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_com
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___value_0;
	float ___time_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
struct Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 
{
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::name
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___name_0;
	// UnityEngine.Color UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample> UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::timeSamples
	RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C ___timeSamples_2;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample> UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::frameSamples
	RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56 ___frameSamples_3;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::minValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___minValue_4;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::maxValue
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___maxValue_5;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline::plotType
	int32_t ___plotType_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
struct Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_pinvoke
{
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C ___timeSamples_2;
	RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56 ___frameSamples_3;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___minValue_4;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___maxValue_5;
	int32_t ___plotType_6;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
struct Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_com
{
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com* ___name_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C ___timeSamples_2;
	RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56 ___frameSamples_3;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___minValue_4;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___maxValue_5;
	int32_t ___plotType_6;
};

// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_SingletonActionBindings_6;
	// UnityEngine.InputSystem.InputAction/ActionFlags UnityEngine.InputSystem.InputAction::m_Flags
	int32_t ___m_Flags_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_12;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_13;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* ___m_ActionMap_14;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnStarted_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnCanceled_16;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_OnPerformed_17;
};

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09  : public RuntimeObject
{
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D* ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_t780948EA293BAA800AD8699518B58B59FFB8A700* ___m_State_10;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 ___m_BindingMask_11;
	// UnityEngine.InputSystem.InputActionMap/Flags UnityEngine.InputSystem.InputActionMap::m_Flags
	int32_t ___m_Flags_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_ParameterOverridesCount
	int32_t ___m_ParameterOverridesCount_13;
	// UnityEngine.InputSystem.InputActionRebindingExtensions/ParameterOverride[] UnityEngine.InputSystem.InputActionMap::m_ParameterOverrides
	ParameterOverrideU5BU5D_tC408277D7E98D32E4B0AEFA1E2EDDB74790897EE* ___m_ParameterOverrides_14;
	// UnityEngine.InputSystem.InputActionMap/DeviceArray UnityEngine.InputSystem.InputActionMap::m_Devices
	DeviceArray_t7F2F2D8A9D5CAF504DC1A21C1FEF79BCA9E4761E ___m_Devices_15;
	// UnityEngine.InputSystem.Utilities.CallbackArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	CallbackArray_1_tDFF8C4C6015023B6C2E70BAD26D8BC6BF00D8775 ___m_ActionCallbacks_16;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.InputSystem.InputActionMap::m_ActionIndexByNameOrId
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_ActionIndexByNameOrId_17;
};

// UnityEngine.InputSystem.InputDevice
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B  : public InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E
{
	// UnityEngine.InputSystem.InputDevice/DeviceFlags UnityEngine.InputSystem.InputDevice::m_DeviceFlags
	int32_t ___m_DeviceFlags_27;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceId
	int32_t ___m_DeviceId_28;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_ParticipantId
	int32_t ___m_ParticipantId_29;
	// System.Int32 UnityEngine.InputSystem.InputDevice::m_DeviceIndex
	int32_t ___m_DeviceIndex_30;
	// UnityEngine.InputSystem.Layouts.InputDeviceDescription UnityEngine.InputSystem.InputDevice::m_Description
	InputDeviceDescription_tE86DD77422AAF60ADDAC788B31E5A05E739B708F ___m_Description_31;
	// System.Double UnityEngine.InputSystem.InputDevice::m_LastUpdateTimeInternal
	double ___m_LastUpdateTimeInternal_32;
	// System.UInt32 UnityEngine.InputSystem.InputDevice::m_CurrentUpdateStepCount
	uint32_t ___m_CurrentUpdateStepCount_33;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_AliasesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_AliasesForEachControl_34;
	// UnityEngine.InputSystem.Utilities.InternedString[] UnityEngine.InputSystem.InputDevice::m_UsagesForEachControl
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_UsagesForEachControl_35;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_UsageToControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_UsageToControl_36;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputDevice::m_ChildrenForEachControl
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_ChildrenForEachControl_37;
	// System.UInt32[] UnityEngine.InputSystem.InputDevice::m_StateOffsetToControlMap
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_StateOffsetToControlMap_38;
	// UnityEngine.InputSystem.InputDevice/ControlBitRangeNode[] UnityEngine.InputSystem.InputDevice::m_ControlTreeNodes
	ControlBitRangeNodeU5BU5D_t912A404149DE6D350D1735A026182C409C510F27* ___m_ControlTreeNodes_39;
	// System.UInt16[] UnityEngine.InputSystem.InputDevice::m_ControlTreeIndices
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___m_ControlTreeIndices_40;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonWest>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonWestU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonNorth>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonNorthU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonSouth>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonSouthU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<buttonEast>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbuttonEastU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftStickButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftStickButtonU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightStickButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightStickButtonU3Ek__BackingField_49;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<startButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CstartButtonU3Ek__BackingField_50;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<selectButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CselectButtonU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.DpadControl UnityEngine.InputSystem.Gamepad::<dpad>k__BackingField
	DpadControl_t517E87BF3EB22369B71EA1941648079B468A45AB* ___U3CdpadU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftShoulder>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftShoulderU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightShoulder>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightShoulderU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::<leftStick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CleftStickU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.StickControl UnityEngine.InputSystem.Gamepad::<rightStick>k__BackingField
	StickControl_t2608D1388A5015029123635B4B589AC7EE20C50B* ___U3CrightStickU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<leftTrigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftTriggerU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Gamepad::<rightTrigger>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightTriggerU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Haptics.DualMotorRumble UnityEngine.InputSystem.Gamepad::m_Rumble
	DualMotorRumble_t7FF13D9599E8A574E5041726BD84CB8897E42701 ___m_Rumble_60;
};

// UnityEngine.InputSystem.Samples.InputVisualizer
struct InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String UnityEngine.InputSystem.Samples.InputVisualizer::m_Label
	String_t* ___m_Label_4;
	// System.Int32 UnityEngine.InputSystem.Samples.InputVisualizer::m_HistorySamples
	int32_t ___m_HistorySamples_5;
	// System.Single UnityEngine.InputSystem.Samples.InputVisualizer::m_TimeWindow
	float ___m_TimeWindow_6;
	// UnityEngine.Rect UnityEngine.InputSystem.Samples.InputVisualizer::m_Rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Rect_7;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.InputVisualizer::m_LabelContent
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_LabelContent_8;
	// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer UnityEngine.InputSystem.Samples.InputVisualizer::m_Visualizer
	Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* ___m_Visualizer_9;
	// UnityEngine.InputSystem.Samples.InputVisualizer UnityEngine.InputSystem.Samples.InputVisualizer::m_Parent
	InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* ___m_Parent_10;
};

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A  : public InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B
{
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<position>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CpositionU3Ek__BackingField_44;
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Pointer::<delta>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CdeltaU3Ek__BackingField_45;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pointer::<radius>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CradiusU3Ek__BackingField_46;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pointer::<pressure>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CpressureU3Ek__BackingField_47;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pointer::<press>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CpressU3Ek__BackingField_48;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Pointer::<displayIndex>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CdisplayIndexU3Ek__BackingField_49;
};

// UnityEngine.InputSystem.Samples.InputActionVisualizer
struct InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357  : public InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3
{
	// UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization UnityEngine.InputSystem.Samples.InputActionVisualizer::m_Visualization
	int32_t ___m_Visualization_12;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActionReference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_ActionReference_13;
	// System.String UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActionName
	String_t* ___m_ActionName_14;
	// System.Boolean UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ShowControlName
	bool ___m_ShowControlName_15;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InputActionVisualizer::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_16;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActiveControl
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_ActiveControl_17;
	// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.InputActionVisualizer::m_ActiveControlName
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___m_ActiveControlName_18;
};

// UnityEngine.InputSystem.Samples.InputControlVisualizer
struct InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA  : public InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3
{
	// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode UnityEngine.InputSystem.Samples.InputControlVisualizer::m_Visualization
	int32_t ___m_Visualization_12;
	// System.String UnityEngine.InputSystem.Samples.InputControlVisualizer::m_ControlPath
	String_t* ___m_ControlPath_13;
	// System.Int32 UnityEngine.InputSystem.Samples.InputControlVisualizer::m_ControlIndex
	int32_t ___m_ControlIndex_14;
	// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.Samples.InputControlVisualizer::m_Control
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___m_Control_15;
};

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.DeltaControl UnityEngine.InputSystem.Mouse::<scroll>k__BackingField
	DeltaControl_t63053AF5E0CD02B62F3CDE79821E4A12F72D573B* ___U3CscrollU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<leftButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CleftButtonU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<middleButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CmiddleButtonU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<rightButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CrightButtonU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<backButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CbackButtonU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Mouse::<forwardButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CforwardButtonU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.IntegerControl UnityEngine.InputSystem.Mouse::<clickCount>k__BackingField
	IntegerControl_tA24544EFF42204852F638FF5147F754962C997AB* ___U3CclickCountU3Ek__BackingField_57;
};

// UnityEngine.InputSystem.Pen
struct Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF  : public Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A
{
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<tip>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CtipU3Ek__BackingField_51;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<eraser>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CeraserU3Ek__BackingField_52;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<firstBarrelButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CfirstBarrelButtonU3Ek__BackingField_53;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<secondBarrelButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CsecondBarrelButtonU3Ek__BackingField_54;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<thirdBarrelButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CthirdBarrelButtonU3Ek__BackingField_55;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<fourthBarrelButton>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CfourthBarrelButtonU3Ek__BackingField_56;
	// UnityEngine.InputSystem.Controls.ButtonControl UnityEngine.InputSystem.Pen::<inRange>k__BackingField
	ButtonControl_t85949109B98AAF5B7ADC0285F0EC98A61EC88ECF* ___U3CinRangeU3Ek__BackingField_57;
	// UnityEngine.InputSystem.Controls.Vector2Control UnityEngine.InputSystem.Pen::<tilt>k__BackingField
	Vector2Control_t8D1B4021A1D82671AF916D3C0A476AA94E46A432* ___U3CtiltU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Controls.AxisControl UnityEngine.InputSystem.Pen::<twist>k__BackingField
	AxisControl_tD6613A2445A3C2BFA22C77E16CA3201AF72354A7* ___U3CtwistU3Ek__BackingField_59;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>
struct List_1_tE1DF165936F3562084DB454140315041796A957F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputActionU5BU5D_t6F881A9FE5C2016615C8D2E0B192608EA5FCE810* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>
struct List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputActionVisualizerU5BU5D_t3FDFF1F162B19D8497F62F4B9DAAC65D3ECEAD32* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>
struct List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InputControlVisualizerU5BU5D_tA0F39417C6BA8A0233F6AC1A18B3C84E94CB0761* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// UnityEngine.GUIContent
struct GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_StaticFields
{
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___none_6;
};

// UnityEngine.GUIContent

// UnityEngine.InputSystem.LowLevel.InputUpdate
struct InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_StaticFields
{
	// System.UInt32 UnityEngine.InputSystem.LowLevel.InputUpdate::s_UpdateStepCount
	uint32_t ___s_UpdateStepCount_0;
	// UnityEngine.InputSystem.LowLevel.InputUpdateType UnityEngine.InputSystem.LowLevel.InputUpdate::s_LatestUpdateType
	int32_t ___s_LatestUpdateType_1;
	// UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount UnityEngine.InputSystem.LowLevel.InputUpdate::s_PlayerUpdateStepCount
	UpdateStepCount_tF3C9095BD6614FD4E6024DAF43DE8F5602D8E324 ___s_PlayerUpdateStepCount_2;
};

// UnityEngine.InputSystem.LowLevel.InputUpdate

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.InputSystem.Samples.VisualizationHelpers
struct VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields
{
	// UnityEngine.Texture2D UnityEngine.InputSystem.Samples.VisualizationHelpers::s_OnePixTex
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_OnePixTex_0;
	// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.VisualizationHelpers::s_ValueTextStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_ValueTextStyle_1;
};

// UnityEngine.InputSystem.Samples.VisualizationHelpers

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Object>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Object>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.InputSystem.LowLevel.InputEventListener
struct InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D_StaticFields
{
	// UnityEngine.InputSystem.LowLevel.InputEventListener/ObserverState UnityEngine.InputSystem.LowLevel.InputEventListener::s_ObserverState
	ObserverState_t147E85316A8DB8E0C6B3D4485B1480B41EA6A1A8* ___s_ObserverState_0;
};

// UnityEngine.InputSystem.LowLevel.InputEventListener

// UnityEngine.InputSystem.LowLevel.InputEventPtr

// UnityEngine.InputSystem.LowLevel.InputEventPtr

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt32

// System.UInt32

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.InputAction/CallbackContext

// UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer

// UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>

// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent_2;
};

// UnityEngine.Event

// UnityEngine.EventType

// UnityEngine.EventType

// UnityEngine.GUIStyleState

// UnityEngine.GUIStyleState

// UnityEngine.InputSystem.InputActionChange

// UnityEngine.InputSystem.InputActionChange

// UnityEngine.InputSystem.InputActionPhase

// UnityEngine.InputSystem.InputActionPhase

// UnityEngine.InputSystem.InputActionType

// UnityEngine.InputSystem.InputActionType

// UnityEngine.InputSystem.InputDeviceChange

// UnityEngine.InputSystem.InputDeviceChange

// UnityEngine.InputSystem.LowLevel.InputUpdateType

// UnityEngine.InputSystem.LowLevel.InputUpdateType

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.StringComparison

// System.StringComparison

// UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization

// UnityEngine.InputSystem.Samples.InputActionVisualizer/Visualization

// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode

// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode

// UnityEngine.InputSystem.InputSettings/UpdateMode

// UnityEngine.InputSystem.InputSettings/UpdateMode

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>

// UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GUIStyle
struct GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_StaticFields
{
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_None_15;
};

// UnityEngine.GUIStyle

// UnityEngine.InputSystem.Layouts.InputControlLayout
struct InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D_StaticFields
{
	// UnityEngine.InputSystem.Utilities.InternedString UnityEngine.InputSystem.Layouts.InputControlLayout::s_DefaultVariant
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___s_DefaultVariant_0;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Collection UnityEngine.InputSystem.Layouts.InputControlLayout::s_Layouts
	Collection_t6E9F85AD439CF26269683541C4DC58BA3B6756C5 ___s_Layouts_15;
	// UnityEngine.InputSystem.Layouts.InputControlLayout/Cache UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstance
	Cache_tB837109647F577DCE3795AEE2E9E0E3F61F543AB ___s_CacheInstance_16;
	// System.Int32 UnityEngine.InputSystem.Layouts.InputControlLayout::s_CacheInstanceRef
	int32_t ___s_CacheInstanceRef_17;
};

// UnityEngine.InputSystem.Layouts.InputControlLayout

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.InputSystem.Utilities.PrimitiveValue

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

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

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer

// UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>

// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>

// System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>

// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>

// System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>

// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>

// System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>

// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>

// UnityEngine.InputSystem.InputControlList`1<System.Object>

// UnityEngine.InputSystem.InputControlList`1<System.Object>

// System.ArgumentException

// System.ArgumentException

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.InputSystem.InputActionReference

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputControl

// UnityEngine.InputSystem.InputSettings
struct InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF_StaticFields
{
	// System.Boolean UnityEngine.InputSystem.InputSettings::optimizedControlsFeatureEnabled
	bool ___optimizedControlsFeatureEnabled_23;
	// System.Boolean UnityEngine.InputSystem.InputSettings::readValueCachingFeatureEnabled
	bool ___readValueCachingFeatureEnabled_24;
	// System.Boolean UnityEngine.InputSystem.InputSettings::paranoidReadValueCachingChecksEnabled
	bool ___paranoidReadValueCachingChecksEnabled_25;
};

// UnityEngine.InputSystem.InputSettings

// System.InvalidOperationException

// System.InvalidOperationException

// System.NotImplementedException

// System.NotImplementedException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline

// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputAction

// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09_StaticFields
{
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_18;
};

// UnityEngine.InputSystem.InputActionMap

// UnityEngine.InputSystem.InputDevice

// UnityEngine.InputSystem.InputDevice

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.InputSystem.Gamepad
struct Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_StaticFields
{
	// UnityEngine.InputSystem.Gamepad UnityEngine.InputSystem.Gamepad::<current>k__BackingField
	Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* ___U3CcurrentU3Ek__BackingField_59;
	// System.Int32 UnityEngine.InputSystem.Gamepad::s_GamepadCount
	int32_t ___s_GamepadCount_61;
	// UnityEngine.InputSystem.Gamepad[] UnityEngine.InputSystem.Gamepad::s_Gamepads
	GamepadU5BU5D_t907383551E67ACF51B8B4ECCC0E399DAE2AB3762* ___s_Gamepads_62;
};

// UnityEngine.InputSystem.Gamepad

// UnityEngine.InputSystem.Samples.InputVisualizer
struct InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields
{
	// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.InputVisualizer::s_LabelStyle
	GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___s_LabelStyle_11;
};

// UnityEngine.InputSystem.Samples.InputVisualizer

// UnityEngine.InputSystem.Pointer
struct Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields
{
	// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::<current>k__BackingField
	Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* ___U3CcurrentU3Ek__BackingField_50;
};

// UnityEngine.InputSystem.Pointer

// UnityEngine.InputSystem.Samples.InputActionVisualizer
struct InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer> UnityEngine.InputSystem.Samples.InputActionVisualizer::s_EnabledInstances
	List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* ___s_EnabledInstances_19;
	// UnityEngine.Color[] UnityEngine.InputSystem.Samples.InputActionVisualizer::s_InteractionColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_InteractionColors_20;
};

// UnityEngine.InputSystem.Samples.InputActionVisualizer

// UnityEngine.InputSystem.Samples.InputControlVisualizer
struct InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer> UnityEngine.InputSystem.Samples.InputControlVisualizer::s_EnabledInstances
	List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* ___s_EnabledInstances_16;
};

// UnityEngine.InputSystem.Samples.InputControlVisualizer

// UnityEngine.InputSystem.Mouse
struct Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields
{
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::<current>k__BackingField
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___U3CcurrentU3Ek__BackingField_58;
	// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::s_PlatformMouseDevice
	Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* ___s_PlatformMouseDevice_59;
};

// UnityEngine.InputSystem.Mouse

// UnityEngine.InputSystem.Pen
struct Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_StaticFields
{
	// UnityEngine.InputSystem.Pen UnityEngine.InputSystem.Pen::<current>k__BackingField
	Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF* ___U3CcurrentU3Ek__BackingField_60;
};

// UnityEngine.InputSystem.Pen
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline[]
struct TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72  : public RuntimeArray
{
	ALIGN_FIELD (8) Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 m_Items[1];

	inline Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___timeSamples_2))->___array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___frameSamples_3))->___array_0), (void*)NULL);
		#endif
	}
	inline Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___timeSamples_2))->___array_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___frameSamples_3))->___array_0), (void*)NULL);
		#endif
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

IL2CPP_EXTERN_C void PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke(const PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4& unmarshaled, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke_back(const PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke& marshaled, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4& unmarshaled);
IL2CPP_EXTERN_C void PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke_cleanup(PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com(const PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4& unmarshaled, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com_back(const PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com& marshaled, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4& unmarshaled);
IL2CPP_EXTERN_C void PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com_cleanup(PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_back(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_pinvoke_cleanup(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com_back(const GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2& unmarshaled);
IL2CPP_EXTERN_C void GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshal_com_cleanup(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_marshaled_com& marshaled);

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared (Action_2_t9C4E97D0565650F0AEF7C72077EB8A0F9326E40B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_gshared (ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* __this, int32_t ___0_numSamples, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_gshared (ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* __this, int32_t ___0_numSamples, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mFC80A1D3B6BA1009B9779F59B49347FEEE827FB6_gshared (Action_2_tD987B97B18D27B9920365359C46BC12702AD4F7D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputControlList`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlList_1_Dispose_mB88ABF9267ADE8178F03975EA3E2261706B108F4_gshared (InputControlList_1_t48EC0F64E524A57EFE5948AFCA4A576846FC1C31* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputControlList`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m663DD04B3605E201E0BD4AC5D7CD4E92A81A4E53_gshared_inline (InputControlList_1_t48EC0F64E524A57EFE5948AFCA4A576846FC1C31* __this, const RuntimeMethod* method) ;
// TControl UnityEngine.InputSystem.InputControlList`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputControlList_1_get_Item_mA6D11AC01076BDE34EE9C019D4A348E3C404DBA6_gshared (InputControlList_1_t48EC0F64E524A57EFE5948AFCA4A576846FC1C31* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.StateEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_gshared (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.DeltaStateEvent>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7_gshared (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1_gshared (ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138* __this, int32_t ___0_numSamples, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1_gshared (ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138* __this, RuntimeObject* ___0_value, double ___1_time, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093_gshared (RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** RingBuffer_1_get_Item_m60D7074AC228E61EE6BF82ECE7DFFBE15C6DB61E_gshared (RingBuffer_1_tE41CEA8A3C3D6E94A68A4A6F04FF540A2CECFDB4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1_gshared (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_gshared (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D_gshared (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815_gshared (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC_gshared (TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::Append(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A_gshared (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* __this, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F ___0_value, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::Append(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32_gshared (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* __this, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619 ___0_value, const RuntimeMethod* method) ;

// UnityEngine.InputSystem.InputSettings UnityEngine.InputSystem.InputSystem::get_settings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74 (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputSettings/UpdateMode UnityEngine.InputSystem.InputSettings::get_updateMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputSettings_get_updateMode_mD37EABFC0678912846EABBC3CF31AC82E4ACE79E_inline (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedTime_mEEDC1E90FA9C17F861872AF08459C04A6BBFCC21 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordValue_mE718C418173C8DA11F25D31953AE8ABA032863B7 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, double ___0_time, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnEnable_m421992743EE6DC06CF1457DE7C92C3622BD55041 (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::ResolveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_ResolveAction_m9376F6B20FF3277F55F02D23F512F018E599AEA7 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_SetupVisualizer_m265530189A1E6EF49C5A05E2A57112C75243323E (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::.ctor()
inline void List_1__ctor_m0DA0863FDDBDE2DC04EBDAD7102BFF26A5709520 (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::get_Count()
inline int32_t List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_inline (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m0084993EFF242AD712CBF7FE45346F734ABFB0B8 (Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onActionChange(System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onActionChange_m781F9B948CECB8E816D2C8AC924D45B8202C72BC (Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::Add(T)
inline void List_1_Add_mC9EEB069D24F6B245215D7ACD2F4372004ECA16F_inline (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* __this, InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96*, InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnDisable_m0BF185ADE0239B96AC89644B1B95B4C16DBAFABA (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::Remove(T)
inline bool List_1_Remove_m7B1DBF5982BA1DDCC1D2C501CD878F7E9C2697D8 (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* __this, InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96*, InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::remove_onActionChange(System.Action`2<System.Object,UnityEngine.InputSystem.InputActionChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onActionChange_m791FB8CBC5B77626551D79D43AB92856F44D23AB (Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57 (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Event UnityEngine.Event::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD (const RuntimeMethod* method) ;
// UnityEngine.EventType UnityEngine.Event::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8 (Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnGUI_mB851065DA86CE60DD3E7A159E90DD575B3B30BBE (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.VisualizationHelpers::get_ValueTextStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961 (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_text, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pos, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// System.Object UnityEngine.InputSystem.InputAction::ReadValueAsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputAction_ReadValueAsObject_mABB97A2AFDF90314BA31C7024A56D56CF9B25B4D (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordControlName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordControlName_mEB83EDA2E4B309634D3338B8679F2C8CFC425906 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.InputAction::get_activeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* InputAction_get_activeControl_m1FE60E2AD60BA8C13A4D4EB7B5628422FC348081 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputControl::get_path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_path_mB32F887DB25DF6EF5D6B85D513EC4F9452BD146F (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, String_t* ___0_text, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___0_startIndex, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputSystem::ListEnabledActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tE1DF165936F3562084DB454140315041796A957F* InputSystem_ListEnabledActions_m41AC3E56AF57974504810E3E08D4249B649486CD (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.InputSystem.InputAction>::GetEnumerator()
inline Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A List_1_GetEnumerator_mB5A980DCDA43C4387541E14E264C67826DA20589 (List_1_tE1DF165936F3562084DB454140315041796A957F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A (*) (List_1_tE1DF165936F3562084DB454140315041796A957F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>::Dispose()
inline void Enumerator_Dispose_mDBE4823BFBC144A195D358673603D08BEA62BA66 (Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>::get_Current()
inline InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* Enumerator_get_Current_m12F8EA6BF373316A7269723E4DEBB0E26530E83B_inline (Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A* __this, const RuntimeMethod* method)
{
	return ((  InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* (*) (Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String UnityEngine.InputSystem.InputAction::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m1F0AADC84A46CBF2EEE3AEACB760189F68D50938_inline (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009 (String_t* ___0_strA, String_t* ___1_strB, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::get_actionMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputActionMap::get_name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputActionMap_get_name_mCB679DD2375CBD4A3F7A3419CEDF8AE928CDEBC8_inline (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.InputAction>::MoveNext()
inline bool Enumerator_MoveNext_m37BC912859AF965950A6BF924BF26071EA660F28 (Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputAction_get_type_m38C877B5AF9B9384F0380838E41B7DD8EC0C5373_inline (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Single>::.ctor(System.Int32)
inline void ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB (ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* __this, int32_t ___0_numSamples, const RuntimeMethod* method)
{
	((  void (*) (ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75*, int32_t, const RuntimeMethod*))ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_gshared)(__this, ___0_numSamples, method);
}
// System.String UnityEngine.InputSystem.InputAction::get_expectedControlType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_expectedControlType_mE3E982BF4730F61BBA9DFF2AB63983F9BCEAD6DA_inline (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Layouts.InputControlLayout UnityEngine.InputSystem.InputSystem::LoadLayout(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* InputSystem_LoadLayout_m51D956618DED057AED89ACBC4068B49BC8764189 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Type UnityEngine.InputSystem.Layouts.InputControlLayout::GetValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* InputControlLayout_GetValueType_mABA1A9BF110B2652D423DF92B17E5D36DE6B40BE (InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ScalarVisualizer`1<System.Int32>::.ctor(System.Int32)
inline void ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B (ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* __this, int32_t ___0_numSamples, const RuntimeMethod* method)
{
	((  void (*) (ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83*, int32_t, const RuntimeMethod*))ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_gshared)(__this, ___0_numSamples, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer__ctor_mEF9B1E69F99945AAE6654BAE0671A50EFEB22CC0 (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, int32_t ___0_numSamples, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer__ctor_mB201B5B5FD151C099DF335990A4FBE2E1D65D3AD (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, float ___0_totalTimeUnitsShown, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.IInputInteraction UnityEngine.InputSystem.InputAction/CallbackContext::get_interaction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CallbackContext_get_interaction_mF05241B8F876487AC3A631CBE900BC3C80D6F1F8 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetTimeline(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_GetTimeline_mBD3C28BB7ABA061377705FDFB7733F7122AF88FB (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timelineCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddTimeline(System.String,UnityEngine.Color,UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_AddTimeline_mB1609C77DB73413D8CCA02727FE74C87981DEE35 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, int32_t ___2_plotType, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLegend(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLegend_mA12722950A12F913A4E9F4ED357EB6F5856914BD_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.InputAction/CallbackContext::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double CallbackContext_get_time_m411EBA76522616EF38FD78341B246EEF94908050 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction/CallbackContext::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702 (CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_op_Implicit_m75B949D29E204E30381A923170EC463DA251D624 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddSample(System.Int32,UnityEngine.InputSystem.Utilities.PrimitiveValue,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_timelineIndex, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___1_value, float ___2_time, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputActionVisualizer>::get_Item(System.Int32)
inline InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687 (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* (*) (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionDisabled_mD8C12E4B8403C3D978AB158E41A3D7DF99576D4F (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer__ctor_m42B6ABE2BD6CE0C1C4B64AB4F22E191DA8A0CD2E (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_SetupVisualizer_m98C1154DB63B92146B6D28E191B2DF6088143226 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::ResolveControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::.ctor()
inline void List_1__ctor_m9F38FA10689CE2CC84E132D13477C9F63AB9DD41 (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::get_Count()
inline int32_t List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_inline (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6DEC13F96CE9CD74561DCCA7017E450079C96942_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::add_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_add_onDeviceChange_mC1BAF8DE08B2B3F6D0A98D80AE1E4FF5531C60FA (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEventListener UnityEngine.InputSystem.InputSystem::get_onEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D InputSystem_get_onEvent_mADCC1DBC03BC468ABF3AF7FB9BF2A0D9E1740510 (const RuntimeMethod* method) ;
// System.Void System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10 (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_mFC80A1D3B6BA1009B9779F59B49347FEEE827FB6_gshared)(__this, ___0_object, ___1_method, method);
}
// UnityEngine.InputSystem.LowLevel.InputEventListener UnityEngine.InputSystem.LowLevel.InputEventListener::op_Addition(UnityEngine.InputSystem.LowLevel.InputEventListener,System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D InputEventListener_op_Addition_mE4193B2988A4BA5E50D618112E188CEFAB5B6AFC (InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D ___0__, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___1_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputSystem::set_onEvent(UnityEngine.InputSystem.LowLevel.InputEventListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_set_onEvent_m8FD1599425D2F0408F6001E4D1663D53105D7F21 (InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::Add(T)
inline void List_1_Add_mD41ADE5884D63597B631BA9E4B888E302A1A3032_inline (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* __this, InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B*, InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::Remove(T)
inline bool List_1_Remove_m1E47EB4A2199E96BB05A1B0FCE570857108B1112 (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* __this, InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B*, InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.InputSystem.InputSystem::remove_onDeviceChange(System.Action`2<UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSystem_remove_onDeviceChange_mD08F75C263C2D687B2E6E68E86105829075BF717 (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputEventListener UnityEngine.InputSystem.LowLevel.InputEventListener::op_Subtraction(UnityEngine.InputSystem.LowLevel.InputEventListener,System.Action`2<UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D InputEventListener_op_Subtraction_m1F22563B9F83525FF3046236D787006F931913FA (InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D ___0__, Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___1_callback, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnValidate_m65E0237B6A2BE6A8A29430BB055829E21BCD1192 (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl> UnityEngine.InputSystem.InputSystem::FindControls(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA InputSystem_FindControls_mC0AD483AD6A77DDF24B7FAD6712C39F47371EBB1 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>::Dispose()
inline void InputControlList_1_Dispose_m1FD2281787B2A125095CD9203E77BA4A0F15AA82 (InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA* __this, const RuntimeMethod* method)
{
	((  void (*) (InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA*, const RuntimeMethod*))InputControlList_1_Dispose_mB88ABF9267ADE8178F03975EA3E2261706B108F4_gshared)(__this, method);
}
// System.Int32 UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>::get_Count()
inline int32_t InputControlList_1_get_Count_m5B820C76C808D235DDFA474A8025370547ECC993_inline (InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA*, const RuntimeMethod*))InputControlList_1_get_Count_m663DD04B3605E201E0BD4AC5D7CD4E92A81A4E53_gshared_inline)(__this, method);
}
// TControl UnityEngine.InputSystem.InputControlList`1<UnityEngine.InputSystem.InputControl>::get_Item(System.Int32)
inline InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A (InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* (*) (InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA*, int32_t, const RuntimeMethod*))InputControlList_1_get_Item_mA6D11AC01076BDE34EE9C019D4A348E3C404DBA6_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_timeUnit(UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_timeUnit_m0895304C2ECCBBF9C5D3130694D915D5AA338FCD_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_historyDepth(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_historyDepth_mA08F58C027B5BB38316ED8F9C2D3785FF376AF3A_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLimits(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLimits_mAE7CAB87EC3DF3672633A0204160B059F1FB8B73_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_limitsY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_valueUnit(UnityEngine.GUIContent)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_valueUnit_m8B51379D5B832400F03CBE3680B96248F65AF1F6_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentDeviceVisualizer__ctor_mD6B96939B3CDEA54E887AC88609FCF37DA9A8A74 (CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C* __this, const RuntimeMethod* method) ;
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.InputSystem.Samples.InputControlVisualizer>::get_Item(System.Int32)
inline InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283 (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* (*) (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// UnityEngine.InputSystem.InputDevice UnityEngine.InputSystem.InputControl::get_device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.InputSystem.LowLevel.InputState::get_updateCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.LowLevel.InputUpdateType UnityEngine.InputSystem.LowLevel.InputState::get_currentUpdateType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputState_get_currentUpdateType_m77DBCEC0F6E435740C44467281149B2F74025C10_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.StateEvent>()
inline bool InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*, const RuntimeMethod*))InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_gshared)(__this, method);
}
// System.Boolean UnityEngine.InputSystem.LowLevel.InputEventPtr::IsA<UnityEngine.InputSystem.LowLevel.DeltaStateEvent>()
inline bool InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0*, const RuntimeMethod*))InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7_gshared)(__this, method);
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEventImpl(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEventImpl_m70CDAFBE26305EE15B3FB9A356137E5DC41892D6 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_eventPtr, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___1_device, const RuntimeMethod* method) ;
// System.Void* UnityEngine.InputSystem.InputControlExtensions::GetStatePtrFromStateEvent(UnityEngine.InputSystem.InputControl,UnityEngine.InputSystem.LowLevel.InputEventPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* InputControlExtensions_GetStatePtrFromStateEvent_m467CADB481AAB10AC0F0D674A398D050789BD3B6 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* ___0_control, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___1_eventPtr, const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.LowLevel.InputEventPtr::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double InputEventPtr_get_time_mD2C90C66C334E767E2F9B5B9A3711B500027B185 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.PrimitiveValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetOrCreateSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* TimelineVisualizer_GetOrCreateSample_m7188FEE4DD8C1B75734E3977F9C61C6FBAAD70C2 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_timelineIndex, int32_t ___1_frame, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::ToInt32(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrimitiveValue_ToInt32_m5CCE1FB7974A378503F69C5E47060A8B7BEAC40C (PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_op_Implicit_mAEEE3AFD629C0F27AA275B5A31D31D148D81F99D (int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_limitsY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::ToDouble(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PrimitiveValue_ToDouble_mC5A29D23FF257A5910AF74DDB7E1167F2083BA17 (PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_op_Implicit_m21D16B29AF50C87FC51E3BB67B2177373E62F12B (double ___0_value, const RuntimeMethod* method) ;
// System.UInt32 UnityEngine.InputSystem.LowLevel.InputEventPtr::get_sizeInBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InputEventPtr_get_sizeInBytes_mE060F5A7176AAF8ED749DB4A3DC7976249716597 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_op_Implicit_m73A584CE9F050CC4BE65644ABFB03082DC832FA5 (int64_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::ResolveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_ResolveParent_mEC2E04F90771A56863D1B2ABBD00A2DB29E94126 (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawRectangle(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1 (GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___1_content, bool ___2_isHover, bool ___3_isActive, bool ___4_on, bool ___5_hasKeyboardFocus, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.InputSystem.Samples.InputControlVisualizer>()
inline InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* Component_GetComponent_TisInputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_m6BD63DA5E9E4EBDAAEA521707A3A60C6E3EC6546 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pointA, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pointB, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_width, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.GUI::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GUI_get_color_m15488B4AD785D10DEB5C66398D0FA9A0C0EA7ABB (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.InputSystem.Samples.VisualizationHelpers::get_OnePixTex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* VisualizationHelpers_get_OnePixTex_mCF461790FA16C58466EE162F1A800A3703B56719 (const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_image, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIContent__ctor_m798E35DEED8E153FF39445EBEB634F896F19DF19 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_src, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.GUI::get_matrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GUI_get_matrix_m3CA02DED0598EE32BD9E66CA533A78EFB0A246FC (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::ScaleAroundPivot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_ScaleAroundPivot_mDFE2245F1E9F1F5719519D79D2BCF6C12CD052F9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_scale, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pivotPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIUtility::RotateAroundPivot(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIUtility_RotateAroundPivot_mA1AD5027CE63F6902AE6458286C13F53C8EE441F (float ___0_angle, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pivotPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::set_matrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GUIStyle_get_fontSize_mBD6EEA6C9C09825DACE0395B1EC8D773FE94F8CF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.InputSystem.InputControl::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22 (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(System.String,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m827840044BA047B119419B623BCF13F0E90D969E (String_t* ___0_text, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pos, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Gamepad UnityEngine.InputSystem.Gamepad::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* Gamepad_get_current_mAC9BE72710676EA54E760FFBA15404A81D7DEEB6_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Mouse UnityEngine.InputSystem.Mouse::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Pen UnityEngine.InputSystem.Pen::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF* Pen_get_current_m00F91ABDEAFBE112707EAE720B1481DE5AECC795_inline (const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Pointer UnityEngine.InputSystem.Pointer::get_current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* Pointer_get_current_m207443803344C305DEAAEBA56C445980D6C22CB3_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.InputDevice::get_deviceId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visualizer__ctor_m4BE0E6F6426C5A7C9A721CB928FE5C7BD8EAD193 (Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::.ctor(System.Int32)
inline void ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1 (ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138* __this, int32_t ___0_numSamples, const RuntimeMethod* method)
{
	((  void (*) (ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138*, int32_t, const RuntimeMethod*))ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1_gshared)(__this, ___0_numSamples, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/ValueVisualizer`1<UnityEngine.Vector2>::AddSample(System.Object,System.Double)
inline void ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1 (ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138* __this, RuntimeObject* ___0_value, double ___1_time, const RuntimeMethod* method)
{
	((  void (*) (ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138*, RuntimeObject*, double, const RuntimeMethod*))ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1_gshared)(__this, ___0_value, ___1_time, method);
}
// System.Single UnityEngine.Vector2::SignedAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawAxis(UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis,UnityEngine.Rect,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawAxis_m6FBA7B1B0EF9F92382DA48F9A828A2B5B28A5E1D (int32_t ___0_axis, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_width, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::PixelPosForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Visualizer_PixelPosForValue_mEFF890F34341AC49E804B86B02A7F5BBA60051ED (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093 (RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* (*) (RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F*, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093_gshared)(__this, ___0_index, method);
}
// UnityEngine.Rect UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::RectForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Vector2Visualizer_RectForValue_m3112F9619818BFD0A0F749F13F338B9D310C1EBD (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.GUIContent>::get_Item(System.Int32)
inline GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2** RingBuffer_1_get_Item_m218A59EE14B00E2FC0D9D8E5EB5B70D049875DAC (RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2** (*) (RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F*, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_m60D7074AC228E61EE6BF82ECE7DFFBE15C6DB61E_gshared)(__this, ___0_index, method);
}
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timeUnit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_BeginGroup_m3C614974B57A05AA16F1DD54E524C5CEF8D9F9DC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_position, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::get_Item(System.Int32)
inline TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1 (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* (*) (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C*, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1_gshared)(__this, ___0_index, method);
}
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::get_Item(System.Int32)
inline FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* (*) (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56*, int32_t, const RuntimeMethod*))RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_gshared)(__this, ___0_index, method);
}
// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::get_isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitiveValue_get_isEmpty_m5EB7E528CDE36950BBE170CE82D1DB78D45E4347 (PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::ToSingle(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PrimitiveValue_ToSingle_mB1DAF285A066B17850C7B390FC83099289D0CF1B (PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* __this, RuntimeObject* ___0_provider, const RuntimeMethod* method) ;
// System.Void UnityEngine.GUI::EndGroup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_EndGroup_mE8C7A3FB87B0EAA3556AB16466D0D640BBEE1675 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLegend()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLegend_m8E15E3C1984B139C81D1EEEC1CDD3E0BBCCD86C3_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_width(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8 (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_content, float ___1_width, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLimits()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLimits_mD421A4478284E34B8CA3D2DC71E5F2A5B2AC82D4_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.PrimitiveValue::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_FromObject_m8614FFABB7D5DAF218397AB3C2254089477C8786 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_historyDepth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_historyDepth_mAE440241BCB9D518CD34C46DC274F8B3529D24B2_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::.ctor(System.Int32)
inline void RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56*, int32_t, const RuntimeMethod*))RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D_gshared)(__this, ___0_size, method);
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::.ctor(System.Int32)
inline void RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815 (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C*, int32_t, const RuntimeMethod*))RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815_gshared)(__this, ___0_size, method);
}
// System.Void System.Array::Resize<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline>(T[]&,System.Int32)
inline void Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC (TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72**, int32_t, const RuntimeMethod*))Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC_gshared)(___0_array, ___1_newSize, method);
}
// System.String UnityEngine.GUIContent::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* __this, const RuntimeMethod* method) ;
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample>::Append(TValue)
inline TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* __this, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F ___0_value, const RuntimeMethod* method)
{
	return ((  TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* (*) (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C*, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F, const RuntimeMethod*))RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A_gshared)(__this, ___0_value, method);
}
// TValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/RingBuffer`1<UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample>::Append(TValue)
inline FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32 (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* __this, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619 ___0_value, const RuntimeMethod* method)
{
	return ((  FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* (*) (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56*, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619, const RuntimeMethod*))RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32_gshared)(__this, ___0_value, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
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
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.Samples.InputActionVisualizer::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionVisualizer_get_action_mF057D6488D95A81D6DDAB5761AE98ADA0F1355CD (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	{
		// public InputAction action => m_Action;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___m_Action_16;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_FixedUpdate_mA4F1302D89BD76313FD9381C6572B30711E00556 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Visualization != Visualization.Value || m_Action == null || m_Visualizer == null)
		int32_t L_0 = __this->___m_Visualization_12;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___m_Action_16;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_2 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		if (L_2)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (InputSystem.settings.updateMode != InputSettings.UpdateMode.ProcessEventsInFixedUpdate)
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_3;
		L_3 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputSettings_get_updateMode_mD37EABFC0678912846EABBC3CF31AC82E4ACE79E_inline(L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		// return;
		return;
	}

IL_0028:
	{
		// RecordValue(Time.fixedTime);
		float L_5;
		L_5 = Time_get_fixedTime_mEEDC1E90FA9C17F861872AF08459C04A6BBFCC21(NULL);
		InputActionVisualizer_RecordValue_mE718C418173C8DA11F25D31953AE8ABA032863B7(__this, ((double)L_5), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_Update_mEE2A4EE60A9F958729C8E3A21A116B8497021572 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Visualization != Visualization.Value || m_Action == null || m_Visualizer == null)
		int32_t L_0 = __this->___m_Visualization_12;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1 = __this->___m_Action_16;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_2 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		if (L_2)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (InputSystem.settings.updateMode != InputSettings.UpdateMode.ProcessEventsInDynamicUpdate)
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* L_3;
		L_3 = InputSystem_get_settings_m8E3E9C0907904CBDBAE96354142AB0A87C7A3B74(NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InputSettings_get_updateMode_mD37EABFC0678912846EABBC3CF31AC82E4ACE79E_inline(L_3, NULL);
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		// return;
		return;
	}

IL_0028:
	{
		// RecordValue(Time.time);
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		InputActionVisualizer_RecordValue_mE718C418173C8DA11F25D31953AE8ABA032863B7(__this, ((double)L_5), NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnEnable_mEFB63575E61ADFDF705FBD72A2AC47D717386EB8 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionChange_m53D67F4BDFE91D0D5FD086A350792D31B66BAC3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC9EEB069D24F6B245215D7ACD2F4372004ECA16F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0DA0863FDDBDE2DC04EBDAD7102BFF26A5709520_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Visualization == Visualization.None)
		int32_t L_0 = __this->___m_Visualization_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// base.OnEnable();
		InputVisualizer_OnEnable_m421992743EE6DC06CF1457DE7C92C3622BD55041(__this, NULL);
		// ResolveAction();
		InputActionVisualizer_ResolveAction_m9376F6B20FF3277F55F02D23F512F018E599AEA7(__this, NULL);
		// SetupVisualizer();
		InputActionVisualizer_SetupVisualizer_m265530189A1E6EF49C5A05E2A57112C75243323E(__this, NULL);
		// if (s_EnabledInstances == null)
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_1 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		// s_EnabledInstances = new List<InputActionVisualizer>();
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_2 = (List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96*)il2cpp_codegen_object_new(List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0DA0863FDDBDE2DC04EBDAD7102BFF26A5709520(L_2, List_1__ctor_m0DA0863FDDBDE2DC04EBDAD7102BFF26A5709520_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19), (void*)L_2);
	}

IL_002c:
	{
		// if (s_EnabledInstances.Count == 0)
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_3 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_inline(L_3, List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		// InputSystem.onActionChange += OnActionChange;
		Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* L_5 = (Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D*)il2cpp_codegen_object_new(Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m0084993EFF242AD712CBF7FE45346F734ABFB0B8(L_5, NULL, (intptr_t)((void*)InputActionVisualizer_OnActionChange_m53D67F4BDFE91D0D5FD086A350792D31B66BAC3E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_add_onActionChange_m781F9B948CECB8E816D2C8AC924D45B8202C72BC(L_5, NULL);
	}

IL_0049:
	{
		// s_EnabledInstances.Add(this);
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_6 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_6);
		List_1_Add_mC9EEB069D24F6B245215D7ACD2F4372004ECA16F_inline(L_6, __this, List_1_Add_mC9EEB069D24F6B245215D7ACD2F4372004ECA16F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnDisable_m942A836FD7A2A3AF3C8A043C97273F47337F2613 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionChange_m53D67F4BDFE91D0D5FD086A350792D31B66BAC3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m7B1DBF5982BA1DDCC1D2C501CD878F7E9C2697D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		InputVisualizer_OnDisable_m0BF185ADE0239B96AC89644B1B95B4C16DBAFABA(__this, NULL);
		// s_EnabledInstances.Remove(this);
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_0 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_m7B1DBF5982BA1DDCC1D2C501CD878F7E9C2697D8(L_0, __this, List_1_Remove_m7B1DBF5982BA1DDCC1D2C501CD878F7E9C2697D8_RuntimeMethod_var);
		// if (s_EnabledInstances.Count == 0)
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_2 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_inline(L_2, List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002f;
		}
	}
	{
		// InputSystem.onActionChange -= OnActionChange;
		Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* L_4 = (Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D*)il2cpp_codegen_object_new(Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_2__ctor_m0084993EFF242AD712CBF7FE45346F734ABFB0B8(L_4, NULL, (intptr_t)((void*)InputActionVisualizer_OnActionChange_m53D67F4BDFE91D0D5FD086A350792D31B66BAC3E_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_remove_onActionChange_m791FB8CBC5B77626551D79D43AB92856F44D23AB(L_4, NULL);
	}

IL_002f:
	{
		// if (m_Visualization == Visualization.Interaction && m_Action != null)
		int32_t L_5 = __this->___m_Visualization_12;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_0085;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6 = __this->___m_Action_16;
		if (!L_6)
		{
			goto IL_0085;
		}
	}
	{
		// m_Action.started -= OnActionTriggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = __this->___m_Action_16;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_8 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_8, __this, (intptr_t)((void*)InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InputAction_remove_started_m0B782C3E7D5EA619502E7079E1271108A3183D68(L_7, L_8, NULL);
		// m_Action.performed -= OnActionTriggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = __this->___m_Action_16;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_10 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_10, __this, (intptr_t)((void*)InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		InputAction_remove_performed_m1BE84CED38F11F17C825FA782B35C92D708E6E44(L_9, L_10, NULL);
		// m_Action.canceled -= OnActionTriggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11 = __this->___m_Action_16;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_12 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_12, __this, (intptr_t)((void*)InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InputAction_remove_canceled_m7CF8D377C61DB1290E153C56312A7C075544AF7F(L_11, L_12, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnGUI_mFB81D2AB05EE6A91AB595B9ECE5EBCF766D1E802 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Visualization == Visualization.None)
		int32_t L_0 = __this->___m_Visualization_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (Event.current.type != EventType.Repaint)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_1;
		L_1 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// base.OnGUI();
		InputVisualizer_OnGUI_mB851065DA86CE60DD3E7A159E90DD575B3B30BBE(__this, NULL);
		// if (m_ShowControlName && m_ActiveControlName != null)
		bool L_3 = __this->___m_ShowControlName_15;
		if (!L_3)
		{
			goto IL_0058;
		}
	}
	{
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_4 = __this->___m_ActiveControlName_18;
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		// VisualizationHelpers.DrawText(m_ActiveControlName, new Vector2(m_Rect.x, m_Rect.yMax),
		//     VisualizationHelpers.ValueTextStyle);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_5 = __this->___m_ActiveControlName_18;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Rect_7);
		float L_7;
		L_7 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_6, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Rect_7);
		float L_9;
		L_9 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_7, L_9, /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_11;
		L_11 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_5, L_10, L_11, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordValue_mE718C418173C8DA11F25D31953AE8ABA032863B7 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, double ___0_time, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var value = m_Action.ReadValueAsObject();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___m_Action_16;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InputAction_ReadValueAsObject_mABB97A2AFDF90314BA31C7024A56D56CF9B25B4D(L_0, NULL);
		V_0 = L_1;
		// m_Visualizer.AddSample(value, time);
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_2 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		RuntimeObject* L_3 = V_0;
		double L_4 = ___0_time;
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject*, double >::Invoke(5 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::AddSample(System.Object,System.Double) */, L_2, L_3, L_4);
		// if (m_ShowControlName)
		bool L_5 = __this->___m_ShowControlName_15;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// RecordControlName();
		InputActionVisualizer_RecordControlName_mEB83EDA2E4B309634D3338B8679F2C8CFC425906(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::RecordControlName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_RecordControlName_mEB83EDA2E4B309634D3338B8679F2C8CFC425906 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* V_0 = NULL;
	InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* G_B4_0 = NULL;
	InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* G_B3_0 = NULL;
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* G_B5_0 = NULL;
	InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* G_B5_1 = NULL;
	{
		// var control = m_Action.activeControl;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___m_Action_16;
		NullCheck(L_0);
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1;
		L_1 = InputAction_get_activeControl_m1FE60E2AD60BA8C13A4D4EB7B5628422FC348081(L_0, NULL);
		V_0 = L_1;
		// if (control == m_ActiveControl)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_2 = V_0;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3 = __this->___m_ActiveControl_17;
		if ((!(((RuntimeObject*)(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)L_2) == ((RuntimeObject*)(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)L_3))))
		{
			goto IL_0016;
		}
	}
	{
		// return;
		return;
	}

IL_0016:
	{
		// m_ActiveControl = control;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_4 = V_0;
		__this->___m_ActiveControl_17 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveControl_17), (void*)L_4);
		// m_ActiveControlName = control != null ? new GUIContent(control.path) : null;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_5 = V_0;
		G_B3_0 = __this;
		if (L_5)
		{
			G_B4_0 = __this;
			goto IL_0024;
		}
	}
	{
		G_B5_0 = ((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_002f;
	}

IL_0024:
	{
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InputControl_get_path_mB32F887DB25DF6EF5D6B85D513EC4F9452BD146F(L_6, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_8 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_8, L_7, NULL);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_0;
	}

IL_002f:
	{
		NullCheck(G_B5_1);
		G_B5_1->___m_ActiveControlName_18 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___m_ActiveControlName_18), (void*)G_B5_0);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::ResolveAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_ResolveAction_m9376F6B20FF3277F55F02D23F512F018E599AEA7 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mDBE4823BFBC144A195D358673603D08BEA62BA66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m37BC912859AF965950A6BF924BF26071EA660F28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m12F8EA6BF373316A7269723E4DEBB0E26530E83B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB5A980DCDA43C4387541E14E264C67826DA20589_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A V_3;
	memset((&V_3), 0, sizeof(V_3));
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_4 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		// if (m_ActionReference != null)
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_ActionReference_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Action = m_ActionReference.action;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_ActionReference_13;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		__this->___m_Action_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Action_16), (void*)L_3);
	}

IL_001f:
	{
		// if (m_Action == null && !string.IsNullOrEmpty(m_ActionName))
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->___m_Action_16;
		if (L_4)
		{
			goto IL_00e2;
		}
	}
	{
		String_t* L_5 = __this->___m_ActionName_14;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_00e2;
		}
	}
	{
		// var slashIndex = m_ActionName.IndexOf('/');
		String_t* L_7 = __this->___m_ActionName_14;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_7, ((int32_t)47), NULL);
		V_0 = L_8;
		// var mapName = slashIndex != -1 ? m_ActionName.Substring(0, slashIndex) : null;
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)(-1)))))
		{
			goto IL_004f;
		}
	}
	{
		G_B7_0 = ((String_t*)(NULL));
		goto IL_005c;
	}

IL_004f:
	{
		String_t* L_10 = __this->___m_ActionName_14;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_10, 0, L_11, NULL);
		G_B7_0 = L_12;
	}

IL_005c:
	{
		V_1 = G_B7_0;
		// var actionName = slashIndex != -1 ? m_ActionName.Substring(slashIndex + 1) : m_ActionName;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_14 = __this->___m_ActionName_14;
		G_B10_0 = L_14;
		goto IL_0077;
	}

IL_0069:
	{
		String_t* L_15 = __this->___m_ActionName_14;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_15, ((int32_t)il2cpp_codegen_add(L_16, 1)), NULL);
		G_B10_0 = L_17;
	}

IL_0077:
	{
		V_2 = G_B10_0;
		// var enabledActions = InputSystem.ListEnabledActions();
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		List_1_tE1DF165936F3562084DB454140315041796A957F* L_18;
		L_18 = InputSystem_ListEnabledActions_m41AC3E56AF57974504810E3E08D4249B649486CD(NULL);
		// foreach (var action in enabledActions)
		NullCheck(L_18);
		Enumerator_tB670B867B5D5A7F2A26876605BF30F259FC9228A L_19;
		L_19 = List_1_GetEnumerator_mB5A980DCDA43C4387541E14E264C67826DA20589(L_18, List_1_GetEnumerator_mB5A980DCDA43C4387541E14E264C67826DA20589_RuntimeMethod_var);
		V_3 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00d4:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mDBE4823BFBC144A195D358673603D08BEA62BA66((&V_3), Enumerator_Dispose_mDBE4823BFBC144A195D358673603D08BEA62BA66_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00c9_1;
			}

IL_0085_1:
			{
				// foreach (var action in enabledActions)
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_20;
				L_20 = Enumerator_get_Current_m12F8EA6BF373316A7269723E4DEBB0E26530E83B_inline((&V_3), Enumerator_get_Current_m12F8EA6BF373316A7269723E4DEBB0E26530E83B_RuntimeMethod_var);
				V_4 = L_20;
				// if (string.Compare(actionName, action.name, StringComparison.InvariantCultureIgnoreCase) != 0)
				String_t* L_21 = V_2;
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_22 = V_4;
				NullCheck(L_22);
				String_t* L_23;
				L_23 = InputAction_get_name_m1F0AADC84A46CBF2EEE3AEACB760189F68D50938_inline(L_22, NULL);
				int32_t L_24;
				L_24 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_21, L_23, 3, NULL);
				if (L_24)
				{
					goto IL_00c9_1;
				}
			}
			{
				// if (mapName != null && action.actionMap != null && string.Compare(mapName, action.actionMap.name,
				//     StringComparison.InvariantCultureIgnoreCase) != 0)
				String_t* L_25 = V_1;
				if (!L_25)
				{
					goto IL_00bf_1;
				}
			}
			{
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_26 = V_4;
				NullCheck(L_26);
				InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_27;
				L_27 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(L_26, NULL);
				if (!L_27)
				{
					goto IL_00bf_1;
				}
			}
			{
				String_t* L_28 = V_1;
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_29 = V_4;
				NullCheck(L_29);
				InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_30;
				L_30 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(L_29, NULL);
				NullCheck(L_30);
				String_t* L_31;
				L_31 = InputActionMap_get_name_mCB679DD2375CBD4A3F7A3419CEDF8AE928CDEBC8_inline(L_30, NULL);
				int32_t L_32;
				L_32 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_28, L_31, 3, NULL);
				if (L_32)
				{
					goto IL_00c9_1;
				}
			}

IL_00bf_1:
			{
				// m_Action = action;
				InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_33 = V_4;
				__this->___m_Action_16 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Action_16), (void*)L_33);
				// break;
				goto IL_00e2;
			}

IL_00c9_1:
			{
				// foreach (var action in enabledActions)
				bool L_34;
				L_34 = Enumerator_MoveNext_m37BC912859AF965950A6BF924BF26071EA660F28((&V_3), Enumerator_MoveNext_m37BC912859AF965950A6BF924BF26071EA660F28_RuntimeMethod_var);
				if (L_34)
				{
					goto IL_0085_1;
				}
			}
			{
				goto IL_00e2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00e2:
	{
		// if (m_Action == null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_35 = __this->___m_Action_16;
		if (L_35)
		{
			goto IL_00eb;
		}
	}
	{
		// return;
		return;
	}

IL_00eb:
	{
		// if (m_Visualization == Visualization.Interaction)
		int32_t L_36 = __this->___m_Visualization_12;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_0139;
		}
	}
	{
		// m_Action.performed += OnActionTriggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_37 = __this->___m_Action_16;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_38 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_38, __this, (intptr_t)((void*)InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		InputAction_add_performed_m0337FFA16EBEF7AE365C3B558CFDFF7BB9747B54(L_37, L_38, NULL);
		// m_Action.started += OnActionTriggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_39 = __this->___m_Action_16;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_40 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_40, __this, (intptr_t)((void*)InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		InputAction_add_started_m850C46EBBEEFB3F9760AA83BFD6ECA00850657E5(L_39, L_40, NULL);
		// m_Action.canceled += OnActionTriggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_41 = __this->___m_Action_16;
		Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E* L_42 = (Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E*)il2cpp_codegen_object_new(Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		Action_1__ctor_mA763900B34C3394F230AE63708F530CA9A192B57(L_42, __this, (intptr_t)((void*)InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		InputAction_add_canceled_m69EC253E21CC314BFB350A86E294D0651F5ECA77(L_41, L_42, NULL);
	}

IL_0139:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_SetupVisualizer_m265530189A1E6EF49C5A05E2A57112C75243323E (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* V_2 = NULL;
	Type_t* V_3 = NULL;
	{
		// m_Visualizer = null;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = (Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)(Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4*)NULL);
		// if (m_Action == null)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_0 = __this->___m_Action_16;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
		// switch (m_Visualization)
		int32_t L_1 = __this->___m_Visualization_12;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_0100;
		}
	}
	{
		return;
	}

IL_0023:
	{
		// switch (m_Action.type)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = __this->___m_Action_16;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InputAction_get_type_m38C877B5AF9B9384F0380838E41B7DD8EC0C5373_inline(L_4, NULL);
		V_1 = L_5;
		int32_t L_6 = V_1;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005b;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_005b;
			}
		}
	}
	{
		return;
	}

IL_0042:
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<float>
		// {
		//     limitMax = 1
		// };
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_7 = (ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75*)il2cpp_codegen_object_new(ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB(L_7, ((int32_t)10), ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_RuntimeMethod_var);
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_8 = L_7;
		NullCheck(L_8);
		L_8->___limitMax_3 = (1.0f);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_8);
		// break;
		return;
	}

IL_005b:
	{
		// if (!string.IsNullOrEmpty(m_Action.expectedControlType))
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_9 = __this->___m_Action_16;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputAction_get_expectedControlType_mE3E982BF4730F61BBA9DFF2AB63983F9BCEAD6DA_inline(L_9, NULL);
		bool L_11;
		L_11 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_10, NULL);
		if (L_11)
		{
			goto IL_0110;
		}
	}
	{
		// var layout = InputSystem.LoadLayout(m_Action.expectedControlType);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_12 = __this->___m_Action_16;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InputAction_get_expectedControlType_mE3E982BF4730F61BBA9DFF2AB63983F9BCEAD6DA_inline(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_14;
		L_14 = InputSystem_LoadLayout_m51D956618DED057AED89ACBC4068B49BC8764189(L_13, NULL);
		V_2 = L_14;
		// if (layout != null)
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_15 = V_2;
		if (!L_15)
		{
			goto IL_0110;
		}
	}
	{
		// var valueType = layout.GetValueType();
		InputControlLayout_t46A40BE4C976BE33E85F61E63EB34323FED9831D* L_16 = V_2;
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = InputControlLayout_GetValueType_mABA1A9BF110B2652D423DF92B17E5D36DE6B40BE(L_16, NULL);
		V_3 = L_17;
		// if (valueType == typeof(float))
		Type_t* L_18 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_20, NULL);
		if (!L_21)
		{
			goto IL_00b9;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<float>
		// {
		//     limitMax = 1
		// };
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_22 = (ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75*)il2cpp_codegen_object_new(ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB(L_22, ((int32_t)10), ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_RuntimeMethod_var);
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_23 = L_22;
		NullCheck(L_23);
		L_23->___limitMax_3 = (1.0f);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_23);
		return;
	}

IL_00b9:
	{
		// else if (valueType == typeof(int))
		Type_t* L_24 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		if (!L_27)
		{
			goto IL_00e0;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<int>
		// {
		//     limitMax = 1
		// };
		ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* L_28 = (ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83*)il2cpp_codegen_object_new(ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B(L_28, ((int32_t)10), ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_RuntimeMethod_var);
		ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* L_29 = L_28;
		NullCheck(L_29);
		L_29->___limitMax_3 = 1;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_29);
		return;
	}

IL_00e0:
	{
		// else if (valueType == typeof(Vector2))
		Type_t* L_30 = V_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_30, L_32, NULL);
		if (!L_33)
		{
			goto IL_0110;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.Vector2Visualizer();
		Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* L_34 = (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A*)il2cpp_codegen_object_new(Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Vector2Visualizer__ctor_mEF9B1E69F99945AAE6654BAE0671A50EFEB22CC0(L_34, ((int32_t)10), NULL);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_34);
		// break;
		return;
	}

IL_0100:
	{
		// m_Visualizer = new VisualizationHelpers.TimelineVisualizer();
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_35 = (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)il2cpp_codegen_object_new(TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		TimelineVisualizer__ctor_mB201B5B5FD151C099DF335990A4FBE2E1D65D3AD(L_35, (4.0f), NULL);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_35);
	}

IL_0110:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionDisabled_mD8C12E4B8403C3D978AB158E41A3D7DF99576D4F (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionTriggered(UnityEngine.InputSystem.InputAction/CallbackContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionTriggered_m0DA7562C0192C17D8B1D91B0AB7D8E72A935A23B (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, CallbackContext_tB251EE41F509C6E8A6B05EC97C029A45DF4F5FA8 ___0_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_2 = NULL;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		// var timelineName = "Default";
		V_0 = _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
		// var interaction = context.interaction;
		RuntimeObject* L_0;
		L_0 = CallbackContext_get_interaction_mF05241B8F876487AC3A631CBE900BC3C80D6F1F8((&___0_context), NULL);
		V_1 = L_0;
		// if (interaction != null)
		RuntimeObject* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		// timelineName = interaction.GetType().Name;
		RuntimeObject* L_2 = V_1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		V_0 = L_4;
		// if (timelineName.EndsWith("Interaction"))
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_5, _stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// timelineName = timelineName.Substring(0, timelineName.Length - "Interaction".Length);
		String_t* L_7 = V_0;
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		NullCheck(_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralAF8E649A3EF1AB74A43C9F88015FA68AC719215A, NULL);
		NullCheck(L_7);
		String_t* L_11;
		L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_7, 0, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		V_0 = L_11;
	}

IL_0043:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_12 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		V_2 = ((TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)CastclassClass((RuntimeObject*)L_12, TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var));
		// var timelineIndex = visualizer.GetTimeline(timelineName);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_13 = V_2;
		String_t* L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15;
		L_15 = TimelineVisualizer_GetTimeline_mBD3C28BB7ABA061377705FDFB7733F7122AF88FB(L_13, L_14, NULL);
		V_3 = L_15;
		// if (timelineIndex == -1)
		int32_t L_16 = V_3;
		if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
		{
			goto IL_00ac;
		}
	}
	{
		// timelineIndex = visualizer.timelineCount;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(L_17, NULL);
		V_3 = L_18;
		// if (timelineIndex < s_InteractionColors.Length)
		int32_t L_19 = V_3;
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_20 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_InteractionColors_20;
		NullCheck(L_20);
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_007b;
		}
	}
	{
		// color = s_InteractionColors[timelineIndex];
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_InteractionColors_20;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_5 = L_24;
		goto IL_0096;
	}

IL_007b:
	{
		// color = new Color(Random.value, Random.value, Random.value, 1);
		float L_25;
		L_25 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_26;
		L_26 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		float L_27;
		L_27 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&V_5), L_25, L_26, L_27, (1.0f), NULL);
	}

IL_0096:
	{
		// visualizer.AddTimeline(timelineName, color);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_28 = V_2;
		String_t* L_29 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_5;
		NullCheck(L_28);
		int32_t L_31;
		L_31 = TimelineVisualizer_AddTimeline_mB1609C77DB73413D8CCA02727FE74C87981DEE35(L_28, L_29, L_30, 0, NULL);
		// if (timelineIndex > 0)
		int32_t L_32 = V_3;
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}
	{
		// visualizer.showLegend = true;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_33 = V_2;
		NullCheck(L_33);
		TimelineVisualizer_set_showLegend_mA12722950A12F913A4E9F4ED357EB6F5856914BD_inline(L_33, (bool)1, NULL);
	}

IL_00ac:
	{
		// var time = (float)context.time;
		double L_34;
		L_34 = CallbackContext_get_time_m411EBA76522616EF38FD78341B246EEF94908050((&___0_context), NULL);
		V_4 = ((float)L_34);
		// switch (context.phase)
		int32_t L_35;
		L_35 = CallbackContext_get_phase_mBF36959BEB4B081303626F616535A84137580702((&___0_context), NULL);
		V_6 = L_35;
		int32_t L_36 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_36, 2)))
		{
			case 0:
			{
				goto IL_0113;
			}
			case 1:
			{
				goto IL_00eb;
			}
			case 2:
			{
				goto IL_00d6;
			}
		}
	}
	{
		goto IL_0126;
	}

IL_00d6:
	{
		// visualizer.AddSample(timelineIndex, 0f, time);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_37 = V_2;
		int32_t L_38 = V_3;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_39;
		L_39 = PrimitiveValue_op_Implicit_m75B949D29E204E30381A923170EC463DA251D624((0.0f), NULL);
		float L_40 = V_4;
		NullCheck(L_37);
		TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03(L_37, L_38, L_39, L_40, NULL);
		// break;
		goto IL_0126;
	}

IL_00eb:
	{
		// visualizer.AddSample(timelineIndex, 1f, time);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_41 = V_2;
		int32_t L_42 = V_3;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_43;
		L_43 = PrimitiveValue_op_Implicit_m75B949D29E204E30381A923170EC463DA251D624((1.0f), NULL);
		float L_44 = V_4;
		NullCheck(L_41);
		TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03(L_41, L_42, L_43, L_44, NULL);
		// visualizer.AddSample(timelineIndex, 0f, time);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_45 = V_2;
		int32_t L_46 = V_3;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_47;
		L_47 = PrimitiveValue_op_Implicit_m75B949D29E204E30381A923170EC463DA251D624((0.0f), NULL);
		float L_48 = V_4;
		NullCheck(L_45);
		TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03(L_45, L_46, L_47, L_48, NULL);
		// break;
		goto IL_0126;
	}

IL_0113:
	{
		// visualizer.AddSample(timelineIndex, 0.5f, time);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_49 = V_2;
		int32_t L_50 = V_3;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_51;
		L_51 = PrimitiveValue_op_Implicit_m75B949D29E204E30381A923170EC463DA251D624((0.5f), NULL);
		float L_52 = V_4;
		NullCheck(L_49);
		TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03(L_49, L_50, L_51, L_52, NULL);
	}

IL_0126:
	{
		// if (m_ShowControlName)
		bool L_53 = __this->___m_ShowControlName_15;
		if (!L_53)
		{
			goto IL_0134;
		}
	}
	{
		// RecordControlName();
		InputActionVisualizer_RecordControlName_mEB83EDA2E4B309634D3338B8679F2C8CFC425906(__this, NULL);
	}

IL_0134:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::OnActionChange(System.Object,UnityEngine.InputSystem.InputActionChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer_OnActionChange_m53D67F4BDFE91D0D5FD086A350792D31B66BAC3E (RuntimeObject* ___0_actionOrMap, int32_t ___1_change, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B18_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* G_B17_0 = NULL;
	InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* G_B19_0 = NULL;
	{
		int32_t L_0 = ___1_change;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0071;
			}
			case 2:
			{
				goto IL_0017;
			}
			case 3:
			{
				goto IL_00aa;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_0 = 0;
		goto IL_0063;
	}

IL_001b:
	{
		// if (s_EnabledInstances[i].m_Action == null)
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_1 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_3;
		L_3 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_1, L_2, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_3);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = L_3->___m_Action_16;
		if (L_4)
		{
			goto IL_005f;
		}
	}
	{
		// s_EnabledInstances[i].ResolveAction();
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_5 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_7;
		L_7 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_5, L_6, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_7);
		InputActionVisualizer_ResolveAction_m9376F6B20FF3277F55F02D23F512F018E599AEA7(L_7, NULL);
		// if (s_EnabledInstances[i].m_Action != null)
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_8 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_10;
		L_10 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_8, L_9, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_10);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_11 = L_10->___m_Action_16;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		// s_EnabledInstances[i].SetupVisualizer();
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_12 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_14;
		L_14 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_12, L_13, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_14);
		InputActionVisualizer_SetupVisualizer_m265530189A1E6EF49C5A05E2A57112C75243323E(L_14, NULL);
	}

IL_005f:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0063:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_17 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_inline(L_17, List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001b;
		}
	}
	{
		// break;
		return;
	}

IL_0071:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_1 = 0;
		goto IL_009c;
	}

IL_0075:
	{
		// if (actionOrMap == s_EnabledInstances[i].m_Action)
		RuntimeObject* L_19 = ___0_actionOrMap;
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_20 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_22;
		L_22 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_20, L_21, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_22);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_23 = L_22->___m_Action_16;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_19) == ((RuntimeObject*)(InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)L_23))))
		{
			goto IL_0098;
		}
	}
	{
		// s_EnabledInstances[i].OnActionDisabled();
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_24 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_26;
		L_26 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_24, L_25, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_26);
		InputActionVisualizer_OnActionDisabled_mD8C12E4B8403C3D978AB158E41A3D7DF99576D4F(L_26, NULL);
	}

IL_0098:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009c:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_28 = V_1;
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_29 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_inline(L_29, List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_0075;
		}
	}
	{
		// break;
		return;
	}

IL_00aa:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_2 = 0;
		goto IL_00e1;
	}

IL_00ae:
	{
		// if (s_EnabledInstances[i].m_Action?.actionMap == actionOrMap)
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_31 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_33;
		L_33 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_31, L_32, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_33);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_34 = L_33->___m_Action_16;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_35 = L_34;
		G_B17_0 = L_35;
		if (L_35)
		{
			G_B18_0 = L_35;
			goto IL_00c5;
		}
	}
	{
		G_B19_0 = ((InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09*)(NULL));
		goto IL_00ca;
	}

IL_00c5:
	{
		NullCheck(G_B18_0);
		InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* L_36;
		L_36 = InputAction_get_actionMap_m43B509A85057642A7DD0B89E4F27044ABB5B5E93(G_B18_0, NULL);
		G_B19_0 = L_36;
	}

IL_00ca:
	{
		RuntimeObject* L_37 = ___0_actionOrMap;
		if ((!(((RuntimeObject*)(InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09*)G_B19_0) == ((RuntimeObject*)(RuntimeObject*)L_37))))
		{
			goto IL_00dd;
		}
	}
	{
		// s_EnabledInstances[i].OnActionDisabled();
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_38 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* L_40;
		L_40 = List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687(L_38, L_39, List_1_get_Item_m1504EC71C511881D5B0620E10035136E48FFC687_RuntimeMethod_var);
		NullCheck(L_40);
		InputActionVisualizer_OnActionDisabled_mD8C12E4B8403C3D978AB158E41A3D7DF99576D4F(L_40, NULL);
	}

IL_00dd:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_41 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00e1:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_42 = V_2;
		il2cpp_codegen_runtime_class_init_inline(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		List_1_tD6C08FF77789E56107D0113AA4034A393A96FB96* L_43 = ((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_EnabledInstances_19;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_inline(L_43, List_1_get_Count_m33EE63DDAACBEC5CF32EBCC142C6DBF607E08223_RuntimeMethod_var);
		if ((((int32_t)L_42) < ((int32_t)L_44)))
		{
			goto IL_00ae;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer__ctor_m8814EE6DB90A821A17D29CB88E05FACDA29A78B9 (InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357* __this, const RuntimeMethod* method) 
{
	{
		InputVisualizer__ctor_m42B6ABE2BD6CE0C1C4B64AB4F22E191DA8A0CD2E(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputActionVisualizer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionVisualizer__cctor_m8CE498661B268760B7A08E1EAA5D303CEB9C1BAD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Color[] s_InteractionColors =
		// {
		//     new Color(1, 0, 0, 1),
		//     new Color(0, 0, 1, 1),
		//     new Color(1, 1, 0, 1),
		//     new Color(1, 0, 1, 1),
		//     new Color(0, 1, 1, 1),
		//     new Color(0, 1, 0, 1),
		// };
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_4);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_8);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_10);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_12);
		((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_InteractionColors_20 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_StaticFields*)il2cpp_codegen_static_fields_for(InputActionVisualizer_t6BA31846147A3EDC3C5260B2010F3554C2522357_il2cpp_TypeInfo_var))->___s_InteractionColors_20), (void*)L_11);
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
// UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode UnityEngine.InputSystem.Samples.InputControlVisualizer::get_visualization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlVisualizer_get_visualization_mB61D77249F14D988AC9EF94AA4E7225E81225359 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Visualization;
		int32_t L_0 = __this->___m_Visualization_12;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::set_visualization(UnityEngine.InputSystem.Samples.InputControlVisualizer/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_set_visualization_mD4B6A24725141D5F66FDFA35A606212F7D5DBDDD (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// if (m_Visualization == value)
		int32_t L_0 = __this->___m_Visualization_12;
		int32_t L_1 = ___0_value;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// m_Visualization = value;
		int32_t L_2 = ___0_value;
		__this->___m_Visualization_12 = L_2;
		// SetupVisualizer();
		InputControlVisualizer_SetupVisualizer_m98C1154DB63B92146B6D28E191B2DF6088143226(__this, NULL);
		// }
		return;
	}
}
// System.String UnityEngine.InputSystem.Samples.InputControlVisualizer::get_controlPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputControlVisualizer_get_controlPath_m37533ECB6007F15B63EAFF70B8598EF488CCB157 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ControlPath;
		String_t* L_0 = __this->___m_ControlPath_13;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::set_controlPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_set_controlPath_m4A0EFF0E75733F5A99C3EC34ADDB5D87DB4C113B (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// m_ControlPath = value;
		String_t* L_0 = ___0_value;
		__this->___m_ControlPath_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ControlPath_13), (void*)L_0);
		// if (m_Control != null)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control_15;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.InputControlVisualizer::get_controlIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputControlVisualizer_get_controlIndex_mB36B898E4F16AD6D92139B7BDF23354B1FC325BB (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ControlIndex;
		int32_t L_0 = __this->___m_ControlIndex_14;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::set_controlIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_set_controlIndex_mFD038E74F6A330C4CCC21058EA19168F63C16FE4 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// m_ControlIndex = value;
		int32_t L_0 = ___0_value;
		__this->___m_ControlIndex_14 = L_0;
		// if (m_Control != null)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_1 = __this->___m_Control_15;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputControl UnityEngine.InputSystem.Samples.InputControlVisualizer::get_control()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* InputControlVisualizer_get_control_m3C20790A38325D6ED3F5724F95A87DD86C155212 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		// public InputControl control => m_Control;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control_15;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEnable_m1C7066ACE85A8CDEE7B4A712D58C09AF64C922FA (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnDeviceChange_m41B7D9685925817EA32887978B5E63AEDE120905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnEvent_mD9299AA91D76612D04EE1C9AAB8332B6F1C30DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mD41ADE5884D63597B631BA9E4B888E302A1A3032_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9F38FA10689CE2CC84E132D13477C9F63AB9DD41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Visualization == Mode.None)
		int32_t L_0 = __this->___m_Visualization_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (s_EnabledInstances == null)
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_1 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		// s_EnabledInstances = new List<InputControlVisualizer>();
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_2 = (List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B*)il2cpp_codegen_object_new(List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m9F38FA10689CE2CC84E132D13477C9F63AB9DD41(L_2, List_1__ctor_m9F38FA10689CE2CC84E132D13477C9F63AB9DD41_RuntimeMethod_var);
		((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16), (void*)L_2);
	}

IL_001a:
	{
		// if (s_EnabledInstances.Count == 0)
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_3 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_inline(L_3, List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0052;
		}
	}
	{
		// InputSystem.onDeviceChange += OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_5 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_5, NULL, (intptr_t)((void*)InputControlVisualizer_OnDeviceChange_m41B7D9685925817EA32887978B5E63AEDE120905_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_add_onDeviceChange_mC1BAF8DE08B2B3F6D0A98D80AE1E4FF5531C60FA(L_5, NULL);
		// InputSystem.onEvent += OnEvent;
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_6;
		L_6 = InputSystem_get_onEvent_mADCC1DBC03BC468ABF3AF7FB9BF2A0D9E1740510(NULL);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_7, NULL, (intptr_t)((void*)InputControlVisualizer_OnEvent_mD9299AA91D76612D04EE1C9AAB8332B6F1C30DB9_RuntimeMethod_var), NULL);
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_8;
		L_8 = InputEventListener_op_Addition_mE4193B2988A4BA5E50D618112E188CEFAB5B6AFC(L_6, L_7, NULL);
		InputSystem_set_onEvent_m8FD1599425D2F0408F6001E4D1663D53105D7F21(L_8, NULL);
	}

IL_0052:
	{
		// s_EnabledInstances.Add(this);
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_9 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		NullCheck(L_9);
		List_1_Add_mD41ADE5884D63597B631BA9E4B888E302A1A3032_inline(L_9, __this, List_1_Add_mD41ADE5884D63597B631BA9E4B888E302A1A3032_RuntimeMethod_var);
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4(__this, NULL);
		// base.OnEnable();
		InputVisualizer_OnEnable_m421992743EE6DC06CF1457DE7C92C3622BD55041(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnDisable_m8C0A22385ECC20C710EB5681B9741DA547E90AFE (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnDeviceChange_m41B7D9685925817EA32887978B5E63AEDE120905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_OnEvent_mD9299AA91D76612D04EE1C9AAB8332B6F1C30DB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1E47EB4A2199E96BB05A1B0FCE570857108B1112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Visualization == Mode.None)
		int32_t L_0 = __this->___m_Visualization_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// s_EnabledInstances.Remove(this);
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_1 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		NullCheck(L_1);
		bool L_2;
		L_2 = List_1_Remove_m1E47EB4A2199E96BB05A1B0FCE570857108B1112(L_1, __this, List_1_Remove_m1E47EB4A2199E96BB05A1B0FCE570857108B1112_RuntimeMethod_var);
		// if (s_EnabledInstances.Count == 0)
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_3 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_inline(L_3, List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		// InputSystem.onDeviceChange -= OnDeviceChange;
		Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* L_5 = (Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333*)il2cpp_codegen_object_new(Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_2__ctor_m23A4911D82F290811EDC6BFC315C339857526804(L_5, NULL, (intptr_t)((void*)InputControlVisualizer_OnDeviceChange_m41B7D9685925817EA32887978B5E63AEDE120905_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputSystem_remove_onDeviceChange_mD08F75C263C2D687B2E6E68E86105829075BF717(L_5, NULL);
		// InputSystem.onEvent -= OnEvent;
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_6;
		L_6 = InputSystem_get_onEvent_mADCC1DBC03BC468ABF3AF7FB9BF2A0D9E1740510(NULL);
		Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* L_7 = (Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA*)il2cpp_codegen_object_new(Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_m43B5BA62418FAB32773B12CEFF46A46855BF5B10(L_7, NULL, (intptr_t)((void*)InputControlVisualizer_OnEvent_mD9299AA91D76612D04EE1C9AAB8332B6F1C30DB9_RuntimeMethod_var), NULL);
		InputEventListener_tB0B541BC249BB696401201CF9DCAB4DFA1462B1D L_8;
		L_8 = InputEventListener_op_Subtraction_m1F22563B9F83525FF3046236D787006F931913FA(L_6, L_7, NULL);
		InputSystem_set_onEvent_m8FD1599425D2F0408F6001E4D1663D53105D7F21(L_8, NULL);
	}

IL_004d:
	{
		// m_Control = null;
		__this->___m_Control_15 = (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Control_15), (void*)(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)NULL);
		// base.OnDisable();
		InputVisualizer_OnDisable_m0BF185ADE0239B96AC89644B1B95B4C16DBAFABA(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnGUI_m52229D2DC7579D8468A02031978CDB8B43810154 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Visualization == Mode.None)
		int32_t L_0 = __this->___m_Visualization_12;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// base.OnGUI();
		InputVisualizer_OnGUI_mB851065DA86CE60DD3E7A159E90DD575B3B30BBE(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnValidate_mEC35BA5505B2CDD69D81B13D748359B3CE723B22 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		// ResolveControl();
		InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4(__this, NULL);
		// base.OnValidate();
		InputVisualizer_OnValidate_m65E0237B6A2BE6A8A29430BB055829E21BCD1192(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::ResolveControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlList_1_Dispose_m1FD2281787B2A125095CD9203E77BA4A0F15AA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlList_1_get_Count_m5B820C76C808D235DDFA474A8025370547ECC993_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// m_Control = null;
		__this->___m_Control_15 = (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Control_15), (void*)(InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E*)NULL);
		// if (string.IsNullOrEmpty(m_ControlPath))
		String_t* L_0 = __this->___m_ControlPath_13;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// using (var candidates = InputSystem.FindControls(m_ControlPath))
		String_t* L_2 = __this->___m_ControlPath_13;
		il2cpp_codegen_runtime_class_init_inline(InputSystem_t4120CA4FE7DCFD56AF9391933FC3F1F485350164_il2cpp_TypeInfo_var);
		InputControlList_1_tDCD1283F428BB911908D4A86066022F6FEF337BA L_3;
		L_3 = InputSystem_FindControls_mC0AD483AD6A77DDF24B7FAD6712C39F47371EBB1(L_2, NULL);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0068:
			{// begin finally (depth: 1)
				InputControlList_1_Dispose_m1FD2281787B2A125095CD9203E77BA4A0F15AA82((&V_0), InputControlList_1_Dispose_m1FD2281787B2A125095CD9203E77BA4A0F15AA82_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// var numCandidates = candidates.Count;
				int32_t L_4;
				L_4 = InputControlList_1_get_Count_m5B820C76C808D235DDFA474A8025370547ECC993_inline((&V_0), InputControlList_1_get_Count_m5B820C76C808D235DDFA474A8025370547ECC993_RuntimeMethod_var);
				V_1 = L_4;
				// if (numCandidates > 1 && m_ControlIndex < numCandidates && m_ControlIndex >= 0)
				int32_t L_5 = V_1;
				if ((((int32_t)L_5) <= ((int32_t)1)))
				{
					goto IL_0054_1;
				}
			}
			{
				int32_t L_6 = __this->___m_ControlIndex_14;
				int32_t L_7 = V_1;
				if ((((int32_t)L_6) >= ((int32_t)L_7)))
				{
					goto IL_0054_1;
				}
			}
			{
				int32_t L_8 = __this->___m_ControlIndex_14;
				if ((((int32_t)L_8) < ((int32_t)0)))
				{
					goto IL_0054_1;
				}
			}
			{
				// m_Control = candidates[m_ControlIndex];
				int32_t L_9 = __this->___m_ControlIndex_14;
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_10;
				L_10 = InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A((&V_0), L_9, InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A_RuntimeMethod_var);
				__this->___m_Control_15 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Control_15), (void*)L_10);
				goto IL_0076;
			}

IL_0054_1:
			{
				// else if (numCandidates > 0)
				int32_t L_11 = V_1;
				if ((((int32_t)L_11) <= ((int32_t)0)))
				{
					goto IL_0066_1;
				}
			}
			{
				// m_Control = candidates[0];
				InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_12;
				L_12 = InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A((&V_0), 0, InputControlList_1_get_Item_m1D6E78B065D973C67C6BCB0F9E994AA93E15229A_RuntimeMethod_var);
				__this->___m_Control_15 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Control_15), (void*)L_12);
			}

IL_0066_1:
			{
				// }
				goto IL_0076;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0076:
	{
		// SetupVisualizer();
		InputControlVisualizer_SetupVisualizer_m98C1154DB63B92146B6D28E191B2DF6088143226(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::SetupVisualizer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_SetupVisualizer_m98C1154DB63B92146B6D28E191B2DF6088143226 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF29A356E2E2350A3712E86EFEC38A631035EEDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A3783CC15F62D9BA371F6EB72C7E9BDC2E4BD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6A2B38DC2432574D81DC487BCF0A5E25DE305E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t* V_1 = NULL;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_2 = NULL;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_3 = NULL;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_4 = NULL;
	{
		// if (m_Control == null)
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_0 = __this->___m_Control_15;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// m_Visualizer = null;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = (Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)(Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4*)NULL);
		// return;
		return;
	}

IL_0010:
	{
		// switch (m_Visualization)
		int32_t L_1 = __this->___m_Visualization_12;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0214;
			}
			case 2:
			{
				goto IL_0214;
			}
			case 3:
			{
				goto IL_00e3;
			}
			case 4:
			{
				goto IL_0214;
			}
			case 5:
			{
				goto IL_0139;
			}
			case 6:
			{
				goto IL_019f;
			}
			case 7:
			{
				goto IL_0208;
			}
		}
	}
	{
		goto IL_0214;
	}

IL_0044:
	{
		// var valueType = m_Control.valueType;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_3 = __this->___m_Control_15;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(4 /* System.Type UnityEngine.InputSystem.InputControl::get_valueType() */, L_3);
		V_1 = L_4;
		// if (valueType == typeof(Vector2))
		Type_t* L_5 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0074;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.Vector2Visualizer(m_HistorySamples);
		int32_t L_9 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* L_10 = (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A*)il2cpp_codegen_object_new(Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Vector2Visualizer__ctor_mEF9B1E69F99945AAE6654BAE0671A50EFEB22CC0(L_10, L_9, NULL);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_10);
		return;
	}

IL_0074:
	{
		// else if (valueType == typeof(float))
		Type_t* L_11 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_00ae;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<float>(m_HistorySamples)
		// {
		//     ////TODO: pass actual min/max limits of control
		//     limitMax = 1,
		//     limitMin = 0
		// };
		int32_t L_15 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_16 = (ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75*)il2cpp_codegen_object_new(ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB(L_16, L_15, ScalarVisualizer_1__ctor_mD2E4EA4607C9684DDC7B7CCB33A90E761C1EF1BB_RuntimeMethod_var);
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_17 = L_16;
		NullCheck(L_17);
		L_17->___limitMax_3 = (1.0f);
		ScalarVisualizer_1_t054D2BE59F311AF0C0391B3F3FBB8F083E98BB75* L_18 = L_17;
		NullCheck(L_18);
		L_18->___limitMin_2 = (0.0f);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_18);
		return;
	}

IL_00ae:
	{
		// else if (valueType == typeof(int))
		Type_t* L_19 = V_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_021a;
		}
	}
	{
		// m_Visualizer = new VisualizationHelpers.ScalarVisualizer<int>(m_HistorySamples)
		// {
		//     ////TODO: pass actual min/max limits of control
		//     limitMax = 1,
		//     limitMin = 0
		// };
		int32_t L_23 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* L_24 = (ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83*)il2cpp_codegen_object_new(ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B(L_24, L_23, ScalarVisualizer_1__ctor_m970BF07FCAB230DA4E62E39D719C8075A1953E2B_RuntimeMethod_var);
		ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* L_25 = L_24;
		NullCheck(L_25);
		L_25->___limitMax_3 = 1;
		ScalarVisualizer_1_tD327146686BCE5398E200B2C74BFD5866C460D83* L_26 = L_25;
		NullCheck(L_26);
		L_26->___limitMin_2 = 0;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_26);
		return;
	}

IL_00e3:
	{
		// var visualizer = new VisualizationHelpers.TimelineVisualizer(m_HistorySamples)
		// {
		//     timeUnit = VisualizationHelpers.TimelineVisualizer.TimeUnit.Frames,
		//     historyDepth = m_HistorySamples,
		//     showLimits = true,
		//     limitsY = new Vector2(0, 5) // Will expand upward automatically
		// };
		int32_t L_27 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_28 = (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)il2cpp_codegen_object_new(TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		TimelineVisualizer__ctor_mB201B5B5FD151C099DF335990A4FBE2E1D65D3AD(L_28, ((float)L_27), NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_29 = L_28;
		NullCheck(L_29);
		TimelineVisualizer_set_timeUnit_m0895304C2ECCBBF9C5D3130694D915D5AA338FCD_inline(L_29, 1, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_30 = L_29;
		int32_t L_31 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		NullCheck(L_30);
		TimelineVisualizer_set_historyDepth_mA08F58C027B5BB38316ED8F9C2D3785FF376AF3A_inline(L_30, L_31, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_32 = L_30;
		NullCheck(L_32);
		TimelineVisualizer_set_showLimits_mAE7CAB87EC3DF3672633A0204160B059F1FB8B73_inline(L_32, (bool)1, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_33 = L_32;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10(L_33, L_34, NULL);
		V_2 = L_33;
		// m_Visualizer = visualizer;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_35 = V_2;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_35);
		// visualizer.AddTimeline("Events", Color.green,
		//     VisualizationHelpers.TimelineVisualizer.PlotType.BarChart);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_36 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_36);
		int32_t L_38;
		L_38 = TimelineVisualizer_AddTimeline_mB1609C77DB73413D8CCA02727FE74C87981DEE35(L_36, _stringLiteralC5A3783CC15F62D9BA371F6EB72C7E9BDC2E4BD0, L_37, 1, NULL);
		// break;
		return;
	}

IL_0139:
	{
		// var visualizer = new VisualizationHelpers.TimelineVisualizer(m_HistorySamples)
		// {
		//     timeUnit = VisualizationHelpers.TimelineVisualizer.TimeUnit.Frames,
		//     historyDepth = m_HistorySamples,
		//     valueUnit = new GUIContent("ms"),
		//     showLimits = true,
		//     limitsY = new Vector2(0, 6)
		// };
		int32_t L_39 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_40 = (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)il2cpp_codegen_object_new(TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		TimelineVisualizer__ctor_mB201B5B5FD151C099DF335990A4FBE2E1D65D3AD(L_40, ((float)L_39), NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_41 = L_40;
		NullCheck(L_41);
		TimelineVisualizer_set_timeUnit_m0895304C2ECCBBF9C5D3130694D915D5AA338FCD_inline(L_41, 1, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_42 = L_41;
		int32_t L_43 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		NullCheck(L_42);
		TimelineVisualizer_set_historyDepth_mA08F58C027B5BB38316ED8F9C2D3785FF376AF3A_inline(L_42, L_43, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_44 = L_42;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_45 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_45, _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7, NULL);
		NullCheck(L_44);
		TimelineVisualizer_set_valueUnit_m8B51379D5B832400F03CBE3680B96248F65AF1F6_inline(L_44, L_45, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_46 = L_44;
		NullCheck(L_46);
		TimelineVisualizer_set_showLimits_mAE7CAB87EC3DF3672633A0204160B059F1FB8B73_inline(L_46, (bool)1, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_47 = L_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (0.0f), (6.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10(L_47, L_48, NULL);
		V_3 = L_47;
		// m_Visualizer = visualizer;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_49 = V_3;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_49);
		// visualizer.AddTimeline("MaxLag", Color.red,
		//     VisualizationHelpers.TimelineVisualizer.PlotType.BarChart);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_50 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_51;
		L_51 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_50);
		int32_t L_52;
		L_52 = TimelineVisualizer_AddTimeline_mB1609C77DB73413D8CCA02727FE74C87981DEE35(L_50, _stringLiteralCB6A2B38DC2432574D81DC487BCF0A5E25DE305E, L_51, 1, NULL);
		// break;
		return;
	}

IL_019f:
	{
		// var visualizer = new VisualizationHelpers.TimelineVisualizer(m_HistorySamples)
		// {
		//     timeUnit = VisualizationHelpers.TimelineVisualizer.TimeUnit.Frames,
		//     valueUnit = new GUIContent("bytes"),
		//     historyDepth = m_HistorySamples,
		//     showLimits = true,
		//     limitsY = new Vector2(0, 64)
		// };
		int32_t L_53 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_54 = (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)il2cpp_codegen_object_new(TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		TimelineVisualizer__ctor_mB201B5B5FD151C099DF335990A4FBE2E1D65D3AD(L_54, ((float)L_53), NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_55 = L_54;
		NullCheck(L_55);
		TimelineVisualizer_set_timeUnit_m0895304C2ECCBBF9C5D3130694D915D5AA338FCD_inline(L_55, 1, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_56 = L_55;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_57 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_57, _stringLiteral77B615B8ED1ABB8FC1395D85A5AE524A9789D947, NULL);
		NullCheck(L_56);
		TimelineVisualizer_set_valueUnit_m8B51379D5B832400F03CBE3680B96248F65AF1F6_inline(L_56, L_57, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_58 = L_56;
		int32_t L_59 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_HistorySamples_5;
		NullCheck(L_58);
		TimelineVisualizer_set_historyDepth_mA08F58C027B5BB38316ED8F9C2D3785FF376AF3A_inline(L_58, L_59, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_60 = L_58;
		NullCheck(L_60);
		TimelineVisualizer_set_showLimits_mAE7CAB87EC3DF3672633A0204160B059F1FB8B73_inline(L_60, (bool)1, NULL);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_61 = L_60;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		memset((&L_62), 0, sizeof(L_62));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_62), (0.0f), (64.0f), /*hidden argument*/NULL);
		NullCheck(L_61);
		TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10(L_61, L_62, NULL);
		V_4 = L_61;
		// m_Visualizer = visualizer;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_63 = V_4;
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_63);
		// visualizer.AddTimeline("Bytes", Color.red,
		//     VisualizationHelpers.TimelineVisualizer.PlotType.BarChart);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_64 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65;
		L_65 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_64);
		int32_t L_66;
		L_66 = TimelineVisualizer_AddTimeline_mB1609C77DB73413D8CCA02727FE74C87981DEE35(L_64, _stringLiteralAF29A356E2E2350A3712E86EFEC38A631035EEDC, L_65, 1, NULL);
		// break;
		return;
	}

IL_0208:
	{
		// m_Visualizer = new VisualizationHelpers.CurrentDeviceVisualizer();
		CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C* L_67 = (CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C*)il2cpp_codegen_object_new(CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		CurrentDeviceVisualizer__ctor_mD6B96939B3CDEA54E887AC88609FCF37DA9A8A74(L_67, NULL);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9), (void*)L_67);
		// break;
		return;
	}

IL_0214:
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_68 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_68);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_68, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_68, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InputControlVisualizer_SetupVisualizer_m98C1154DB63B92146B6D28E191B2DF6088143226_RuntimeMethod_var)));
	}

IL_021a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnDeviceChange(UnityEngine.InputSystem.InputDevice,UnityEngine.InputSystem.InputDeviceChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnDeviceChange_m41B7D9685925817EA32887978B5E63AEDE120905 (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___0_device, int32_t ___1_change, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* V_1 = NULL;
	{
		// if (change != InputDeviceChange.Added && change != InputDeviceChange.Removed)
		int32_t L_0 = ___1_change;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_change;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_0 = 0;
		goto IL_0047;
	}

IL_000c:
	{
		// var component = s_EnabledInstances[i];
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_2 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_4;
		L_4 = List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283(L_2, L_3, List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283_RuntimeMethod_var);
		V_1 = L_4;
		// if (change == InputDeviceChange.Removed && component.m_Control != null &&
		//     component.m_Control.device == device)
		int32_t L_5 = ___1_change;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_6 = V_1;
		NullCheck(L_6);
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_7 = L_6->___m_Control_15;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_8 = V_1;
		NullCheck(L_8);
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = L_8->___m_Control_15;
		NullCheck(L_9);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10;
		L_10 = InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline(L_9, NULL);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_11 = ___0_device;
		if ((!(((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_10) == ((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_11))))
		{
			goto IL_003a;
		}
	}
	{
		// component.ResolveControl();
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_12 = V_1;
		NullCheck(L_12);
		InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4(L_12, NULL);
		goto IL_0043;
	}

IL_003a:
	{
		// else if (change == InputDeviceChange.Added)
		int32_t L_13 = ___1_change;
		if (L_13)
		{
			goto IL_0043;
		}
	}
	{
		// component.ResolveControl();
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_14 = V_1;
		NullCheck(L_14);
		InputControlVisualizer_ResolveControl_m57E805D76F77F556895B02EF184661A68AEAFCC4(L_14, NULL);
	}

IL_0043:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_16 = V_0;
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_17 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_inline(L_17, List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEvent(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEvent_mD9299AA91D76612D04EE1C9AAB8332B6F1C30DB9 (InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_eventPtr, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___1_device, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* V_1 = NULL;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* G_B10_0 = NULL;
	InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* G_B9_0 = NULL;
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* G_B11_0 = NULL;
	{
		// if (InputState.updateCount <= 1)
		uint32_t L_0;
		L_0 = InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline(NULL);
		if ((!(((uint32_t)L_0) <= ((uint32_t)1))))
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (InputState.currentUpdateType == InputUpdateType.Editor)
		int32_t L_1;
		L_1 = InputState_get_currentUpdateType_m77DBCEC0F6E435740C44467281149B2F74025C10_inline(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0012;
		}
	}
	{
		// return;
		return;
	}

IL_0012:
	{
		// if (!eventPtr.IsA<StateEvent>() && !eventPtr.IsA<DeltaStateEvent>())
		bool L_2;
		L_2 = InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327((&___0_eventPtr), InputEventPtr_IsA_TisStateEvent_tB93D5F08B084A2BC9FFC71B084409DBBD2516C0F_mA9BDDBB4B234A924F74AB0343F6F3CFDBFF70327_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		bool L_3;
		L_3 = InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7((&___0_eventPtr), InputEventPtr_IsA_TisDeltaStateEvent_tC11D9B5FD8A535C2D998D30F8624E6533044D859_mF1E078C1A9AC9C4697BA6A4F763D17E398CBBDE7_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// return;
		return;
	}

IL_0025:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		V_0 = 0;
		goto IL_005e;
	}

IL_0029:
	{
		// var component = s_EnabledInstances[i];
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_4 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_6;
		L_6 = List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283(L_4, L_5, List_1_get_Item_mA86043C599DD78AC4A79B88DD9DC78BF77EFE283_RuntimeMethod_var);
		V_1 = L_6;
		// if (component.m_Control?.device != device || component.m_Visualizer == null)
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_7 = V_1;
		NullCheck(L_7);
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_8 = L_7->___m_Control_15;
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_9 = L_8;
		G_B9_0 = L_9;
		if (L_9)
		{
			G_B10_0 = L_9;
			goto IL_0042;
		}
	}
	{
		G_B11_0 = ((InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)(NULL));
		goto IL_0047;
	}

IL_0042:
	{
		NullCheck(G_B10_0);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_10;
		L_10 = InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline(G_B10_0, NULL);
		G_B11_0 = L_10;
	}

IL_0047:
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_11 = ___1_device;
		if ((!(((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)G_B11_0) == ((RuntimeObject*)(InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)L_11))))
		{
			goto IL_005a;
		}
	}
	{
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_12 = V_1;
		NullCheck(L_12);
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_13 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)L_12)->___m_Visualizer_9;
		if (!L_13)
		{
			goto IL_005a;
		}
	}
	{
		// component.OnEventImpl(eventPtr, device);
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_14 = V_1;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_15 = ___0_eventPtr;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_16 = ___1_device;
		NullCheck(L_14);
		InputControlVisualizer_OnEventImpl_m70CDAFBE26305EE15B3FB9A356137E5DC41892D6(L_14, L_15, L_16, NULL);
	}

IL_005a:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_005e:
	{
		// for (var i = 0; i < s_EnabledInstances.Count; ++i)
		int32_t L_18 = V_0;
		List_1_t0E9B3B40085F32CAF055A005147636A8E8AB478B* L_19 = ((InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_StaticFields*)il2cpp_codegen_static_fields_for(InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_il2cpp_TypeInfo_var))->___s_EnabledInstances_16;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_inline(L_19, List_1_get_Count_mE7ABA24F1374962B943D1441E116AAA9B17E8697_RuntimeMethod_var);
		if ((((int32_t)L_18) < ((int32_t)L_20)))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::OnEventImpl(UnityEngine.InputSystem.LowLevel.InputEventPtr,UnityEngine.InputSystem.InputDevice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer_OnEventImpl_m70CDAFBE26305EE15B3FB9A356137E5DC41892D6 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 ___0_eventPtr, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___1_device, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	void* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_6 = NULL;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* V_9 = NULL;
	TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* V_10 = NULL;
	int32_t V_11 = 0;
	int64_t V_12 = 0;
	{
		// switch (m_Visualization)
		int32_t L_0 = __this->___m_Visualization_12;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_01b6;
			}
			case 2:
			{
				goto IL_01b6;
			}
			case 3:
			{
				goto IL_0064;
			}
			case 4:
			{
				goto IL_01b6;
			}
			case 5:
			{
				goto IL_00bb;
			}
			case 6:
			{
				goto IL_0140;
			}
			case 7:
			{
				goto IL_01a3;
			}
		}
	}
	{
		return;
	}

IL_0030:
	{
		// var statePtr = m_Control.GetStatePtrFromStateEvent(eventPtr);
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_2 = __this->___m_Control_15;
		InputEventPtr_tC2A58521C9AFB479CC88789D5E0797D817C721C0 L_3 = ___0_eventPtr;
		void* L_4;
		L_4 = InputControlExtensions_GetStatePtrFromStateEvent_m467CADB481AAB10AC0F0D674A398D050789BD3B6(L_2, L_3, NULL);
		V_1 = L_4;
		// if (statePtr == null)
		void* L_5 = V_1;
		if ((!(((uintptr_t)L_5) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0043;
		}
	}
	{
		// return; // No value for control in event.
		return;
	}

IL_0043:
	{
		// var value = m_Control.ReadValueFromStateAsObject(statePtr);
		InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* L_6 = __this->___m_Control_15;
		void* L_7 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, void* >::Invoke(8 /* System.Object UnityEngine.InputSystem.InputControl::ReadValueFromStateAsObject(System.Void*) */, L_6, L_7);
		V_2 = L_8;
		// m_Visualizer.AddSample(value, eventPtr.time);
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_9 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		RuntimeObject* L_10 = V_2;
		double L_11;
		L_11 = InputEventPtr_get_time_mD2C90C66C334E767E2F9B5B9A3711B500027B185((&___0_eventPtr), NULL);
		NullCheck(L_9);
		VirtualActionInvoker2< RuntimeObject*, double >::Invoke(5 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::AddSample(System.Object,System.Double) */, L_9, L_10, L_11);
		// break;
		return;
	}

IL_0064:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_12 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		V_3 = ((TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)CastclassClass((RuntimeObject*)L_12, TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var));
		// var frame = (int)InputState.updateCount;
		uint32_t L_13;
		L_13 = InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline(NULL);
		V_4 = L_13;
		// ref var valueRef = ref visualizer.GetOrCreateSample(0, frame);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_14 = V_3;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_16;
		L_16 = TimelineVisualizer_GetOrCreateSample_m7188FEE4DD8C1B75734E3977F9C61C6FBAAD70C2(L_14, 0, L_15, NULL);
		// var value = valueRef.ToInt32() + 1;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_17 = L_16;
		int32_t L_18;
		L_18 = PrimitiveValue_ToInt32_m5CCE1FB7974A378503F69C5E47060A8B7BEAC40C(L_17, (RuntimeObject*)NULL, NULL);
		V_5 = ((int32_t)il2cpp_codegen_add(L_18, 1));
		// valueRef = value;
		int32_t L_19 = V_5;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_20;
		L_20 = PrimitiveValue_op_Implicit_mAEEE3AFD629C0F27AA275B5A31D31D148D81F99D(L_19, NULL);
		*(PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4*)L_17 = L_20;
		// visualizer.limitsY =
		//     new Vector2(0, Mathf.Max(value, visualizer.limitsY.y));
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_21 = V_3;
		int32_t L_22 = V_5;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_23 = V_3;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline(L_23, NULL);
		float L_25 = L_24.___y_1;
		float L_26;
		L_26 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)L_22), L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), (0.0f), L_26, /*hidden argument*/NULL);
		NullCheck(L_21);
		TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10(L_21, L_27, NULL);
		// break;
		return;
	}

IL_00bb:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_28 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		V_6 = ((TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)CastclassClass((RuntimeObject*)L_28, TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var));
		// var lag = (Time.realtimeSinceStartup - eventPtr.time) * 1000; // In milliseconds.
		float L_29;
		L_29 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		double L_30;
		L_30 = InputEventPtr_get_time_mD2C90C66C334E767E2F9B5B9A3711B500027B185((&___0_eventPtr), NULL);
		V_7 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(((double)L_29), L_30)), (1000.0)));
		// var frame = (int)InputState.updateCount;
		uint32_t L_31;
		L_31 = InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline(NULL);
		V_8 = L_31;
		// ref var valueRef = ref visualizer.GetOrCreateSample(0, frame);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_32 = V_6;
		int32_t L_33 = V_8;
		NullCheck(L_32);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_34;
		L_34 = TimelineVisualizer_GetOrCreateSample_m7188FEE4DD8C1B75734E3977F9C61C6FBAAD70C2(L_32, 0, L_33, NULL);
		V_9 = L_34;
		// if (lag > valueRef.ToDouble())
		double L_35 = V_7;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_36 = V_9;
		double L_37;
		L_37 = PrimitiveValue_ToDouble_mC5A29D23FF257A5910AF74DDB7E1167F2083BA17(L_36, (RuntimeObject*)NULL, NULL);
		if ((!(((double)L_35) > ((double)L_37))))
		{
			goto IL_01b6;
		}
	}
	{
		// valueRef = lag;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_38 = V_9;
		double L_39 = V_7;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_40;
		L_40 = PrimitiveValue_op_Implicit_m21D16B29AF50C87FC51E3BB67B2177373E62F12B(L_39, NULL);
		*(PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4*)L_38 = L_40;
		// if (lag > visualizer.limitsY.y)
		double L_41 = V_7;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_42 = V_6;
		NullCheck(L_42);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline(L_42, NULL);
		float L_44 = L_43.___y_1;
		if ((!(((double)L_41) > ((double)((double)L_44)))))
		{
			goto IL_01b6;
		}
	}
	{
		// visualizer.limitsY = new Vector2(0, Mathf.Ceil((float)lag));
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_45 = V_6;
		double L_46 = V_7;
		float L_47;
		L_47 = ceilf(((float)L_46));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (0.0f), L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10(L_45, L_48, NULL);
		// break;
		return;
	}

IL_0140:
	{
		// var visualizer = (VisualizationHelpers.TimelineVisualizer)m_Visualizer;
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_49 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		V_10 = ((TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE*)CastclassClass((RuntimeObject*)L_49, TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE_il2cpp_TypeInfo_var));
		// var frame = (int)InputState.updateCount;
		uint32_t L_50;
		L_50 = InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline(NULL);
		V_11 = L_50;
		// ref var valueRef = ref visualizer.GetOrCreateSample(0, frame);
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_51 = V_10;
		int32_t L_52 = V_11;
		NullCheck(L_51);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_53;
		L_53 = TimelineVisualizer_GetOrCreateSample_m7188FEE4DD8C1B75734E3977F9C61C6FBAAD70C2(L_51, 0, L_52, NULL);
		// var value = valueRef.ToInt32() + eventPtr.sizeInBytes;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_54 = L_53;
		int32_t L_55;
		L_55 = PrimitiveValue_ToInt32_m5CCE1FB7974A378503F69C5E47060A8B7BEAC40C(L_54, (RuntimeObject*)NULL, NULL);
		uint32_t L_56;
		L_56 = InputEventPtr_get_sizeInBytes_mE060F5A7176AAF8ED749DB4A3DC7976249716597((&___0_eventPtr), NULL);
		V_12 = ((int64_t)il2cpp_codegen_add(((int64_t)L_55), ((int64_t)(uint64_t)L_56)));
		// valueRef = value;
		int64_t L_57 = V_12;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_58;
		L_58 = PrimitiveValue_op_Implicit_m73A584CE9F050CC4BE65644ABFB03082DC832FA5(L_57, NULL);
		*(PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4*)L_54 = L_58;
		// visualizer.limitsY =
		//     new Vector2(0, Mathf.Max(value, visualizer.limitsY.y));
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_59 = V_10;
		int64_t L_60 = V_12;
		TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* L_61 = V_10;
		NullCheck(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline(L_61, NULL);
		float L_63 = L_62.___y_1;
		float L_64;
		L_64 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)L_60), L_63, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), (0.0f), L_64, /*hidden argument*/NULL);
		NullCheck(L_59);
		TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10(L_59, L_65, NULL);
		// break;
		return;
	}

IL_01a3:
	{
		// m_Visualizer.AddSample(device, eventPtr.time);
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_66 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)__this)->___m_Visualizer_9;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_67 = ___1_device;
		double L_68;
		L_68 = InputEventPtr_get_time_mD2C90C66C334E767E2F9B5B9A3711B500027B185((&___0_eventPtr), NULL);
		NullCheck(L_66);
		VirtualActionInvoker2< RuntimeObject*, double >::Invoke(5 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::AddSample(System.Object,System.Double) */, L_66, L_67, L_68);
	}

IL_01b6:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputControlVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputControlVisualizer__ctor_m50D9D031D780EB71329BA59A7088A5D639F26AD1 (InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* __this, const RuntimeMethod* method) 
{
	{
		InputVisualizer__ctor_m42B6ABE2BD6CE0C1C4B64AB4F22E191DA8A0CD2E(__this, NULL);
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
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnEnable_m421992743EE6DC06CF1457DE7C92C3622BD55041 (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) 
{
	{
		// ResolveParent();
		InputVisualizer_ResolveParent_mEC2E04F90771A56863D1B2ABBD00A2DB29E94126(__this, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnDisable_m0BF185ADE0239B96AC89644B1B95B4C16DBAFABA (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) 
{
	{
		// m_Parent = null;
		__this->___m_Parent_10 = (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Parent_10), (void*)(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3*)NULL);
		// m_Visualizer = null;
		__this->___m_Visualizer_9 = (Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Visualizer_9), (void*)(Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnGUI_mB851065DA86CE60DD3E7A159E90DD575B3B30BBE (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (Event.current.type != EventType.Repaint)
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_0;
		L_0 = Event_get_current_mBD7135E10C392EAD61AC0A0D2489EF758C8A3FAD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Event_get_type_m8A825D6DA432B967DAA3E22E5C8571620A75F8A8(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)7)))
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// var rect = m_Rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = __this->___m_Rect_7;
		V_0 = L_2;
		// if (m_Parent != null)
		InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* L_3 = __this->___m_Parent_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// rect.position += m_Parent.m_Rect.position;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (&V_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38(L_5, NULL);
		InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* L_7 = __this->___m_Parent_10;
		NullCheck(L_7);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_8 = (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)(&L_7->___m_Rect_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_6, L_9, NULL);
		Rect_set_position_m9CD8AA25A83A7A893429C0ED56C36641202C3F05(L_5, L_10, NULL);
	}

IL_0045:
	{
		// if (m_Visualizer != null)
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_11 = __this->___m_Visualizer_9;
		if (!L_11)
		{
			goto IL_005b;
		}
	}
	{
		// m_Visualizer.OnDraw(rect);
		Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* L_12 = __this->___m_Visualizer_9;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13 = V_0;
		NullCheck(L_12);
		VirtualActionInvoker1< Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D >::Invoke(4 /* System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::OnDraw(UnityEngine.Rect) */, L_12, L_13);
		goto IL_007a;
	}

IL_005b:
	{
		// VisualizationHelpers.DrawRectangle(rect, new Color(1, 1, 1, 0.1f));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), (1.0f), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135(L_14, L_15, NULL);
	}

IL_007a:
	{
		// if (!string.IsNullOrEmpty(m_Label))
		String_t* L_16 = __this->___m_Label_4;
		bool L_17;
		L_17 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_16, NULL);
		if (L_17)
		{
			goto IL_011c;
		}
	}
	{
		// if (m_LabelContent == null)
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_18 = __this->___m_LabelContent_8;
		if (L_18)
		{
			goto IL_00a3;
		}
	}
	{
		// m_LabelContent = new GUIContent(m_Label);
		String_t* L_19 = __this->___m_Label_4;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_20 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_20, L_19, NULL);
		__this->___m_LabelContent_8 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LabelContent_8), (void*)L_20);
	}

IL_00a3:
	{
		// if (s_LabelStyle == null)
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_21 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var))->___s_LabelStyle_11;
		if (L_21)
		{
			goto IL_00c8;
		}
	}
	{
		// s_LabelStyle = new GUIStyle();
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_22 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_22, NULL);
		((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var))->___s_LabelStyle_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var))->___s_LabelStyle_11), (void*)L_22);
		// s_LabelStyle.normal.textColor = Color.yellow;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_23 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var))->___s_LabelStyle_11;
		NullCheck(L_23);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_24;
		L_24 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_23, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_24);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_24, L_25, NULL);
	}

IL_00c8:
	{
		// var labelSize = s_LabelStyle.CalcSize(m_LabelContent);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_26 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var))->___s_LabelStyle_11;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_27 = __this->___m_LabelContent_8;
		NullCheck(L_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_26, L_27, NULL);
		V_1 = L_28;
		// var labelRect = new Rect(rect.x + 4, rect.y, labelSize.x + 4, rect.height);
		float L_29;
		L_29 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&V_0), NULL);
		float L_30;
		L_30 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_1;
		float L_32 = L_31.___x_0;
		float L_33;
		L_33 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), ((float)il2cpp_codegen_add(L_29, (4.0f))), L_30, ((float)il2cpp_codegen_add(L_32, (4.0f))), L_33, NULL);
		// s_LabelStyle.Draw(labelRect, m_LabelContent, false, false, false, false);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_34 = ((InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_StaticFields*)il2cpp_codegen_static_fields_for(InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3_il2cpp_TypeInfo_var))->___s_LabelStyle_11;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35 = V_2;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_36 = __this->___m_LabelContent_8;
		NullCheck(L_34);
		GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8(L_34, L_35, L_36, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_OnValidate_m65E0237B6A2BE6A8A29430BB055829E21BCD1192 (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) 
{
	{
		// ResolveParent();
		InputVisualizer_ResolveParent_mEC2E04F90771A56863D1B2ABBD00A2DB29E94126(__this, NULL);
		// m_LabelContent = null;
		__this->___m_LabelContent_8 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LabelContent_8), (void*)(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::ResolveParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer_ResolveParent_mEC2E04F90771A56863D1B2ABBD00A2DB29E94126 (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisInputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_m6BD63DA5E9E4EBDAAEA521707A3A60C6E3EC6546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var parentTransform = transform.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		V_0 = L_1;
		// if (parentTransform != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// m_Parent = parentTransform.GetComponent<InputControlVisualizer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		NullCheck(L_4);
		InputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA* L_5;
		L_5 = Component_GetComponent_TisInputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_m6BD63DA5E9E4EBDAAEA521707A3A60C6E3EC6546(L_4, Component_GetComponent_TisInputControlVisualizer_t3BC9AB5C8F43CF227DA78209E0B6A2827D8894CA_m6BD63DA5E9E4EBDAAEA521707A3A60C6E3EC6546_RuntimeMethod_var);
		__this->___m_Parent_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Parent_10), (void*)L_5);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.InputVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputVisualizer__ctor_m42B6ABE2BD6CE0C1C4B64AB4F22E191DA8A0CD2E (InputVisualizer_tAA13E9DE742688395DE709F4F24E2918E0563CB3* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] internal int m_HistorySamples = 500;
		__this->___m_HistorySamples_5 = ((int32_t)500);
		// [SerializeField] internal float m_TimeWindow = 3;
		__this->___m_TimeWindow_6 = (3.0f);
		// [SerializeField] internal Rect m_Rect = new Rect(10, 10, 300, 30);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (10.0f), (10.0f), (300.0f), (30.0f), /*hidden argument*/NULL);
		__this->___m_Rect_7 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawAxis(UnityEngine.InputSystem.Samples.VisualizationHelpers/Axis,UnityEngine.Rect,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawAxis_m6FBA7B1B0EF9F92382DA48F9A828A2B5B28A5E1D (int32_t ___0_axis, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_width, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = ___0_axis;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_007a;
			}
			case 2:
			{
				goto IL_00cc;
			}
		}
	}
	{
		goto IL_0109;
	}

IL_0017:
	{
		// start = new Vector2(rect.x, rect.y + rect.height / 2);
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_rect), NULL);
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect), NULL);
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_1, ((float)il2cpp_codegen_add(L_2, ((float)(L_3/(2.0f))))), NULL);
		// end = new Vector2(start.x + rect.width, rect.y + rect.height / 2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5 = L_4.___x_0;
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_rect), NULL);
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect), NULL);
		float L_8;
		L_8 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_add(L_5, L_6)), ((float)il2cpp_codegen_add(L_7, ((float)(L_8/(2.0f))))), NULL);
		// tickOffset = new Vector2(0, 3);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (0.0f), (3.0f), NULL);
		// break;
		goto IL_010f;
	}

IL_007a:
	{
		// start = new Vector2(rect.x + rect.width / 2, rect.y);
		float L_9;
		L_9 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_rect), NULL);
		float L_10;
		L_10 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_rect), NULL);
		float L_11;
		L_11 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_add(L_9, ((float)(L_10/(2.0f))))), L_11, NULL);
		// end = new Vector2(start.x, rect.y + rect.height);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		float L_13 = L_12.___x_0;
		float L_14;
		L_14 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect), NULL);
		float L_15;
		L_15 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_13, ((float)il2cpp_codegen_add(L_14, L_15)), NULL);
		// tickOffset = new Vector2(3, 0);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (3.0f), (0.0f), NULL);
		// break;
		goto IL_010f;
	}

IL_00cc:
	{
		// start = new Vector2(rect.x, rect.yMax);
		float L_16;
		L_16 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_rect), NULL);
		float L_17;
		L_17 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_16, L_17, NULL);
		// end = new Vector2(rect.xMax, rect.y);
		float L_18;
		L_18 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_rect), NULL);
		float L_19;
		L_19 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_18, L_19, NULL);
		// tickOffset = new Vector2(1.5f, 1.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), (1.5f), (1.5f), NULL);
		// break;
		goto IL_010f;
	}

IL_0109:
	{
		// throw new NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_20 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_20, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisualizationHelpers_DrawAxis_m6FBA7B1B0EF9F92382DA48F9A828A2B5B28A5E1D_RuntimeMethod_var)));
	}

IL_010f:
	{
		// DrawLine(start, end, color, width);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___2_color;
		float L_24 = ___3_width;
		VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3(L_21, L_22, L_23, L_24, NULL);
		// DrawLine(start - tickOffset, start + tickOffset, color, width);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_25, L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_28, L_29, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = ___2_color;
		float L_32 = ___3_width;
		VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3(L_27, L_30, L_31, L_32, NULL);
		// DrawLine(end - tickOffset, end + tickOffset, color, width);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_33, L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_36, L_37, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39 = ___2_color;
		float L_40 = ___3_width;
		VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3(L_35, L_38, L_39, L_40, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawRectangle(UnityEngine.Rect,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var savedColor = GUI.color;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = GUI_get_color_m15488B4AD785D10DEB5C66398D0FA9A0C0EA7ABB(NULL);
		// GUI.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_color;
		GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648(L_1, NULL);
		// GUI.DrawTexture(rect, OnePixTex);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___0_rect;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = VisualizationHelpers_get_OnePixTex_mCF461790FA16C58466EE162F1A800A3703B56719(NULL);
		GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6(L_2, L_3, NULL);
		// GUI.color = savedColor;
		GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(System.String,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m827840044BA047B119419B623BCF13F0E90D969E (String_t* ___0_text, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pos, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var content = new GUIContent(text);
		String_t* L_0 = ___0_text;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_1, L_0, NULL);
		// DrawText(content, pos, style);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_pos;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = ___2_style;
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawText(UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.GUIStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2 (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_text, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pos, GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* ___2_style, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var content = new GUIContent(text);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_text;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_m798E35DEED8E153FF39445EBEB634F896F19DF19(L_1, L_0, NULL);
		V_0 = L_1;
		// var size = style.CalcSize(content);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = ___2_style;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_3 = V_0;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_2, L_3, NULL);
		V_1 = L_4;
		// var rect = new Rect(pos.x, pos.y, size.x, size.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_pos;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___1_pos;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_1;
		float L_10 = L_9.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		float L_12 = L_11.___y_1;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_2), L_6, L_8, L_10, L_12, NULL);
		// style.Draw(rect, content, false, false, false, false);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_13 = ___2_style;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14 = V_2;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_15 = V_0;
		NullCheck(L_13);
		GUIStyle_Draw_m7B978F5F5B576810CF8546142D23FD9990E002D8(L_13, L_14, L_15, (bool)0, (bool)0, (bool)0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers::DrawLine(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_pointA, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pointB, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_width, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F G_B1_0;
	memset((&G_B1_0), 0, sizeof(G_B1_0));
	{
		// var matrix = GUI.matrix;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0;
		L_0 = GUI_get_matrix_m3CA02DED0598EE32BD9E66CA533A78EFB0A246FC(NULL);
		V_0 = L_0;
		// var savedColor = GUI.color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = GUI_get_color_m15488B4AD785D10DEB5C66398D0FA9A0C0EA7ABB(NULL);
		// GUI.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___2_color;
		GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648(L_2, NULL);
		// var angle = Vector3.Angle(pointB - pointA, Vector2.right);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_pointB;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_pointA;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		float L_9;
		L_9 = Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// if (pointA.y > pointB.y)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___0_pointA;
		float L_11 = L_10.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___1_pointB;
		float L_13 = L_12.___y_1;
		G_B1_0 = L_1;
		if ((!(((float)L_11) > ((float)L_13))))
		{
			G_B2_0 = L_1;
			goto IL_003e;
		}
	}
	{
		// angle = -angle;
		float L_14 = V_1;
		V_1 = ((-L_14));
		G_B2_0 = G_B1_0;
	}

IL_003e:
	{
		// GUIUtility.ScaleAroundPivot(new Vector2((pointB - pointA).magnitude, width), new Vector2(pointA.x, pointA.y + 0.5f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___1_pointB;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___0_pointA;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_15, L_16, NULL);
		V_2 = L_17;
		float L_18;
		L_18 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_2), NULL);
		float L_19 = ___3_width;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), L_18, L_19, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___0_pointA;
		float L_22 = L_21.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___0_pointA;
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), L_22, ((float)il2cpp_codegen_add(L_24, (0.5f))), /*hidden argument*/NULL);
		GUIUtility_ScaleAroundPivot_mDFE2245F1E9F1F5719519D79D2BCF6C12CD052F9(L_20, L_25, NULL);
		// GUIUtility.RotateAroundPivot(angle, pointA);
		float L_26 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___0_pointA;
		GUIUtility_RotateAroundPivot_mA1AD5027CE63F6902AE6458286C13F53C8EE441F(L_26, L_27, NULL);
		// GUI.DrawTexture(new Rect(pointA.x, pointA.y, 1, 1), OnePixTex);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___0_pointA;
		float L_29 = L_28.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___0_pointA;
		float L_31 = L_30.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_32;
		memset((&L_32), 0, sizeof(L_32));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_32), L_29, L_31, (1.0f), (1.0f), /*hidden argument*/NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_33;
		L_33 = VisualizationHelpers_get_OnePixTex_mCF461790FA16C58466EE162F1A800A3703B56719(NULL);
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_DrawTexture_mEA112F138EB225F3722CFF9338DB4D14AAC8C7E6(L_32, L_33, NULL);
		// GUI.matrix = matrix;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_34 = V_0;
		GUI_set_matrix_m7759FEC96FBCB97E02B1BA44D2EC1B3FEEFA257F(L_34, NULL);
		// GUI.color = savedColor;
		GUI_set_color_mA44927D3F2ACB1E228815F10042A6F62B7645648(G_B2_0, NULL);
		// }
		return;
	}
}
// UnityEngine.GUIStyle UnityEngine.InputSystem.Samples.VisualizationHelpers::get_ValueTextStyle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_ValueTextStyle == null)
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_0 = ((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_ValueTextStyle_1;
		if (L_0)
		{
			goto IL_0037;
		}
	}
	{
		// s_ValueTextStyle = new GUIStyle();
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_1 = (GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580*)il2cpp_codegen_object_new(GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIStyle__ctor_mE15E33802C5A2EA787E445A6D424813E1D5B75A9(L_1, NULL);
		((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_ValueTextStyle_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_ValueTextStyle_1), (void*)L_1);
		// s_ValueTextStyle.fontSize -= 2;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_2 = ((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_ValueTextStyle_1;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = GUIStyle_get_fontSize_mBD6EEA6C9C09825DACE0395B1EC8D773FE94F8CF(L_3, NULL);
		NullCheck(L_3);
		GUIStyle_set_fontSize_m7F6DFD61AC55072C95DC3825B77FAE3F75F1CCFF(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 2)), NULL);
		// s_ValueTextStyle.normal.textColor = Color.white;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_5 = ((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_ValueTextStyle_1;
		NullCheck(L_5);
		GUIStyleState_t7A948723D9DCDFD8EE4F418B6EC909C18E023F95* L_6;
		L_6 = GUIStyle_get_normal_mDEA2808FBD692E505784BD9E521738B4321BCA8F(L_5, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_6);
		GUIStyleState_set_textColor_m5868D12858E6402247953BCCDDA7A543BE6084F1(L_6, L_7, NULL);
	}

IL_0037:
	{
		// return s_ValueTextStyle;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_8 = ((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_ValueTextStyle_1;
		return L_8;
	}
}
// UnityEngine.Texture2D UnityEngine.InputSystem.Samples.VisualizationHelpers::get_OnePixTex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* VisualizationHelpers_get_OnePixTex_mCF461790FA16C58466EE162F1A800A3703B56719 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (s_OnePixTex == null)
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_OnePixTex_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// s_OnePixTex = new Texture2D(1, 1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_2, 1, 1, NULL);
		((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_OnePixTex_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_OnePixTex_0), (void*)L_2);
	}

IL_0019:
	{
		// return s_OnePixTex;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3 = ((VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_StaticFields*)il2cpp_codegen_static_fields_for(VisualizationHelpers_tC2CB98EA74FCB2A6E9300BD7EABA58C4E0AF4808_il2cpp_TypeInfo_var))->___s_OnePixTex_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Visualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visualizer__ctor_m4BE0E6F6426C5A7C9A721CB928FE5C7BD8EAD193 (Visualizer_t65D570BA33D1C9F8E1734CF2CBAE743D1E9C5AE4* __this, const RuntimeMethod* method) 
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
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer::OnDraw(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentDeviceVisualizer_OnDraw_mE1AC7F01BFC0267A912DEB1464480B67F42435FF (CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// DrawRectangle(rect, new Color(1, 1, 1, 0.1f));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135(L_0, L_1, NULL);
		// var name = m_CurrentDevice != null ? m_CurrentDevice.name : "null";
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_2 = __this->___m_CurrentDevice_0;
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_0039;
	}

IL_002e:
	{
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3 = __this->___m_CurrentDevice_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_3, NULL);
		G_B3_0 = L_4;
	}

IL_0039:
	{
		// DrawText(name, new Vector2(rect.xMin + 4, (rect.yMin + rect.yMax) / 2.0f), ValueTextStyle);
		float L_5;
		L_5 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		float L_6;
		L_6 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		float L_7;
		L_7 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_5, (4.0f))), ((float)(((float)il2cpp_codegen_add(L_6, L_7))/(2.0f))), /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_9;
		L_9 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m827840044BA047B119419B623BCF13F0E90D969E(G_B3_0, L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentDeviceVisualizer_AddSample_m830EBF986B09EF3FFFD7203C163272EFD55BAAF8 (CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C* __this, RuntimeObject* ___0_value, double ___1_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* V_0 = NULL;
	{
		// var device = (InputDevice)value;
		RuntimeObject* L_0 = ___0_value;
		V_0 = ((InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B*)CastclassClass((RuntimeObject*)L_0, InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B_il2cpp_TypeInfo_var));
		// if (device is Gamepad)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_1 = V_0;
		if (!((Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C*)IsInstClass((RuntimeObject*)L_1, Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		// m_CurrentDevice = Gamepad.current;
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_2;
		L_2 = Gamepad_get_current_mAC9BE72710676EA54E760FFBA15404A81D7DEEB6_inline(NULL);
		__this->___m_CurrentDevice_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentDevice_0), (void*)L_2);
		return;
	}

IL_001b:
	{
		// else if (device is Mouse)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_3 = V_0;
		if (!((Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F*)IsInstClass((RuntimeObject*)L_3, Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		// m_CurrentDevice = Mouse.current;
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_4;
		L_4 = Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline(NULL);
		__this->___m_CurrentDevice_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentDevice_0), (void*)L_4);
		return;
	}

IL_002f:
	{
		// else if (device is Pen)
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_5 = V_0;
		if (!((Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF*)IsInstClass((RuntimeObject*)L_5, Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_il2cpp_TypeInfo_var)))
		{
			goto IL_0043;
		}
	}
	{
		// m_CurrentDevice = Pen.current;
		Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF* L_6;
		L_6 = Pen_get_current_m00F91ABDEAFBE112707EAE720B1481DE5AECC795_inline(NULL);
		__this->___m_CurrentDevice_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentDevice_0), (void*)L_6);
		return;
	}

IL_0043:
	{
		// else if (device is Pointer) // should be last, because it's a base class for Mouse and Pen
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_7 = V_0;
		if (!((Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A*)IsInstClass((RuntimeObject*)L_7, Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var)))
		{
			goto IL_0057;
		}
	}
	{
		// m_CurrentDevice = Pointer.current;
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_8;
		L_8 = Pointer_get_current_m207443803344C305DEAAEBA56C445980D6C22CB3_inline(NULL);
		__this->___m_CurrentDevice_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CurrentDevice_0), (void*)L_8);
		return;
	}

IL_0057:
	{
		// throw new ArgumentException(
		//     $"Expected device type that implements .current, but got '{device.name}' (deviceId: {device.deviceId}) instead ");
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = InputControl_get_name_mCB68FC91A11BEFA1FF26EA0B5FD39D345C4ADC22(L_9, NULL);
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline(L_11, NULL);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_13);
		String_t* L_15;
		L_15 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBFAA26C9FC48F3323D995356D082AB41979FFE6A)), L_10, L_14, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_16 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_16);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_16, L_15, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CurrentDeviceVisualizer_AddSample_m830EBF986B09EF3FFFD7203C163272EFD55BAAF8_RuntimeMethod_var)));
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/CurrentDeviceVisualizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurrentDeviceVisualizer__ctor_mD6B96939B3CDEA54E887AC88609FCF37DA9A8A74 (CurrentDeviceVisualizer_t7502CE9F20EE190D47FFA02580E6365E97DEC83C* __this, const RuntimeMethod* method) 
{
	{
		Visualizer__ctor_m4BE0E6F6426C5A7C9A721CB928FE5C7BD8EAD193(__this, NULL);
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
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer__ctor_mEF9B1E69F99945AAE6654BAE0671A50EFEB22CC0 (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, int32_t ___0_numSamples, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector2[] maximums = new Vector2[360 / 3];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)120));
		__this->___maximums_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maximums_2), (void*)L_0);
		// public Vector2 limits = new Vector2(1, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___limits_3 = L_1;
		// : base(numSamples)
		int32_t L_2 = ___0_numSamples;
		ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1(__this, L_2, ValueVisualizer_1__ctor_m9FAC4FC232D793F5A7B96F0268E21A9F4F298DF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer_AddSample_mC6697C6E98D2E8A17EE591F1B6919496C84B943E (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, RuntimeObject* ___0_value, double ___1_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// base.AddSample(value, time);
		RuntimeObject* L_0 = ___0_value;
		double L_1 = ___1_time;
		ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1(__this, L_0, L_1, ValueVisualizer_1_AddSample_mA4DC9AF7CE56D062F0902777F96173696EB1DAF1_RuntimeMethod_var);
		// if (value != null)
		RuntimeObject* L_2 = ___0_value;
		if (!L_2)
		{
			goto IL_00e8;
		}
	}
	{
		// var vector = (Vector2)value;
		RuntimeObject* L_3 = ___0_value;
		V_0 = ((*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)UnBox(L_3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))));
		// var angle = Vector2.SignedAngle(Vector2.right, vector);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6;
		L_6 = Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// if (angle < 0)
		float L_7 = V_1;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// angle = 360 + angle;
		float L_8 = V_1;
		V_1 = ((float)il2cpp_codegen_add((360.0f), L_8));
	}

IL_0031:
	{
		// var angleInt = Mathf.FloorToInt(angle) / 3;
		float L_9 = V_1;
		int32_t L_10;
		L_10 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_9, NULL);
		V_2 = ((int32_t)(L_10/3));
		// if (vector.sqrMagnitude > maximums[angleInt].sqrMagnitude)
		float L_11;
		L_11 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&V_0), NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_12 = __this->___maximums_2;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		float L_14;
		L_14 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		if ((!(((float)L_11) > ((float)L_14))))
		{
			goto IL_0061;
		}
	}
	{
		// maximums[angleInt] = vector;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = __this->___maximums_2;
		int32_t L_16 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_17);
	}

IL_0061:
	{
		// var limitX = Mathf.Max(Mathf.Abs(vector.x), limits.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		float L_19 = L_18.___x_0;
		float L_20;
		L_20 = fabsf(L_19);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_22 = L_21->___x_0;
		float L_23;
		L_23 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_20, L_22, NULL);
		V_3 = L_23;
		// var limitY = Mathf.Max(Mathf.Abs(vector.y), limits.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		float L_25 = L_24.___y_1;
		float L_26;
		L_26 = fabsf(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_27 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_28 = L_27->___y_1;
		float L_29;
		L_29 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_26, L_28, NULL);
		V_4 = L_29;
		// if (!Mathf.Approximately(limitX, limits.x))
		float L_30 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_32 = L_31->___x_0;
		bool L_33;
		L_33 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_30, L_32, NULL);
		if (L_33)
		{
			goto IL_00c0;
		}
	}
	{
		// limits.x = limitX;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_35 = V_3;
		L_34->___x_0 = L_35;
		// limitsXText = null;
		__this->___limitsXText_4 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___limitsXText_4), (void*)(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL);
	}

IL_00c0:
	{
		// if (!Mathf.Approximately(limitY, limits.y))
		float L_36 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_38 = L_37->___y_1;
		bool L_39;
		L_39 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_36, L_38, NULL);
		if (L_39)
		{
			goto IL_00e8;
		}
	}
	{
		// limits.y = limitY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_40 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_41 = V_4;
		L_40->___y_1 = L_41;
		// limitsYText = null;
		__this->___limitsYText_5 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___limitsYText_5), (void*)(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL);
	}

IL_00e8:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::OnDraw(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2Visualizer_OnDraw_m7B66BD7EAA1FD563FF77A88E6DA44EF7F4E459A3 (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m218A59EE14B00E2FC0D9D8E5EB5B70D049875DAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_16;
	memset((&V_16), 0, sizeof(V_16));
	{
		// DrawRectangle(rect, new Color(1, 1, 1, 0.1f));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (1.0f), (1.0f), (1.0f), (0.100000001f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135(L_0, L_1, NULL);
		// DrawAxis(Axis.X, rect, new Color(0, 1, 0, 0.75f));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___0_rect;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (0.0f), (1.0f), (0.0f), (0.75f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawAxis_m6FBA7B1B0EF9F92382DA48F9A828A2B5B28A5E1D(0, L_2, L_3, (1.0f), NULL);
		// DrawAxis(Axis.Y, rect, new Color(0, 1, 0, 0.75f));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = ___0_rect;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (0.0f), (1.0f), (0.0f), (0.75f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawAxis_m6FBA7B1B0EF9F92382DA48F9A828A2B5B28A5E1D(1, L_4, L_5, (1.0f), NULL);
		// var sampleCount = samples.count;
		RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F* L_6 = (RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F*)(&((ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138*)__this)->___samples_0);
		int32_t L_7 = L_6->___count_2;
		V_0 = L_7;
		// if (sampleCount == 0)
		int32_t L_8 = V_0;
		if (L_8)
		{
			goto IL_0079;
		}
	}
	{
		// return;
		return;
	}

IL_0079:
	{
		// if (limits != new Vector2(1, 1))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___limits_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), (1.0f), (1.0f), /*hidden argument*/NULL);
		bool L_11;
		L_11 = Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_014c;
		}
	}
	{
		// if (limitsXText == null)
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_12 = __this->___limitsXText_4;
		if (L_12)
		{
			goto IL_00bb;
		}
	}
	{
		// limitsXText = new GUIContent(limits.x.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float* L_14 = (float*)(&L_13->___x_0);
		String_t* L_15;
		L_15 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_14, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_16 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_16, L_15, NULL);
		__this->___limitsXText_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___limitsXText_4), (void*)L_16);
	}

IL_00bb:
	{
		// if (limitsYText == null)
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_17 = __this->___limitsYText_5;
		if (L_17)
		{
			goto IL_00de;
		}
	}
	{
		// limitsYText = new GUIContent(limits.y.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float* L_19 = (float*)(&L_18->___y_1);
		String_t* L_20;
		L_20 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_19, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_21 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_21, L_20, NULL);
		__this->___limitsYText_5 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___limitsYText_5), (void*)L_21);
	}

IL_00de:
	{
		// var limitsXSize = ValueTextStyle.CalcSize(limitsXText);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_22;
		L_22 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_23 = __this->___limitsXText_4;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = GUIStyle_CalcSize_m3015BAC288A5D6D29C0596ECE8117C8F9DFF9A76(L_22, L_23, NULL);
		V_8 = L_24;
		// var limitsXPos = new Vector2(rect.x - limitsXSize.x, rect.y - 5);
		float L_25;
		L_25 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_8;
		float L_27 = L_26.___x_0;
		float L_28;
		L_28 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_9), ((float)il2cpp_codegen_subtract(L_25, L_27)), ((float)il2cpp_codegen_subtract(L_28, (5.0f))), NULL);
		// var limitsYPos = new Vector2(rect.xMax, rect.yMax);
		float L_29;
		L_29 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		float L_30;
		L_30 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_10), L_29, L_30, NULL);
		// DrawText(limitsXText, limitsXPos, ValueTextStyle);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_31 = __this->___limitsXText_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_9;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_33;
		L_33 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_31, L_32, L_33, NULL);
		// DrawText(limitsYText, limitsYPos, ValueTextStyle);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_34 = __this->___limitsYText_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_10;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_36;
		L_36 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_34, L_35, L_36, NULL);
	}

IL_014c:
	{
		// var numMaximums = 0;
		V_1 = 0;
		// var firstMaximumPos = default(Vector2);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// var lastMaximumPos = default(Vector2);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// for (var i = 0; i < 360 / 3; ++i)
		V_11 = 0;
		goto IL_01cc;
	}

IL_0163:
	{
		// var value = maximums[i];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_37 = __this->___maximums_2;
		int32_t L_38 = V_11;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_12 = L_40;
		// if (value == default)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_12;
		il2cpp_codegen_initobj((&V_14), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_14;
		bool L_43;
		L_43 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_41, L_42, NULL);
		if (L_43)
		{
			goto IL_01c6;
		}
	}
	{
		// var valuePos = PixelPosForValue(value, rect);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_12;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_45 = ___0_rect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2Visualizer_PixelPosForValue_mEFF890F34341AC49E804B86B02A7F5BBA60051ED(__this, L_44, L_45, NULL);
		V_13 = L_46;
		// if (numMaximums > 0)
		int32_t L_47 = V_1;
		if ((((int32_t)L_47) <= ((int32_t)0)))
		{
			goto IL_01bc;
		}
	}
	{
		// DrawLine(lastMaximumPos, valuePos, new Color(1, 1, 1, 0.25f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50;
		memset((&L_50), 0, sizeof(L_50));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_50), (1.0f), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3(L_48, L_49, L_50, (1.0f), NULL);
		goto IL_01bf;
	}

IL_01bc:
	{
		// firstMaximumPos = valuePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_13;
		V_2 = L_51;
	}

IL_01bf:
	{
		// lastMaximumPos = valuePos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		V_3 = L_52;
		// ++numMaximums;
		int32_t L_53 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_01c6:
	{
		// for (var i = 0; i < 360 / 3; ++i)
		int32_t L_54 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_01cc:
	{
		// for (var i = 0; i < 360 / 3; ++i)
		int32_t L_55 = V_11;
		if ((((int32_t)L_55) < ((int32_t)((int32_t)120))))
		{
			goto IL_0163;
		}
	}
	{
		// if (numMaximums > 1)
		int32_t L_56 = V_1;
		if ((((int32_t)L_56) <= ((int32_t)1)))
		{
			goto IL_01fb;
		}
	}
	{
		// DrawLine(lastMaximumPos, firstMaximumPos, new Color(1, 1, 1, 0.25f));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		memset((&L_59), 0, sizeof(L_59));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_59), (1.0f), (1.0f), (1.0f), (0.25f), /*hidden argument*/NULL);
		VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3(L_57, L_58, L_59, (1.0f), NULL);
	}

IL_01fb:
	{
		// var alphaStep = 1f / sampleCount;
		int32_t L_60 = V_0;
		V_4 = ((float)((1.0f)/((float)L_60)));
		// var alpha = 1f;
		V_5 = (1.0f);
		// for (var i = sampleCount - 1; i >= 0; --i) // Go newest to oldest.
		int32_t L_61 = V_0;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_61, 1));
		goto IL_0258;
	}

IL_0213:
	{
		// var value = samples[i];
		RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F* L_62 = (RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F*)(&((ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138*)__this)->___samples_0);
		int32_t L_63 = V_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_64;
		L_64 = RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093(L_62, L_63, RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_64);
		V_16 = L_65;
		// var valueRect = RectForValue(value, rect);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_16;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_67 = ___0_rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_68;
		L_68 = Vector2Visualizer_RectForValue_m3112F9619818BFD0A0F749F13F338B9D310C1EBD(__this, L_66, L_67, NULL);
		// DrawRectangle(valueRect, new Color(1, 0, 0, alpha));
		float L_69 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_70;
		memset((&L_70), 0, sizeof(L_70));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_70), (1.0f), (0.0f), (0.0f), L_69, /*hidden argument*/NULL);
		VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135(L_68, L_70, NULL);
		// alpha -= alphaStep;
		float L_71 = V_5;
		float L_72 = V_4;
		V_5 = ((float)il2cpp_codegen_subtract(L_71, L_72));
		// for (var i = sampleCount - 1; i >= 0; --i) // Go newest to oldest.
		int32_t L_73 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_subtract(L_73, 1));
	}

IL_0258:
	{
		// for (var i = sampleCount - 1; i >= 0; --i) // Go newest to oldest.
		int32_t L_74 = V_15;
		if ((((int32_t)L_74) >= ((int32_t)0)))
		{
			goto IL_0213;
		}
	}
	{
		// var lastSample = samples[sampleCount - 1];
		RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F* L_75 = (RingBuffer_1_t02FA00636DB4797147D7866F67D1F60ADE4B778F*)(&((ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138*)__this)->___samples_0);
		int32_t L_76 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_77;
		L_77 = RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093(L_75, ((int32_t)il2cpp_codegen_subtract(L_76, 1)), RingBuffer_1_get_Item_m9CBDAB1F0328925E58CEF151E29152E1369FF093_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_77);
		V_6 = L_78;
		// var lastSamplePos = PixelPosForValue(lastSample, rect);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_6;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_80 = ___0_rect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		L_81 = Vector2Visualizer_PixelPosForValue_mEFF890F34341AC49E804B86B02A7F5BBA60051ED(__this, L_79, L_80, NULL);
		V_7 = L_81;
		// lastSamplePos.x += 3;
		float* L_82 = (float*)(&(&V_7)->___x_0);
		float* L_83 = L_82;
		float L_84 = *((float*)L_83);
		*((float*)L_83) = (float)((float)il2cpp_codegen_add(L_84, (3.0f)));
		// lastSamplePos.y += 3;
		float* L_85 = (float*)(&(&V_7)->___y_1);
		float* L_86 = L_85;
		float L_87 = *((float*)L_86);
		*((float*)L_86) = (float)((float)il2cpp_codegen_add(L_87, (3.0f)));
		// DrawText(samplesText[sampleCount - 1], lastSamplePos, ValueTextStyle);
		RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F* L_88 = (RingBuffer_1_tA1EE3F697409FB51A4B99877DF3CB7AB047E6F1F*)(&((ValueVisualizer_1_tC88BCA746070039EDFA7DCEE2216F9AF7F6B5138*)__this)->___samplesText_1);
		int32_t L_89 = V_0;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2** L_90;
		L_90 = RingBuffer_1_get_Item_m218A59EE14B00E2FC0D9D8E5EB5B70D049875DAC(L_88, ((int32_t)il2cpp_codegen_subtract(L_89, 1)), RingBuffer_1_get_Item_m218A59EE14B00E2FC0D9D8E5EB5B70D049875DAC_RuntimeMethod_var);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_91 = *((GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2**)L_90);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_7;
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_93;
		L_93 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_91, L_92, L_93, NULL);
		// }
		return;
	}
}
// UnityEngine.Rect UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::RectForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Vector2Visualizer_RectForValue_m3112F9619818BFD0A0F749F13F338B9D310C1EBD (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var pos = PixelPosForValue(value, rect);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___1_rect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2Visualizer_PixelPosForValue_mEFF890F34341AC49E804B86B02A7F5BBA60051ED(__this, L_0, L_1, NULL);
		V_0 = L_2;
		// return new Rect(pos.x - 1, pos.y - 1, 2, 2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___y_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), ((float)il2cpp_codegen_subtract(L_4, (1.0f))), ((float)il2cpp_codegen_subtract(L_6, (1.0f))), (2.0f), (2.0f), /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/Vector2Visualizer::PixelPosForValue(UnityEngine.Vector2,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2Visualizer_PixelPosForValue_mEFF890F34341AC49E804B86B02A7F5BBA60051ED (Vector2Visualizer_t8D6A409819795BFA3E388290BC0001BE5EA9DF3A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// var center = rect.center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&___1_rect), NULL);
		V_0 = L_0;
		// var x = Mathf.Abs(value.x) / limits.x * Mathf.Sign(value.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_value;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = fabsf(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_4 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_5 = L_4->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___0_value;
		float L_7 = L_6.___x_0;
		float L_8;
		L_8 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_7, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)(L_3/L_5)), L_8));
		// var y = Mathf.Abs(value.y) / limits.y * Mathf.Sign(value.y) * -1; // GUI Y is upside down.
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___0_value;
		float L_10 = L_9.___y_1;
		float L_11;
		L_11 = fabsf(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___limits_3);
		float L_13 = L_12->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___0_value;
		float L_15 = L_14.___y_1;
		float L_16;
		L_16 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_15, NULL);
		// var xInPixels = x * rect.width / 2;
		float L_17 = V_1;
		float L_18;
		L_18 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_rect), NULL);
		V_2 = ((float)(((float)il2cpp_codegen_multiply(L_17, L_18))/(2.0f)));
		// var yInPixels = y * rect.height / 2;
		float L_19;
		L_19 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_rect), NULL);
		V_3 = ((float)(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_11/L_13)), L_16)), (-1.0f))), L_19))/(2.0f)));
		// return new Vector2(center.x + xInPixels,
		//     center.y + yInPixels);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_0;
		float L_21 = L_20.___x_0;
		float L_22 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_0;
		float L_24 = L_23.___y_1;
		float L_25 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), ((float)il2cpp_codegen_add(L_21, L_22)), ((float)il2cpp_codegen_add(L_24, L_25)), /*hidden argument*/NULL);
		return L_26;
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
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLegend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLegend_m8E15E3C1984B139C81D1EEEC1CDD3E0BBCCD86C3 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = __this->___U3CshowLegendU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLegend(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLegend_mA12722950A12F913A4E9F4ED357EB6F5856914BD (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CshowLegendU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_showLimits()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLimits_mD421A4478284E34B8CA3D2DC71E5F2A5B2AC82D4 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = __this->___U3CshowLimitsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_showLimits(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLimits_mAE7CAB87EC3DF3672633A0204160B059F1FB8B73 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CshowLimitsU3Ek__BackingField_1 = L_0;
		return;
	}
}
// UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timeUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = __this->___U3CtimeUnitU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_timeUnit(UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeUnit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_timeUnit_m0895304C2ECCBBF9C5D3130694D915D5AA338FCD (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = ___0_value;
		__this->___U3CtimeUnitU3Ek__BackingField_2 = L_0;
		return;
	}
}
// UnityEngine.GUIContent UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_valueUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* TimelineVisualizer_get_valueUnit_m74A3DDB454B5284FB5B8A86DEC2DE91B35B4AA76 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public GUIContent valueUnit { get; set; }
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = __this->___U3CvalueUnitU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_valueUnit(UnityEngine.GUIContent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_valueUnit_m8B51379D5B832400F03CBE3680B96248F65AF1F6 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GUIContent valueUnit { get; set; }
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_value;
		__this->___U3CvalueUnitU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvalueUnitU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_timelineCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public int timelineCount => m_Timelines != null ? m_Timelines.Length : 0;
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_0 = __this->___m_Timelines_9;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_1 = __this->___m_Timelines_9;
		NullCheck(L_1);
		return ((int32_t)(((RuntimeArray*)L_1)->max_length));
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_historyDepth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_historyDepth_mAE440241BCB9D518CD34C46DC274F8B3529D24B2 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = __this->___U3ChistoryDepthU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_historyDepth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_historyDepth_mA08F58C027B5BB38316ED8F9C2D3785FF376AF3A (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = ___0_value;
		__this->___U3ChistoryDepthU3Ek__BackingField_4 = L_0;
		return;
	}
}
// UnityEngine.Vector2 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::get_limitsY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LimitsY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_LimitsY_6;
		return L_0;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::set_limitsY(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_set_limitsY_mDBE3024B804393301CAF8908961BA5302107FF10 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		// m_LimitsY = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___m_LimitsY_6 = L_0;
		// m_LimitsYMin = null;
		__this->___m_LimitsYMin_7 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LimitsYMin_7), (void*)(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL);
		// m_LimitsYMax = null;
		__this->___m_LimitsYMax_8 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LimitsYMax_8), (void*)(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer__ctor_mB201B5B5FD151C099DF335990A4FBE2E1D65D3AD (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, float ___0_totalTimeUnitsShown, const RuntimeMethod* method) 
{
	{
		// public int historyDepth { get; set; } = 100;
		__this->___U3ChistoryDepthU3Ek__BackingField_4 = ((int32_t)100);
		// private Vector2 m_LimitsY = new Vector2(-1, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (-1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___m_LimitsY_6 = L_0;
		// public TimelineVisualizer(float totalTimeUnitsShown = 4)
		Visualizer__ctor_m4BE0E6F6426C5A7C9A721CB928FE5C7BD8EAD193(__this, NULL);
		// m_TotalTimeUnitsShown = totalTimeUnitsShown;
		float L_1 = ___0_totalTimeUnitsShown;
		__this->___m_TotalTimeUnitsShown_5 = L_1;
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::OnDraw(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_OnDraw_m45317ED2CBCF61D5FE84E6B5D0F8136071DB3CC4 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int64_t V_1 = 0;
	int32_t V_2 = 0;
	Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_16;
	memset((&V_16), 0, sizeof(V_16));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_17;
	memset((&V_17), 0, sizeof(V_17));
	int32_t G_B4_0 = 0;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	float G_B14_0 = 0.0f;
	{
		// var endTime = Time.realtimeSinceStartup;
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		// var startTime = endTime - m_TotalTimeUnitsShown;
		float L_1 = __this->___m_TotalTimeUnitsShown_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// var endFrame = InputState.updateCount;
		uint32_t L_2;
		L_2 = InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline(NULL);
		// var startFrame = endFrame - (int)m_TotalTimeUnitsShown;
		float L_3 = __this->___m_TotalTimeUnitsShown_5;
		V_1 = ((int64_t)il2cpp_codegen_subtract(((int64_t)(uint64_t)L_2), ((int64_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_3))));
		// for (var i = 0; i < timelineCount; ++i)
		V_2 = 0;
		goto IL_01cc;
	}

IL_0024:
	{
		// var timeline = m_Timelines[i];
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_4 = __this->___m_Timelines_9;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		// var sampleCount = timeUnit == TimeUnit.Frames
		//     ? timeline.frameSamples.count
		//     : timeline.timeSamples.count;
		int32_t L_8;
		L_8 = TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81_inline(__this, NULL);
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 L_9 = V_3;
		RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C L_10 = L_9.___timeSamples_2;
		int32_t L_11 = L_10.___count_2;
		G_B4_0 = L_11;
		goto IL_0052;
	}

IL_0047:
	{
		Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 L_12 = V_3;
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56 L_13 = L_12.___frameSamples_3;
		int32_t L_14 = L_13.___count_2;
		G_B4_0 = L_14;
	}

IL_0052:
	{
		V_4 = G_B4_0;
		// GUI.BeginGroup(rect);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15 = ___0_rect;
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_BeginGroup_m3C614974B57A05AA16F1DD54E524C5CEF8D9F9DC(L_15, NULL);
		// var plotType = timeline.plotType;
		Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 L_16 = V_3;
		int32_t L_17 = L_16.___plotType_6;
		V_5 = L_17;
		// var lastPos = default(Vector2);
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// var timeUnitsPerPixel = rect.width / m_TotalTimeUnitsShown;
		float L_18;
		L_18 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_19 = __this->___m_TotalTimeUnitsShown_5;
		V_7 = ((float)(L_18/L_19));
		// var color = m_Timelines[i].color;
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_20 = __this->___m_Timelines_9;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___color_1;
		V_8 = L_22;
		// for (var n = sampleCount - 1; n >= 0; --n)
		int32_t L_23 = V_4;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		goto IL_01bb;
	}

IL_0098:
	{
		// var sample = timeUnit == TimeUnit.Frames
		//     ? timeline.frameSamples[n].value
		//     : timeline.timeSamples[n].value;
		int32_t L_24;
		L_24 = TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81_inline(__this, NULL);
		if ((((int32_t)L_24) == ((int32_t)1)))
		{
			goto IL_00b6;
		}
	}
	{
		RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* L_25 = (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C*)(&(&V_3)->___timeSamples_2);
		int32_t L_26 = V_9;
		TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* L_27;
		L_27 = RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1(L_25, L_26, RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1_RuntimeMethod_var);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_28 = L_27->___value_0;
		G_B8_0 = L_28;
		goto IL_00c9;
	}

IL_00b6:
	{
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_29 = (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56*)(&(&V_3)->___frameSamples_3);
		int32_t L_30 = V_9;
		FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* L_31;
		L_31 = RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E(L_29, L_30, RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_32 = L_31->___value_0;
		G_B8_0 = L_32;
	}

IL_00c9:
	{
		V_10 = G_B8_0;
		// if (sample.isEmpty)
		bool L_33;
		L_33 = PrimitiveValue_get_isEmpty_m5EB7E528CDE36950BBE170CE82D1DB78D45E4347((&V_10), NULL);
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		// y = 0.5f;
		V_11 = (0.5f);
		goto IL_00e7;
	}

IL_00dd:
	{
		// y = sample.ToSingle();
		float L_34;
		L_34 = PrimitiveValue_ToSingle_mB1DAF285A066B17850C7B390FC83099289D0CF1B((&V_10), (RuntimeObject*)NULL, NULL);
		V_11 = L_34;
	}

IL_00e7:
	{
		// y /= limitsY.y;
		float L_35 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline(__this, NULL);
		float L_37 = L_36.___y_1;
		V_11 = ((float)(L_35/L_37));
		// var deltaTime = timeUnit == TimeUnit.Frames
		//     ? timeline.frameSamples[n].frame - startFrame
		//     : timeline.timeSamples[n].time - startTime;
		int32_t L_38;
		L_38 = TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81_inline(__this, NULL);
		if ((((int32_t)L_38) == ((int32_t)1)))
		{
			goto IL_0117;
		}
	}
	{
		RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* L_39 = (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C*)(&(&V_3)->___timeSamples_2);
		int32_t L_40 = V_9;
		TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* L_41;
		L_41 = RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1(L_39, L_40, RingBuffer_1_get_Item_mA32A74FC92F71B82DCE353A46DB9EE02EC898CE1_RuntimeMethod_var);
		float L_42 = L_41->___time_1;
		float L_43 = V_0;
		G_B14_0 = ((float)il2cpp_codegen_subtract(L_42, L_43));
		goto IL_012e;
	}

IL_0117:
	{
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_44 = (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56*)(&(&V_3)->___frameSamples_3);
		int32_t L_45 = V_9;
		FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* L_46;
		L_46 = RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E(L_44, L_45, RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var);
		int32_t L_47 = L_46->___frame_1;
		int64_t L_48 = V_1;
		G_B14_0 = ((float)((int64_t)il2cpp_codegen_subtract(((int64_t)L_47), L_48)));
	}

IL_012e:
	{
		V_12 = G_B14_0;
		// var pos = new Vector2(deltaTime * timeUnitsPerPixel, rect.height - y * rect.height);
		float L_49 = V_12;
		float L_50 = V_7;
		float L_51;
		L_51 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		float L_52 = V_11;
		float L_53;
		L_53 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_13), ((float)il2cpp_codegen_multiply(L_49, L_50)), ((float)il2cpp_codegen_subtract(L_51, ((float)il2cpp_codegen_multiply(L_52, L_53)))), NULL);
		// if (plotType == PlotType.LineGraph)
		int32_t L_54 = V_5;
		if (L_54)
		{
			goto IL_017a;
		}
	}
	{
		// if (n != sampleCount - 1)
		int32_t L_55 = V_9;
		int32_t L_56 = V_4;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_56, 1)))))
		{
			goto IL_01b1;
		}
	}
	{
		// DrawLine(lastPos, pos, color, 2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = V_8;
		VisualizationHelpers_DrawLine_m928027307B14A1F9D16FA7773461DF0D1B68E1F3(L_57, L_58, L_59, (2.0f), NULL);
		// if (pos.x < 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_13;
		float L_61 = L_60.___x_0;
		if ((!(((float)L_61) < ((float)(0.0f)))))
		{
			goto IL_01b1;
		}
	}
	{
		// break;
		goto IL_01c3;
	}

IL_017a:
	{
		// else if (plotType == PlotType.BarChart)
		int32_t L_62 = V_5;
		if ((!(((uint32_t)L_62) == ((uint32_t)1))))
		{
			goto IL_01b1;
		}
	}
	{
		// var barRect = new Rect(pos.x, pos.y, timeUnitsPerPixel, y * limitsY.y * rect.height);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_13;
		float L_64 = L_63.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = V_13;
		float L_66 = L_65.___y_1;
		float L_67 = V_7;
		float L_68 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		L_69 = TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline(__this, NULL);
		float L_70 = L_69.___y_1;
		float L_71;
		L_71 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_72;
		memset((&L_72), 0, sizeof(L_72));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_72), L_64, L_66, L_67, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_68, L_70)), L_71)), /*hidden argument*/NULL);
		// DrawRectangle(barRect, color);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_73 = V_8;
		VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135(L_72, L_73, NULL);
	}

IL_01b1:
	{
		// lastPos = pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = V_13;
		V_6 = L_74;
		// for (var n = sampleCount - 1; n >= 0; --n)
		int32_t L_75 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
	}

IL_01bb:
	{
		// for (var n = sampleCount - 1; n >= 0; --n)
		int32_t L_76 = V_9;
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_0098;
		}
	}

IL_01c3:
	{
		// GUI.EndGroup();
		il2cpp_codegen_runtime_class_init_inline(GUI_tA9CDB3D69DB13D51AD83ABDB587EF95947EC2D2A_il2cpp_TypeInfo_var);
		GUI_EndGroup_mE8C7A3FB87B0EAA3556AB16466D0D640BBEE1675(NULL);
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_77 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_01cc:
	{
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_78 = V_2;
		int32_t L_79;
		L_79 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(__this, NULL);
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0024;
		}
	}
	{
		// if (showLegend && timelineCount > 0)
		bool L_80;
		L_80 = TimelineVisualizer_get_showLegend_m8E15E3C1984B139C81D1EEEC1CDD3E0BBCCD86C3_inline(__this, NULL);
		if (!L_80)
		{
			goto IL_02ee;
		}
	}
	{
		int32_t L_81;
		L_81 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(__this, NULL);
		if ((((int32_t)L_81) <= ((int32_t)0)))
		{
			goto IL_02ee;
		}
	}
	{
		// var legendRect = rect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_82 = ___0_rect;
		V_14 = L_82;
		// legendRect.x += rect.width + 2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_83 = (&V_14);
		float L_84;
		L_84 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_83, NULL);
		float L_85;
		L_85 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_83, ((float)il2cpp_codegen_add(L_84, ((float)il2cpp_codegen_add(L_85, (2.0f))))), NULL);
		// legendRect.width = 400;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_14), (400.0f), NULL);
		// legendRect.height = ValueTextStyle.CalcHeight(m_Timelines[0].name, 400);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_86;
		L_86 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_87 = __this->___m_Timelines_9;
		NullCheck(L_87);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_88 = ((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___name_0;
		NullCheck(L_86);
		float L_89;
		L_89 = GUIStyle_CalcHeight_m57DA8F6020AE71B561ABCBCE74E0E58FD2ECC5E8(L_86, L_88, (400.0f), NULL);
		Rect_set_height_mD00038E6E06637137A5626CA8CD421924005BF03((&V_14), L_89, NULL);
		// for (var i = 0; i < m_Timelines.Length; ++i)
		V_15 = 0;
		goto IL_02df;
	}

IL_0248:
	{
		// var colorTagRect = legendRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_90 = V_14;
		V_16 = L_90;
		// colorTagRect.width = 5;
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A((&V_16), (5.0f), NULL);
		// var labelRect = legendRect;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_91 = V_14;
		V_17 = L_91;
		// labelRect.x += 8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_92 = (&V_17);
		float L_93;
		L_93 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_92, NULL);
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_92, ((float)il2cpp_codegen_add(L_93, (8.0f))), NULL);
		// labelRect.width -= 8;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_94 = (&V_17);
		float L_95;
		L_95 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9(L_94, NULL);
		Rect_set_width_m93B6217CF3EFF89F9B0C81F34D7345DE90B93E5A(L_94, ((float)il2cpp_codegen_subtract(L_95, (8.0f))), NULL);
		// DrawRectangle(colorTagRect, m_Timelines[i].color);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_96 = V_16;
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_97 = __this->___m_Timelines_9;
		int32_t L_98 = V_15;
		NullCheck(L_97);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99 = ((L_97)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_98)))->___color_1;
		VisualizationHelpers_DrawRectangle_mF570A9982620FAC9ACCA9735649E9C0F5EFE0135(L_96, L_99, NULL);
		// DrawText(m_Timelines[i].name, labelRect.position, ValueTextStyle);
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_100 = __this->___m_Timelines_9;
		int32_t L_101 = V_15;
		NullCheck(L_100);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)))->___name_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103;
		L_103 = Rect_get_position_m9B7E583E67443B6F4280A676E644BB0B9E7C4E38((&V_17), NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_104;
		L_104 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_102, L_103, L_104, NULL);
		// legendRect.y += labelRect.height + 2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_105 = (&V_14);
		float L_106;
		L_106 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_105, NULL);
		float L_107;
		L_107 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_17), NULL);
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_105, ((float)il2cpp_codegen_add(L_106, ((float)il2cpp_codegen_add(L_107, (2.0f))))), NULL);
		// for (var i = 0; i < m_Timelines.Length; ++i)
		int32_t L_108 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_108, 1));
	}

IL_02df:
	{
		// for (var i = 0; i < m_Timelines.Length; ++i)
		int32_t L_109 = V_15;
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_110 = __this->___m_Timelines_9;
		NullCheck(L_110);
		if ((((int32_t)L_109) < ((int32_t)((int32_t)(((RuntimeArray*)L_110)->max_length)))))
		{
			goto IL_0248;
		}
	}

IL_02ee:
	{
		// if (showLimits)
		bool L_111;
		L_111 = TimelineVisualizer_get_showLimits_mD421A4478284E34B8CA3D2DC71E5F2A5B2AC82D4_inline(__this, NULL);
		if (!L_111)
		{
			goto IL_039d;
		}
	}
	{
		// if (m_LimitsYMax == null)
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_112 = __this->___m_LimitsYMax_8;
		if (L_112)
		{
			goto IL_031c;
		}
	}
	{
		// m_LimitsYMax = new GUIContent(m_LimitsY.y.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_113 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___m_LimitsY_6);
		float* L_114 = (float*)(&L_113->___y_1);
		String_t* L_115;
		L_115 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_114, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_116 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_116);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_116, L_115, NULL);
		__this->___m_LimitsYMax_8 = L_116;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LimitsYMax_8), (void*)L_116);
	}

IL_031c:
	{
		// if (m_LimitsYMin == null)
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_117 = __this->___m_LimitsYMin_7;
		if (L_117)
		{
			goto IL_033f;
		}
	}
	{
		// m_LimitsYMin = new GUIContent(m_LimitsY.x.ToString());
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_118 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___m_LimitsY_6);
		float* L_119 = (float*)(&L_118->___x_0);
		String_t* L_120;
		L_120 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_119, NULL);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_121 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_121);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_121, L_120, NULL);
		__this->___m_LimitsYMin_7 = L_121;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LimitsYMin_7), (void*)L_121);
	}

IL_033f:
	{
		// DrawText(m_LimitsYMax, new Vector2(rect.x + rect.width, rect.y), ValueTextStyle);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_122 = __this->___m_LimitsYMax_8;
		float L_123;
		L_123 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_124;
		L_124 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_125;
		L_125 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_126), ((float)il2cpp_codegen_add(L_123, L_124)), L_125, /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_127;
		L_127 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_122, L_126, L_127, NULL);
		// DrawText(m_LimitsYMin, new Vector2(rect.x + rect.width, rect.y + rect.height), ValueTextStyle);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_128 = __this->___m_LimitsYMin_7;
		float L_129;
		L_129 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_130;
		L_130 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_131;
		L_131 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_132;
		L_132 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133;
		memset((&L_133), 0, sizeof(L_133));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_133), ((float)il2cpp_codegen_add(L_129, L_130)), ((float)il2cpp_codegen_add(L_131, L_132)), /*hidden argument*/NULL);
		GUIStyle_t20BA2F9F3FE9D13AAA607EEEBE5547835A6F6580* L_134;
		L_134 = VisualizationHelpers_get_ValueTextStyle_m5A78A2A252DF4EC9360C420412DEAF30BC649961(NULL);
		VisualizationHelpers_DrawText_m6D35295BF19356CCFA8463E620B86452F23388A2(L_128, L_133, L_134, NULL);
	}

IL_039d:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddSample(System.Object,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_AddSample_m43C0183BC058F1A2BBF9F5AA494E0471832F4462 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, RuntimeObject* ___0_value, double ___1_time, const RuntimeMethod* method) 
{
	{
		// if (timelineCount == 0)
		int32_t L_0;
		L_0 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("Must have set up a timeline first");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE7F0B9FDD5F8620EA07E4472F7641A988C1766)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimelineVisualizer_AddSample_m43C0183BC058F1A2BBF9F5AA494E0471832F4462_RuntimeMethod_var)));
	}

IL_0013:
	{
		// AddSample(0, PrimitiveValue.FromObject(value), (float)time);
		RuntimeObject* L_2 = ___0_value;
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_3;
		L_3 = PrimitiveValue_FromObject_m8614FFABB7D5DAF218397AB3C2254089477C8786(L_2, NULL);
		double L_4 = ___1_time;
		TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03(__this, 0, L_3, ((float)L_4), NULL);
		// }
		return;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddTimeline(System.String,UnityEngine.Color,UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/PlotType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_AddTimeline_mB1609C77DB73413D8CCA02727FE74C87981DEE35 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color, int32_t ___2_plotType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var timeline = new Timeline
		// {
		//     name = new GUIContent(name),
		//     color = color,
		//     plotType = plotType,
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95));
		String_t* L_0 = ___0_name;
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_1 = (GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2*)il2cpp_codegen_object_new(GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GUIContent__ctor_mD2BDF82C1E1F75DEEF36F2C8EDB60FFB49EE4DBC(L_1, L_0, NULL);
		(&V_2)->___name_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___name_0), (void*)L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_color;
		(&V_2)->___color_1 = L_2;
		int32_t L_3 = ___2_plotType;
		(&V_2)->___plotType_6 = L_3;
		Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 L_4 = V_2;
		V_0 = L_4;
		// if (timeUnit == TimeUnit.Frames)
		int32_t L_5;
		L_5 = TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81_inline(__this, NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0044;
		}
	}
	{
		// timeline.frameSamples = new RingBuffer<FrameSample>(historyDepth);
		int32_t L_6;
		L_6 = TimelineVisualizer_get_historyDepth_mAE440241BCB9D518CD34C46DC274F8B3529D24B2_inline(__this, NULL);
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56 L_7;
		memset((&L_7), 0, sizeof(L_7));
		RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D((&L_7), L_6, /*hidden argument*/RingBuffer_1__ctor_mAE5365D506C08F2179DFAA0E77C9997D3143499D_RuntimeMethod_var);
		(&V_0)->___frameSamples_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___frameSamples_3))->___array_0), (void*)NULL);
		goto IL_0056;
	}

IL_0044:
	{
		// timeline.timeSamples = new RingBuffer<TimeSample>(historyDepth);
		int32_t L_8;
		L_8 = TimelineVisualizer_get_historyDepth_mAE440241BCB9D518CD34C46DC274F8B3529D24B2_inline(__this, NULL);
		RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C L_9;
		memset((&L_9), 0, sizeof(L_9));
		RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815((&L_9), L_8, /*hidden argument*/RingBuffer_1__ctor_m1BE4A31992F4795ADE7B4CF8B0D6F9FC7A002815_RuntimeMethod_var);
		(&V_0)->___timeSamples_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___timeSamples_2))->___array_0), (void*)NULL);
	}

IL_0056:
	{
		// var index = timelineCount;
		int32_t L_10;
		L_10 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(__this, NULL);
		V_1 = L_10;
		// Array.Resize(ref m_Timelines, timelineCount + 1);
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72** L_11 = (TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72**)(&__this->___m_Timelines_9);
		int32_t L_12;
		L_12 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(__this, NULL);
		Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), Array_Resize_TisTimeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_mA38B84F2B3C0DB70AB3DCF42A87BE625486626EC_RuntimeMethod_var);
		// m_Timelines[index] = timeline;
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_13 = __this->___m_Timelines_9;
		int32_t L_14 = V_1;
		Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95 L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95)L_15);
		// return index;
		int32_t L_16 = V_1;
		return L_16;
	}
}
// System.Int32 UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetTimeline(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_GetTimeline_mBD3C28BB7ABA061377705FDFB7733F7122AF88FB (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < timelineCount; ++i)
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// if (string.Compare(m_Timelines[i].name.text, name, StringComparison.InvariantCultureIgnoreCase) == 0)
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_0 = __this->___m_Timelines_9;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___name_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = GUIContent_get_text_mC6D7981351923AD7F802AC659314BA56DF7F3ED6(L_2, NULL);
		String_t* L_4 = ___0_name;
		int32_t L_5;
		L_5 = String_Compare_mB21E4512DAFACE027D2DD3FE75DD6E69CE315009(L_3, L_4, 3, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		// return i;
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0025:
	{
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0029:
	{
		// for (var i = 0; i < timelineCount; ++i)
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = TimelineVisualizer_get_timelineCount_m3F7CCEE1532D8017D698A46B2EBBBAC4EBEC27F6(__this, NULL);
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// return -1;
		return (-1);
	}
}
// System.Void UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::AddSample(System.Int32,UnityEngine.InputSystem.Utilities.PrimitiveValue,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimelineVisualizer_AddSample_mE75A2C100D6860EE7E8F64DF33BF588F1CA00F03 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_timelineIndex, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___1_value, float ___2_time, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSample_t6099397A78C68E4197D716D06930B34979A5235F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_Timelines[timelineIndex].timeSamples.Append(new TimeSample
		// {
		//     value = value,
		//     time = time
		// });
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_0 = __this->___m_Timelines_9;
		int32_t L_1 = ___0_timelineIndex;
		NullCheck(L_0);
		RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C* L_2 = (RingBuffer_1_t49C2A5A33BF5233DB16F04E96D8CE20868DFA96C*)(&((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___timeSamples_2);
		il2cpp_codegen_initobj((&V_0), sizeof(TimeSample_t6099397A78C68E4197D716D06930B34979A5235F));
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_3 = ___1_value;
		(&V_0)->___value_0 = L_3;
		float L_4 = ___2_time;
		(&V_0)->___time_1 = L_4;
		TimeSample_t6099397A78C68E4197D716D06930B34979A5235F L_5 = V_0;
		TimeSample_t6099397A78C68E4197D716D06930B34979A5235F* L_6;
		L_6 = RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A(L_2, L_5, RingBuffer_1_Append_mDA879F1051AF1470E86640C2A6F67EFF4C19DD6A_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.InputSystem.Utilities.PrimitiveValue& UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer::GetOrCreateSample(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* TimelineVisualizer_GetOrCreateSample_m7188FEE4DD8C1B75734E3977F9C61C6FBAAD70C2 (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_timelineIndex, int32_t ___1_frame, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* V_0 = NULL;
	int32_t V_1 = 0;
	FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// ref var timeline = ref m_Timelines[timelineIndex];
		TimelineU5BU5D_t100843FECDE8C55D5CB78D0BC6DDB6B11A236F72* L_0 = __this->___m_Timelines_9;
		int32_t L_1 = ___0_timelineIndex;
		NullCheck(L_0);
		// ref var samples = ref timeline.frameSamples;
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_2 = (RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56*)(&((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->___frameSamples_3);
		V_0 = L_2;
		// var count = samples.count;
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_3 = V_0;
		int32_t L_4 = L_3->___count_2;
		V_1 = L_4;
		// if (count > 0)
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		// if (samples[count - 1].frame == frame)
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_6 = V_0;
		int32_t L_7 = V_1;
		FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* L_8;
		L_8 = RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var);
		int32_t L_9 = L_8->___frame_1;
		int32_t L_10 = ___1_frame;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003d;
		}
	}
	{
		// return ref samples[count - 1].value;
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_11 = V_0;
		int32_t L_12 = V_1;
		FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* L_13;
		L_13 = RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E(L_11, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), RingBuffer_1_get_Item_m87441EB7D8904407006302BE4E701203E124E04E_RuntimeMethod_var);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_14 = (PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4*)(&L_13->___value_0);
		return L_14;
	}

IL_003d:
	{
		// return ref samples.Append(new FrameSample {frame = frame}).value;
		RingBuffer_1_t1AC1D5196631E33445A835C33A7F5DA16C1CAD56* L_15 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619));
		int32_t L_16 = ___1_frame;
		(&V_2)->___frame_1 = L_16;
		FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619 L_17 = V_2;
		FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619* L_18;
		L_18 = RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32(L_15, L_17, RingBuffer_1_Append_m5B84F4DF8718F75934C3E600F94A4727C14A3F32_RuntimeMethod_var);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4* L_19 = (PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4*)(&L_18->___value_0);
		return L_19;
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


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshal_pinvoke(const TimeSample_t6099397A78C68E4197D716D06930B34979A5235F& unmarshaled, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke(unmarshaled.___value_0, marshaled.___value_0);
	marshaled.___time_1 = unmarshaled.___time_1;
}
IL2CPP_EXTERN_C void TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshal_pinvoke_back(const TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_pinvoke& marshaled, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F& unmarshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 unmarshaledvalue_temp_0;
	memset((&unmarshaledvalue_temp_0), 0, sizeof(unmarshaledvalue_temp_0));
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke_back(marshaled.___value_0, unmarshaledvalue_temp_0);
	unmarshaled.___value_0 = unmarshaledvalue_temp_0;
	float unmarshaledtime_temp_1 = 0.0f;
	unmarshaledtime_temp_1 = marshaled.___time_1;
	unmarshaled.___time_1 = unmarshaledtime_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshal_pinvoke_cleanup(TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke_cleanup(marshaled.___value_0);
}


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshal_com(const TimeSample_t6099397A78C68E4197D716D06930B34979A5235F& unmarshaled, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_com& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com(unmarshaled.___value_0, marshaled.___value_0);
	marshaled.___time_1 = unmarshaled.___time_1;
}
IL2CPP_EXTERN_C void TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshal_com_back(const TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_com& marshaled, TimeSample_t6099397A78C68E4197D716D06930B34979A5235F& unmarshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 unmarshaledvalue_temp_0;
	memset((&unmarshaledvalue_temp_0), 0, sizeof(unmarshaledvalue_temp_0));
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com_back(marshaled.___value_0, unmarshaledvalue_temp_0);
	unmarshaled.___value_0 = unmarshaledvalue_temp_0;
	float unmarshaledtime_temp_1 = 0.0f;
	unmarshaledtime_temp_1 = marshaled.___time_1;
	unmarshaled.___time_1 = unmarshaledtime_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/TimeSample
IL2CPP_EXTERN_C void TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshal_com_cleanup(TimeSample_t6099397A78C68E4197D716D06930B34979A5235F_marshaled_com& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com_cleanup(marshaled.___value_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshal_pinvoke(const FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619& unmarshaled, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke(unmarshaled.___value_0, marshaled.___value_0);
	marshaled.___frame_1 = unmarshaled.___frame_1;
}
IL2CPP_EXTERN_C void FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshal_pinvoke_back(const FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_pinvoke& marshaled, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619& unmarshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 unmarshaledvalue_temp_0;
	memset((&unmarshaledvalue_temp_0), 0, sizeof(unmarshaledvalue_temp_0));
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke_back(marshaled.___value_0, unmarshaledvalue_temp_0);
	unmarshaled.___value_0 = unmarshaledvalue_temp_0;
	int32_t unmarshaledframe_temp_1 = 0;
	unmarshaledframe_temp_1 = marshaled.___frame_1;
	unmarshaled.___frame_1 = unmarshaledframe_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshal_pinvoke_cleanup(FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_pinvoke& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_pinvoke_cleanup(marshaled.___value_0);
}


// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshal_com(const FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619& unmarshaled, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_com& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com(unmarshaled.___value_0, marshaled.___value_0);
	marshaled.___frame_1 = unmarshaled.___frame_1;
}
IL2CPP_EXTERN_C void FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshal_com_back(const FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_com& marshaled, FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619& unmarshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 unmarshaledvalue_temp_0;
	memset((&unmarshaledvalue_temp_0), 0, sizeof(unmarshaledvalue_temp_0));
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com_back(marshaled.___value_0, unmarshaledvalue_temp_0);
	unmarshaled.___value_0 = unmarshaledvalue_temp_0;
	int32_t unmarshaledframe_temp_1 = 0;
	unmarshaledframe_temp_1 = marshaled.___frame_1;
	unmarshaled.___frame_1 = unmarshaledframe_temp_1;
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/FrameSample
IL2CPP_EXTERN_C void FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshal_com_cleanup(FrameSample_t30CAC3705900268BA19C495E2D66E8FD3A3A0619_marshaled_com& marshaled)
{
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshal_com_cleanup(marshaled.___value_0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif






// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshal_pinvoke(const Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95& unmarshaled, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
IL2CPP_EXTERN_C void Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshal_pinvoke_back(const Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_pinvoke& marshaled, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshal_pinvoke_cleanup(Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshal_com(const Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95& unmarshaled, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
IL2CPP_EXTERN_C void Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshal_com_back(const Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_com& marshaled, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___name_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95____name_0_FieldInfo_var, Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___name_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.InputSystem.Samples.VisualizationHelpers/TimelineVisualizer/Timeline
IL2CPP_EXTERN_C void Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshal_com_cleanup(Timeline_t7D7D412CBE2B4B1F36D6629454A53A91DE10BE95_marshaled_com& marshaled)
{
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputSettings_get_updateMode_mD37EABFC0678912846EABBC3CF31AC82E4ACE79E_inline (InputSettings_tBA8835B505722A59702A08BCBA46ECF0B0274EEF* __this, const RuntimeMethod* method) 
{
	{
		// get => m_UpdateMode;
		int32_t L_0 = __this->___m_UpdateMode_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_name_m1F0AADC84A46CBF2EEE3AEACB760189F68D50938_inline (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) 
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->___m_Name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputActionMap_get_name_mCB679DD2375CBD4A3F7A3419CEDF8AE928CDEBC8_inline (InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09* __this, const RuntimeMethod* method) 
{
	{
		// public string name => m_Name;
		String_t* L_0 = __this->___m_Name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputAction_get_type_m38C877B5AF9B9384F0380838E41B7DD8EC0C5373_inline (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) 
{
	{
		// public InputActionType type => m_Type;
		int32_t L_0 = __this->___m_Type_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputAction_get_expectedControlType_mE3E982BF4730F61BBA9DFF2AB63983F9BCEAD6DA_inline (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ExpectedControlType;
		String_t* L_0 = __this->___m_ExpectedControlType_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLegend_mA12722950A12F913A4E9F4ED357EB6F5856914BD_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CshowLegendU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_timeUnit_m0895304C2ECCBBF9C5D3130694D915D5AA338FCD_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = ___0_value;
		__this->___U3CtimeUnitU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_historyDepth_mA08F58C027B5BB38316ED8F9C2D3785FF376AF3A_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = ___0_value;
		__this->___U3ChistoryDepthU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_showLimits_mAE7CAB87EC3DF3672633A0204160B059F1FB8B73_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CshowLimitsU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimelineVisualizer_set_valueUnit_m8B51379D5B832400F03CBE3680B96248F65AF1F6_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* ___0_value, const RuntimeMethod* method) 
{
	{
		// public GUIContent valueUnit { get; set; }
		GUIContent_t15E48D4BEB1E6B6044F7DEB5E350800F511C2ED2* L_0 = ___0_value;
		__this->___U3CvalueUnitU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvalueUnitU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* InputControl_get_device_mAB3E013F566CF3407B8C36BC781EBD751DFAB324_inline (InputControl_t74F06B623518F992BF8E38656A5E0857169E3E2E* __this, const RuntimeMethod* method) 
{
	{
		// public InputDevice device => m_Device;
		InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* L_0 = __this->___m_Device_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t InputState_get_updateCount_m5FF1B8BE8670AF38C6502FBCA3B4E67F8283E03E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static uint updateCount => InputUpdate.s_UpdateStepCount;
		uint32_t L_0 = ((InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_StaticFields*)il2cpp_codegen_static_fields_for(InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_il2cpp_TypeInfo_var))->___s_UpdateStepCount_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputState_get_currentUpdateType_m77DBCEC0F6E435740C44467281149B2F74025C10_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputUpdateType currentUpdateType => InputUpdate.s_LatestUpdateType;
		int32_t L_0 = ((InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_StaticFields*)il2cpp_codegen_static_fields_for(InputUpdate_t3D4F0AD6CD83C86A73B8165929FF0CB151A07CCD_il2cpp_TypeInfo_var))->___s_LatestUpdateType_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 TimelineVisualizer_get_limitsY_m140C2689E1063B33258085D1287EA4C0EC530532_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_LimitsY;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_LimitsY_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Angle_mB16906B482814C140FE5BA9D041D2DC11E42A68D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_from, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_to;
		float L_7;
		L_7 = Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* Gamepad_get_current_mAC9BE72710676EA54E760FFBA15404A81D7DEEB6_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Gamepad current { get; private set; }
		Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C* L_0 = ((Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_StaticFields*)il2cpp_codegen_static_fields_for(Gamepad_tA8C0E40B4F0828615C6C6E1A69AAEBE5AA643A4C_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_59;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* Mouse_get_current_m410C1F9ABC5AA77353574E8815F7E63289707986_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Mouse current { get; private set; }
		Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F* L_0 = ((Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_StaticFields*)il2cpp_codegen_static_fields_for(Mouse_t9A9CC4636FA9CDBAD7FB7A02DB0D6395EDCC338F_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_58;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF* Pen_get_current_m00F91ABDEAFBE112707EAE720B1481DE5AECC795_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public new static Pen current { get; internal set; }
		Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF* L_0 = ((Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_StaticFields*)il2cpp_codegen_static_fields_for(Pen_tBDA63CF60697FAF5D75A8A19E939BAC1BE434AFF_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_60;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* Pointer_get_current_m207443803344C305DEAAEBA56C445980D6C22CB3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Pointer current { get; internal set; }
		Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A* L_0 = ((Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_StaticFields*)il2cpp_codegen_static_fields_for(Pointer_t800EF2832B62E889AC9C182E3B18098AF220E32A_il2cpp_TypeInfo_var))->___U3CcurrentU3Ek__BackingField_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputDevice_get_deviceId_mC65E69E6117B78DB2F4963F5CF9BF031488AD588_inline (InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* __this, const RuntimeMethod* method) 
{
	{
		// public int deviceId => m_DeviceId;
		int32_t L_0 = __this->___m_DeviceId_28;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_SignedAngle_mAE9940DA6BC6B2182BA95C299B2EC19967B7D438_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_from;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_to;
		float L_2;
		L_2 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_0, L_1, NULL);
		V_0 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_from;
		float L_4 = L_3.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_to;
		float L_6 = L_5.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___0_from;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___1_to;
		float L_10 = L_9.___x_0;
		float L_11;
		L_11 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, L_6)), ((float)il2cpp_codegen_multiply(L_8, L_10)))), NULL);
		V_1 = L_11;
		float L_12 = V_0;
		float L_13 = V_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_12, L_13));
		goto IL_0030;
	}

IL_0030:
	{
		float L_14 = V_2;
		return L_14;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mBEA93B5A0E954FEFB863DC61CB209119980EC713_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m6F2E069A50E787D131261E5CB25FC9E03F95B5E1_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___0_f, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_f;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_timeUnit_m235937370178EAC58C04AC92912D3974C9B9BF81_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public TimeUnit timeUnit { get; set; } = TimeUnit.Seconds;
		int32_t L_0 = __this->___U3CtimeUnitU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLegend_m8E15E3C1984B139C81D1EEEC1CDD3E0BBCCD86C3_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public bool showLegend { get; set; }
		bool L_0 = __this->___U3CshowLegendU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TimelineVisualizer_get_showLimits_mD421A4478284E34B8CA3D2DC71E5F2A5B2AC82D4_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public bool showLimits { get; set; }
		bool L_0 = __this->___U3CshowLimitsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TimelineVisualizer_get_historyDepth_mAE440241BCB9D518CD34C46DC274F8B3529D24B2_inline (TimelineVisualizer_t8BA2E9B5C8046B7F1C2E96D248E2A855FC90A5FE* __this, const RuntimeMethod* method) 
{
	{
		// public int historyDepth { get; set; } = 100;
		int32_t L_0 = __this->___U3ChistoryDepthU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputControlList_1_get_Count_m663DD04B3605E201E0BD4AC5D7CD4E92A81A4E53_gshared_inline (InputControlList_1_t48EC0F64E524A57EFE5948AFCA4A576846FC1C31* __this, const RuntimeMethod* method) 
{
	{
		// public int Count => m_Count;
		int32_t L_0 = __this->___m_Count_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_mBB86BB940AA0A32FA7D3C02AC42E5BC7095A5D52_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_from;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_to;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
