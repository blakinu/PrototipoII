#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// PlatformTP[]
struct PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Action
struct Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C;
// ActionDoor
struct ActionDoor_t152E37B0EC3D0FC06D1819FAEF111C09A80E872D;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Bobo
struct Bobo_tB3DA715B47551B4F11DAC109B212ECD747413652;
// CamMovement
struct CamMovement_t4496BB5A0B890E7A2C4CFDA3ABB77867154D51D4;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024;
// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Fire
struct Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GraphicsAPITextController
struct GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// InfoFunctions
struct InfoFunctions_t85FDBA074DA1A08329CF45F0F03B7B62CA92253A;
// LightControl
struct LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72;
// LookAt
struct LookAt_tC0B8B785B13A8C8C4AA023941306CC6F32CA294B;
// LookAtPlayer
struct LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MotionSensor
struct MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E;
// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC;
// PlatformTP
struct PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71;
// PlayerTP
struct PlayerTP_t74B789D9941E80865AE8C783BE4404448107DC5D;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Water
struct Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// Action/ActionEvent
struct ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// LightControl/<TurnOffLight>d__7
struct U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5;
// MotionSensor/MotionDetectedEvent
struct MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909;
// PlatformTP/PlatformTPing
struct PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6;

IL2CPP_EXTERN_C RuntimeClass* ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral42068B0B535BEE0AD0CBD0E4D92D9B191EDBB05B;
IL2CPP_EXTERN_C String_t* _stringLiteral4470FF98FCBA5A4CEBD3954D8FC9E6F83021ECA4;
IL2CPP_EXTERN_C String_t* _stringLiteral491808D7EEB006360E8FF7C51AA2757B43D35E12;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A78EC98C79B757DD1F93DECCC9BCD200C9C0;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral69F2576E60FA01E87A797FA04C775BA60CBA17BE;
IL2CPP_EXTERN_C String_t* _stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral7B485208A83928ABEF8C8D9FC3FC518BA9B5AA50;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC0169D2757CDFF78A24B91F1AE4951AC4C5E35;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9A4D6D022C2660AACEDD40508FA69DB98C9A34A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44;
IL2CPP_EXTERN_C String_t* _stringLiteralD84C3E7354CDA203313388822BE34A4033AED5FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE1EA9908B2ED4C2AD30EC59F79C19087E33FEFF1;
IL2CPP_EXTERN_C String_t* _stringLiteralEEC26AA7AB79F89DF256705A82B6D2E0838FC48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralF969FF0CF043C78EC1ABB24B7FB4DC5B90B3DFB2;
IL2CPP_EXTERN_C String_t* _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0;
IL2CPP_EXTERN_C const RuntimeMethod* Bobo_PlaySound_mF1116DC472746866AD9A58CAD55AD674F6A6EB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Fire_TurnOnFire_m0593FCD5B425AD5CA460DBEE78301E3AA4D91693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LightControl_TurnOnLight_m4B0B88479B4259C5BD14C3C541A502F4FB149C6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayerTP_TPto_mD932CC081B3397D6DC24F55A3907AA19A9A476AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTurnOffLightU3Ed__7_System_Collections_IEnumerator_Reset_m1F13A09CB30C4103D6328DA0188D997F2B57F509_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Water_TurnOnWater_mE4B1D9501F8367C4E201738214DA7CB0E3550E89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LightControl/<TurnOffLight>d__7
struct U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5  : public RuntimeObject
{
	// System.Int32 LightControl/<TurnOffLight>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LightControl/<TurnOffLight>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LightControl LightControl/<TurnOffLight>d__7::<>4__this
	LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* ___U3CU3E4__this_2;
};

// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6  : public RuntimeObject
{
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// Action/ActionEvent
struct ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401  : public MulticastDelegate_t
{
};

// MotionSensor/MotionDetectedEvent
struct MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909  : public MulticastDelegate_t
{
};

// PlatformTP/PlatformTPing
struct PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Action
struct Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Action::action
	String_t* ___action_5;
};

struct Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_StaticFields
{
	// Action/ActionEvent Action::OnAction
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* ___OnAction_4;
};

// ActionDoor
struct ActionDoor_t152E37B0EC3D0FC06D1819FAEF111C09A80E872D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator ActionDoor::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Bobo
struct Bobo_tB3DA715B47551B4F11DAC109B212ECD747413652  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource Bobo::boboSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___boboSound_4;
};

// CamMovement
struct CamMovement_t4496BB5A0B890E7A2C4CFDA3ABB77867154D51D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// CameraPointer
struct CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CameraPointer::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_5;
};

// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Fire
struct Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Fire::fire
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fire_4;
};

// GraphicsAPITextController
struct GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// InfoFunctions
struct InfoFunctions_t85FDBA074DA1A08329CF45F0F03B7B62CA92253A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LightControl
struct LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.IEnumerator LightControl::turnOffCoroutine
	RuntimeObject* ___turnOffCoroutine_4;
	// UnityEngine.Animator LightControl::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// System.Single LightControl::turnOffCooldown
	float ___turnOffCooldown_6;
	// System.String LightControl::roomName
	String_t* ___roomName_7;
};

// LookAt
struct LookAt_tC0B8B785B13A8C8C4AA023941306CC6F32CA294B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LookAt::_gazedAtObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gazedAtObject_5;
};

// LookAtPlayer
struct LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject LookAtPlayer::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_4;
};

// MotionSensor
struct MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MotionSensor::roomName
	String_t* ___roomName_5;
};

struct MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_StaticFields
{
	// MotionSensor/MotionDetectedEvent MotionSensor::OnMotionDetected
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* ___OnMotionDetected_4;
};

// Movement
struct Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CharacterController Movement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_4;
	// UnityEngine.Vector3 Movement::movement
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___movement_5;
	// UnityEngine.Transform Movement::_newT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____newT_6;
	// System.Single Movement::velocidad
	float ___velocidad_7;
	// UnityEngine.AudioSource Movement::walkAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___walkAudio_8;
};

// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_11;
};

// PlatformTP
struct PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlatformTP::PlatformToTP
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PlatformToTP_4;
	// PlatformTP/PlatformTPing PlatformTP::OnPlayerPress
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* ___OnPlayerPress_5;
};

struct PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields
{
	// System.Boolean PlatformTP::key
	bool ___key_6;
	// System.Boolean PlatformTP::inside
	bool ___inside_7;
};

// PlayerTP
struct PlayerTP_t74B789D9941E80865AE8C783BE4404448107DC5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// PlatformTP[] PlayerTP::platforms
	PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1* ___platforms_4;
	// UnityEngine.Animator PlayerTP::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_5;
	// UnityEngine.CharacterController PlayerTP::characterController
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___characterController_6;
	// UnityEngine.GameObject PlayerTP::platformToTP
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platformToTP_7;
};

// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
};

// Water
struct Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Water::water
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___water_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// PlatformTP[]
struct PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1  : public RuntimeArray
{
	ALIGN_FIELD (8) PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* m_Items[1];

	inline PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7 (float ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void Action/ActionEvent::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_inline (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Action/ActionEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEvent__ctor_mA8F1CA08FFE0DB3BBC0677137B21BA0E7DD20EFC (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Action::add_OnAction(Action/ActionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_add_OnAction_m431308C0BA102AC3A9778202E00AD6B93981BF12 (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void MotionSensor/MotionDetectedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionDetectedEvent__ctor_mBAE6EC800846BDE4A24186321BC75FC81118D41C (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void MotionSensor::add_OnMotionDetected(MotionSensor/MotionDetectedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor_add_OnMotionDetected_mED0D2483782E506B5934AC6579CC212591F6C73E (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LightControl::TurnOffLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LightControl_TurnOffLight_mA5BF7DCAB3A2372D9DF66A0911C923161C2E5B3E (LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void LightControl/<TurnOffLight>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnOffLightU3Ed__7__ctor_m42462B212297B2EBE57FB0D4951E496C61C1C10F (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SendMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void LookAtPlayer::rotateToPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_rotateToPlayer_m23D3870074A17036F2E0301FFF39EFA5D7540983 (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, const RuntimeMethod* method) ;
// System.Void MotionSensor/MotionDetectedEvent::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_inline (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Movement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Move_m67408F19FB9F9E0D97D765ACE89D531CC69718DE (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___motion0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void PlatformTP/PlatformTPing::Invoke(UnityEngine.GameObject)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_inline (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method) ;
// System.Void PlatformTP/PlatformTPing::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTPing__ctor_m918FAD855415A1505FF3513EB1BEE57BB340ACA2 (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void PlatformTP::add_OnPlayerPress(PlatformTP/PlatformTPing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP_add_OnPlayerPress_m511EE0D1AE23182D32603A0C4C36A32A6E61B874 (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void CameraPointer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer_Update_mF19D284A593E4627CD4F22A58C11FB87B6627FF4 (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), (10.0f), NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____gazedAtObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		__this->____gazedAtObject_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)L_10);
		return;
	}

IL_0050:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void CameraPointer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraPointer__ctor_m5C4B443EB7C8A518306BF27BD947D938FDF5162D (CameraPointer_t9BABD11B0AABF9D79F1E27604DF9018F1386C024* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m35E3138C09D62411C4C8503DD4D47DA2AF9BF6E2 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m4D4D770B4F4BA807AB64DB40B6730226BB821883 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_000c:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0018:
	{
		// if (Api.IsTriggerHeldPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F(NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Api.Recenter();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0(NULL);
	}

IL_0024:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0030:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m4C459294D28BDCFC64FECC657FB860844F52D9F7 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void GraphicsAPITextController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsAPITextController_Start_mCD9DF9F31DF9E93A29126C6CD0B979F7F01F72C4 (GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C48A78EC98C79B757DD1F93DECCC9BCD200C9C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC0169D2757CDFF78A24B91F1AE4951AC4C5E35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD84C3E7354CDA203313388822BE34A4033AED5FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF969FF0CF043C78EC1ABB24B7FB4DC5B90B3DFB2);
		s_Il2CppMethodInitialized = true;
	}
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// TextMesh tm = gameObject.GetComponent(typeof(TextMesh)) as TextMesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_2, NULL);
		V_0 = ((TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8*)IsInstSealed((RuntimeObject*)L_3, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_il2cpp_TypeInfo_var));
		// switch (SystemInfo.graphicsDeviceType)
		int32_t L_4;
		L_4 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)8)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)11))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)21))))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0055;
	}

IL_0031:
	{
		// tm.text = "OpenGL ES 2";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_8 = V_0;
		NullCheck(L_8);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_8, _stringLiteralF969FF0CF043C78EC1ABB24B7FB4DC5B90B3DFB2, NULL);
		// break;
		return;
	}

IL_003d:
	{
		// tm.text = "OpenGL ES 3";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_9 = V_0;
		NullCheck(L_9);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_9, _stringLiteralD84C3E7354CDA203313388822BE34A4033AED5FA, NULL);
		// break;
		return;
	}

IL_0049:
	{
		// tm.text = "Vulkan";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_10 = V_0;
		NullCheck(L_10);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_10, _stringLiteral4C48A78EC98C79B757DD1F93DECCC9BCD200C9C0, NULL);
		// break;
		return;
	}

IL_0055:
	{
		// tm.text = "Unrecognized Graphics API";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_11 = V_0;
		NullCheck(L_11);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_11, _stringLiteral8FC0169D2757CDFF78A24B91F1AE4951AC4C5E35, NULL);
		// }
		return;
	}
}
// System.Void GraphicsAPITextController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsAPITextController__ctor_m29A2AD5AE282F114E816F84A166F5BA39BEB1685 (GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_m50CBBCE72AB6C2A5C8BC1977D520CF3856A91E89 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_11 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_mA008C8DFDEF1B6A05926338921FE1FD30BCEA9BC (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
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
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_m10BF77FE8B825D9640800D5DF7EF791A391FA49B (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->____mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_5), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_m43F984D5BF13F2C545B508D93645C1C3AC9262D5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397(__this, NULL);
	}

IL_0015:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0021:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		return;
	}

IL_0027:
	{
		// if (_isScreenTouched)
		bool L_3;
		L_3 = VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5(__this, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB(__this, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		// StopXR();
		VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_0 = (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6*)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, NULL);
		// _mainCamera.ResetAspect();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____mainCamera_5;
		NullCheck(L_4);
		Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB(L_4, NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____mainCamera_5;
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, (60.0f), NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_m94505259847FB7C54346D7CF02AD85793393D141 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3DC1735AA5EC0D61A72803BB3B33B9499A373336 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m9A6340456306ACFADD0D458946C82448A862E68B (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
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
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Initializing XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6;
		L_6 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_6);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7;
		L_7 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_6, NULL);
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
		L_8 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, NULL);
		goto IL_0096;
	}

IL_0069:
	{
		// Debug.Log("XR initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_10;
		L_10 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_10);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_11;
		L_11 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_10, NULL);
		NullCheck(L_11);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_11, NULL);
		// Debug.Log("XR started.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, NULL);
	}

IL_0096:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B4CE8CBE980FD132B19F40FF2172502B1D0566 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mD84D9ACDB0A04C619509BA51590975DB84C30B0F (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Action::add_OnAction(Action/ActionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_add_OnAction_m431308C0BA102AC3A9778202E00AD6B93981BF12 (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* V_0 = NULL;
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* V_1 = NULL;
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* V_2 = NULL;
	{
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_0 = ((Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_StaticFields*)il2cpp_codegen_static_fields_for(Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var))->___OnAction_4;
		V_0 = L_0;
	}

IL_0006:
	{
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_1 = V_0;
		V_1 = L_1;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_2 = V_1;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)CastclassSealed((RuntimeObject*)L_4, ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var));
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_5 = V_2;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_6 = V_1;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_7;
		L_7 = InterlockedCompareExchangeImpl<ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*>((&((Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_StaticFields*)il2cpp_codegen_static_fields_for(Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var))->___OnAction_4), L_5, L_6);
		V_0 = L_7;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_8 = V_0;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_9 = V_1;
		if ((!(((RuntimeObject*)(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)L_8) == ((RuntimeObject*)(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Action::remove_OnAction(Action/ActionEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_remove_OnAction_mF90D5560198DF01AD0FADA65648E88A2CD5C60DE (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* V_0 = NULL;
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* V_1 = NULL;
	ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* V_2 = NULL;
	{
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_0 = ((Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_StaticFields*)il2cpp_codegen_static_fields_for(Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var))->___OnAction_4;
		V_0 = L_0;
	}

IL_0006:
	{
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_1 = V_0;
		V_1 = L_1;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_2 = V_1;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)CastclassSealed((RuntimeObject*)L_4, ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var));
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_5 = V_2;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_6 = V_1;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_7;
		L_7 = InterlockedCompareExchangeImpl<ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*>((&((Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_StaticFields*)il2cpp_codegen_static_fields_for(Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var))->___OnAction_4), L_5, L_6);
		V_0 = L_7;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_8 = V_0;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_9 = V_1;
		if ((!(((RuntimeObject*)(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)L_8) == ((RuntimeObject*)(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Action::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Start_m6E5F818F5CEE6672A9887063E97A599F726939A3 (Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Action::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Update_mEE475281BD71927DE8CAC47A7BA296C6EF16A06C (Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Action::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_OnTriggerStay_m945850CE78568BF2E18B42AC7013587CAB71660B (Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetAxisRaw("Action") == 1) OnAction(action);
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD, NULL);
		if ((!(((float)L_0) == ((float)(1.0f)))))
		{
			goto IL_0021;
		}
	}
	{
		// if (Input.GetAxisRaw("Action") == 1) OnAction(action);
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_1 = ((Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_StaticFields*)il2cpp_codegen_static_fields_for(Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C_il2cpp_TypeInfo_var))->___OnAction_4;
		String_t* L_2 = __this->___action_5;
		NullCheck(L_1);
		ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_inline(L_1, L_2, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Action::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mF819FE6B2170BC0B3A7139684E64265324905F98 (Action_t5CC8A74CB9E4C482C0EAE1BA4C72F17B43EB992C* __this, const RuntimeMethod* method) 
{
	{
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
void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_Multicast(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* currentDelegate = reinterpret_cast<ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_OpenInst(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method)
{
	NullCheck(___action0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, method);
}
void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_OpenStatic(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___action0, method);
}
void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_OpenStaticInvoker(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___action0);
}
void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_ClosedStaticInvoker(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___action0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401 (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___action0' to native representation
	char* ____action0_marshaled = NULL;
	____action0_marshaled = il2cpp_codegen_marshal_string(___action0);

	// Native function invocation
	il2cppPInvokeFunc(____action0_marshaled);

	// Marshaling cleanup of parameter '___action0' native representation
	il2cpp_codegen_marshal_free(____action0_marshaled);
	____action0_marshaled = NULL;

}
// System.Void Action/ActionEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEvent__ctor_mA8F1CA08FFE0DB3BBC0677137B21BA0E7DD20EFC (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_Multicast;
}
// System.Void Action/ActionEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723 (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Action/ActionEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionEvent_BeginInvoke_m4735987D473E65B03B699E71C45F5D28A882B16A (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___action0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Action/ActionEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionEvent_EndInvoke_mCE4561B27075CC655FAAFC11298EEC80648AB499 (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ActionDoor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDoor_Start_m9BC85147F801C9ED9F4EA39D3540434133ADCCAC (ActionDoor_t152E37B0EC3D0FC06D1819FAEF111C09A80E872D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ActionDoor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDoor_Update_mE5B23F34C0E4F39D52C8D8C961E7E72725ECCA6F (ActionDoor_t152E37B0EC3D0FC06D1819FAEF111C09A80E872D* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ActionDoor::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDoor_OnTriggerStay_mC1E93E718D17783AF101A7FB8B188A102DEE0856 (ActionDoor_t152E37B0EC3D0FC06D1819FAEF111C09A80E872D* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player" && Input.GetAxisRaw("Action") == 1 && !animator.IsInTransition(0))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		float L_3;
		L_3 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD, NULL);
		if ((!(((float)L_3) == ((float)(1.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_4;
		NullCheck(L_4);
		bool L_5;
		L_5 = Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830(L_4, 0, NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		// animator.SetTrigger("action");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_4;
		NullCheck(L_6);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_6, _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ActionDoor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDoor__ctor_m4C25BDAE44D11937173D4FB7A76E94E5523A92BF (ActionDoor_t152E37B0EC3D0FC06D1819FAEF111C09A80E872D* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Bobo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bobo_Start_m30BAFB3FF34B58883715FF71BD08C9FA367372D0 (Bobo_tB3DA715B47551B4F11DAC109B212ECD747413652* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bobo_PlaySound_mF1116DC472746866AD9A58CAD55AD674F6A6EB87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action.OnAction += PlaySound;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_0 = (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)il2cpp_codegen_object_new(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ActionEvent__ctor_mA8F1CA08FFE0DB3BBC0677137B21BA0E7DD20EFC(L_0, __this, (intptr_t)((void*)Bobo_PlaySound_mF1116DC472746866AD9A58CAD55AD674F6A6EB87_RuntimeMethod_var), NULL);
		Action_add_OnAction_m431308C0BA102AC3A9778202E00AD6B93981BF12(L_0, NULL);
		// }
		return;
	}
}
// System.Void Bobo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bobo_Update_m1D411F978EC5F520581710EB4A181498DB27F615 (Bobo_tB3DA715B47551B4F11DAC109B212ECD747413652* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Bobo::PlaySound(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bobo_PlaySound_mF1116DC472746866AD9A58CAD55AD674F6A6EB87 (Bobo_tB3DA715B47551B4F11DAC109B212ECD747413652* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4470FF98FCBA5A4CEBD3954D8FC9E6F83021ECA4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (action != "bobo" || boboSound.isPlaying) return;
		String_t* L_0 = ___action0;
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteral4470FF98FCBA5A4CEBD3954D8FC9E6F83021ECA4, NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = __this->___boboSound_4;
		NullCheck(L_2);
		bool L_3;
		L_3 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_2, NULL);
		if (!L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// if (action != "bobo" || boboSound.isPlaying) return;
		return;
	}

IL_001b:
	{
		// boboSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___boboSound_4;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// }
		return;
	}
}
// System.Void Bobo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bobo__ctor_mB1CC3BF16F06AE90995B876B148ACC9EE448FCAA (Bobo_tB3DA715B47551B4F11DAC109B212ECD747413652* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void CamMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamMovement_Update_m334037496831189687C1059EB90BAD9B4E82DE74 (CamMovement_t4496BB5A0B890E7A2C4CFDA3ABB77867154D51D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float YInput1 = Input.GetAxis("Horizontal2");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral6B770C7673EED9A98AD0E462CCD688F535ACAE7B, NULL);
		V_0 = L_0;
		// float YInput2 = Input.GetAxis("Vertical2");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral1841719E82DAE096F9165180E2824E38862F1DA0, NULL);
		V_1 = L_1;
		// transform.Rotate(Vector3.up * YInput1, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_2, L_5, 0, NULL);
		// transform.Rotate(Vector3.right * YInput2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		NullCheck(L_6);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_6, L_9, NULL);
		// }
		return;
	}
}
// System.Void CamMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CamMovement__ctor_m2F00B5A27BC5127F328169B856570DC04C7644E1 (CamMovement_t4496BB5A0B890E7A2C4CFDA3ABB77867154D51D4* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Fire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fire_Start_m8DF0994165E87EB26512FF9C9BEAE3AAA9571DDB (Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Fire_TurnOnFire_m0593FCD5B425AD5CA460DBEE78301E3AA4D91693_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action.OnAction += TurnOnFire;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_0 = (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)il2cpp_codegen_object_new(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ActionEvent__ctor_mA8F1CA08FFE0DB3BBC0677137B21BA0E7DD20EFC(L_0, __this, (intptr_t)((void*)Fire_TurnOnFire_m0593FCD5B425AD5CA460DBEE78301E3AA4D91693_RuntimeMethod_var), NULL);
		Action_add_OnAction_m431308C0BA102AC3A9778202E00AD6B93981BF12(L_0, NULL);
		// }
		return;
	}
}
// System.Void Fire::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fire_Update_m84BC15C5860DAA77517245BADEDA44445A30CBA8 (Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Fire::TurnOnFire(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fire_TurnOnFire_m0593FCD5B425AD5CA460DBEE78301E3AA4D91693 (Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral491808D7EEB006360E8FF7C51AA2757B43D35E12);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (action != "fire") return;
		String_t* L_0 = ___action0;
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteral491808D7EEB006360E8FF7C51AA2757B43D35E12, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (action != "fire") return;
		return;
	}

IL_000e:
	{
		// fire.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___fire_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Fire::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fire_OnTriggerExit_m8CFD6E57BA437D5771FF5DAB4EB574697171B7CD (Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag != "Player") return;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (other.tag != "Player") return;
		return;
	}

IL_0013:
	{
		// fire.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___fire_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Fire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fire__ctor_m6B849C39168ADEC0E1A93F416751A63CBC6EE287 (Fire_tFDE4C5C28A183942ABC5AF2F45F6E9611B779656* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void InfoFunctions::Appear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoFunctions_Appear_m4DC3AEFD6FFFE7FACAB9E6A2530E20FB0965008E (InfoFunctions_t85FDBA074DA1A08329CF45F0F03B7B62CA92253A* __this, const RuntimeMethod* method) 
{
	{
		// Transform infoBox = transform.GetChild(1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 1, NULL);
		// infoBox.gameObject.SetActive(true);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void InfoFunctions::Disappear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoFunctions_Disappear_m0E19659E19A54B613215F6F3A85CDA84F62C1031 (InfoFunctions_t85FDBA074DA1A08329CF45F0F03B7B62CA92253A* __this, const RuntimeMethod* method) 
{
	{
		// Transform infoBox = transform.GetChild(1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 1, NULL);
		// infoBox.gameObject.SetActive(false);
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void InfoFunctions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoFunctions__ctor_m893390E30DB3BF5B1D333DBEFCCA5E6425BDA081 (InfoFunctions_t85FDBA074DA1A08329CF45F0F03B7B62CA92253A* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LightControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_Start_m272D67CBA2E204DB8A204FB35ADE0CAED3E8CA24 (LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LightControl_TurnOnLight_m4B0B88479B4259C5BD14C3C541A502F4FB149C6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MotionSensor.OnMotionDetected += TurnOnLight;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_0 = (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)il2cpp_codegen_object_new(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MotionDetectedEvent__ctor_mBAE6EC800846BDE4A24186321BC75FC81118D41C(L_0, __this, (intptr_t)((void*)LightControl_TurnOnLight_m4B0B88479B4259C5BD14C3C541A502F4FB149C6C_RuntimeMethod_var), NULL);
		MotionSensor_add_OnMotionDetected_mED0D2483782E506B5934AC6579CC212591F6C73E(L_0, NULL);
		// turnOffCoroutine = TurnOffLight();
		RuntimeObject* L_1;
		L_1 = LightControl_TurnOffLight_mA5BF7DCAB3A2372D9DF66A0911C923161C2E5B3E(__this, NULL);
		__this->___turnOffCoroutine_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turnOffCoroutine_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void LightControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_Update_m09B5907676CE284BF415EA788EB0D713C9A81C0D (LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LightControl::TurnOnLight(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl_TurnOnLight_m4B0B88479B4259C5BD14C3C541A502F4FB149C6C (LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* __this, String_t* ___lightRoom0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (roomName != lightRoom) return;
		String_t* L_0 = __this->___roomName_7;
		String_t* L_1 = ___lightRoom0;
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (roomName != lightRoom) return;
		return;
	}

IL_000f:
	{
		// StopCoroutine(turnOffCoroutine);
		RuntimeObject* L_3 = __this->___turnOffCoroutine_4;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_3, NULL);
		// animator.SetBool("Turn", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_5;
		NullCheck(L_4);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_4, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, (bool)1, NULL);
		// turnOffCoroutine = TurnOffLight();
		RuntimeObject* L_5;
		L_5 = LightControl_TurnOffLight_mA5BF7DCAB3A2372D9DF66A0911C923161C2E5B3E(__this, NULL);
		__this->___turnOffCoroutine_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___turnOffCoroutine_4), (void*)L_5);
		// StartCoroutine(turnOffCoroutine);
		RuntimeObject* L_6 = __this->___turnOffCoroutine_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LightControl::TurnOffLight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LightControl_TurnOffLight_mA5BF7DCAB3A2372D9DF66A0911C923161C2E5B3E (LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* L_0 = (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5*)il2cpp_codegen_object_new(U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTurnOffLightU3Ed__7__ctor_m42462B212297B2EBE57FB0D4951E496C61C1C10F(L_0, 0, NULL);
		U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LightControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightControl__ctor_m0CD545FC68BEA1B7E19070B094408FEC61487F12 (LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LightControl/<TurnOffLight>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnOffLightU3Ed__7__ctor_m42462B212297B2EBE57FB0D4951E496C61C1C10F (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LightControl/<TurnOffLight>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnOffLightU3Ed__7_System_IDisposable_Dispose_m776BF58D6456DE0542EC097AAB94E67A0D3780EF (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LightControl/<TurnOffLight>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTurnOffLightU3Ed__7_MoveNext_mA8A7B21243FBAB6A8CE2113D22C1B28BFE871125 (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(turnOffCooldown);
		LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___turnOffCooldown_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// animator.SetBool("Turn", false);
		LightControl_tCDC50C594037E30116C45EE6E8257C58E1A26F72* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___animator_5;
		NullCheck(L_8);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_8, _stringLiteral9DF28E2C80756BFACBF3215EA21F094B08573DA8, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LightControl/<TurnOffLight>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTurnOffLightU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1F5144D6223469ECA861C59D2615CB44477F044D (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LightControl/<TurnOffLight>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTurnOffLightU3Ed__7_System_Collections_IEnumerator_Reset_m1F13A09CB30C4103D6328DA0188D997F2B57F509 (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTurnOffLightU3Ed__7_System_Collections_IEnumerator_Reset_m1F13A09CB30C4103D6328DA0188D997F2B57F509_RuntimeMethod_var)));
	}
}
// System.Object LightControl/<TurnOffLight>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTurnOffLightU3Ed__7_System_Collections_IEnumerator_get_Current_m9BB49A46081868CADDACA0EC2DF16000F31E91F5 (U3CTurnOffLightU3Ed__7_t0DC9789AFFE35B9AC0912EED91AA9FFA7A18F1E5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LookAt::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAt_Update_mF319BDE9DC8103E027AF2606527FEBB476176308 (LookAt_tC0B8B785B13A8C8C4AA023941306CC6F32CA294B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A4D6D022C2660AACEDD40508FA69DB98C9A34A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEC26AA7AB79F89DF256705A82B6D2E0838FC48D);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Physics.Raycast(transform.position, transform.forward, out hit, _maxDistance))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_1, L_3, (&V_0), (10.0f), NULL);
		if (!L_4)
		{
			goto IL_00c0;
		}
	}
	{
		// if (_gazedAtObject != hit.transform.gameObject)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->____gazedAtObject_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, L_7, NULL);
		if (!L_8)
		{
			goto IL_00fc;
		}
	}
	{
		// if (hit.transform.gameObject.tag == "INFO")
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_10, NULL);
		bool L_12;
		L_12 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_11, _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44, NULL);
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// hit.transform.gameObject.SendMessage("Appear");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_14);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_14, _stringLiteral9A4D6D022C2660AACEDD40508FA69DB98C9A34A2, NULL);
		goto IL_00ad;
	}

IL_0078:
	{
		// if (_gazedAtObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->____gazedAtObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00ad;
		}
	}
	{
		// if (_gazedAtObject.tag == "INFO")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->____gazedAtObject_5;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44, NULL);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		// _gazedAtObject.SendMessage("Disappear");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->____gazedAtObject_5;
		NullCheck(L_20);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_20, _stringLiteralEEC26AA7AB79F89DF256705A82B6D2E0838FC48D, NULL);
	}

IL_00ad:
	{
		// _gazedAtObject = hit.transform.gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_0), NULL);
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		__this->____gazedAtObject_5 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)L_22);
		return;
	}

IL_00c0:
	{
		// if (_gazedAtObject != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->____gazedAtObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00f5;
		}
	}
	{
		// if (_gazedAtObject.tag == "INFO")
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->____gazedAtObject_5;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_25, NULL);
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteralD6671AB681FCCDE604241BD0A83D624C05B26D44, NULL);
		if (!L_27)
		{
			goto IL_00f5;
		}
	}
	{
		// _gazedAtObject.SendMessage("Disappear");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->____gazedAtObject_5;
		NullCheck(L_28);
		GameObject_SendMessage_m65848D6A8F999FACBC1C21B7303660B7AFF6674E(L_28, _stringLiteralEEC26AA7AB79F89DF256705A82B6D2E0838FC48D, NULL);
	}

IL_00f5:
	{
		// _gazedAtObject = null;
		__this->____gazedAtObject_5 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____gazedAtObject_5), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_00fc:
	{
		// }
		return;
	}
}
// System.Void LookAt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAt__ctor_mC8898B99315BD18DEB0F9291F7E1C070F19CC575 (LookAt_tC0B8B785B13A8C8C4AA023941306CC6F32CA294B* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void LookAtPlayer::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_OnEnable_m0271DFF477F430F8217E314405359E7B4BBC6ABF (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void LookAtPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_Update_m9EE58C1B9B2C9BF276C8C9CAECFDF7DA19C34BF5 (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
		// rotateToPlayer();
		LookAtPlayer_rotateToPlayer_m23D3870074A17036F2E0301FFF39EFA5D7540983(__this, NULL);
		// }
		return;
	}
}
// System.Void LookAtPlayer::rotateToPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer_rotateToPlayer_m23D3870074A17036F2E0301FFF39EFA5D7540983 (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(Camera.main.transform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void LookAtPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAtPlayer__ctor_m5A3A2CAFA412C0A18376DCE5C414F259704D869E (LookAtPlayer_tBA315B22FE90398AE3DBC3CCA96D4F1F73B9C0B3* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void MotionSensor::add_OnMotionDetected(MotionSensor/MotionDetectedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor_add_OnMotionDetected_mED0D2483782E506B5934AC6579CC212591F6C73E (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* V_0 = NULL;
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* V_1 = NULL;
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* V_2 = NULL;
	{
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_0 = ((MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_StaticFields*)il2cpp_codegen_static_fields_for(MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var))->___OnMotionDetected_4;
		V_0 = L_0;
	}

IL_0006:
	{
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_1 = V_0;
		V_1 = L_1;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_2 = V_1;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)CastclassSealed((RuntimeObject*)L_4, MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var));
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_5 = V_2;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_6 = V_1;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_7;
		L_7 = InterlockedCompareExchangeImpl<MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*>((&((MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_StaticFields*)il2cpp_codegen_static_fields_for(MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var))->___OnMotionDetected_4), L_5, L_6);
		V_0 = L_7;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_8 = V_0;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_9 = V_1;
		if ((!(((RuntimeObject*)(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)L_8) == ((RuntimeObject*)(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MotionSensor::remove_OnMotionDetected(MotionSensor/MotionDetectedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor_remove_OnMotionDetected_mA18AD1B592A5666D17B5ACB59984FEA0721AE409 (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* V_0 = NULL;
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* V_1 = NULL;
	MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* V_2 = NULL;
	{
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_0 = ((MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_StaticFields*)il2cpp_codegen_static_fields_for(MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var))->___OnMotionDetected_4;
		V_0 = L_0;
	}

IL_0006:
	{
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_1 = V_0;
		V_1 = L_1;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_2 = V_1;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)CastclassSealed((RuntimeObject*)L_4, MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909_il2cpp_TypeInfo_var));
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_5 = V_2;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_6 = V_1;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_7;
		L_7 = InterlockedCompareExchangeImpl<MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*>((&((MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_StaticFields*)il2cpp_codegen_static_fields_for(MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var))->___OnMotionDetected_4), L_5, L_6);
		V_0 = L_7;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_8 = V_0;
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_9 = V_1;
		if ((!(((RuntimeObject*)(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)L_8) == ((RuntimeObject*)(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void MotionSensor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor_Start_m706496DBA87E786EE530EBECE8D29D92CB3EAFBC (MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MotionSensor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor_Update_m528FC15B64983820528BFBC3D9E08B50CB8EF6BD (MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MotionSensor::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor_OnTriggerStay_m5F6D7ABA6D382F6744C4D2288C9A9E85E23787BD (MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// OnMotionDetected(roomName);
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* L_0 = ((MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_StaticFields*)il2cpp_codegen_static_fields_for(MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E_il2cpp_TypeInfo_var))->___OnMotionDetected_4;
		String_t* L_1 = __this->___roomName_5;
		NullCheck(L_0);
		MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void MotionSensor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionSensor__ctor_mFB95B5A156B94E23FE982E3261A908CDBF561AD6 (MotionSensor_t9B51F8FAFC62FA45D188ECBA68A591555E9D746E* __this, const RuntimeMethod* method) 
{
	{
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
void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_Multicast(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* currentDelegate = reinterpret_cast<MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___roomName0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_OpenInst(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method)
{
	NullCheck(___roomName0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___roomName0, method);
}
void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_OpenStatic(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___roomName0, method);
}
void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_OpenStaticInvoker(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___roomName0);
}
void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_ClosedStaticInvoker(MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___roomName0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909 (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___roomName0' to native representation
	char* ____roomName0_marshaled = NULL;
	____roomName0_marshaled = il2cpp_codegen_marshal_string(___roomName0);

	// Native function invocation
	il2cppPInvokeFunc(____roomName0_marshaled);

	// Marshaling cleanup of parameter '___roomName0' native representation
	il2cpp_codegen_marshal_free(____roomName0_marshaled);
	____roomName0_marshaled = NULL;

}
// System.Void MotionSensor/MotionDetectedEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionDetectedEvent__ctor_mBAE6EC800846BDE4A24186321BC75FC81118D41C (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_Multicast;
}
// System.Void MotionSensor/MotionDetectedEvent::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___roomName0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult MotionSensor/MotionDetectedEvent::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MotionDetectedEvent_BeginInvoke_m373F8A0A5412C445EEFFE224F194B471DB54762D (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___roomName0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void MotionSensor/MotionDetectedEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MotionDetectedEvent_EndInvoke_m5E07DCF4E0C181C5FFCD013709511C4C3BC39E0F (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Movement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Start_m3D09153FD03F06C31BBD151C21BA361EA49FA72B (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___controller_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_4), (void*)L_0);
		// _newT = new GameObject().transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m7D0340DE160786E6EFA8DABD39EC3B694DA30AAD(L_1, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->____newT_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____newT_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void Movement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Update_m4B99F519DF0A29B476F90FE4314A770CD53EC418 (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		Movement_Move_m67408F19FB9F9E0D97D765ACE89D531CC69718DE(__this, NULL);
		// }
		return;
	}
}
// System.Void Movement::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement_Move_m67408F19FB9F9E0D97D765ACE89D531CC69718DE (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// movement = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical")).normalized;
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_2), L_0, (0.0f), L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		__this->___movement_5 = L_3;
		// if (movement.magnitude == 0)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___movement_5);
		float L_5;
		L_5 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_4, NULL);
		if ((!(((float)L_5) == ((float)(0.0f)))))
		{
			goto IL_004a;
		}
	}
	{
		// walkAudio.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___walkAudio_8;
		NullCheck(L_6);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_6, NULL);
		// return;
		return;
	}

IL_004a:
	{
		// if (!walkAudio.isPlaying) walkAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___walkAudio_8;
		NullCheck(L_7);
		bool L_8;
		L_8 = AudioSource_get_isPlaying_mC203303F2F7146B2C056CB47B9391463FDF408FC(L_7, NULL);
		if (L_8)
		{
			goto IL_0062;
		}
	}
	{
		// if (!walkAudio.isPlaying) walkAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = __this->___walkAudio_8;
		NullCheck(L_9);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_9, NULL);
	}

IL_0062:
	{
		// _newT.eulerAngles = new Vector3(0, Camera.main.transform.eulerAngles.y, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->____newT_6;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11;
		L_11 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_12, NULL);
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_15), (0.0f), L_14, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_eulerAngles_m9F0BC484A7915A51FAB87230644229B75BACA004(L_10, L_15, NULL);
		// Vector3 transformedMovement = _newT.transform.TransformDirection(movement * velocidad);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____newT_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___movement_5;
		float L_19 = __this->___velocidad_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_17, L_20, NULL);
		V_0 = L_21;
		// controller.Move((transformedMovement + Physics.gravity) * Time.deltaTime);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_22 = __this->___controller_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Physics_get_gravity_m94393492AE4ED8B38A22ECCDCD2DDDB71BFA010D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_24, NULL);
		float L_26;
		L_26 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		NullCheck(L_22);
		int32_t L_28;
		L_28 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_22, L_27, NULL);
		// }
		return;
	}
}
// System.Void Movement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Movement__ctor_mCB72C1AD57256D73959D74FB86C5D0AA69EAE7ED (Movement_t7ED030E814A2C7E091389CFDABC85C6995DD35E7* __this, const RuntimeMethod* method) 
{
	{
		// public float velocidad = 1.5f;
		__this->___velocidad_7 = (1.5f);
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
// System.Void PlatformTP::add_OnPlayerPress(PlatformTP/PlatformTPing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP_add_OnPlayerPress_m511EE0D1AE23182D32603A0C4C36A32A6E61B874 (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* V_0 = NULL;
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* V_1 = NULL;
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* V_2 = NULL;
	{
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_0 = __this->___OnPlayerPress_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_1 = V_0;
		V_1 = L_1;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_2 = V_1;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)CastclassSealed((RuntimeObject*)L_4, PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var));
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD** L_5 = (&__this->___OnPlayerPress_5);
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_6 = V_2;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_7 = V_1;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_9 = V_0;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)L_9) == ((RuntimeObject*)(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PlatformTP::remove_OnPlayerPress(PlatformTP/PlatformTPing)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP_remove_OnPlayerPress_mBFCA720410A4141BEE32507285A1B278F1538BAC (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* V_0 = NULL;
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* V_1 = NULL;
	PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* V_2 = NULL;
	{
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_0 = __this->___OnPlayerPress_5;
		V_0 = L_0;
	}

IL_0007:
	{
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_1 = V_0;
		V_1 = L_1;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_2 = V_1;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)CastclassSealed((RuntimeObject*)L_4, PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var));
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD** L_5 = (&__this->___OnPlayerPress_5);
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_6 = V_2;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_7 = V_1;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_9 = V_0;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)L_9) == ((RuntimeObject*)(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void PlatformTP::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP_Update_m8E17DE9ADE591B9FD595F2F24301C9B159963FE0 (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Action") && inside)
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralDD86881DBA7E6B755DFE2849A5B0579CC3D828CD, NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		bool L_1 = ((PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields*)il2cpp_codegen_static_fields_for(PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var))->___inside_7;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// key = true;
		((PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields*)il2cpp_codegen_static_fields_for(PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var))->___key_6 = (bool)1;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PlatformTP::OnTriggerStay(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP_OnTriggerStay_m0E43ADA4A9873FE878F42F493C4EE9F80EFB5670 (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69F2576E60FA01E87A797FA04C775BA60CBA17BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// inside = true;
		((PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields*)il2cpp_codegen_static_fields_for(PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var))->___inside_7 = (bool)1;
		// if (key)
		bool L_4 = ((PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields*)il2cpp_codegen_static_fields_for(PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var))->___key_6;
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// Debug.Log("PRESSED");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral69F2576E60FA01E87A797FA04C775BA60CBA17BE, NULL);
		// key = false;
		((PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields*)il2cpp_codegen_static_fields_for(PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var))->___key_6 = (bool)0;
		// OnPlayerPress(PlatformToTP);
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_5 = __this->___OnPlayerPress_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___PlatformToTP_4;
		NullCheck(L_5);
		PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_inline(L_5, L_6, NULL);
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void PlatformTP::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP_OnTriggerExit_m8855E9683F5D7769B742566D247FA242EA50F662 (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// inside = false;
		((PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_StaticFields*)il2cpp_codegen_static_fields_for(PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71_il2cpp_TypeInfo_var))->___inside_7 = (bool)0;
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void PlatformTP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTP__ctor_m38FB113695441E6CA2879F6EF2F14C3719EA63F1 (PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* __this, const RuntimeMethod* method) 
{
	{
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
void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_Multicast(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* currentDelegate = reinterpret_cast<PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___platform0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_OpenInst(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method)
{
	NullCheck(___platform0);
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___platform0, method);
}
void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_OpenStatic(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___platform0, method);
}
void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_OpenStaticInvoker(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, ___platform0);
}
void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_ClosedStaticInvoker(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___platform0);
}
// System.Void PlatformTP/PlatformTPing::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTPing__ctor_m918FAD855415A1505FF3513EB1BEE57BB340ACA2 (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_Multicast;
}
// System.Void PlatformTP/PlatformTPing::Invoke(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8 (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___platform0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult PlatformTP/PlatformTPing::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PlatformTPing_BeginInvoke_mD5205999404295D4E96FA189054FEAEE0A943E08 (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___platform0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void PlatformTP/PlatformTPing::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformTPing_EndInvoke_m0E42A034ED527E6875AA1038F6954C7CECECAD42 (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerTP::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTP_Start_mB949EC1329156ADAF5395229D5B83FB04E30582B (PlayerTP_t74B789D9941E80865AE8C783BE4404448107DC5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerTP_TPto_mD932CC081B3397D6DC24F55A3907AA19A9A476AF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// characterController = transform.GetComponent<CharacterController>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_1;
		L_1 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(L_0, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___characterController_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___characterController_6), (void*)L_1);
		// foreach (PlatformTP plat in platforms)
		PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1* L_2 = __this->___platforms_4;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		// foreach (PlatformTP plat in platforms)
		PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PlatformTP_tEE83DE08FCE8E2CC263100A871337B6B61E3BF71* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// plat.OnPlayerPress += TPto;
		PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* L_7 = (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD*)il2cpp_codegen_object_new(PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		PlatformTPing__ctor_m918FAD855415A1505FF3513EB1BEE57BB340ACA2(L_7, __this, (intptr_t)((void*)PlayerTP_TPto_mD932CC081B3397D6DC24F55A3907AA19A9A476AF_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		PlatformTP_add_OnPlayerPress_m511EE0D1AE23182D32603A0C4C36A32A6E61B874(L_6, L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0034:
	{
		// foreach (PlatformTP plat in platforms)
		int32_t L_9 = V_1;
		PlatformTPU5BU5D_t93B12814F534D8BDCA1792C5E9E03FC1025A67F1* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		// platformToTP = null;
		__this->___platformToTP_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformToTP_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// }
		return;
	}
}
// System.Void PlayerTP::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTP_Update_m84ED69CC7B4EB93063CAF8E6270F54CBCE0848C9 (PlayerTP_t74B789D9941E80865AE8C783BE4404448107DC5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1EA9908B2ED4C2AD30EC59F79C19087E33FEFF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (platformToTP == null || !animator.GetCurrentAnimatorStateInfo(0).IsName("Wait")) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___platformToTP_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_5;
		NullCheck(L_2);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_3;
		L_3 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_2, 0, NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralFB6C1F66CC7E11F32F17E21E52D7FF100BE4B4D0, NULL);
		if (L_4)
		{
			goto IL_002a;
		}
	}

IL_0029:
	{
		// if (platformToTP == null || !animator.GetCurrentAnimatorStateInfo(0).IsName("Wait")) return;
		return;
	}

IL_002a:
	{
		// characterController.enabled = false;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_5 = __this->___characterController_6;
		NullCheck(L_5);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_5, (bool)0, NULL);
		// transform.position = platformToTP.gameObject.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___platformToTP_7;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		NullCheck(L_6);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_6, L_10, NULL);
		// transform.position += Vector3.up * 1.3f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, (1.29999995f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_15, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_16, NULL);
		// characterController.enabled = true;
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_17 = __this->___characterController_6;
		NullCheck(L_17);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_17, (bool)1, NULL);
		// platformToTP = null;
		__this->___platformToTP_7 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformToTP_7), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
		// animator.SetBool("TP", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18 = __this->___animator_5;
		NullCheck(L_18);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_18, _stringLiteralE1EA9908B2ED4C2AD30EC59F79C19087E33FEFF1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PlayerTP::TPto(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTP_TPto_mD932CC081B3397D6DC24F55A3907AA19A9A476AF (PlayerTP_t74B789D9941E80865AE8C783BE4404448107DC5D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B485208A83928ABEF8C8D9FC3FC518BA9B5AA50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1EA9908B2ED4C2AD30EC59F79C19087E33FEFF1);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!animator.GetCurrentAnimatorStateInfo(0).IsName("AfterTP") && !animator.GetCurrentAnimatorStateInfo(0).IsName("Idle")) return;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_5;
		NullCheck(L_0);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral7B485208A83928ABEF8C8D9FC3FC518BA9B5AA50, NULL);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_5;
		NullCheck(L_3);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralCCCDD19BAC8E228E10128C1D017E557BF3B69BEA, NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		// if (!animator.GetCurrentAnimatorStateInfo(0).IsName("AfterTP") && !animator.GetCurrentAnimatorStateInfo(0).IsName("Idle")) return;
		return;
	}

IL_0037:
	{
		// platformToTP = platform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ___platform0;
		__this->___platformToTP_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platformToTP_7), (void*)L_6);
		// animator.SetBool("TP", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_5;
		NullCheck(L_7);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_7, _stringLiteralE1EA9908B2ED4C2AD30EC59F79C19087E33FEFF1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PlayerTP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerTP__ctor_m6B393241EE29D6AD91B3F838003B47A40BE11102 (PlayerTP_t74B789D9941E80865AE8C783BE4404448107DC5D* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Water::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_Start_m1ECC61B13E352F12652ABBC3792D95DDDB540727 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Water_TurnOnWater_mE4B1D9501F8367C4E201738214DA7CB0E3550E89_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Action.OnAction += TurnOnWater;
		ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* L_0 = (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401*)il2cpp_codegen_object_new(ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ActionEvent__ctor_mA8F1CA08FFE0DB3BBC0677137B21BA0E7DD20EFC(L_0, __this, (intptr_t)((void*)Water_TurnOnWater_mE4B1D9501F8367C4E201738214DA7CB0E3550E89_RuntimeMethod_var), NULL);
		Action_add_OnAction_m431308C0BA102AC3A9778202E00AD6B93981BF12(L_0, NULL);
		// }
		return;
	}
}
// System.Void Water::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_Update_mA8EA951D9C32DDAF41746FC99101B485EE092E3F (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Water::TurnOnWater(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_TurnOnWater_mE4B1D9501F8367C4E201738214DA7CB0E3550E89 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42068B0B535BEE0AD0CBD0E4D92D9B191EDBB05B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (action != "water") return;
		String_t* L_0 = ___action0;
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteral42068B0B535BEE0AD0CBD0E4D92D9B191EDBB05B, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (action != "water") return;
		return;
	}

IL_000e:
	{
		// water.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___water_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Water::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water_OnTriggerExit_mD500D4413DD634942C9C3560CF5BDF7D52676C21 (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag != "Player") return;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (other.tag != "Player") return;
		return;
	}

IL_0013:
	{
		// water.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___water_4;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Water::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Water__ctor_m39BD6E49B74929BAB39A81C4A4A7DDFFC5C8146F (Water_tA5654A18C7C4C258C0BB43725C80C8AD5163C433* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->___m_InitializationComplete_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ActionEvent_Invoke_m7010175D16515C761A41CF51C55EB1A055B25723_inline (ActionEvent_tD7716FEEA1B846548E74E4F3055CD361A33C5401* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___action0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MotionDetectedEvent_Invoke_m7D292020C1BD847751435B02EC48B4BA021899AF_inline (MotionDetectedEvent_t41E243022BB57CA3AB46365865B25A88A47F4909* __this, String_t* ___roomName0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___roomName0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformTPing_Invoke_mFC5E47A7197ADD01FB152E71D1AD451EAA0F99F8_inline (PlatformTPing_t4740142037F75D97F3F34E79FDB0C919D0F1B0BD* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platform0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___platform0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
