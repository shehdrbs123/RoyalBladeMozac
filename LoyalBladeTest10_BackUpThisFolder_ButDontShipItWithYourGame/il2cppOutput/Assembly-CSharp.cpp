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

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<StatusComponent>
struct HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Image>
struct IEnumerable_1_t1254BD5B647FD1BC1154161A5A29B7CFD280BF69;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<StatusComponent>
struct IEqualityComparer_1_t658D83EB1F7433463B49061B192FEB5E4D2AF1E8;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<StatusComponent>
struct List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.HashSet`1/Slot<StatusComponent>[]
struct SlotU5BU5D_t2129789900609659A5FD9D31A9F8736046CE4740;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// SkillAction[]
struct SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014;
// SkillData[]
struct SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// StatusComponent[]
struct StatusComponentU5BU5D_t717033D01887F3BAAEC56A1317EDE0C93100615F;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// AttackableManager
struct AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// ButtonAction
struct ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// CoolTimeButton
struct CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamageText
struct DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76;
// DamageTextManager
struct DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EndPanelScript
struct EndPanelScript_tDDD36F88664D36D9298FE19598AA607FD29DD177;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ExtendsButton
struct ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameProfile
struct GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HPHud
struct HPHud_t210313084B092D3D2FE041F34140456D2C5390DB;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007;
// Obstacle
struct Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90;
// ObstcleData
struct ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PausePanelScript
struct PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreText
struct ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// SkillAction
struct SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01;
// SkillActionDamage
struct SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189;
// SkillActionDefense
struct SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0;
// SkillActionJump
struct SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298;
// SkillActionJumpAttack
struct SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017;
// SkillActionNone
struct SkillActionNone_t446B23287A9A456D6CC35476162A064CC2EE666F;
// SkillActionPowerUp
struct SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340;
// SkillContainer
struct SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7;
// SkillData
struct SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderButton
struct SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// BLINK.UI.StatBar
struct StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294;
// StatusComponent
struct StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3;
// StatusData
struct StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// WeaponData
struct WeaponData_t455C1D730F31CB2ED917971BE9353ECBD407D5CD;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// CoolTimeButton/<coolTime>d__7
struct U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905;
// DamageText/<TextOperation>d__4
struct U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42;
// ExtendsButton/ButtonClickedEvent
struct ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87;
// GameProfile/<>c
struct U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ObjectSpawner/<SpawnCoroutine>d__11
struct U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6;
// SkillActionDefense/<Defense>d__7
struct U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30;
// SkillActionJumpAttack/<JumpAttack>d__7
struct U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43;
// SkillActionPowerUp/<_PowerUp>d__2
struct U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// SliderButton/<returnHandleCoroutine>d__4
struct U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD;
// BLINK.UI.StatBar/<Start>d__5
struct U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E;
// StatusComponent/<>c
struct U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0855C11985E2A34A633BEE1027DDDE25FD8E6489;
IL2CPP_EXTERN_C String_t* _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteralA57BCCAF2D8C17B768154651F84AFBC3C06A54E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA5AED1875208F61EA92930E98EC1B0E438D2217C;
IL2CPP_EXTERN_C String_t* _stringLiteralA6190A5AC038D56DD23827AD931A1BAD7C3E5E2E;
IL2CPP_EXTERN_C String_t* _stringLiteralA8EB33DBC114602CBC18225D6225A9F4CEC7E1FB;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDA029A2CCA983D746C4F6368FC19758353458E9D;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900;
IL2CPP_EXTERN_C String_t* _stringLiteralE89DC632A348351745EE0BCBEC9548271B76A699;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_mFA3569A48ADCE6AC293B0EC406B83E03C9EF15F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m755CF1DB6A65043AC21E6F3153B9060B358DCC64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m70E8393C916B6CD0C913C01917E7E70A736708FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m125A406D6909C71F10653E4105EF7469D6A77A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m76AA9BC922EF4D8EC56C0A422436728098EC8EAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HPHud_currentHpMotify_m458322087E609B7481D2BF71102E5218B50B29D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HPHud_maxHPModify_m6368B730EA8C433447DFE23F3F87090D217A7F41_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9723868790B0AA5CD2BD283CA0D070A59FE272FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m574B231ADC445C0FB859F03A17432FF83EF7DC25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_mE3A5724B367CE23C06B6FEFFA70AB17D56A5AEBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m68D4F5AB16A1D4508D09AD884975C999E32620BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mC19C10A9AE29BFEC52EB2E5A7D6CFE09DDF600F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43669CDBCE0645B56B2E7FA053B61D2634128483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m4F711BA804C9D6CEB11A55D688F6AD6C391BA0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD37F5F85E6A3D770BC76A7B15DD892FD20A7F181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA6AF2056F0EE408D464B4A36C167EE6E7F0FF51E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectSpawner_isSpawnOk_mB8CD490D200BAF15C448BB385BA52B9D787D60C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreText_ScoreUpdate_mA57D9D4284D421898F2B65E420FB30CFAC49507D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDefenseU3Ed__7_System_Collections_IEnumerator_Reset_m298A4FEFF3BA3545C60D1E08E925B947640BD40C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CJumpAttackU3Ed__7_System_Collections_IEnumerator_Reset_m823DD079B1FFB28F7DBE7A0C02FE1E9F5285B478_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m9BB7C1131234825B7897DBAD33E72A04403615A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__5_System_Collections_IEnumerator_Reset_m7CC97E6E5BD0F9E884DB44378ED9B7539B47AD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTextOperationU3Ed__4_System_Collections_IEnumerator_Reset_m7BF53C4F2C8E5630A82444BE222E28C5502EA831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__7_0_mFCAE7846D7B57CA07A297F8029065E8449CBAB46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__9_0_mC3D222564E8A71E937C8C0D964C9CAEA99484985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__9_1_mA8F3576F53C7D33078E029BE25E590C95C705B6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3C_PowerUpU3Ed__2_System_Collections_IEnumerator_Reset_mB79EE5504664B33375F5EFB039AE7A6E91397DB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcoolTimeU3Ed__7_System_Collections_IEnumerator_Reset_m9551513A86601F140C2A5CA1A5B3ACB443429347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CreturnHandleCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m02471F1A33037C8AE8BFDCFB292E165108EEE5B5_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014;
struct SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.Collections.Generic.HashSet`1<StatusComponent>
struct HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2129789900609659A5FD9D31A9F8736046CE4740* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ____items_1;
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

// System.Collections.Generic.List`1<StatusComponent>
struct List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StatusComponentU5BU5D_t717033D01887F3BAAEC56A1317EDE0C93100615F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// CoolTimeButton/<coolTime>d__7
struct U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905  : public RuntimeObject
{
	// System.Int32 CoolTimeButton/<coolTime>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CoolTimeButton/<coolTime>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CoolTimeButton CoolTimeButton/<coolTime>d__7::<>4__this
	CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* ___U3CU3E4__this_2;
	// System.Single CoolTimeButton/<coolTime>d__7::duration
	float ___duration_3;
};

// DamageText/<TextOperation>d__4
struct U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42  : public RuntimeObject
{
	// System.Int32 DamageText/<TextOperation>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DamageText/<TextOperation>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DamageText DamageText/<TextOperation>d__4::<>4__this
	DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* ___U3CU3E4__this_2;
};

// GameProfile/<>c
struct U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0  : public RuntimeObject
{
};

// ObjectSpawner/<SpawnCoroutine>d__11
struct U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6  : public RuntimeObject
{
	// System.Int32 ObjectSpawner/<SpawnCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ObjectSpawner/<SpawnCoroutine>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ObjectSpawner ObjectSpawner/<SpawnCoroutine>d__11::<>4__this
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___U3CU3E4__this_2;
};

// SkillActionDefense/<Defense>d__7
struct U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30  : public RuntimeObject
{
	// System.Int32 SkillActionDefense/<Defense>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SkillActionDefense/<Defense>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SkillActionDefense SkillActionDefense/<Defense>d__7::<>4__this
	SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* ___U3CU3E4__this_2;
};

// SkillActionJumpAttack/<JumpAttack>d__7
struct U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43  : public RuntimeObject
{
	// System.Int32 SkillActionJumpAttack/<JumpAttack>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SkillActionJumpAttack/<JumpAttack>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SkillActionJumpAttack SkillActionJumpAttack/<JumpAttack>d__7::<>4__this
	SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* ___U3CU3E4__this_2;
	// UnityEngine.ParticleSystem SkillActionJumpAttack/<JumpAttack>d__7::<AttackEffect>5__2
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___U3CAttackEffectU3E5__2_3;
	// System.Int32[] SkillActionJumpAttack/<JumpAttack>d__7::<directionList>5__3
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___U3CdirectionListU3E5__3_4;
	// System.Single SkillActionJumpAttack/<JumpAttack>d__7::<currentDuration>5__4
	float ___U3CcurrentDurationU3E5__4_5;
};

// SkillActionPowerUp/<_PowerUp>d__2
struct U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A  : public RuntimeObject
{
	// System.Int32 SkillActionPowerUp/<_PowerUp>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SkillActionPowerUp/<_PowerUp>d__2::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SkillActionPowerUp SkillActionPowerUp/<_PowerUp>d__2::<>4__this
	SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* ___U3CU3E4__this_2;
	// GameManager SkillActionPowerUp/<_PowerUp>d__2::<manager>5__2
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CmanagerU3E5__2_3;
};

// SliderButton/<returnHandleCoroutine>d__4
struct U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD  : public RuntimeObject
{
	// System.Int32 SliderButton/<returnHandleCoroutine>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SliderButton/<returnHandleCoroutine>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// SliderButton SliderButton/<returnHandleCoroutine>d__4::<>4__this
	SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* ___U3CU3E4__this_2;
};

// BLINK.UI.StatBar/<Start>d__5
struct U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E  : public RuntimeObject
{
	// System.Int32 BLINK.UI.StatBar/<Start>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BLINK.UI.StatBar/<Start>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// BLINK.UI.StatBar BLINK.UI.StatBar/<Start>d__5::<>4__this
	StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* ___U3CU3E4__this_2;
};

// StatusComponent/<>c
struct U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815  : public RuntimeObject
{
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<StatusComponent>
struct Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// StructItem
struct StructItem_t8DEE45AAA97B5FEFA4961ED979030DC4CC592808 
{
	union
	{
		struct
		{
		};
		uint8_t StructItem_t8DEE45AAA97B5FEFA4961ED979030DC4CC592808__padding[1];
	};
};

// StructSkill
struct StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 
{
	// System.Int32[] StructSkill::abilityValue
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___abilityValue_0;
	// System.Int32[] StructSkill::gaugeRaiseValue
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___gaugeRaiseValue_1;
	// System.Single[] StructSkill::time
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time_2;
	// UnityEngine.GameObject[] StructSkill::effect
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effect_3;
	// System.String StructSkill::SkillActionName
	String_t* ___SkillActionName_4;
};
// Native definition for P/Invoke marshalling of StructSkill
struct StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___abilityValue_0;
	Il2CppSafeArray/*NONE*/* ___gaugeRaiseValue_1;
	Il2CppSafeArray/*NONE*/* ___time_2;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effect_3;
	char* ___SkillActionName_4;
};
// Native definition for COM marshalling of StructSkill
struct StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___abilityValue_0;
	Il2CppSafeArray/*NONE*/* ___gaugeRaiseValue_1;
	Il2CppSafeArray/*NONE*/* ___time_2;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___effect_3;
	Il2CppChar* ___SkillActionName_4;
};

// StructStatus
struct StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 
{
	// System.Int32 StructStatus::hp
	int32_t ___hp_0;
	// System.Int32 StructStatus::damagePoint
	int32_t ___damagePoint_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// ExtendsButton/ButtonClickedEvent
struct ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
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

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// SkillData
struct SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// StructSkill SkillData::structSkillData
	StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 ___structSkillData_4;
};

// StatusData
struct StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// StructStatus StatusData::status
	StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 ___status_4;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ObstcleData
struct ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717  : public StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F
{
	// System.Int32 ObstcleData::scorePoint
	int32_t ___scorePoint_5;
	// UnityEngine.Mesh ObstcleData::obstacleMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___obstacleMesh_6;
};

// AttackableManager
struct AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.HashSet`1<StatusComponent> AttackableManager::AttackList
	HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* ___AttackList_4;
};

// ButtonAction
struct ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Slider ButtonAction::gauge
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___gauge_4;
	// UnityEngine.UI.Slider ButtonAction::skillSlider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___skillSlider_5;
	// UnityEngine.UI.Button ButtonAction::skillButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___skillButton_6;
	// ButtonPos ButtonAction::buttonType
	int32_t ___buttonType_7;
	// SkillAction ButtonAction::normalSkill
	SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* ___normalSkill_8;
	// SkillAction ButtonAction::PowerSkill
	SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* ___PowerSkill_9;
	// System.Int32 ButtonAction::gaugeValue
	int32_t ___gaugeValue_10;
	// System.Single ButtonAction::coolTime
	float ___coolTime_11;
};

// CoolTimeButton
struct CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image CoolTimeButton::guage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___guage_4;
	// ButtonPos CoolTimeButton::buttonPos
	int32_t ___buttonPos_5;
	// SkillAction CoolTimeButton::normalSkill
	SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* ___normalSkill_6;
	// System.Single CoolTimeButton::currentCoolTime
	float ___currentCoolTime_7;
	// System.Boolean CoolTimeButton::isCanUse
	bool ___isCanUse_8;
};

// DamageText
struct DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.WaitForSeconds DamageText::wait
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___wait_4;
	// System.Single DamageText::waitTime
	float ___waitTime_5;
};

// DamageTextManager
struct DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject DamageTextManager::D3TextPrefabs
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___D3TextPrefabs_5;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> DamageTextManager::textObjects
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___textObjects_6;
};

// EndPanelScript
struct EndPanelScript_tDDD36F88664D36D9298FE19598AA607FD29DD177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameManager::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// UnityEngine.GameObject GameManager::EndPanelPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EndPanelPrefab_6;
	// UnityEngine.GameObject GameManager::EndPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EndPanel_7;
};

// GameProfile
struct GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameProfile::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_5;
	// System.Action GameProfile::afterScoreSet
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterScoreSet_6;
	// System.Int32 GameProfile::_score
	int32_t ____score_7;
};

// HPHud
struct HPHud_t210313084B092D3D2FE041F34140456D2C5390DB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite HPHud::fillheart
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___fillheart_4;
	// UnityEngine.Sprite HPHud::emptyHeart
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___emptyHeart_5;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> HPHud::heartList
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___heartList_6;
	// StatusComponent HPHud::playerStat
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___playerStat_7;
	// System.Int32 HPHud::currentHeartCount
	int32_t ___currentHeartCount_8;
	// System.Int32 HPHud::MaxHeartCount
	int32_t ___MaxHeartCount_9;
};

// ObjectSpawner
struct ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ObjectSpawner::spawnTime
	float ___spawnTime_4;
	// System.Single ObjectSpawner::spawnCount
	float ___spawnCount_5;
	// System.Single ObjectSpawner::spawnSpeed
	float ___spawnSpeed_6;
	// System.Single ObjectSpawner::startTime
	float ___startTime_7;
	// UnityEngine.GameObject ObjectSpawner::spawnPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___spawnPrefab_8;
	// System.Single ObjectSpawner::objSpeed
	float ___objSpeed_9;
	// UnityEngine.WaitForSeconds ObjectSpawner::spawnSpeedSeconds
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___spawnSpeedSeconds_10;
	// UnityEngine.WaitUntil ObjectSpawner::spawnOk
	WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* ___spawnOk_11;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> ObjectSpawner::beanObjects
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___beanObjects_12;
};

// Obstacle
struct Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ObjectSpawner Obstacle::spawner
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* ___spawner_4;
	// UnityEngine.Collider Obstacle::cols
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___cols_5;
	// UnityEngine.Rigidbody Obstacle::rigs
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigs_6;
	// System.Single Obstacle::limitYSpeed
	float ___limitYSpeed_7;
	// UnityEngine.LayerMask Obstacle::mask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask_8;
	// ObstcleData Obstacle::obstcleData
	ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* ___obstcleData_9;
	// UnityEngine.Collider Obstacle::ignored
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___ignored_10;
};

// PausePanelScript
struct PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas PausePanelScript::PauseCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___PauseCanvas_4;
};

// ScoreText
struct ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreText::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_4;
};

// SkillAction
struct SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SkillData SkillAction::skillData
	SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* ___skillData_4;
	// UnityEngine.ParticleSystem[] SkillAction::particle
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* ___particle_5;
};

// SkillContainer
struct SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// SkillData[] SkillContainer::normalSkill
	SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* ___normalSkill_4;
	// SkillAction[] SkillContainer::<normalSkillAction>k__BackingField
	SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___U3CnormalSkillActionU3Ek__BackingField_5;
	// SkillData[] SkillContainer::powerSkill
	SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* ___powerSkill_6;
	// SkillAction[] SkillContainer::<powerSkillAction>k__BackingField
	SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___U3CpowerSkillActionU3Ek__BackingField_7;
};

// SliderButton
struct SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Events.UnityEvent SliderButton::OnRelease
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnRelease_4;
	// UnityEngine.Events.UnityEvent SliderButton::OnExit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnExit_5;
};

// BLINK.UI.StatBar
struct StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BLINK.UI.StatBar::delay
	float ___delay_4;
	// System.Single BLINK.UI.StatBar::speed
	float ___speed_5;
	// UnityEngine.UI.Image BLINK.UI.StatBar::bar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bar_6;
	// System.Boolean BLINK.UI.StatBar::_fillUp
	bool ____fillUp_7;
	// System.Boolean BLINK.UI.StatBar::_isReady
	bool ____isReady_8;
};

// StatusComponent
struct StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// StatusData StatusComponent::_BaseStatus
	StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* ____BaseStatus_4;
	// StructStatus StatusComponent::MaxStatus
	StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 ___MaxStatus_5;
	// StructStatus StatusComponent::CurrentStatus
	StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 ___CurrentStatus_6;
	// UnityEngine.Events.UnityEvent StatusComponent::DieOperation
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___DieOperation_7;
	// System.Action StatusComponent::afterCurrentHPMotify
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterCurrentHPMotify_8;
	// System.Action StatusComponent::afterMaxHpMotify
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___afterMaxHpMotify_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WeaponData
struct WeaponData_t455C1D730F31CB2ED917971BE9353ECBD407D5CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 WeaponData::damage
	int32_t ___damage_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

// SkillActionDamage
struct SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189  : public SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01
{
	// StatusComponent SkillActionDamage::stat
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___stat_6;
	// AttackableManager SkillActionDamage::attackableManager
	AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* ___attackableManager_7;
};

// SkillActionDefense
struct SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0  : public SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01
{
	// System.Single SkillActionDefense::currentTIme
	float ___currentTIme_6;
	// UnityEngine.Vector3 SkillActionDefense::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_7;
	// UnityEngine.Vector3 SkillActionDefense::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_8;
	// System.Single SkillActionDefense::distance
	float ___distance_9;
	// UnityEngine.LayerMask SkillActionDefense::mask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask_10;
	// UnityEngine.Coroutine SkillActionDefense::isRun
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___isRun_11;
};

// SkillActionJump
struct SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298  : public SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01
{
	// System.Boolean SkillActionJump::isGround
	bool ___isGround_6;
	// UnityEngine.Rigidbody SkillActionJump::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_7;
	// UnityEngine.Vector3 SkillActionJump::startPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPos_8;
	// UnityEngine.Vector3 SkillActionJump::direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction_9;
	// System.Single SkillActionJump::distance
	float ___distance_10;
};

// SkillActionJumpAttack
struct SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017  : public SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01
{
	// UnityEngine.Rigidbody SkillActionJumpAttack::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_6;
	// UnityEngine.WaitForSeconds SkillActionJumpAttack::wait
	WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* ___wait_7;
	// AttackableManager SkillActionJumpAttack::attackManager
	AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* ___attackManager_8;
	// StatusComponent SkillActionJumpAttack::stat
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___stat_9;
};

// SkillActionNone
struct SkillActionNone_t446B23287A9A456D6CC35476162A064CC2EE666F  : public SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01
{
};

// SkillActionPowerUp
struct SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340  : public SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01
{
	// StatusComponent SkillActionPowerUp::playerStatus
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___playerStatus_6;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// ExtendsButton
struct ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// ExtendsButton/ButtonClickedEvent ExtendsButton::m_OnClick
	ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* ___m_OnClick_20;
	// UnityEngine.Vector3 ExtendsButton::prePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___prePosition_21;
	// UnityEngine.Vector3 ExtendsButton::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_22;
	// System.Single ExtendsButton::rangeY
	float ___rangeY_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.HashSet`1<StatusComponent>

// System.Collections.Generic.HashSet`1<StatusComponent>

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<StatusComponent>
struct List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StatusComponentU5BU5D_t717033D01887F3BAAEC56A1317EDE0C93100615F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<StatusComponent>

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.EventSystems.AbstractEventData

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// UnityEngine.Events.UnityEventBase

// UnityEngine.Events.UnityEventBase

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// CoolTimeButton/<coolTime>d__7

// CoolTimeButton/<coolTime>d__7

// DamageText/<TextOperation>d__4

// DamageText/<TextOperation>d__4

// GameProfile/<>c
struct U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields
{
	// GameProfile/<>c GameProfile/<>c::<>9
	U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0* ___U3CU3E9_0;
	// System.Action GameProfile/<>c::<>9__7_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__7_0_1;
};

// GameProfile/<>c

// ObjectSpawner/<SpawnCoroutine>d__11

// ObjectSpawner/<SpawnCoroutine>d__11

// SkillActionDefense/<Defense>d__7

// SkillActionDefense/<Defense>d__7

// SkillActionJumpAttack/<JumpAttack>d__7

// SkillActionJumpAttack/<JumpAttack>d__7

// SkillActionPowerUp/<_PowerUp>d__2

// SkillActionPowerUp/<_PowerUp>d__2

// SliderButton/<returnHandleCoroutine>d__4

// SliderButton/<returnHandleCoroutine>d__4

// BLINK.UI.StatBar/<Start>d__5

// BLINK.UI.StatBar/<Start>d__5

// StatusComponent/<>c
struct U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields
{
	// StatusComponent/<>c StatusComponent/<>c::<>9
	U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* ___U3CU3E9_0;
	// System.Action StatusComponent/<>c::<>9__9_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__9_0_1;
	// System.Action StatusComponent/<>c::<>9__9_1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__9_1_2;
};

// StatusComponent/<>c

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>

// System.Collections.Generic.HashSet`1/Enumerator<StatusComponent>

// System.Collections.Generic.HashSet`1/Enumerator<StatusComponent>

// UnityEngine.EventSystems.BaseEventData

// UnityEngine.EventSystems.BaseEventData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// StructItem

// StructItem

// StructSkill

// StructSkill

// StructStatus

// StructStatus

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitUntil

// UnityEngine.WaitUntil

// UnityEngine.Bounds

// UnityEngine.Bounds

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.EventSystems.RaycastResult

// UnityEngine.EventSystems.RaycastResult

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// ExtendsButton/ButtonClickedEvent

// ExtendsButton/ButtonClickedEvent

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Mesh

// UnityEngine.Mesh

// System.MulticastDelegate

// System.MulticastDelegate

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// System.SystemException

// System.SystemException

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

// System.Func`1<System.Boolean>

// System.Func`1<System.Boolean>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// SkillData

// SkillData

// StatusData

// StatusData

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ObstcleData

// ObstcleData

// AttackableManager

// AttackableManager

// ButtonAction

// ButtonAction

// CoolTimeButton

// CoolTimeButton

// DamageText

// DamageText

// DamageTextManager
struct DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_StaticFields
{
	// DamageTextManager DamageTextManager::instance
	DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* ___instance_4;
};

// DamageTextManager

// EndPanelScript

// EndPanelScript

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// GameManager

// GameProfile
struct GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_StaticFields
{
	// GameProfile GameProfile::instance
	GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* ___instance_4;
};

// GameProfile

// HPHud

// HPHud

// ObjectSpawner

// ObjectSpawner

// Obstacle

// Obstacle

// PausePanelScript

// PausePanelScript

// ScoreText

// ScoreText

// SkillAction

// SkillAction

// SkillContainer

// SkillContainer

// SliderButton

// SliderButton

// BLINK.UI.StatBar

// BLINK.UI.StatBar

// StatusComponent

// StatusComponent

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// WeaponData

// WeaponData

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// SkillActionDamage

// SkillActionDamage

// SkillActionDefense

// SkillActionDefense

// SkillActionJump

// SkillActionJump

// SkillActionJumpAttack

// SkillActionJumpAttack

// SkillActionNone

// SkillActionNone

// SkillActionPowerUp

// SkillActionPowerUp

// UnityEngine.UI.Button

// UnityEngine.UI.Button

// ExtendsButton

// ExtendsButton

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// SkillAction[]
struct SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014  : public RuntimeArray
{
	ALIGN_FIELD (8) SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* m_Items[1];

	inline SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78  : public RuntimeArray
{
	ALIGN_FIELD (8) Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* m_Items[1];

	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// SkillData[]
struct SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96  : public RuntimeArray
{
	ALIGN_FIELD (8) SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* m_Items[1];

	inline SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
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
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_TryDequeue_m13AAD6552BBFDBE843C324A37375B35618569981_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;

// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<SkillContainer>()
inline SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// SkillAction[] SkillContainer::get_normalSkillAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) ;
// SkillAction[] SkillContainer::get_powerSkillAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* SkillContainer_get_powerSkillAction_m131FDBB67F1492CFB65BEA452E6C879AF5765AC6_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Slider::get_maxValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_mB34C0C9337F5D00ECB2915E8008BCAEB8E7C5FB6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CoolTimeButton::coolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoolTimeButton_coolTime_mBBC8E36D7ACA938CADA8583D64F20BD409268282 (CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* __this, float ___0_duration, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void CoolTimeButton/<coolTime>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcoolTimeU3Ed__7__ctor_m109161AB2D13253F33C95DE03B34135263ECE828 (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UISystemProfilerApi_AddMarker_mB0E292213D18AE3770165011E265A57B17FCF90B (String_t* ___0_name, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_obj, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Void ExtendsButton::Press()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_Press_mDDED3F4AEC1210E91EC7BEE842E08B7902D180FD (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerExit_mA288BF802AD6844F51CE19C120DF5CCEBF487929 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void ExtendsButton::SetDefaultPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_SetDefaultPos_m5A8BC5862F0672528C6BB46526EF34985A881CA1 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void ExtendsButton/ButtonClickedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickedEvent__ctor_mF7FF087C85B021A7DD37BE664CB881BAC33D1E7D (ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable__ctor_m340EDFEA07F025166175C3ECB1BD2EEDD81C8638 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SliderButton::returnHandleCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SliderButton_returnHandleCoroutine_m20C0D22863003D9B57519792742A18D3198A635D (SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* __this, const RuntimeMethod* method) ;
// System.Void SliderButton/<returnHandleCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreturnHandleCoroutineU3Ed__4__ctor_m4A3498A61A4F954BF7B28F6CC6C5588208E806AF (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.GameObject>::TryDequeue(T&)
inline bool Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F**, const RuntimeMethod*))Queue_1_TryDequeue_m13AAD6552BBFDBE843C324A37375B35618569981_gshared)(__this, ___0_result, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(T)
inline void Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___0_item, method);
}
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void GameManager::GamePause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GamePause_mE56A2933E675220664226CF62D7AB0B4A2E3545D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___0_isEnable, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m911F09318DCF5EBDD7E406B99A3E31865E732ADC (int32_t ___0_exitCode, const RuntimeMethod* method) ;
// System.Void GameManager::timeScaleModify(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_timeScaleModify_m2AFCC20011A4D47E654C46463C8AFE90967C82CC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___0_scale, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GameProfile::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameProfile_set_score_m9CF9CCFE0E28C4E529EDD73FCA21B4D93D499FAE (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void GameProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13FF85437AB24C14967D85C6AE9435A031B5C8D1 (U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DamageText::TextOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageText_TextOperation_mD52CA778099FBF21EE811B0EF3D3986D9111E3F0 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) ;
// System.Void DamageText/<TextOperation>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextOperationU3Ed__4__ctor_m31A234FF047A559F987E5EB2D549CDE755FDFADA (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// DamageTextManager DamageTextManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* DamageTextManager_get_Instance_m33DCF3DDD8AB4F53D0957FE72ECBFF918C138277 (const RuntimeMethod* method) ;
// System.Void DamageTextManager::ReturnText(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextManager_ReturnText_m7BE1EF9CB740C8D03D2C15729ED1CD47A24CD396 (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_Text, const RuntimeMethod* method) ;
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) ;
// System.Void GameManager::GameRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameRestart_m00E1C9DF4DAFDF4F56CDAFEB26DC6421AB76A3BB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::GameExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameExit_m8E04F0DB1D95D99EAF94996212A81F39A237ABD3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::.ctor()
inline void List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<StatusComponent>()
inline StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Image>()
inline ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m755CF1DB6A65043AC21E6F3153B9060B358DCC64 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Image>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mC19C10A9AE29BFEC52EB2E5A7D6CFE09DDF600F9 (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UI.Image>::get_Item(System.Int32)
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4 (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void HPHud::DamageHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_DamageHeart_m6D786269109C76536633375318C09E0DCDC5DA8B (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// System.Void HPHud::RestoreHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_RestoreHeart_mB92098A41AB79C11984E1384DA5B06C636449D99 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// System.Void HPHud::RemoveHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_RemoveHeart_m1033C7006C34F01E4A87416ED8096486B7B9646B (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// System.Void HPHud::AddHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_AddHeart_m3EA23A71F22A1A5E151D2BE7FB766354349E4BF0 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ScoreText::AddDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_AddDelegate_mE3B3B46DBA0867B2114B0157408A0F93F542AA6E (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) ;
// GameProfile GameProfile::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* GameProfile_get_Instance_mE855C3B9202F4FE5A0A6FC017A4323384ECDD2D2 (const RuntimeMethod* method) ;
// System.Int32 GameProfile::get_score()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameProfile_get_score_m83942C887BC1C295872E5D258047D626C1D084B4_inline (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___0_predicate, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ObjectSpawner::SpawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectSpawner_SpawnCoroutine_mAECF98CE8D216A3B7A3F5FEB60B282C7B6A1D865 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) ;
// System.Void ObjectSpawner/<SpawnCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoroutineU3Ed__11__ctor_m94949A09C2DF364DBD71DCF6C57B609235EE2AED (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::get_Count()
inline int32_t Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Bounds UnityEngine.Collider::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ObjectSpawner>()
inline ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* Component_GetComponent_TisObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_mFA3569A48ADCE6AC293B0EC406B83E03C9EF15F4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<StatusComponent>()
inline StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// StatusData StatusComponent::get_BaseStatus()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* StatusComponent_get_BaseStatus_mAF4C0E408DBF9B13B768D24FA8E0AC828DEB5058_inline (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::ClampMagnitude(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void UnityEngine.Physics::IgnoreCollision(UnityEngine.Collider,UnityEngine.Collider,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_collider1, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___1_collider2, bool ___2_ignore, const RuntimeMethod* method) ;
// System.Void ObjectSpawner::CallDie(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_CallDie_m6D6997EDB6FC35978CE51BA6AED47C10889062F3 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_a, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// StructStatus StatusData::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 StatusData_get_Status_m63AEB2D498163CBBAB20447308C40B9AA14FBA73_inline (StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void StatusComponent::ApplyDamage(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent_ApplyDamage_m0E9224EB62E5B26424FB28636AE82B4037B655AE (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, int32_t ___0_damage, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_damageTextColor, const RuntimeMethod* method) ;
// System.Int32 ObstcleData::get_ScorePoint()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObstcleData_get_ScorePoint_m64E209716E4F9D33AA585AA16B606677D51218FC_inline (ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<StatusComponent>::Add(T)
inline bool HashSet_1_Add_m9723868790B0AA5CD2BD283CA0D070A59FE272FE (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* __this, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8*, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___0_item, method);
}
// System.Void AttackableManager::Remove(StatusComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackableManager_Remove_mCFD57B4C8FCADAA5DD524227E9995A4875883680 (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___0_stat, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<StatusComponent>::Remove(T)
inline bool HashSet_1_Remove_mE3A5724B367CE23C06B6FEFFA70AB17D56A5AEBB (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* __this, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8*, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<StatusComponent>::.ctor()
inline void List_1__ctor_mD37F5F85E6A3D770BC76A7B15DD892FD20A7F181 (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1<StatusComponent> AttackableManager::GetList()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* AttackableManager_GetList_m376203471A83B4FE3ADBF766D58A43A9F2788D0B_inline (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<StatusComponent>::GetEnumerator()
inline Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191 HashSet_1_GetEnumerator_m574B231ADC445C0FB859F03A17432FF83EF7DC25 (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191 (*) (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<StatusComponent>::Dispose()
inline void Enumerator_Dispose_m70E8393C916B6CD0C913C01917E7E70A736708FF (Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<StatusComponent>::get_Current()
inline StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* Enumerator_get_Current_m76AA9BC922EF4D8EC56C0A422436728098EC8EAE_inline (Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191* __this, const RuntimeMethod* method)
{
	return ((  StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* (*) (Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<StatusComponent>::Add(T)
inline void List_1_Add_m43669CDBCE0645B56B2E7FA053B61D2634128483_inline (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* __this, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C*, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<StatusComponent>::MoveNext()
inline bool Enumerator_MoveNext_m125A406D6909C71F10653E4105EF7469D6A77A11 (Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<StatusComponent>::get_Count()
inline int32_t List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_inline (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<StatusComponent>::get_Item(System.Int32)
inline StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* List_1_get_Item_mA6AF2056F0EE408D464B4A36C167EE6E7F0FF51E (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* (*) (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.List`1<StatusComponent>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m4F711BA804C9D6CEB11A55D688F6AD6C391BA0E0 (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
// System.Void System.Collections.Generic.HashSet`1<StatusComponent>::.ctor()
inline void HashSet_1__ctor_m68D4F5AB16A1D4508D09AD884975C999E32620BF (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void SkillContainer::set_normalSkillAction(SkillAction[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkillContainer_set_normalSkillAction_m01EA23BFA8800EB3C01D17D7B53C954BB3B6D4DD_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___0_value, const RuntimeMethod* method) ;
// System.Void SkillContainer::set_powerSkillAction(SkillAction[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkillContainer_set_powerSkillAction_m6B57A1655299EF1A1986F4F0F8096459FAD3A2DE_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___0_value, const RuntimeMethod* method) ;
// System.Void SkillContainer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_Init_m3BFE4ED3D222897A2325187F2126C9A043B86769 (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) ;
// System.Void SkillContainer::skillInit(SkillData[],SkillAction[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01 (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* ___0_data, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___1_skillActions, const RuntimeMethod* method) ;
// StructSkill SkillData::get_StructSkillData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline (SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* __this, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_componentType, const RuntimeMethod* method) ;
// System.Void SkillAction::init(SkillData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_init_mA369F43E4E78EEA0151939A850DF6871347F6738 (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* ___0__skillData, const RuntimeMethod* method) ;
// System.Void StatusData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusData__ctor_m904553870DD2370957AEEC4421A065B844F9AB51 (StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void SkillAction::set_SkillData(SkillData)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkillAction_set_SkillData_m3B3BCD49CD2C44F5D2BA53C51262C0B4A3441502_inline (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* ___0_value, const RuntimeMethod* method) ;
// System.Void SkillAction::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_Awake_m82B084C70A9A397DF4C5F332B04A84D1193BC3AF (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AttackableManager>()
inline AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void SkillAction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_Start_m8209E9F3BF6221DCFA51FA98785491CA3BD14C06 (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Boolean AttackableManager::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackableManager_Damage_m4EEB82FDA0095A92BC72C04F4A09A474CC684666 (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, int32_t ___0_applyedDamage, const RuntimeMethod* method) ;
// System.Boolean SkillActionDamage::Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkillActionDamage_Damage_m4FA19D3AD87F15C6561B431CA2E9B8A1D3609D70 (SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189* __this, const RuntimeMethod* method) ;
// System.Void SkillAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_layerNames, const RuntimeMethod* method) ;
// UnityEngine.LayerMask UnityEngine.LayerMask::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222 (int32_t ___0_intVal, const RuntimeMethod* method) ;
// System.Void SkillActionDefense/<Defense>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefenseU3Ed__7__ctor_m3E8AEF3D1DF4F5D4347C369CA624F94A9319B126 (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SkillActionDefense::Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkillActionDefense_Defense_mDF3849D3F6F771668CA2F4E787F8553E58866258 (SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, int32_t ___4_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m69ED0FF0B70ADBC45B907783C87B308E786F6D51 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Boolean SkillActionJump::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkillActionJump_Jump_m5D3649B1DF6E7431EACA68EACCD461BB1BC2060D (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, const RuntimeMethod* method) ;
// System.Void SkillActionJumpAttack/<JumpAttack>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpAttackU3Ed__7__ctor_mB6888774B23F33CE86659D5B159078A32BB301DD (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SkillActionJumpAttack::JumpAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkillActionJumpAttack_JumpAttack_m26AB821EE80B66C6E087E9F99584E4B1B1FA4ACE (SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_drag(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void SkillActionPowerUp/<_PowerUp>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PowerUpU3Ed__2__ctor_m408DF5F1D460BB7CB5289B92D1FA0DDE738C9066 (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator SkillActionPowerUp::_PowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkillActionPowerUp__PowerUp_m513B8411D54837AF6908E6829205C383234C9D96 (SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* __this, const RuntimeMethod* method) ;
// System.Void StatusComponent::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent_Init_m4169178B770A9555E7AAD0E626E2237D777E81BD (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) ;
// System.Void DamageTextManager::ShowDamageText(UnityEngine.Vector3,System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextManager_ShowDamageText_mA97B4B39D1D297960DE852713F7C7B4620FBA663 (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, String_t* ___1_text, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Void StatusComponent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m215BF5D1DE3E3094B7CDCDF9A549844A3CA4FF07 (U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* __this, const RuntimeMethod* method) ;
// System.Void BLINK.UI.StatBar/<Start>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__5__ctor_m003AC46F8190F8469446B80C3F84418FB9B64B74 (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void ButtonAction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAction_Start_m76078A6C63C21B34622608092F95204794FCE5B7 (ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* V_0 = NULL;
	{
		// GameObject player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		// SkillContainer skillCon  = player.GetComponent<SkillContainer>();
		NullCheck(L_0);
		SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* L_1;
		L_1 = GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF(L_0, GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF_RuntimeMethod_var);
		V_0 = L_1;
		// normalSkill = skillCon.normalSkillAction[(int)buttonType];
		SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* L_2 = V_0;
		NullCheck(L_2);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_3;
		L_3 = SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834_inline(L_2, NULL);
		int32_t L_4 = __this->___buttonType_7;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___normalSkill_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalSkill_8), (void*)L_6);
		// PowerSkill = skillCon.powerSkillAction[(int)buttonType];
		SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* L_7 = V_0;
		NullCheck(L_7);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_8;
		L_8 = SkillContainer_get_powerSkillAction_m131FDBB67F1492CFB65BEA452E6C879AF5765AC6_inline(L_7, NULL);
		int32_t L_9 = __this->___buttonType_7;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		__this->___PowerSkill_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PowerSkill_9), (void*)L_11);
		// }
		return;
	}
}
// System.Void ButtonAction::Press()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAction_Press_mCB3C5DE4899A94CEE76ADF10CFADB79163806013 (ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// normalSkill.execute(out gaugeValue,out temp);
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_0 = __this->___normalSkill_8;
		int32_t* L_1 = (&__this->___gaugeValue_10);
		NullCheck(L_0);
		VirtualActionInvoker2< int32_t*, float* >::Invoke(6 /* System.Void SkillAction::execute(System.Int32&,System.Single&) */, L_0, L_1, (&V_0));
		// }
		return;
	}
}
// System.Void ButtonAction::GaugeUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAction_GaugeUp_m58892F1AC4C2AC5B0FE9042CEA5CE36B3F836AA1 (ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C* __this, const RuntimeMethod* method) 
{
	{
		// gauge.value += gaugeValue;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___gauge_4;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1 = L_0;
		NullCheck(L_1);
		float L_2;
		L_2 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_1);
		int32_t L_3 = __this->___gaugeValue_10;
		NullCheck(L_1);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, ((float)il2cpp_codegen_add(L_2, ((float)L_3))));
		// }
		return;
	}
}
// System.Void ButtonAction::ifSkillGaugeFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAction_ifSkillGaugeFull_m75390E0960D671E237ACDFB351DBDB8CB48A64DD (ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C* __this, const RuntimeMethod* method) 
{
	{
		// if(gauge.value >=gauge.maxValue)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___gauge_4;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___gauge_4;
		NullCheck(L_2);
		float L_3;
		L_3 = Slider_get_maxValue_mB34C0C9337F5D00ECB2915E8008BCAEB8E7C5FB6_inline(L_2, NULL);
		if ((!(((float)L_1) >= ((float)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		// gauge.SetValueWithoutNotify(0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___gauge_4;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(48 /* System.Void UnityEngine.UI.Slider::SetValueWithoutNotify(System.Single) */, L_4, (0.0f));
		// skillButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___skillButton_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// skillSlider.gameObject.SetActive(true);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___skillSlider_5;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ButtonAction::ifSkillSliderFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAction_ifSkillSliderFull_m682C7ABF793EBF8895D43B221C489F5D6D0C33E7 (ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C* __this, const RuntimeMethod* method) 
{
	{
		// if (skillSlider.value >= skillSlider.maxValue-10)
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___skillSlider_5;
		NullCheck(L_0);
		float L_1;
		L_1 = VirtualFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___skillSlider_5;
		NullCheck(L_2);
		float L_3;
		L_3 = Slider_get_maxValue_mB34C0C9337F5D00ECB2915E8008BCAEB8E7C5FB6_inline(L_2, NULL);
		if ((!(((float)L_1) >= ((float)((float)il2cpp_codegen_subtract(L_3, (10.0f)))))))
		{
			goto IL_0068;
		}
	}
	{
		// skillSlider.SetValueWithoutNotify(0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___skillSlider_5;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(48 /* System.Void UnityEngine.UI.Slider::SetValueWithoutNotify(System.Single) */, L_4, (0.0f));
		// skillButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->___skillButton_6;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		// skillSlider.gameObject.SetActive(false);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_7 = __this->___skillSlider_5;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// PowerSkill.execute(out gaugeValue,out coolTime);
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_9 = __this->___PowerSkill_9;
		int32_t* L_10 = (&__this->___gaugeValue_10);
		float* L_11 = (&__this->___coolTime_11);
		NullCheck(L_9);
		VirtualActionInvoker2< int32_t*, float* >::Invoke(6 /* System.Void SkillAction::execute(System.Int32&,System.Single&) */, L_9, L_10, L_11);
		return;
	}

IL_0068:
	{
		// skillSlider.SetValueWithoutNotify(0);
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_12 = __this->___skillSlider_5;
		NullCheck(L_12);
		VirtualActionInvoker1< float >::Invoke(48 /* System.Void UnityEngine.UI.Slider::SetValueWithoutNotify(System.Single) */, L_12, (0.0f));
		// }
		return;
	}
}
// System.Void ButtonAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAction__ctor_m3B1BBC63E51D90BC0E8CB913B03B439D17F5B322 (ButtonAction_t57FBC642DF32AC219E5AB87A7F426D25A4FB8F2C* __this, const RuntimeMethod* method) 
{
	{
		// private int gaugeValue = 30;
		__this->___gaugeValue_10 = ((int32_t)30);
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
// System.Void CoolTimeButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoolTimeButton_Start_mF9B0A18BEBE123139DA6E662E55C8AB5624C822F (CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* V_0 = NULL;
	{
		// GameObject player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		// SkillContainer skillCon = player.GetComponent<SkillContainer>();
		NullCheck(L_0);
		SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* L_1;
		L_1 = GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF(L_0, GameObject_GetComponent_TisSkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7_mEE69F99AA34FEA0E7FED81D087B57949E28E61DF_RuntimeMethod_var);
		V_0 = L_1;
		// normalSkill = skillCon.normalSkillAction[(int)buttonPos];
		SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* L_2 = V_0;
		NullCheck(L_2);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_3;
		L_3 = SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834_inline(L_2, NULL);
		int32_t L_4 = __this->___buttonPos_5;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->___normalSkill_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___normalSkill_6), (void*)L_6);
		// isCanUse = true;
		__this->___isCanUse_8 = (bool)1;
		// }
		return;
	}
}
// System.Void CoolTimeButton::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoolTimeButton_Run_m9071183A6E607DC784DD19612921F2C8228A4B6C (CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// if (isCanUse)
		bool L_0 = __this->___isCanUse_8;
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		// normalSkill.execute(out temp, out duration);
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_1 = __this->___normalSkill_6;
		NullCheck(L_1);
		VirtualActionInvoker2< int32_t*, float* >::Invoke(6 /* System.Void SkillAction::execute(System.Int32&,System.Single&) */, L_1, (&V_0), (&V_1));
		// isCanUse = false;
		__this->___isCanUse_8 = (bool)0;
		// currentCoolTime = 0;
		__this->___currentCoolTime_7 = (0.0f);
		// StartCoroutine(coolTime(duration));
		float L_2 = V_1;
		RuntimeObject* L_3;
		L_3 = CoolTimeButton_coolTime_mBBC8E36D7ACA938CADA8583D64F20BD409268282(__this, L_2, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator CoolTimeButton::coolTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoolTimeButton_coolTime_mBBC8E36D7ACA938CADA8583D64F20BD409268282 (CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* __this, float ___0_duration, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* L_0 = (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905*)il2cpp_codegen_object_new(U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CcoolTimeU3Ed__7__ctor_m109161AB2D13253F33C95DE03B34135263ECE828(L_0, 0, NULL);
		U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* L_2 = L_1;
		float L_3 = ___0_duration;
		NullCheck(L_2);
		L_2->___duration_3 = L_3;
		return L_2;
	}
}
// System.Void CoolTimeButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoolTimeButton__ctor_m967003D561A3397E66C2D498BD4DDB6165699440 (CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* __this, const RuntimeMethod* method) 
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
// System.Void CoolTimeButton/<coolTime>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcoolTimeU3Ed__7__ctor_m109161AB2D13253F33C95DE03B34135263ECE828 (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CoolTimeButton/<coolTime>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcoolTimeU3Ed__7_System_IDisposable_Dispose_m6A2A6352B007D20CCABF5D75B0F682AD75D6A2BC (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CoolTimeButton/<coolTime>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcoolTimeU3Ed__7_MoveNext_mC36B2D71EE4BB7BB833A6B2D12E58209A67CD415 (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_005a;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0061;
	}

IL_0020:
	{
		// currentCoolTime += Time.deltaTime;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_4 = V_1;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->___currentCoolTime_7;
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_4);
		L_4->___currentCoolTime_7 = ((float)il2cpp_codegen_add(L_6, L_7));
		// guage.fillAmount = currentCoolTime / duration;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_8 = V_1;
		NullCheck(L_8);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = L_8->___guage_4;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___currentCoolTime_7;
		float L_12 = __this->___duration_3;
		NullCheck(L_9);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_9, ((float)(L_11/L_12)), NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0061:
	{
		// while (currentCoolTime <= duration)
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___currentCoolTime_7;
		float L_15 = __this->___duration_3;
		if ((((float)L_14) <= ((float)L_15)))
		{
			goto IL_0020;
		}
	}
	{
		// guage.fillAmount = 0;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_16 = V_1;
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = L_16->___guage_4;
		NullCheck(L_17);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_17, (0.0f), NULL);
		// isCanUse = true;
		CoolTimeButton_t05BC7CE358A0C470471CA0AD9EB46A5945CA5FD6* L_18 = V_1;
		NullCheck(L_18);
		L_18->___isCanUse_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object CoolTimeButton/<coolTime>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcoolTimeU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4926CA1D9A2261A86EAACD0CA8F7C484ECF0FA13 (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CoolTimeButton/<coolTime>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcoolTimeU3Ed__7_System_Collections_IEnumerator_Reset_m9551513A86601F140C2A5CA1A5B3ACB443429347 (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcoolTimeU3Ed__7_System_Collections_IEnumerator_Reset_m9551513A86601F140C2A5CA1A5B3ACB443429347_RuntimeMethod_var)));
	}
}
// System.Object CoolTimeButton/<coolTime>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CcoolTimeU3Ed__7_System_Collections_IEnumerator_get_Current_mFFF7564928C174014ADFB437D39A1F346339EC4F (U3CcoolTimeU3Ed__7_t921B0E66527593267CBD6569FED1FD460D0B1905* __this, const RuntimeMethod* method) 
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
// ExtendsButton/ButtonClickedEvent ExtendsButton::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* ExtendsButton_get_onClick_mF9FFFE441DADE801B181E6128260323943463A99 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
// System.Void ExtendsButton::set_onClick(ExtendsButton/ButtonClickedEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_set_onClick_m7D0333A77178F990C1BF67A7F6F125C3C26EE59F (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_OnClick = value; }
		ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* L_0 = ___0_value;
		__this->___m_OnClick_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnClick_20), (void*)L_0);
		// set { m_OnClick = value; }
		return;
	}
}
// System.Void ExtendsButton::Press()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_Press_mDDED3F4AEC1210E91EC7BEE842E08B7902D180FD (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6190A5AC038D56DD23827AD931A1BAD7C3E5E2E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsActive() || !IsInteractable())
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(24 /* System.Boolean UnityEngine.UI.Selectable::IsInteractable() */, __this);
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// UISystemProfilerApi.AddMarker("Button.onClick", this);
		UISystemProfilerApi_AddMarker_mB0E292213D18AE3770165011E265A57B17FCF90B(_stringLiteralA6190A5AC038D56DD23827AD931A1BAD7C3E5E2E, __this, NULL);
		// m_OnClick.Invoke();
		ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* L_2 = __this->___m_OnClick_20;
		NullCheck(L_2);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_2, NULL);
		// }
		return;
	}
}
// System.Void ExtendsButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_OnPointerClick_mB494610C5100DE79FF51F9AB67DDE7B4C2BA2613 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if (eventData.button != PointerEventData.InputButton.Left)
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline(L_0, NULL);
		if (!L_1)
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
		// Press();
		ExtendsButton_Press_mDDED3F4AEC1210E91EC7BEE842E08B7902D180FD(__this, NULL);
		// }
		return;
	}
}
// System.Void ExtendsButton::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_OnPointerDown_m0AB5A48E6BBF8843FBE76D22F3ADC21EB089DB25 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerDown_m4425D3C7641AAD2430A7E666F35047E2F3B623D3(__this, L_0, NULL);
		// prePosition = transform.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->___prePosition_21 = L_2;
		// worldPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		__this->___worldPosition_22 = L_4;
		// }
		return;
	}
}
// System.Void ExtendsButton::OnPointerMove(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_OnPointerMove_m36AA52475B69DE5A8E8E3B3320FEFF793467E241 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (!L_0)
		{
			goto IL_0073;
		}
	}
	{
		// Vector3 UIPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		V_0 = L_2;
		// Vector3 point = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_3, L_4, NULL);
		V_1 = L_5;
		// float y = Mathf.Clamp(point.y,worldPosition.y,worldPosition.y+ rangeY);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___worldPosition_22);
		float L_9 = L_8->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&__this->___worldPosition_22);
		float L_11 = L_10->___y_3;
		float L_12 = __this->___rangeY_23;
		float L_13;
		L_13 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_7, L_9, ((float)il2cpp_codegen_add(L_11, L_12)), NULL);
		V_2 = L_13;
		// Vector3 pos = new Vector3(UIPos.x, y, point.z+1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		float L_15 = L_14.___x_2;
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		float L_18 = L_17.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_15, L_16, ((float)il2cpp_codegen_add(L_18, (1.0f))), NULL);
		// transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_20, NULL);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void ExtendsButton::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_OnPointerExit_m92E8F8B5638E72585C2E45922E95C75B724618FA (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerExit(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerExit_mA288BF802AD6844F51CE19C120DF5CCEBF487929(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void ExtendsButton::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_OnPointerUp_m4E8F4B9D200C12A3C417ED2AF84DE25DDF8F1078 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Selectable_OnPointerUp_mF7B6987EE86DD7079DDA835339A17BCFC6E7A4C9(__this, L_0, NULL);
		// SetDefaultPos();
		ExtendsButton_SetDefaultPos_m5A8BC5862F0672528C6BB46526EF34985A881CA1(__this, NULL);
		// }
		return;
	}
}
// System.Void ExtendsButton::SetDefaultPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton_SetDefaultPos_m5A8BC5862F0672528C6BB46526EF34985A881CA1 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, const RuntimeMethod* method) 
{
	{
		// transform.localPosition = prePosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___prePosition_21;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExtendsButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtendsButton__ctor_m39E040FD121BD3C4270665360643A832786B7162 (ExtendsButton_t0341CDE461D5737F1E400D1B8C099AD0ECD357AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ButtonClickedEvent m_OnClick = new ButtonClickedEvent();
		ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* L_0 = (ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87*)il2cpp_codegen_object_new(ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ButtonClickedEvent__ctor_mF7FF087C85B021A7DD37BE664CB881BAC33D1E7D(L_0, NULL);
		__this->___m_OnClick_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnClick_20), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_il2cpp_TypeInfo_var);
		Selectable__ctor_m340EDFEA07F025166175C3ECB1BD2EEDD81C8638(__this, NULL);
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
// System.Void ExtendsButton/ButtonClickedEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonClickedEvent__ctor_mF7FF087C85B021A7DD37BE664CB881BAC33D1E7D (ButtonClickedEvent_tC2F82DA941BDEEDD8AAAB2BC5E544E004F8F1E87* __this, const RuntimeMethod* method) 
{
	{
		UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235(__this, NULL);
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
// System.Void SliderButton::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderButton_OnPointerClick_m9094A1A7E039C07FA9E96C959AF6E8C8BF288767 (SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnRelease.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->___OnRelease_4;
		NullCheck(L_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_0, NULL);
		// }
		return;
	}
}
// System.Void SliderButton::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderButton_OnPointerExit_m2E7C5126B52F07DE3EE93631D8B6158DAA6BE88B (SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(returnHandleCoroutine());
		RuntimeObject* L_0;
		L_0 = SliderButton_returnHandleCoroutine_m20C0D22863003D9B57519792742A18D3198A635D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator SliderButton::returnHandleCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SliderButton_returnHandleCoroutine_m20C0D22863003D9B57519792742A18D3198A635D (SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* L_0 = (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD*)il2cpp_codegen_object_new(U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CreturnHandleCoroutineU3Ed__4__ctor_m4A3498A61A4F954BF7B28F6CC6C5588208E806AF(L_0, 0, NULL);
		U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SliderButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderButton__ctor_m0953EC2325C44957FCF13C7A7660DDF3F2DEE4E4 (SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* __this, const RuntimeMethod* method) 
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
// System.Void SliderButton/<returnHandleCoroutine>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreturnHandleCoroutineU3Ed__4__ctor_m4A3498A61A4F954BF7B28F6CC6C5588208E806AF (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SliderButton/<returnHandleCoroutine>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreturnHandleCoroutineU3Ed__4_System_IDisposable_Dispose_mF5254A17999E9C293C5A0DF5097552AFFE65BA9D (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SliderButton/<returnHandleCoroutine>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CreturnHandleCoroutineU3Ed__4_MoveNext_m1CD1CA8C6702432E0F152C2C32B490C8DB1F8BD3 (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0037;
	}

IL_0020:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0037:
	{
		// while(Input.GetMouseButton(0))
		bool L_4;
		L_4 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		// OnExit.Invoke();
		SliderButton_tDA7390731B79FFC965AE877F7A9EF9BD62DE00BA* L_5 = V_1;
		NullCheck(L_5);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_6 = L_5->___OnExit_5;
		NullCheck(L_6);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SliderButton/<returnHandleCoroutine>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CreturnHandleCoroutineU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mEEC44EA8184206CA346E7C55D836850C3713EF31 (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SliderButton/<returnHandleCoroutine>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CreturnHandleCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m02471F1A33037C8AE8BFDCFB292E165108EEE5B5 (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CreturnHandleCoroutineU3Ed__4_System_Collections_IEnumerator_Reset_m02471F1A33037C8AE8BFDCFB292E165108EEE5B5_RuntimeMethod_var)));
	}
}
// System.Object SliderButton/<returnHandleCoroutine>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CreturnHandleCoroutineU3Ed__4_System_Collections_IEnumerator_get_Current_m90129EAACB64E149A4B403141699843C433F2E83 (U3CreturnHandleCoroutineU3Ed__4_t27EE35243A49449F15E6294BF1E875EDC3FA10AD* __this, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: StructSkill
IL2CPP_EXTERN_C void StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshal_pinvoke(const StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518& unmarshaled, StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_pinvoke& marshaled)
{
	Exception_t* ___effect_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'effect' of type 'StructSkill': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___effect_3Exception, NULL);
}
IL2CPP_EXTERN_C void StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshal_pinvoke_back(const StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_pinvoke& marshaled, StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518& unmarshaled)
{
	Exception_t* ___effect_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'effect' of type 'StructSkill': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___effect_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: StructSkill
IL2CPP_EXTERN_C void StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshal_pinvoke_cleanup(StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: StructSkill
IL2CPP_EXTERN_C void StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshal_com(const StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518& unmarshaled, StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_com& marshaled)
{
	Exception_t* ___effect_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'effect' of type 'StructSkill': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___effect_3Exception, NULL);
}
IL2CPP_EXTERN_C void StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshal_com_back(const StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_com& marshaled, StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518& unmarshaled)
{
	Exception_t* ___effect_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'effect' of type 'StructSkill': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___effect_3Exception, NULL);
}
// Conversion method for clean up from marshalling of: StructSkill
IL2CPP_EXTERN_C void StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshal_com_cleanup(StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518_marshaled_com& marshaled)
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
// System.Void DamageTextManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextManager_Awake_mFA551FE1D80B323D64516435BE4AADE1D3ED95D8 (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* L_0 = ((DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_StaticFields*)il2cpp_codegen_static_fields_for(DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// instance = this;
		((DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_StaticFields*)il2cpp_codegen_static_fields_for(DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_StaticFields*)il2cpp_codegen_static_fields_for(DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// textObjects = new Queue<GameObject>();
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_4 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_4, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		__this->___textObjects_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textObjects_6), (void*)L_4);
		// }
		return;
	}
}
// DamageTextManager DamageTextManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* DamageTextManager_get_Instance_m33DCF3DDD8AB4F53D0957FE72ECBFF918C138277 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* L_0 = ((DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_StaticFields*)il2cpp_codegen_static_fields_for(DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29*)NULL;
	}

IL_000f:
	{
		// return instance;
		DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* L_2 = ((DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_StaticFields*)il2cpp_codegen_static_fields_for(DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void DamageTextManager::ShowDamageText(UnityEngine.Vector3,System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextManager_ShowDamageText_mA97B4B39D1D297960DE852713F7C7B4620FBA663 (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, String_t* ___1_text, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// if(!textObjects.TryDequeue(out obj))
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = __this->___textObjects_6;
		NullCheck(L_0);
		bool L_1;
		L_1 = Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E(L_0, (&V_0), Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// obj = Instantiate(D3TextPrefabs);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___D3TextPrefabs_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001b:
	{
		// obj.transform.position = pos + Vector3.back;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_5, L_8, NULL);
		// Text texts = obj.GetComponentInChildren<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10;
		L_10 = GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13(L_9, GameObject_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m4883A479F4252D21D45D5AD3140CB42598C48A13_RuntimeMethod_var);
		// texts.text = text;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = L_10;
		String_t* L_12 = ___1_text;
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		// texts.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___2_color;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_13);
		// obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DamageTextManager::ReturnText(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextManager_ReturnText_m7BE1EF9CB740C8D03D2C15729ED1CD47A24CD396 (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_Text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// textObjects.Enqueue(Text);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = __this->___textObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_Text;
		NullCheck(L_0);
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_0, L_1, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// Text.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___0_Text;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DamageTextManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageTextManager__ctor_m4F6EAC94B0B35857B717D8F95153E8A7050605E2 (DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* __this, const RuntimeMethod* method) 
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		return;
	}

IL_001f:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_0);
		// EndPanel = Instantiate(EndPanelPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___EndPanelPrefab_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_1, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___EndPanel_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___EndPanel_7), (void*)L_2);
		// }
		return;
	}
}
// GameManager GameManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6*)NULL;
	}

IL_000f:
	{
		// return instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA029A2CCA983D746C4F6368FC19758353458E9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___player_5;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// Invoke("_GameOverOperation", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralDA029A2CCA983D746C4F6368FC19758353458E9D, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void GameManager::_GameOverOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__GameOverOperation_mA78710AC9AE9987B7C5EEF8B3AD886AFD3DDFF8E (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EndPanel.GetComponent<Canvas>().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EndPanel_7;
		NullCheck(L_0);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1;
		L_1 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_0, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// GamePause(true);
		GameManager_GamePause_mE56A2933E675220664226CF62D7AB0B4A2E3545D(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameRestart_m00E1C9DF4DAFDF4F56CDAFEB26DC6421AB76A3BB (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// GamePause(false);
		GameManager_GamePause_mE56A2933E675220664226CF62D7AB0B4A2E3545D(__this, (bool)0, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameExit_m8E04F0DB1D95D99EAF94996212A81F39A237ABD3 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit(0);
		Application_Quit_m911F09318DCF5EBDD7E406B99A3E31865E732ADC(0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::GamePause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GamePause_mE56A2933E675220664226CF62D7AB0B4A2E3545D (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, bool ___0_isEnable, const RuntimeMethod* method) 
{
	{
		// timeScaleModify(1);
		GameManager_timeScaleModify_m2AFCC20011A4D47E654C46463C8AFE90967C82CC(__this, (1.0f), NULL);
		// if (isEnable)
		bool L_0 = ___0_isEnable;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// timeScaleModify(0);
		GameManager_timeScaleModify_m2AFCC20011A4D47E654C46463C8AFE90967C82CC(__this, (0.0f), NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void GameManager::timeScaleModify(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_timeScaleModify_m2AFCC20011A4D47E654C46463C8AFE90967C82CC (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, float ___0_scale, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = scale;
		float L_0 = ___0_scale;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
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
// System.Int32 GameProfile::get_score()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameProfile_get_score_m83942C887BC1C295872E5D258047D626C1D084B4 (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, const RuntimeMethod* method) 
{
	{
		// get { return _score; }
		int32_t L_0 = __this->____score_7;
		return L_0;
	}
}
// System.Void GameProfile::set_score(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameProfile_set_score_m9CF9CCFE0E28C4E529EDD73FCA21B4D93D499FAE (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// _score = value;
		int32_t L_0 = ___0_value;
		__this->____score_7 = L_0;
		// afterScoreSet();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = __this->___afterScoreSet_6;
		NullCheck(L_1);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_1, NULL);
		// }
		return;
	}
}
// System.Void GameProfile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameProfile_Awake_m2F831B0F88E88960B8DF4449E760BBA3863EC1CB (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__7_0_mFCAE7846D7B57CA07A297F8029065E8449CBAB46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B5_0 = NULL;
	GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* G_B5_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* G_B4_1 = NULL;
	{
		// if (null == instance)
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_0 = ((GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_StaticFields*)il2cpp_codegen_static_fields_for(GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// instance = this;
		((GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_StaticFields*)il2cpp_codegen_static_fields_for(GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_StaticFields*)il2cpp_codegen_static_fields_for(GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// DontDestroyOnLoad(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_002b:
	{
		// player = GameObject.FindGameObjectWithTag("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___player_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_5), (void*)L_4);
		//         afterScoreSet = () =>
		//         {
		// #if UNITY_EDITOR
		//             Debug.Log("????? ???????????");
		// #endif
		//         };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = __this;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = __this;
			goto IL_005b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var);
		U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0* L_7 = ((U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CAwakeU3Eb__7_0_mFCAE7846D7B57CA07A297F8029065E8449CBAB46_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8;
		((U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var))->___U3CU3E9__7_0_1), (void*)L_9);
		G_B5_0 = L_9;
		G_B5_1 = G_B4_1;
	}

IL_005b:
	{
		NullCheck(G_B5_1);
		G_B5_1->___afterScoreSet_6 = G_B5_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B5_1->___afterScoreSet_6), (void*)G_B5_0);
		// }
		return;
	}
}
// GameProfile GameProfile::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* GameProfile_get_Instance_mE855C3B9202F4FE5A0A6FC017A4323384ECDD2D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (null == instance)
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_0 = ((GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_StaticFields*)il2cpp_codegen_static_fields_for(GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, L_0, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return null;
		return (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291*)NULL;
	}

IL_000f:
	{
		// return instance;
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_2 = ((GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_StaticFields*)il2cpp_codegen_static_fields_for(GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291_il2cpp_TypeInfo_var))->___instance_4;
		return L_2;
	}
}
// System.Void GameProfile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameProfile_Start_m8BB5E3599BC7287D3FADAB844CA733CC9CD41748 (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, const RuntimeMethod* method) 
{
	{
		// score = 0;
		GameProfile_set_score_m9CF9CCFE0E28C4E529EDD73FCA21B4D93D499FAE(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void GameProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameProfile__ctor_m27966E072D56DA81052530A4152847CD98A45C1F (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, const RuntimeMethod* method) 
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
// System.Void GameProfile/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1F2F92B26F43CD2A8263197037289C5A00D1992E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0* L_0 = (U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0*)il2cpp_codegen_object_new(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m13FF85437AB24C14967D85C6AE9435A031B5C8D1(L_0, NULL);
		((U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void GameProfile/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m13FF85437AB24C14967D85C6AE9435A031B5C8D1 (U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GameProfile/<>c::<Awake>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__7_0_mFCAE7846D7B57CA07A297F8029065E8449CBAB46 (U3CU3Ec_t4358063C820696F34476785E5F4CADA848442AB0* __this, const RuntimeMethod* method) 
{
	{
		// };
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
// System.Void DamageText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_Awake_m6BD77AE2D98BC11D6AB98C53460EB2B198362608 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wait = new WaitForSeconds(waitTime);
		float L_0 = __this->___waitTime_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		__this->___wait_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wait_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void DamageText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText_OnEnable_mB5E2893504F849F1121ED47DF347DBCF643C92BE (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(TextOperation());
		RuntimeObject* L_0;
		L_0 = DamageText_TextOperation_mD52CA778099FBF21EE811B0EF3D3986D9111E3F0(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DamageText::TextOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DamageText_TextOperation_mD52CA778099FBF21EE811B0EF3D3986D9111E3F0 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* L_0 = (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42*)il2cpp_codegen_object_new(U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTextOperationU3Ed__4__ctor_m31A234FF047A559F987E5EB2D549CDE755FDFADA(L_0, 0, NULL);
		U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DamageText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageText__ctor_m822F8E1660E304939D39C2E4DC8CAA4D4BC78BB0 (DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* __this, const RuntimeMethod* method) 
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
// System.Void DamageText/<TextOperation>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextOperationU3Ed__4__ctor_m31A234FF047A559F987E5EB2D549CDE755FDFADA (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DamageText/<TextOperation>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextOperationU3Ed__4_System_IDisposable_Dispose_m020D0BB94D87C719A11BD28933253994272A216D (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DamageText/<TextOperation>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTextOperationU3Ed__4_MoveNext_m52A9ADC55671CB77B420CBCD67A9A1C26C4325F3 (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return wait;
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_4 = V_1;
		NullCheck(L_4);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = L_4->___wait_4;
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0033:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// DamageTextManager.Instance.ReturnText(gameObject);
		DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* L_6;
		L_6 = DamageTextManager_get_Instance_m33DCF3DDD8AB4F53D0957FE72ECBFF918C138277(NULL);
		DamageText_tE4933020679B1DC19BF6BF387A63CDE655DCFF76* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_6);
		DamageTextManager_ReturnText_m7BE1EF9CB740C8D03D2C15729ED1CD47A24CD396(L_6, L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DamageText/<TextOperation>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTextOperationU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB1B65F6A8BC991BF4331CFCEB16C818284B88A03 (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DamageText/<TextOperation>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTextOperationU3Ed__4_System_Collections_IEnumerator_Reset_m7BF53C4F2C8E5630A82444BE222E28C5502EA831 (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTextOperationU3Ed__4_System_Collections_IEnumerator_Reset_m7BF53C4F2C8E5630A82444BE222E28C5502EA831_RuntimeMethod_var)));
	}
}
// System.Object DamageText/<TextOperation>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTextOperationU3Ed__4_System_Collections_IEnumerator_get_Current_m3B8EE56ABC117F75138F4910E1CCAF9BF6B8B82A (U3CTextOperationU3Ed__4_tB56547A42202311036E0365722C6EF1320A57A42* __this, const RuntimeMethod* method) 
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
// System.Void EndPanelScript::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPanelScript_Continue_m82D49D3DC147160A5851A6079AF2343ECB490680 (EndPanelScript_tDDD36F88664D36D9298FE19598AA607FD29DD177* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.GameRestart();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_GameRestart_m00E1C9DF4DAFDF4F56CDAFEB26DC6421AB76A3BB(L_0, NULL);
		// }
		return;
	}
}
// System.Void EndPanelScript::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPanelScript_Exit_mE118A286A63010C53666A08781081C43043D509B (EndPanelScript_tDDD36F88664D36D9298FE19598AA607FD29DD177* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.GameExit();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_GameExit_m8E04F0DB1D95D99EAF94996212A81F39A237ABD3(L_0, NULL);
		// }
		return;
	}
}
// System.Void EndPanelScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndPanelScript__ctor_mF751184C567D8E1F9435494A245A14EF4131A4EB (EndPanelScript_tDDD36F88664D36D9298FE19598AA607FD29DD177* __this, const RuntimeMethod* method) 
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
// System.Void HPHud::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_Awake_mCA65578079448314FEF44CC29CE3FA4EA9809151 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heartList = new List<Image>();
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_0 = (List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19*)il2cpp_codegen_object_new(List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D(L_0, List_1__ctor_mA5D3E81247285DDDD6E376A91AA3E796BB0BB36D_RuntimeMethod_var);
		__this->___heartList_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___heartList_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void HPHud::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_Start_mF206658D0546F3735B9F4DC7BF1E5567145CF624 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m755CF1DB6A65043AC21E6F3153B9060B358DCC64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPHud_currentHpMotify_m458322087E609B7481D2BF71102E5218B50B29D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HPHud_maxHPModify_m6368B730EA8C433447DFE23F3F87090D217A7F41_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mC19C10A9AE29BFEC52EB2E5A7D6CFE09DDF600F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// playerStat = GameObject.FindGameObjectWithTag("Player").GetComponent<StatusComponent>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_0);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_1;
		L_1 = GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B(L_0, GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		__this->___playerStat_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerStat_7), (void*)L_1);
		// playerStat.afterCurrentHPMotify += currentHpMotify;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_2 = __this->___playerStat_7;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_3 = L_2;
		NullCheck(L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3->___afterCurrentHPMotify_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)HPHud_currentHpMotify_m458322087E609B7481D2BF71102E5218B50B29D7_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___afterCurrentHPMotify_8 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___afterCurrentHPMotify_8), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// playerStat.afterMaxHpMotify += maxHPModify;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_7 = __this->___playerStat_7;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_8 = L_7;
		NullCheck(L_8);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8->___afterMaxHpMotify_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, __this, (intptr_t)((void*)HPHud_maxHPModify_m6368B730EA8C433447DFE23F3F87090D217A7F41_RuntimeMethod_var), NULL);
		Delegate_t* L_11;
		L_11 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_9, L_10, NULL);
		NullCheck(L_8);
		L_8->___afterMaxHpMotify_9 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_11, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___afterMaxHpMotify_9), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_11, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// heartList.AddRange(transform.GetComponentsInChildren<Image>());
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_12 = __this->___heartList_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		ImageU5BU5D_t8869694C217655DA7B1315DC02C80F1308B78B78* L_14;
		L_14 = Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m755CF1DB6A65043AC21E6F3153B9060B358DCC64(L_13, Component_GetComponentsInChildren_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m755CF1DB6A65043AC21E6F3153B9060B358DCC64_RuntimeMethod_var);
		NullCheck(L_12);
		List_1_AddRange_mC19C10A9AE29BFEC52EB2E5A7D6CFE09DDF600F9(L_12, (RuntimeObject*)L_14, List_1_AddRange_mC19C10A9AE29BFEC52EB2E5A7D6CFE09DDF600F9_RuntimeMethod_var);
		// currentHeartCount = playerStat.CurrentStatus.hp;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_15 = __this->___playerStat_7;
		NullCheck(L_15);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_16 = (&L_15->___CurrentStatus_6);
		int32_t L_17 = L_16->___hp_0;
		__this->___currentHeartCount_8 = L_17;
		// MaxHeartCount = currentHeartCount;
		int32_t L_18 = __this->___currentHeartCount_8;
		__this->___MaxHeartCount_9 = L_18;
		// for (int i = 0; i < playerStat.CurrentStatus.hp; i++)
		V_0 = 0;
		goto IL_00b5;
	}

IL_009f:
	{
		// heartList[i].enabled = true;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_19 = __this->___heartList_6;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21;
		L_21 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_19, L_20, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		NullCheck(L_21);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_21, (bool)1, NULL);
		// for (int i = 0; i < playerStat.CurrentStatus.hp; i++)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_00b5:
	{
		// for (int i = 0; i < playerStat.CurrentStatus.hp; i++)
		int32_t L_23 = V_0;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_24 = __this->___playerStat_7;
		NullCheck(L_24);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_25 = (&L_24->___CurrentStatus_6);
		int32_t L_26 = L_25->___hp_0;
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_009f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void HPHud::AddHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_AddHeart_m3EA23A71F22A1A5E151D2BE7FB766354349E4BF0 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heartList[idx].enabled = true;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_0 = __this->___heartList_6;
		int32_t L_1 = ___0_idx;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_0, L_1, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HPHud::RestoreHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_RestoreHeart_mB92098A41AB79C11984E1384DA5B06C636449D99 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heartList[idx].sprite = fillheart;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_0 = __this->___heartList_6;
		int32_t L_1 = ___0_idx;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_0, L_1, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___fillheart_4;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void HPHud::RemoveHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_RemoveHeart_m1033C7006C34F01E4A87416ED8096486B7B9646B (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heartList[idx].enabled = false;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_0 = __this->___heartList_6;
		int32_t L_1 = ___0_idx;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_0, L_1, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HPHud::DamageHeart(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_DamageHeart_m6D786269109C76536633375318C09E0DCDC5DA8B (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, int32_t ___0_idx, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// heartList[idx].sprite = emptyHeart;
		List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* L_0 = __this->___heartList_6;
		int32_t L_1 = ___0_idx;
		NullCheck(L_0);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4(L_0, L_1, List_1_get_Item_m6C5943676F2B102C43C31C7F5862385B5C486CE4_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___emptyHeart_5;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void HPHud::currentHpMotify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_currentHpMotify_m458322087E609B7481D2BF71102E5218B50B29D7 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int hp = playerStat.CurrentStatus.hp;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_0 = __this->___playerStat_7;
		NullCheck(L_0);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_1 = (&L_0->___CurrentStatus_6);
		int32_t L_2 = L_1->___hp_0;
		V_0 = L_2;
		// if(currentHeartCount > hp)
		int32_t L_3 = __this->___currentHeartCount_8;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0036;
		}
	}
	{
		// for(int i= currentHeartCount-1;i>=hp;i--)
		int32_t L_5 = __this->___currentHeartCount_8;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0030;
	}

IL_0025:
	{
		// DamageHeart(i);
		int32_t L_6 = V_1;
		HPHud_DamageHeart_m6D786269109C76536633375318C09E0DCDC5DA8B(__this, L_6, NULL);
		// for(int i= currentHeartCount-1;i>=hp;i--)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0030:
	{
		// for(int i= currentHeartCount-1;i>=hp;i--)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_004e;
	}

IL_0036:
	{
		// for (int i = hp; i < currentHeartCount; i--)
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_0045;
	}

IL_003a:
	{
		// RestoreHeart(i);
		int32_t L_11 = V_2;
		HPHud_RestoreHeart_mB92098A41AB79C11984E1384DA5B06C636449D99(__this, L_11, NULL);
		// for (int i = hp; i < currentHeartCount; i--)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0045:
	{
		// for (int i = hp; i < currentHeartCount; i--)
		int32_t L_13 = V_2;
		int32_t L_14 = __this->___currentHeartCount_8;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003a;
		}
	}

IL_004e:
	{
		// currentHeartCount = hp;
		int32_t L_15 = V_0;
		__this->___currentHeartCount_8 = L_15;
		// }
		return;
	}
}
// System.Void HPHud::maxHPModify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud_maxHPModify_m6368B730EA8C433447DFE23F3F87090D217A7F41 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int hp = playerStat.MaxStatus.hp;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_0 = __this->___playerStat_7;
		NullCheck(L_0);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_1 = (&L_0->___MaxStatus_5);
		int32_t L_2 = L_1->___hp_0;
		V_0 = L_2;
		// if (MaxHeartCount > hp)
		int32_t L_3 = __this->___MaxHeartCount_9;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0036;
		}
	}
	{
		// for (int i = MaxHeartCount-1; i >= hp; i--)
		int32_t L_5 = __this->___MaxHeartCount_9;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_5, 1));
		goto IL_0030;
	}

IL_0025:
	{
		// RemoveHeart(i);
		int32_t L_6 = V_1;
		HPHud_RemoveHeart_m1033C7006C34F01E4A87416ED8096486B7B9646B(__this, L_6, NULL);
		// for (int i = MaxHeartCount-1; i >= hp; i--)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0030:
	{
		// for (int i = MaxHeartCount-1; i >= hp; i--)
		int32_t L_8 = V_1;
		int32_t L_9 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_004e;
	}

IL_0036:
	{
		// for (int i = hp; i < MaxHeartCount; i--)
		int32_t L_10 = V_0;
		V_2 = L_10;
		goto IL_0045;
	}

IL_003a:
	{
		// AddHeart(i);
		int32_t L_11 = V_2;
		HPHud_AddHeart_m3EA23A71F22A1A5E151D2BE7FB766354349E4BF0(__this, L_11, NULL);
		// for (int i = hp; i < MaxHeartCount; i--)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0045:
	{
		// for (int i = hp; i < MaxHeartCount; i--)
		int32_t L_13 = V_2;
		int32_t L_14 = __this->___MaxHeartCount_9;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_003a;
		}
	}

IL_004e:
	{
		// MaxHeartCount = hp;
		int32_t L_15 = V_0;
		__this->___MaxHeartCount_9 = L_15;
		// }
		return;
	}
}
// System.Void HPHud::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HPHud__ctor_mE59A36F621A474210CD12988B99088FFFE57B887 (HPHud_t210313084B092D3D2FE041F34140456D2C5390DB* __this, const RuntimeMethod* method) 
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
// System.Void PausePanelScript::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PausePanelScript_Awake_m8994536EBB102AC7BE2684C5954510BEF54FCC35 (PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PauseCanvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0;
		L_0 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___PauseCanvas_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PauseCanvas_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PausePanelScript::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PausePanelScript_Pause_m406EC2917A16568FA387EA89AB81923345E556B6 (PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.GamePause(true);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_GamePause_mE56A2933E675220664226CF62D7AB0B4A2E3545D(L_0, (bool)1, NULL);
		// PauseCanvas.enabled = true;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___PauseCanvas_4;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void PausePanelScript::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PausePanelScript_Continue_mF16AE514E6EE42E85652E93FCCF3F3343FEB74AF (PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.GamePause(false);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_GamePause_mE56A2933E675220664226CF62D7AB0B4A2E3545D(L_0, (bool)0, NULL);
		// PauseCanvas.enabled = false;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_1 = __this->___PauseCanvas_4;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void PausePanelScript::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PausePanelScript_Exit_m9E5BC20A2BC273D42BEE604F382D5B727430D695 (PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502* __this, const RuntimeMethod* method) 
{
	{
		// GameManager.Instance.GameExit();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0;
		L_0 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		NullCheck(L_0);
		GameManager_GameExit_m8E04F0DB1D95D99EAF94996212A81F39A237ABD3(L_0, NULL);
		// }
		return;
	}
}
// System.Void PausePanelScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PausePanelScript__ctor_m500EB02B6105BEC46D1299E42C96083DE6DB0301 (PausePanelScript_tEBB507EF83EC68D6485A85D99ADC3442F83B5502* __this, const RuntimeMethod* method) 
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
// System.Void ScoreText::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_Awake_m2F98FF313F81DD790B8215F189F4D2590633757C (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___scoreText_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scoreText_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void ScoreText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_Start_m759AA9DD807E404A8F9D0B78E47F557B8148BC0B (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	{
		// AddDelegate();
		ScoreText_AddDelegate_mE3B3B46DBA0867B2114B0157408A0F93F542AA6E(__this, NULL);
		// }
		return;
	}
}
// System.Void ScoreText::ScoreUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_ScoreUpdate_mA57D9D4284D421898F2B65E420FB30CFAC49507D (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// scoreText.text = GameProfile.Instance.score.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___scoreText_4;
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_1;
		L_1 = GameProfile_get_Instance_mE855C3B9202F4FE5A0A6FC017A4323384ECDD2D2(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameProfile_get_score_m83942C887BC1C295872E5D258047D626C1D084B4_inline(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void ScoreText::AddDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText_AddDelegate_mE3B3B46DBA0867B2114B0157408A0F93F542AA6E (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreText_ScoreUpdate_mA57D9D4284D421898F2B65E420FB30CFAC49507D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameProfile.Instance.afterScoreSet += ScoreUpdate;
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_0;
		L_0 = GameProfile_get_Instance_mE855C3B9202F4FE5A0A6FC017A4323384ECDD2D2(NULL);
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_1 = L_0;
		NullCheck(L_1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1->___afterScoreSet_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)ScoreText_ScoreUpdate_mA57D9D4284D421898F2B65E420FB30CFAC49507D_RuntimeMethod_var), NULL);
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		NullCheck(L_1);
		L_1->___afterScoreSet_6 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___afterScoreSet_6), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ScoreText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreText__ctor_m26E347F37A18A125ED309A7D70B55CB275E11687 (ScoreText_t468933E86249D818C164AE993FDF4E0BA5D3BDAD* __this, const RuntimeMethod* method) 
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
// System.Void ObjectSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Start_mE19667397EFFE281AF098051957A34B21C97B6C3 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectSpawner_isSpawnOk_mB8CD490D200BAF15C448BB385BA52B9D787D60C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spawnSpeedSeconds = new WaitForSeconds(spawnSpeed);
		float L_0 = __this->___spawnSpeed_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_1 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_1, L_0, NULL);
		__this->___spawnSpeedSeconds_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnSpeedSeconds_10), (void*)L_1);
		// spawnOk = new WaitUntil(isSpawnOk);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_2, __this, (intptr_t)((void*)ObjectSpawner_isSpawnOk_mB8CD490D200BAF15C448BB385BA52B9D787D60C0_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_3 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_3, L_2, NULL);
		__this->___spawnOk_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawnOk_11), (void*)L_3);
		// Invoke("Spawn", startTime);
		float L_4 = __this->___startTime_7;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, L_4, NULL);
		// }
		return;
	}
}
// System.Void ObjectSpawner::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_Spawn_mA39F4B6723B90D0D32E9F97029CF14BEC1DCE6E8 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(SpawnCoroutine());
		RuntimeObject* L_0;
		L_0 = ObjectSpawner_SpawnCoroutine_mAECF98CE8D216A3B7A3F5FEB60B282C7B6A1D865(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ObjectSpawner::SpawnCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectSpawner_SpawnCoroutine_mAECF98CE8D216A3B7A3F5FEB60B282C7B6A1D865 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* L_0 = (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6*)il2cpp_codegen_object_new(U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSpawnCoroutineU3Ed__11__ctor_m94949A09C2DF364DBD71DCF6C57B609235EE2AED(L_0, 0, NULL);
		U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean ObjectSpawner::isSpawnOk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectSpawner_isSpawnOk_mB8CD490D200BAF15C448BB385BA52B9D787D60C0 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (spawnCount == beanObjects.Count)
		float L_0 = __this->___spawnCount_5;
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_1 = __this->___beanObjects_12;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline(L_1, Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		if ((!(((float)L_0) == ((float)((float)L_2)))))
		{
			goto IL_0016;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0016:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void ObjectSpawner::CallDie(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner_CallDie_m6D6997EDB6FC35978CE51BA6AED47C10889062F3 (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_a, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// beanObjects.Enqueue(a);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = __this->___beanObjects_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_a;
		NullCheck(L_0);
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_0, L_1, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ObjectSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectSpawner__ctor_mF75EFE9AB26EAEF6D1995A34FB35C2BDE08A083C (ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Queue<GameObject> beanObjects = new Queue<GameObject>();
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_0, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		__this->___beanObjects_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___beanObjects_12), (void*)L_0);
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
// System.Void ObjectSpawner/<SpawnCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoroutineU3Ed__11__ctor_m94949A09C2DF364DBD71DCF6C57B609235EE2AED (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ObjectSpawner/<SpawnCoroutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoroutineU3Ed__11_System_IDisposable_Dispose_m9B877D1F0C22198F24C63DBE3D2E8D81B42E84EB (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ObjectSpawner/<SpawnCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnCoroutineU3Ed__11_MoveNext_mBD38BFEA44462B2B18AB9906FD51DE19EA82A603 (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* V_4 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_0116;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0029:
	{
		// for (int i = 0; i < spawnCount; i++)
		V_2 = 0;
		goto IL_00d8;
	}

IL_0030:
	{
		// if (!beanObjects.TryDequeue(out obj))
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_3 = V_1;
		NullCheck(L_3);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_4 = L_3->___beanObjects_12;
		NullCheck(L_4);
		bool L_5;
		L_5 = Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E(L_4, (&V_3), Queue_1_TryDequeue_mD2A2EB716033403AB44C26DEC3140D1A62E3E71E_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0056;
		}
	}
	{
		// obj = Instantiate(spawnPrefab,gameObject.transform);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___spawnPrefab_8;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_7, L_10, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_3 = L_11;
	}

IL_0056:
	{
		// obj.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// Collider objCols = obj.GetComponent<Collider>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_3;
		NullCheck(L_13);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_14;
		L_14 = GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597(L_13, GameObject_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m4CB0FC4E59CE6C91F1106739EF364208A63E2597_RuntimeMethod_var);
		V_4 = L_14;
		// Vector3 gap = Vector3.up * objCols.bounds.extents.y * 2 * i;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_16 = V_4;
		NullCheck(L_16);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17;
		L_17 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_16, NULL);
		V_7 = L_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_7), NULL);
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, (2.0f), NULL);
		int32_t L_22 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, ((float)L_22), NULL);
		V_5 = L_23;
		// Vector3 spawnPos = transform.position + gap;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_24 = V_1;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_27, NULL);
		V_6 = L_28;
		// obj.transform.position = spawnPos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = V_3;
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_6;
		NullCheck(L_30);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_31, NULL);
		// Rigidbody objRigs = obj.GetComponent<Rigidbody>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = V_3;
		NullCheck(L_32);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33;
		L_33 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_32, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		// objRigs.AddForce(Vector3.down * objSpeed,ForceMode.VelocityChange);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_35 = V_1;
		NullCheck(L_35);
		float L_36 = L_35->___objSpeed_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, L_36, NULL);
		NullCheck(L_33);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_33, L_37, 2, NULL);
		// for (int i = 0; i < spawnCount; i++)
		int32_t L_38 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00d8:
	{
		// for (int i = 0; i < spawnCount; i++)
		int32_t L_39 = V_2;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->___spawnCount_5;
		if ((((float)((float)L_39)) < ((float)L_41)))
		{
			goto IL_0030;
		}
	}
	{
		// yield return spawnOk;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_42 = V_1;
		NullCheck(L_42);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_43 = L_42->___spawnOk_11;
		__this->___U3CU3E2__current_1 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_43);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00fa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return spawnSpeedSeconds;
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_44 = V_1;
		NullCheck(L_44);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_45 = L_44->___spawnSpeedSeconds_10;
		__this->___U3CU3E2__current_1 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_45);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0116:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// while (true)
		goto IL_0029;
	}
}
// System.Object ObjectSpawner/<SpawnCoroutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnCoroutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5BC241EA1D54FDF8843BFC6C3F465DB21B869297 (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ObjectSpawner/<SpawnCoroutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m9BB7C1131234825B7897DBAD33E72A04403615A4 (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m9BB7C1131234825B7897DBAD33E72A04403615A4_RuntimeMethod_var)));
	}
}
// System.Object ObjectSpawner/<SpawnCoroutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSpawnCoroutineU3Ed__11_System_Collections_IEnumerator_get_Current_m6797CA256354E2CF12887DB858812FBC04BF91FC (U3CSpawnCoroutineU3Ed__11_t9CA9D799CFCBDCD232E58C9E9077805FE497DEE6* __this, const RuntimeMethod* method) 
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
// System.Void Obstacle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_Awake_mF9F879CE0A4F34141362C4876AB00943D7BFD604 (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_mFA3569A48ADCE6AC293B0EC406B83E03C9EF15F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cols = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___cols_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cols_5), (void*)L_0);
		// rigs = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1;
		L_1 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigs_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigs_6), (void*)L_1);
		// spawner = transform.parent.GetComponent<ObjectSpawner>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_4;
		L_4 = Component_GetComponent_TisObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_mFA3569A48ADCE6AC293B0EC406B83E03C9EF15F4(L_3, Component_GetComponent_TisObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007_mFA3569A48ADCE6AC293B0EC406B83E03C9EF15F4_RuntimeMethod_var);
		__this->___spawner_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spawner_4), (void*)L_4);
		// obstcleData = GetComponent<StatusComponent>().BaseStatus as ObstcleData;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_5;
		L_5 = Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0(__this, Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		NullCheck(L_5);
		StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* L_6;
		L_6 = StatusComponent_get_BaseStatus_mAF4C0E408DBF9B13B768D24FA8E0AC828DEB5058_inline(L_5, NULL);
		__this->___obstcleData_9 = ((ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717*)IsInstClass((RuntimeObject*)L_6, ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obstcleData_9), (void*)((ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717*)IsInstClass((RuntimeObject*)L_6, ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Obstacle::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_FixedUpdate_m5C3471FB11B0EE651D32F6D7A1429FB99509289C (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
{
	{
		// rigs.velocity = Vector3.ClampMagnitude(rigs.velocity, limitYSpeed);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigs_6;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rigs_6;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_1, NULL);
		float L_3 = __this->___limitYSpeed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline(L_2, L_3, NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_4, NULL);
		// }
		return;
	}
}
// System.Void Obstacle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_OnDisable_m4F658D4A15930635CBDC38EC25B1DE53DFAAB051 (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigs.velocity = Vector3.zero;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigs_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_0);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_1, NULL);
		// if(ignored)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = __this->___ignored_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_2, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Physics.IgnoreCollision(ignored, cols, false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = __this->___ignored_10;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = __this->___cols_5;
		Physics_IgnoreCollision_mA8E5C54299FC47921E41BF864C7C2214621595D6(L_4, L_5, (bool)0, NULL);
	}

IL_002f:
	{
		// spawner.CallDie(gameObject);
		ObjectSpawner_t9B3FA5E78DB1643F987ECBB18E069FCE64FD0007* L_6 = __this->___spawner_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		ObjectSpawner_CallDie_m6D6997EDB6FC35978CE51BA6AED47C10889062F3(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Obstacle::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_OnCollisionEnter_mD1470ED2E41267A16B86DC43F014FAB847D9B237 (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(collision.gameObject.CompareTag("Ground"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_collision;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_2)
		{
			goto IL_00b5;
		}
	}
	{
		// float userYSize = collision.collider.bounds.extents.y * 2;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_3 = ___0_collision;
		NullCheck(L_3);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4;
		L_4 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_3, NULL);
		NullCheck(L_4);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_5;
		L_5 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_4, NULL);
		V_1 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		float L_7 = L_6.___y_3;
		V_0 = ((float)il2cpp_codegen_multiply(L_7, (2.0f)));
		// Vector3 rayStart = transform.position + Vector3.down * cols.bounds.extents.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11 = __this->___cols_5;
		NullCheck(L_11);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_12;
		L_12 = Collider_get_bounds_mCC32F749590E9A85C7930E5355661367F78E4CB4(L_11, NULL);
		V_1 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&V_1), NULL);
		float L_14 = L_13.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_15, NULL);
		// if(Physics.Raycast(rayStart,Vector3.down,userYSize+0.5f, mask))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		float L_18 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_19 = __this->___mask_8;
		int32_t L_20;
		L_20 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_19, NULL);
		bool L_21;
		L_21 = Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377(L_16, L_17, ((float)il2cpp_codegen_add(L_18, (0.5f))), L_20, NULL);
		if (!L_21)
		{
			goto IL_00b5;
		}
	}
	{
		// StatusComponent player = collision.gameObject.GetComponent<StatusComponent>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_22 = ___0_collision;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_22, NULL);
		NullCheck(L_23);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_24;
		L_24 = GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B(L_23, GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		// player.ApplyDamage(obstcleData.Status.damagePoint,Color.yellow);
		ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* L_25 = __this->___obstcleData_9;
		NullCheck(L_25);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 L_26;
		L_26 = StatusData_get_Status_m63AEB2D498163CBBAB20447308C40B9AA14FBA73_inline(L_25, NULL);
		int32_t L_27 = L_26.___damagePoint_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_24);
		StatusComponent_ApplyDamage_m0E9224EB62E5B26424FB28636AE82B4037B655AE(L_24, L_27, L_28, NULL);
		// ignored = collision.collider;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_29 = ___0_collision;
		NullCheck(L_29);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_30;
		L_30 = Collision_get_collider_mBB5A086C78FE4BE0589E216F899B611673ADD25D(L_29, NULL);
		__this->___ignored_10 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ignored_10), (void*)L_30);
	}

IL_00b5:
	{
		// }
		return;
	}
}
// System.Void Obstacle::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle_Die_m54E3C7ECA64A80F5ED05E78ABE3363A17A2515F8 (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
{
	{
		// GameProfile.Instance.score += obstcleData.ScorePoint;
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_0;
		L_0 = GameProfile_get_Instance_mE855C3B9202F4FE5A0A6FC017A4323384ECDD2D2(NULL);
		GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = GameProfile_get_score_m83942C887BC1C295872E5D258047D626C1D084B4_inline(L_1, NULL);
		ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* L_3 = __this->___obstcleData_9;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ObstcleData_get_ScorePoint_m64E209716E4F9D33AA585AA16B606677D51218FC_inline(L_3, NULL);
		NullCheck(L_1);
		GameProfile_set_score_m9CF9CCFE0E28C4E529EDD73FCA21B4D93D499FAE(L_1, ((int32_t)il2cpp_codegen_add(L_2, L_4)), NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Obstacle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Obstacle__ctor_mF400BC13FBAC15398D0EE2E05DF96F481257945D (Obstacle_tFF82FE6E199BF2A4ABE433366761F50C9A4E9A90* __this, const RuntimeMethod* method) 
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
// System.Void AttackableManager::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackableManager_OnTriggerEnter_m57133B887158D741DE1862CB9933274569484955 (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9723868790B0AA5CD2BD283CA0D070A59FE272FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* V_0 = NULL;
	{
		// StatusComponent stat = other.gameObject.GetComponent<StatusComponent>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_2;
		L_2 = GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B(L_1, GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		V_0 = L_2;
		// if (stat)
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// AttackList.Add(stat);
		HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* L_5 = __this->___AttackList_4;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = HashSet_1_Add_m9723868790B0AA5CD2BD283CA0D070A59FE272FE(L_5, L_6, HashSet_1_Add_m9723868790B0AA5CD2BD283CA0D070A59FE272FE_RuntimeMethod_var);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void AttackableManager::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackableManager_OnTriggerExit_mB1E8DF0B95C9F392235AC0C24E6370931E54059B (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* V_0 = NULL;
	{
		// StatusComponent stat = other.gameObject.GetComponent<StatusComponent>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_2;
		L_2 = GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B(L_1, GameObject_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_mA57A7D74F3734B0CE021C3D54FAC6F9E95C4662B_RuntimeMethod_var);
		V_0 = L_2;
		// if (stat)
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_3, NULL);
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// Remove(stat);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_5 = V_0;
		AttackableManager_Remove_mCFD57B4C8FCADAA5DD524227E9995A4875883680(__this, L_5, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void AttackableManager::Remove(StatusComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackableManager_Remove_mCFD57B4C8FCADAA5DD524227E9995A4875883680 (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* ___0_stat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_mE3A5724B367CE23C06B6FEFFA70AB17D56A5AEBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AttackList.Remove(stat);
		HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* L_0 = __this->___AttackList_4;
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_1 = ___0_stat;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Remove_mE3A5724B367CE23C06B6FEFFA70AB17D56A5AEBB(L_0, L_1, HashSet_1_Remove_mE3A5724B367CE23C06B6FEFFA70AB17D56A5AEBB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.Generic.HashSet`1<StatusComponent> AttackableManager::GetList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* AttackableManager_GetList_m376203471A83B4FE3ADBF766D58A43A9F2788D0B (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, const RuntimeMethod* method) 
{
	{
		// return AttackList;
		HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* L_0 = __this->___AttackList_4;
		return L_0;
	}
}
// System.Boolean AttackableManager::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttackableManager_Damage_m4EEB82FDA0095A92BC72C04F4A09A474CC684666 (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, int32_t ___0_applyedDamage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m70E8393C916B6CD0C913C01917E7E70A736708FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m125A406D6909C71F10653E4105EF7469D6A77A11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m76AA9BC922EF4D8EC56C0A422436728098EC8EAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m574B231ADC445C0FB859F03A17432FF83EF7DC25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43669CDBCE0645B56B2E7FA053B61D2634128483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m4F711BA804C9D6CEB11A55D688F6AD6C391BA0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD37F5F85E6A3D770BC76A7B15DD892FD20A7F181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA6AF2056F0EE408D464B4A36C167EE6E7F0FF51E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* V_1 = NULL;
	Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191 V_2;
	memset((&V_2), 0, sizeof(V_2));
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* V_3 = NULL;
	int32_t V_4 = 0;
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* V_5 = NULL;
	{
		// bool isDied = false;
		V_0 = (bool)0;
		// List<StatusComponent> dieList = new List<StatusComponent>();
		List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_0 = (List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C*)il2cpp_codegen_object_new(List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mD37F5F85E6A3D770BC76A7B15DD892FD20A7F181(L_0, List_1__ctor_mD37F5F85E6A3D770BC76A7B15DD892FD20A7F181_RuntimeMethod_var);
		V_1 = L_0;
		// foreach (var target in GetList())
		HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* L_1;
		L_1 = AttackableManager_GetList_m376203471A83B4FE3ADBF766D58A43A9F2788D0B_inline(__this, NULL);
		NullCheck(L_1);
		Enumerator_t613CB73C940F6E30552F1618D335A5A6E0644191 L_2;
		L_2 = HashSet_1_GetEnumerator_m574B231ADC445C0FB859F03A17432FF83EF7DC25(L_1, HashSet_1_GetEnumerator_m574B231ADC445C0FB859F03A17432FF83EF7DC25_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m70E8393C916B6CD0C913C01917E7E70A736708FF((&V_2), Enumerator_Dispose_m70E8393C916B6CD0C913C01917E7E70A736708FF_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0039_1;
			}

IL_0016_1:
			{
				// foreach (var target in GetList())
				StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_3;
				L_3 = Enumerator_get_Current_m76AA9BC922EF4D8EC56C0A422436728098EC8EAE_inline((&V_2), Enumerator_get_Current_m76AA9BC922EF4D8EC56C0A422436728098EC8EAE_RuntimeMethod_var);
				V_3 = L_3;
				// target.ApplyDamage(applyedDamage, Color.red);
				StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_4 = V_3;
				int32_t L_5 = ___0_applyedDamage;
				Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
				L_6 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
				NullCheck(L_4);
				StatusComponent_ApplyDamage_m0E9224EB62E5B26424FB28636AE82B4037B655AE(L_4, L_5, L_6, NULL);
				// if (!target.isActiveAndEnabled)
				StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_7 = V_3;
				NullCheck(L_7);
				bool L_8;
				L_8 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_7, NULL);
				if (L_8)
				{
					goto IL_0039_1;
				}
			}
			{
				// dieList.Add(target);
				List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_9 = V_1;
				StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_10 = V_3;
				NullCheck(L_9);
				List_1_Add_m43669CDBCE0645B56B2E7FA053B61D2634128483_inline(L_9, L_10, List_1_Add_m43669CDBCE0645B56B2E7FA053B61D2634128483_RuntimeMethod_var);
			}

IL_0039_1:
			{
				// foreach (var target in GetList())
				bool L_11;
				L_11 = Enumerator_MoveNext_m125A406D6909C71F10653E4105EF7469D6A77A11((&V_2), Enumerator_MoveNext_m125A406D6909C71F10653E4105EF7469D6A77A11_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_0052;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0052:
	{
		// if (dieList.Count > 0)
		List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_inline(L_12, List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_RuntimeMethod_var);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		// isDied = true;
		V_0 = (bool)1;
		goto IL_0083;
	}

IL_005f:
	{
		// int last = dieList.Count - 1;
		List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_inline(L_14, List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_RuntimeMethod_var);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		// StatusComponent died = dieList[last];
		List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_16 = V_1;
		int32_t L_17 = V_4;
		NullCheck(L_16);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_18;
		L_18 = List_1_get_Item_mA6AF2056F0EE408D464B4A36C167EE6E7F0FF51E(L_16, L_17, List_1_get_Item_mA6AF2056F0EE408D464B4A36C167EE6E7F0FF51E_RuntimeMethod_var);
		V_5 = L_18;
		// Remove(died);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_19 = V_5;
		AttackableManager_Remove_mCFD57B4C8FCADAA5DD524227E9995A4875883680(__this, L_19, NULL);
		// dieList.RemoveAt(last);
		List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_20 = V_1;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		List_1_RemoveAt_m4F711BA804C9D6CEB11A55D688F6AD6C391BA0E0(L_20, L_21, List_1_RemoveAt_m4F711BA804C9D6CEB11A55D688F6AD6C391BA0E0_RuntimeMethod_var);
	}

IL_0083:
	{
		// while (dieList.Count > 0)
		List_1_t3EF72E008054D29186AAD0B1B5C9A1C5096F471C* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_inline(L_22, List_1_get_Count_m4F653E06D76DDAF7224DAB61B9923EE4AC0746A5_RuntimeMethod_var);
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_005f;
		}
	}
	{
		// return isDied;
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Void AttackableManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttackableManager__ctor_m7D67A5708B9783397A52EC0BD4ABCAF98E5075B0 (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m68D4F5AB16A1D4508D09AD884975C999E32620BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HashSet<StatusComponent> AttackList = new HashSet<StatusComponent>();
		HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* L_0 = (HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8*)il2cpp_codegen_object_new(HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		HashSet_1__ctor_m68D4F5AB16A1D4508D09AD884975C999E32620BF(L_0, HashSet_1__ctor_m68D4F5AB16A1D4508D09AD884975C999E32620BF_RuntimeMethod_var);
		__this->___AttackList_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AttackList_4), (void*)L_0);
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
// System.Void SkillContainer::set_normalSkillAction(SkillAction[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_set_normalSkillAction_m01EA23BFA8800EB3C01D17D7B53C954BB3B6D4DD (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] normalSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = ___0_value;
		__this->___U3CnormalSkillActionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnormalSkillActionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// SkillAction[] SkillContainer::get_normalSkillAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834 (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] normalSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = __this->___U3CnormalSkillActionU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void SkillContainer::set_powerSkillAction(SkillAction[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_set_powerSkillAction_m6B57A1655299EF1A1986F4F0F8096459FAD3A2DE (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] powerSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = ___0_value;
		__this->___U3CpowerSkillActionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpowerSkillActionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// SkillAction[] SkillContainer::get_powerSkillAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* SkillContainer_get_powerSkillAction_m131FDBB67F1492CFB65BEA452E6C879AF5765AC6 (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] powerSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = __this->___U3CpowerSkillActionU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void SkillContainer::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_Awake_mE3975F4A7A3A4C3BE2BD0E62702865478F123AAD (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// normalSkillAction = new SkillAction[normalSkill.Length];
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_0 = __this->___normalSkill_4;
		NullCheck(L_0);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_1 = (SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014*)(SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014*)SZArrayNew(SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		SkillContainer_set_normalSkillAction_m01EA23BFA8800EB3C01D17D7B53C954BB3B6D4DD_inline(__this, L_1, NULL);
		// powerSkillAction = new SkillAction[powerSkill.Length];
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_2 = __this->___powerSkill_6;
		NullCheck(L_2);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_3 = (SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014*)(SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014*)SZArrayNew(SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		SkillContainer_set_powerSkillAction_m6B57A1655299EF1A1986F4F0F8096459FAD3A2DE_inline(__this, L_3, NULL);
		// Init();
		SkillContainer_Init_m3BFE4ED3D222897A2325187F2126C9A043B86769(__this, NULL);
		// }
		return;
	}
}
// System.Void SkillContainer::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_Init_m3BFE4ED3D222897A2325187F2126C9A043B86769 (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
{
	{
		// skillInit(normalSkill, normalSkillAction);
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_0 = __this->___normalSkill_4;
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_1;
		L_1 = SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834_inline(__this, NULL);
		SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01(__this, L_0, L_1, NULL);
		// skillInit(powerSkill, powerSkillAction);
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_2 = __this->___powerSkill_6;
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_3;
		L_3 = SkillContainer_get_powerSkillAction_m131FDBB67F1492CFB65BEA452E6C879AF5765AC6_inline(__this, NULL);
		SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void SkillContainer::RemoveComponent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_RemoveComponent_m174A6AF607F7AB968FB4F6F0FA741089D0D5EF2C (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, int32_t ___0_whatSkill, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(normalSkillAction[whatSkill]);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0;
		L_0 = SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834_inline(__this, NULL);
		int32_t L_1 = ___0_whatSkill;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// Destroy(powerSkillAction[whatSkill]);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_4;
		L_4 = SkillContainer_get_powerSkillAction_m131FDBB67F1492CFB65BEA452E6C879AF5765AC6_inline(__this, NULL);
		int32_t L_5 = ___0_whatSkill;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_7, NULL);
		// }
		return;
	}
}
// System.Void SkillContainer::skillInit(SkillData[],SkillAction[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01 (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* ___0_data, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___1_skillActions, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t* V_1 = NULL;
	{
		// for (int i = 0; i < data.Length; i++)
		V_0 = 0;
		goto IL_003a;
	}

IL_0004:
	{
		// string skillName = data[i].StructSkillData.SkillActionName;
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_0 = ___0_data;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_4;
		L_4 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_3, NULL);
		String_t* L_5 = L_4.___SkillActionName_4;
		// Type t = Type.GetType(skillName);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = il2cpp_codegen_get_type(L_5, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, SkillContainer_skillInit_mAD97878D5ED46392FD9D2DCFD67A5D96610D3C01_RuntimeMethod_var);
		V_1 = L_6;
		// skillActions[i] = gameObject.AddComponent(t) as SkillAction;
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_7 = ___1_skillActions;
		int32_t L_8 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Type_t* L_10 = V_1;
		NullCheck(L_9);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_11;
		L_11 = GameObject_AddComponent_mDF246771EC34613FA6AF0C98D443368FB43E9F36(L_9, L_10, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)IsInstClass((RuntimeObject*)L_11, SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01_il2cpp_TypeInfo_var)));
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)IsInstClass((RuntimeObject*)L_11, SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01_il2cpp_TypeInfo_var)));
		// skillActions[i].init(data[i]);
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_12 = ___1_skillActions;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_16 = ___0_data;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		SkillAction_init_mA369F43E4E78EEA0151939A850DF6871347F6738(L_15, L_19, NULL);
		// for (int i = 0; i < data.Length; i++)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < data.Length; i++)
		int32_t L_21 = V_0;
		SkillDataU5BU5D_tA80CA0E0B3A1FF42F44D77515882376FB4A56C96* L_22 = ___0_data;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillContainer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillContainer__ctor_mCC9E38F97A9AFB116779DCF5075DCD6739EF45AC (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
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
// System.Int32 ObstcleData::get_ScorePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObstcleData_get_ScorePoint_m64E209716E4F9D33AA585AA16B606677D51218FC (ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* __this, const RuntimeMethod* method) 
{
	{
		// public int ScorePoint { get { return scorePoint; } }
		int32_t L_0 = __this->___scorePoint_5;
		return L_0;
	}
}
// UnityEngine.Mesh ObstcleData::get_ObstacleMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ObstcleData_get_ObstacleMesh_mBCF664D592FA3CB838E7DF5630D1A854C77F659F (ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* __this, const RuntimeMethod* method) 
{
	{
		// public Mesh ObstacleMesh { get { return obstacleMesh; } }
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = __this->___obstacleMesh_6;
		return L_0;
	}
}
// System.Void ObstcleData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObstcleData__ctor_mF716B54805E341565C6622D6561EEF7CEE8ABF00 (ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* __this, const RuntimeMethod* method) 
{
	{
		StatusData__ctor_m904553870DD2370957AEEC4421A065B844F9AB51(__this, NULL);
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
// StructSkill SkillData::get_StructSkillData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4 (SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* __this, const RuntimeMethod* method) 
{
	{
		// public StructSkill StructSkillData { get { return structSkillData; } }
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_0 = __this->___structSkillData_4;
		return L_0;
	}
}
// System.Void SkillData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillData__ctor_m92A90D40CE7CB539E5E1F06C0FFE9E48D04EDFBD (SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// StructStatus StatusData::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 StatusData_get_Status_m63AEB2D498163CBBAB20447308C40B9AA14FBA73 (StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* __this, const RuntimeMethod* method) 
{
	{
		// public StructStatus Status { get { return status; } }
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 L_0 = __this->___status_4;
		return L_0;
	}
}
// System.Void StatusData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusData__ctor_m904553870DD2370957AEEC4421A065B844F9AB51 (StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Int32 WeaponData::get_Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WeaponData_get_Damage_m0CAF0B70AB59ACDAD496B2E9BFF18A62A2667579 (WeaponData_t455C1D730F31CB2ED917971BE9353ECBD407D5CD* __this, const RuntimeMethod* method) 
{
	{
		// public int Damage { get { return damage; } }
		int32_t L_0 = __this->___damage_4;
		return L_0;
	}
}
// System.Void WeaponData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponData__ctor_m9BAA8DC969C204CCFA634628DB5E110AA926EA64 (WeaponData_t455C1D730F31CB2ED917971BE9353ECBD407D5CD* __this, const RuntimeMethod* method) 
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
// System.Void SkillAction::set_SkillData(SkillData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_set_SkillData_m3B3BCD49CD2C44F5D2BA53C51262C0B4A3441502 (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SkillData SkillData { set { skillData = value; } get { return skillData; } }
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_0 = ___0_value;
		__this->___skillData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skillData_4), (void*)L_0);
		// public SkillData SkillData { set { skillData = value; } get { return skillData; } }
		return;
	}
}
// SkillData SkillAction::get_SkillData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* SkillAction_get_SkillData_m04CAFCC19FB3CDA0F7BFB020CD2AF7E67FB3D79E (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) 
{
	{
		// public SkillData SkillData { set { skillData = value; } get { return skillData; } }
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_0 = __this->___skillData_4;
		return L_0;
	}
}
// System.Void SkillAction::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_Awake_m82B084C70A9A397DF4C5F332B04A84D1193BC3AF (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual void Awake() { }
		return;
	}
}
// System.Void SkillAction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_Start_m8209E9F3BF6221DCFA51FA98785491CA3BD14C06 (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (skillData.StructSkillData.effect.Length == 0)
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_0 = __this->___skillData_4;
		NullCheck(L_0);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_1;
		L_1 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_0, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = L_1.___effect_3;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// particle = new ParticleSystem[skillData.StructSkillData.effect.Length];
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_3 = __this->___skillData_4;
		NullCheck(L_3);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_4;
		L_4 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_3, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = L_4.___effect_3;
		NullCheck(L_5);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_6 = (ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)(ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6*)SZArrayNew(ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		__this->___particle_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___particle_5), (void*)L_6);
		// for (int i = 0; i < particle.Length; i++)
		V_0 = 0;
		goto IL_007b;
	}

IL_0035:
	{
		// GameObject psObject = Instantiate(skillData.StructSkillData.effect[i], transform);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_7 = __this->___skillData_4;
		NullCheck(L_7);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_8;
		L_8 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_7, NULL);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = L_8.___effect_3;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_12, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_1 = L_14;
		// psObject.transform.position = transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_1;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		NullCheck(L_16);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_18, NULL);
		// particle[i] = psObject.GetComponent<ParticleSystem>();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_19 = __this->___particle_5;
		int32_t L_20 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_1;
		NullCheck(L_21);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22;
		L_22 = GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA(L_21, GameObject_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m5C3C1AA51E25BAFDD8D40BA1EDC7DA8871AF29AA_RuntimeMethod_var);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*)L_22);
		// for (int i = 0; i < particle.Length; i++)
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_007b:
	{
		// for (int i = 0; i < particle.Length; i++)
		int32_t L_24 = V_0;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_25 = __this->___particle_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void SkillAction::init(SkillData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction_init_mA369F43E4E78EEA0151939A850DF6871347F6738 (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* ___0__skillData, const RuntimeMethod* method) 
{
	{
		// SkillData = _skillData;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_0 = ___0__skillData;
		SkillAction_set_SkillData_m3B3BCD49CD2C44F5D2BA53C51262C0B4A3441502_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void SkillAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, const RuntimeMethod* method) 
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
// System.Void SkillActionDamage::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDamage_Awake_m7967A2F276D5DC33FB30FFCACFCF04A544B78778 (SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SkillAction_Awake_m82B084C70A9A397DF4C5F332B04A84D1193BC3AF(__this, NULL);
		// stat = GetComponent<StatusComponent>();
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_0;
		L_0 = Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0(__this, Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		__this->___stat_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stat_6), (void*)L_0);
		// attackableManager = GetComponent<AttackableManager>();
		AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* L_1;
		L_1 = Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE(__this, Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE_RuntimeMethod_var);
		__this->___attackableManager_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackableManager_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void SkillActionDamage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDamage_Start_mF187A693F6C3EC759C276615DDA9BCF25B3896B5 (SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		SkillAction_Start_m8209E9F3BF6221DCFA51FA98785491CA3BD14C06(__this, NULL);
		// particle[0].transform.rotation = Quaternion.Euler(-90, 0, 0);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-90.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_3);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_4, NULL);
		// particle[0].transform.position += Vector3.up;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_5 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_5);
		int32_t L_6 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = L_8;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_12, NULL);
		// }
		return;
	}
}
// System.Boolean SkillActionDamage::Damage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkillActionDamage_Damage_m4FA19D3AD87F15C6561B431CA2E9B8A1D3609D70 (SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int applyedDamage = stat.CurrentStatus.damagePoint + skillData.StructSkillData.abilityValue[0];
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_0 = __this->___stat_6;
		NullCheck(L_0);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_1 = (&L_0->___CurrentStatus_6);
		int32_t L_2 = L_1->___damagePoint_1;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_3 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_3);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_4;
		L_4 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_3, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4.___abilityValue_0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, L_7));
		// particle[0].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_8 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_8);
		int32_t L_9 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_10, NULL);
		// return attackableManager.Damage(applyedDamage);
		AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* L_11 = __this->___attackableManager_7;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		bool L_13;
		L_13 = AttackableManager_Damage_m4EEB82FDA0095A92BC72C04F4A09A474CC684666(L_11, L_12, NULL);
		return L_13;
	}
}
// System.Void SkillActionDamage::execute(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDamage_execute_m4FA06967C1614A309ED8794B1D4C7ECE8913133F (SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189* __this, int32_t* ___0_gaugeRate, float* ___1_coolTime, const RuntimeMethod* method) 
{
	{
		// coolTime = 0;
		float* L_0 = ___1_coolTime;
		*((float*)L_0) = (float)(0.0f);
		// if(Damage())
		bool L_1;
		L_1 = SkillActionDamage_Damage_m4FA19D3AD87F15C6561B431CA2E9B8A1D3609D70(__this, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// gaugeRate = skillData.StructSkillData.gaugeRaiseValue[0];
		int32_t* L_2 = ___0_gaugeRate;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_3 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_3);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_4;
		L_4 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_3, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4.___gaugeRaiseValue_1;
		NullCheck(L_5);
		int32_t L_6 = 0;
		int32_t L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		*((int32_t*)L_2) = (int32_t)L_7;
		return;
	}

IL_0024:
	{
		// gaugeRate = 0;
		int32_t* L_8 = ___0_gaugeRate;
		*((int32_t*)L_8) = (int32_t)0;
		// }
		return;
	}
}
// System.Void SkillActionDamage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDamage__ctor_mA8AED56BA51DEBF9A49314A1FEB31BF5DCB04829 (SkillActionDamage_tF8AEDB158956A376BFB2C8A3DFCA50695C881189* __this, const RuntimeMethod* method) 
{
	{
		SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F(__this, NULL);
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
// System.Void SkillActionDefense::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDefense_Start_m8661AA60AD1696AF2974233A15508D4775A8EC04 (SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startPos = transform.position + Vector3.down * 1.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (1.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_3, NULL);
		__this->___startPos_7 = L_4;
		// direction = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___direction_8 = L_5;
		// distance=4;
		__this->___distance_9 = (4.0f);
		// mask = LayerMask.GetMask("Obstacle");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		int32_t L_8;
		L_8 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_7, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_9;
		L_9 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_8, NULL);
		__this->___mask_10 = L_9;
		// }
		return;
	}
}
// System.Collections.IEnumerator SkillActionDefense::Defense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkillActionDefense_Defense_mDF3849D3F6F771668CA2F4E787F8553E58866258 (SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* L_0 = (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30*)il2cpp_codegen_object_new(U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDefenseU3Ed__7__ctor_m3E8AEF3D1DF4F5D4347C369CA624F94A9319B126(L_0, 0, NULL);
		U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SkillActionDefense::execute(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDefense_execute_m2DC12E39E3472BA1F8B06416FEFAD89671715827 (SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* __this, int32_t* ___0_gaugeRate, float* ___1_coolTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA5AED1875208F61EA92930E98EC1B0E438D2217C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gaugeRate = 0;
		int32_t* L_0 = ___0_gaugeRate;
		*((int32_t*)L_0) = (int32_t)0;
		// coolTime = skillData.StructSkillData.time[1];
		float* L_1 = ___1_coolTime;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_2 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_2);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_3;
		L_3 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_2, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3.___time_2;
		NullCheck(L_4);
		int32_t L_5 = 1;
		float L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		*((float*)L_1) = (float)L_6;
		// if (isRun == null)
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7 = __this->___isRun_11;
		if (L_7)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.Log("Run!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA5AED1875208F61EA92930E98EC1B0E438D2217C, NULL);
		// isRun = StartCoroutine(Defense());
		RuntimeObject* L_8;
		L_8 = SkillActionDefense_Defense_mDF3849D3F6F771668CA2F4E787F8553E58866258(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		__this->___isRun_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isRun_11), (void*)L_9);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void SkillActionDefense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionDefense__ctor_m07829768084A6BF6AA637A50EB6B74F51AA8C7D3 (SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* __this, const RuntimeMethod* method) 
{
	{
		SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F(__this, NULL);
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
// System.Void SkillActionDefense/<Defense>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefenseU3Ed__7__ctor_m3E8AEF3D1DF4F5D4347C369CA624F94A9319B126 (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SkillActionDefense/<Defense>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefenseU3Ed__7_System_IDisposable_Dispose_m13635C0E695167794982F1BFDC6E50EA7FA475E9 (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SkillActionDefense/<Defense>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefenseU3Ed__7_MoveNext_m39960F117999D1F69208AF19564B0D8A4B2ACF26 (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57BCCAF2D8C17B768154651F84AFBC3C06A54E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE89DC632A348351745EE0BCBEC9548271B76A699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* V_1 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0177;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentTIme = 0;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentTIme_6 = (0.0f);
		goto IL_017e;
	}

IL_0031:
	{
		// if(Physics.Raycast(startPos,direction,out hit,distance, mask))
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_5 = V_1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___startPos_7;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_7 = V_1;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___direction_8;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___distance_9;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_11 = V_1;
		NullCheck(L_11);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = L_11->___mask_10;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_12, NULL);
		bool L_14;
		L_14 = Physics_Raycast_m56120FFEF0D4F0A44CCA505B5C946E6FB8742F12(L_6, L_8, (&V_2), L_10, L_13, NULL);
		if (!L_14)
		{
			goto IL_0155;
		}
	}
	{
		// Debug.Log("??? ???");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE89DC632A348351745EE0BCBEC9548271B76A699, NULL);
		// Debug.DrawLine(startPos + Vector3.left*1.1f, startPos + direction * distance, Color.red);
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_15 = V_1;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___startPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (1.10000002f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_18, NULL);
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_20 = V_1;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___startPos_7;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_22 = V_1;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___direction_8;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->___distance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_26, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_19, L_27, L_28, NULL);
		// RaycastHit[] hits = Physics.RaycastAll(startPos, direction,50,mask);
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_29 = V_1;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29->___startPos_7;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_31 = V_1;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_31->___direction_8;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_33 = V_1;
		NullCheck(L_33);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_34 = L_33->___mask_10;
		int32_t L_35;
		L_35 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_34, NULL);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_36;
		L_36 = Physics_RaycastAll_m69ED0FF0B70ADBC45B907783C87B308E786F6D51(L_30, L_32, (50.0f), L_35, NULL);
		V_3 = L_36;
		// for(int i=0;i<hits.Length;i++)
		V_4 = 0;
		goto IL_0149;
	}

IL_00cb:
	{
		// Debug.Log("?????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA57BCCAF2D8C17B768154651F84AFBC3C06A54E4, NULL);
		// Debug.DrawLine(startPos + Vector3.left, startPos + direction * distance, Color.red);
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_37 = V_1;
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = L_37->___startPos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_38, L_39, NULL);
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_41 = V_1;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___startPos_7;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_43 = V_1;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = L_43->___direction_8;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_45 = V_1;
		NullCheck(L_45);
		float L_46 = L_45->___distance_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_42, L_47, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49;
		L_49 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_40, L_48, L_49, NULL);
		// Rigidbody other = hits[i].collider.GetComponent<Rigidbody>();
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_50 = V_3;
		int32_t L_51 = V_4;
		NullCheck(L_50);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_52;
		L_52 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), NULL);
		NullCheck(L_52);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_53;
		L_53 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_52, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		// int force = skillData.StructSkillData.abilityValue[0];
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_54 = V_1;
		NullCheck(L_54);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_55 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_54)->___skillData_4;
		NullCheck(L_55);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_56;
		L_56 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_55, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_57 = L_56.___abilityValue_0;
		NullCheck(L_57);
		int32_t L_58 = 0;
		int32_t L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		V_5 = L_59;
		// other.velocity = Vector3.up * force;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		int32_t L_61 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, ((float)L_61), NULL);
		NullCheck(L_53);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_53, L_62, NULL);
		// for(int i=0;i<hits.Length;i++)
		int32_t L_63 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_0149:
	{
		// for(int i=0;i<hits.Length;i++)
		int32_t L_64 = V_4;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_65 = V_3;
		NullCheck(L_65);
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_00cb;
		}
	}
	{
		// break;
		goto IL_019b;
	}

IL_0155:
	{
		// currentTIme += Time.deltaTime;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_66 = V_1;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_67 = V_1;
		NullCheck(L_67);
		float L_68 = L_67->___currentTIme_6;
		float L_69;
		L_69 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_66);
		L_66->___currentTIme_6 = ((float)il2cpp_codegen_add(L_68, L_69));
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0177:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_017e:
	{
		// while(currentTIme <= skillData.StructSkillData.time[0])
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_70 = V_1;
		NullCheck(L_70);
		float L_71 = L_70->___currentTIme_6;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_72 = V_1;
		NullCheck(L_72);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_73 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_72)->___skillData_4;
		NullCheck(L_73);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_74;
		L_74 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_73, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_75 = L_74.___time_2;
		NullCheck(L_75);
		int32_t L_76 = 0;
		float L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		if ((((float)L_71) <= ((float)L_77)))
		{
			goto IL_0031;
		}
	}

IL_019b:
	{
		// isRun = null;
		SkillActionDefense_tCECEE394320D87588C77037150E6476BE235E5A0* L_78 = V_1;
		NullCheck(L_78);
		L_78->___isRun_11 = (Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_78->___isRun_11), (void*)(Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object SkillActionDefense/<Defense>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefenseU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2BD3944984CA51261A75A06A1561F17A7223BB27 (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SkillActionDefense/<Defense>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefenseU3Ed__7_System_Collections_IEnumerator_Reset_m298A4FEFF3BA3545C60D1E08E925B947640BD40C (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDefenseU3Ed__7_System_Collections_IEnumerator_Reset_m298A4FEFF3BA3545C60D1E08E925B947640BD40C_RuntimeMethod_var)));
	}
}
// System.Object SkillActionDefense/<Defense>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefenseU3Ed__7_System_Collections_IEnumerator_get_Current_mFAF95F14CF1562F61216265BA1890C98D6AF9BCD (U3CDefenseU3Ed__7_t8C8671A12F676F5EE8ED897942D3EBADE2F2BF30* __this, const RuntimeMethod* method) 
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
// System.Void SkillActionJump::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJump_Awake_m6D6371392C206A48A79768E618F31C9BDCE4ED19 (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SkillAction_Awake_m82B084C70A9A397DF4C5F332B04A84D1193BC3AF(__this, NULL);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_7), (void*)L_0);
		// }
		return;
	}
}
// System.Void SkillActionJump::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJump_Start_mCA4DE3459C89A17412F00138A31714D218A4232A (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		SkillAction_Start_m8209E9F3BF6221DCFA51FA98785491CA3BD14C06(__this, NULL);
		// startPos = transform.position + Vector3.down * 1.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, (1.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_1, L_3, NULL);
		__this->___startPos_8 = L_4;
		// direction = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___direction_9 = L_5;
		// distance = 2.7f;
		__this->___distance_10 = (2.70000005f);
		// }
		return;
	}
}
// System.Boolean SkillActionJump::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkillActionJump_Jump_m5D3649B1DF6E7431EACA68EACCD461BB1BC2060D (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		s_Il2CppMethodInitialized = true;
	}
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (isGround)
		bool L_0 = __this->___isGround_6;
		if (!L_0)
		{
			goto IL_00b8;
		}
	}
	{
		// particle[0].Play();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_1 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_1);
		int32_t L_2 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_3, NULL);
		// LayerMask mask = LayerMask.GetMask("Obstacle");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDDB91D5B0BDD1824A4CC18C279F4CF0A96D4A900);
		int32_t L_6;
		L_6 = LayerMask_GetMask_m99295ECDD50C4874CA4ABC9448E3F238A023C6F2(L_5, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_7;
		L_7 = LayerMask_op_Implicit_m01C8996A2CB2085328B9C33539C43139660D8222(L_6, NULL);
		V_0 = L_7;
		// if (!Physics.Raycast(startPos, direction, distance, mask))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___startPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___direction_9;
		float L_10 = __this->___distance_10;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = V_0;
		int32_t L_12;
		L_12 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_11, NULL);
		bool L_13;
		L_13 = Physics_Raycast_m0679FB03C9AFC1E803B8F8AE6CAB409670D31377(L_8, L_9, L_10, L_12, NULL);
		if (L_13)
		{
			goto IL_00b8;
		}
	}
	{
		// Debug.DrawLine(startPos + Vector3.right, startPos + direction * distance,Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___startPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->___startPos_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___direction_9;
		float L_19 = __this->___distance_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_17, L_20, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_16, L_21, L_22, NULL);
		// rigid.AddForce(Vector3.up * skillData.StructSkillData.abilityValue[0], ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23 = __this->___rigid_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_25 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_25);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_26;
		L_26 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_25, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = L_26.___abilityValue_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_24, ((float)L_29), NULL);
		NullCheck(L_23);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_23, L_30, 2, NULL);
		// isGround = false;
		__this->___isGround_6 = (bool)0;
		// return true;
		return (bool)1;
	}

IL_00b8:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void SkillActionJump::OnCollisionStay(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJump_OnCollisionStay_mD89CE43F7310DC5BCA59539261F6D9E9F1137975 (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.CompareTag("Ground"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isGround = true;
		__this->___isGround_6 = (bool)1;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SkillActionJump::OnCollisionExit(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJump_OnCollisionExit_m14A9F6F1CA9A4A0ABAFD7850EFC39D234932224F (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.CompareTag("Ground"))
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_other;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_1, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// isGround = false;
		__this->___isGround_6 = (bool)0;
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void SkillActionJump::execute(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJump_execute_m7CA1DDF892517E5F457A8EE9D028ACF2C34102C1 (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, int32_t* ___0_gaugeRate, float* ___1_coolTime, const RuntimeMethod* method) 
{
	{
		// gaugeRate = 0;
		int32_t* L_0 = ___0_gaugeRate;
		*((int32_t*)L_0) = (int32_t)0;
		// coolTime = 0;
		float* L_1 = ___1_coolTime;
		*((float*)L_1) = (float)(0.0f);
		// if (Jump())
		bool L_2;
		L_2 = SkillActionJump_Jump_m5D3649B1DF6E7431EACA68EACCD461BB1BC2060D(__this, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// gaugeRate = skillData.StructSkillData.gaugeRaiseValue[0];
		int32_t* L_3 = ___0_gaugeRate;
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_4 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_4);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_5;
		L_5 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_4, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5.___gaugeRaiseValue_1;
		NullCheck(L_6);
		int32_t L_7 = 0;
		int32_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		*((int32_t*)L_3) = (int32_t)L_8;
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void SkillActionJump::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJump__ctor_mAAA977A09CE4D95BDD183CC70FE93A991CB724D9 (SkillActionJump_t504F735D85392FD9DEAE34E4E8F084E2B5E0D298* __this, const RuntimeMethod* method) 
{
	{
		SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F(__this, NULL);
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
// System.Void SkillActionJumpAttack::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJumpAttack_Awake_m0FD713666B325479C269DADA7A3F4C3B3BC1AF0A (SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SkillAction_Awake_m82B084C70A9A397DF4C5F332B04A84D1193BC3AF(__this, NULL);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_6), (void*)L_0);
		// attackManager = GetComponent<AttackableManager>();
		AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* L_1;
		L_1 = Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE(__this, Component_GetComponent_TisAttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1_m4A249D3E91B09A6965BCD124DE3DC45D0F0FBADE_RuntimeMethod_var);
		__this->___attackManager_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackManager_8), (void*)L_1);
		// stat = GetComponent<StatusComponent>();
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_2;
		L_2 = Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0(__this, Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		__this->___stat_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stat_9), (void*)L_2);
		// }
		return;
	}
}
// System.Void SkillActionJumpAttack::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJumpAttack_Start_m6CA44072975A0E5E54DD6A7D3D193CE91F2E3DBF (SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Start();
		SkillAction_Start_m8209E9F3BF6221DCFA51FA98785491CA3BD14C06(__this, NULL);
		// particle[(int)E_JumpAttack.Jump].transform.position = transform.position + Vector3.down;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_0 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_6, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_7, NULL);
		// particle[(int)E_JumpAttack.Attack].transform.position = transform.position + Vector3.up;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_8 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_8);
		int32_t L_9 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_14, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_15, NULL);
		// wait = new WaitForSeconds(skillData.StructSkillData.time[(int)E_JumpAttack.Jump]);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_16 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_16);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_17;
		L_17 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_16, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_18 = L_17.___time_2;
		NullCheck(L_18);
		int32_t L_19 = 0;
		float L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_21 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_21, L_20, NULL);
		__this->___wait_7 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wait_7), (void*)L_21);
		// }
		return;
	}
}
// System.Collections.IEnumerator SkillActionJumpAttack::JumpAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkillActionJumpAttack_JumpAttack_m26AB821EE80B66C6E087E9F99584E4B1B1FA4ACE (SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* L_0 = (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43*)il2cpp_codegen_object_new(U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CJumpAttackU3Ed__7__ctor_mB6888774B23F33CE86659D5B159078A32BB301DD(L_0, 0, NULL);
		U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SkillActionJumpAttack::execute(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJumpAttack_execute_m6F0FDEC297C3868C53B560A8D25FF9BC13A216EE (SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* __this, int32_t* ___0_gaugeRate, float* ___1_coolTime, const RuntimeMethod* method) 
{
	{
		// gaugeRate = 0;
		int32_t* L_0 = ___0_gaugeRate;
		*((int32_t*)L_0) = (int32_t)0;
		// coolTime = 0;
		float* L_1 = ___1_coolTime;
		*((float*)L_1) = (float)(0.0f);
		// StartCoroutine(JumpAttack());
		RuntimeObject* L_2;
		L_2 = SkillActionJumpAttack_JumpAttack_m26AB821EE80B66C6E087E9F99584E4B1B1FA4ACE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void SkillActionJumpAttack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionJumpAttack__ctor_m9BBB272A87B3184FB714FABF33E329966D9C74DD (SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* __this, const RuntimeMethod* method) 
{
	{
		SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F(__this, NULL);
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
// System.Void SkillActionJumpAttack/<JumpAttack>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpAttackU3Ed__7__ctor_mB6888774B23F33CE86659D5B159078A32BB301DD (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SkillActionJumpAttack/<JumpAttack>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpAttackU3Ed__7_System_IDisposable_Dispose_m39328D2D7C8099A4E8F2FEB866DB3830792E47F7 (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SkillActionJumpAttack/<JumpAttack>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CJumpAttackU3Ed__7_MoveNext_m45EC67FBE2C2078CE78413CEAB5FA454CFC723B3 (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_014c;
			}
			case 2:
			{
				goto IL_01a1;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameManager manager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3;
		L_3 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		// ParticleSystem AttackEffect = particle[(int)E_JumpAttack.Attack];
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_4 = V_1;
		NullCheck(L_4);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_5 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_4)->___particle_5;
		NullCheck(L_5);
		int32_t L_6 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		__this->___U3CAttackEffectU3E5__2_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAttackEffectU3E5__2_3), (void*)L_7);
		// int[] directionList = { -1, 1 };
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)(-1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)1);
		__this->___U3CdirectionListU3E5__3_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdirectionListU3E5__3_4), (void*)L_10);
		// float currentDuration = 0;
		__this->___U3CcurrentDurationU3E5__4_5 = (0.0f);
		// rigid.useGravity = false;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_11 = V_1;
		NullCheck(L_11);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_12 = L_11->___rigid_6;
		NullCheck(L_12);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_12, (bool)0, NULL);
		// particle[(int)E_JumpAttack.Jump].Play();
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_13 = V_1;
		NullCheck(L_13);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_14 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_13)->___particle_5;
		NullCheck(L_14);
		int32_t L_15 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_16, NULL);
		goto IL_0153;
	}

IL_007a:
	{
		// int applyDamage = stat.CurrentStatus.damagePoint * skillData.StructSkillData.abilityValue[(int)E_JumpAttack.Attack];
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_17 = V_1;
		NullCheck(L_17);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_18 = L_17->___stat_9;
		NullCheck(L_18);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_19 = (&L_18->___CurrentStatus_6);
		int32_t L_20 = L_19->___damagePoint_1;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_21 = V_1;
		NullCheck(L_21);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_22 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_21)->___skillData_4;
		NullCheck(L_22);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_23;
		L_23 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_22, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = L_23.___abilityValue_0;
		NullCheck(L_24);
		int32_t L_25 = 1;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_20, L_26));
		// int chooseDirection = Random.Range(0, 2);
		int32_t L_27;
		L_27 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		V_3 = L_27;
		// int direction = directionList[chooseDirection] * 180;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_28 = __this->___U3CdirectionListU3E5__3_4;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		int32_t L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_31, ((int32_t)180)));
		// rigid.velocity = Vector3.up * skillData.StructSkillData.abilityValue[(int)E_JumpAttack.Jump];
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_32 = V_1;
		NullCheck(L_32);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_33 = L_32->___rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_35 = V_1;
		NullCheck(L_35);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_36 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_35)->___skillData_4;
		NullCheck(L_36);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_37;
		L_37 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_36, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = L_37.___abilityValue_0;
		NullCheck(L_38);
		int32_t L_39 = 0;
		int32_t L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_34, ((float)L_40), NULL);
		NullCheck(L_33);
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_33, L_41, NULL);
		// AttackEffect.transform.rotation = Quaternion.Euler(-90, 0, direction);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_42 = __this->___U3CAttackEffectU3E5__2_3;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_42, NULL);
		int32_t L_44 = V_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((-90.0f), (0.0f), ((float)L_44), NULL);
		NullCheck(L_43);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_43, L_45, NULL);
		// AttackEffect.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_46 = __this->___U3CAttackEffectU3E5__2_3;
		NullCheck(L_46);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_46, NULL);
		// attackManager.Damage(applyDamage);
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_47 = V_1;
		NullCheck(L_47);
		AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* L_48 = L_47->___attackManager_8;
		int32_t L_49 = V_2;
		NullCheck(L_48);
		bool L_50;
		L_50 = AttackableManager_Damage_m4EEB82FDA0095A92BC72C04F4A09A474CC684666(L_48, L_49, NULL);
		// currentDuration += skillData.StructSkillData.time[(int)E_JumpAttack.Jump];
		float L_51 = __this->___U3CcurrentDurationU3E5__4_5;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_52 = V_1;
		NullCheck(L_52);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_53 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_52)->___skillData_4;
		NullCheck(L_53);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_54;
		L_54 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_53, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_55 = L_54.___time_2;
		NullCheck(L_55);
		int32_t L_56 = 0;
		float L_57 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		__this->___U3CcurrentDurationU3E5__4_5 = ((float)il2cpp_codegen_add(L_51, L_57));
		// yield return wait;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_58 = V_1;
		NullCheck(L_58);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_59 = L_58->___wait_7;
		__this->___U3CU3E2__current_1 = L_59;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_59);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_014c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0153:
	{
		// while (skillData.StructSkillData.time[(int)E_JumpAttack.Attack] > currentDuration)
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_60 = V_1;
		NullCheck(L_60);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_61 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_60)->___skillData_4;
		NullCheck(L_61);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_62;
		L_62 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_61, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_63 = L_62.___time_2;
		NullCheck(L_63);
		int32_t L_64 = 1;
		float L_65 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		float L_66 = __this->___U3CcurrentDurationU3E5__4_5;
		if ((((float)L_65) > ((float)L_66)))
		{
			goto IL_007a;
		}
	}
	{
		// rigid.useGravity = true;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_67 = V_1;
		NullCheck(L_67);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_68 = L_67->___rigid_6;
		NullCheck(L_68);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_68, (bool)1, NULL);
		// rigid.drag = 10;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_69 = V_1;
		NullCheck(L_69);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_70 = L_69->___rigid_6;
		NullCheck(L_70);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_70, (10.0f), NULL);
		// yield return wait;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_71 = V_1;
		NullCheck(L_71);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_72 = L_71->___wait_7;
		__this->___U3CU3E2__current_1 = L_72;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_72);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_01a1:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// rigid.drag = 0;
		SkillActionJumpAttack_t119499264D2476804FDF473DEF127C4C72D13017* L_73 = V_1;
		NullCheck(L_73);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_74 = L_73->___rigid_6;
		NullCheck(L_74);
		Rigidbody_set_drag_m9E9F375A26A8F3D1AABCEB015E41696F39088EE0(L_74, (0.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object SkillActionJumpAttack/<JumpAttack>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpAttackU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF3B9900B351568462FB5FC2439E9B94D27BA5008 (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SkillActionJumpAttack/<JumpAttack>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CJumpAttackU3Ed__7_System_Collections_IEnumerator_Reset_m823DD079B1FFB28F7DBE7A0C02FE1E9F5285B478 (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CJumpAttackU3Ed__7_System_Collections_IEnumerator_Reset_m823DD079B1FFB28F7DBE7A0C02FE1E9F5285B478_RuntimeMethod_var)));
	}
}
// System.Object SkillActionJumpAttack/<JumpAttack>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CJumpAttackU3Ed__7_System_Collections_IEnumerator_get_Current_mF89959C68EF572671866541F928CF9D7D51F9283 (U3CJumpAttackU3Ed__7_tEBEBA9C76854906A861E0A06CDA0FF7F3F0A1F43* __this, const RuntimeMethod* method) 
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
// System.Void SkillActionNone::execute(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionNone_execute_mEAFE658516100B4E8D999769BD5A3BD130FE4DCF (SkillActionNone_t446B23287A9A456D6CC35476162A064CC2EE666F* __this, int32_t* ___0_gaugeRate, float* ___1_coolTime, const RuntimeMethod* method) 
{
	{
		// gaugeRate = 0;
		int32_t* L_0 = ___0_gaugeRate;
		*((int32_t*)L_0) = (int32_t)0;
		// coolTime = 0;
		float* L_1 = ___1_coolTime;
		*((float*)L_1) = (float)(0.0f);
		// }
		return;
	}
}
// System.Void SkillActionNone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionNone__ctor_m91C98D866BE8809D7CD5CC3AFFAFA0E882B3F372 (SkillActionNone_t446B23287A9A456D6CC35476162A064CC2EE666F* __this, const RuntimeMethod* method) 
{
	{
		SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F(__this, NULL);
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
// System.Void SkillActionPowerUp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionPowerUp_Awake_mD1F26FE3C1BC07582370137153604B2476A540ED (SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		SkillAction_Awake_m82B084C70A9A397DF4C5F332B04A84D1193BC3AF(__this, NULL);
		// playerStatus = GetComponent<StatusComponent>();
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_0;
		L_0 = Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0(__this, Component_GetComponent_TisStatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3_m7AB7F02F089E4C00F12430BB277C03898055CAA0_RuntimeMethod_var);
		__this->___playerStatus_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerStatus_6), (void*)L_0);
		// }
		return;
	}
}
// System.Collections.IEnumerator SkillActionPowerUp::_PowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SkillActionPowerUp__PowerUp_m513B8411D54837AF6908E6829205C383234C9D96 (SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* L_0 = (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A*)il2cpp_codegen_object_new(U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3C_PowerUpU3Ed__2__ctor_m408DF5F1D460BB7CB5289B92D1FA0DDE738C9066(L_0, 0, NULL);
		U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void SkillActionPowerUp::EndReinforce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionPowerUp_EndReinforce_m1E878252499B097B287618D90A2609D1A0B141D3 (SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* __this, const RuntimeMethod* method) 
{
	{
		// playerStatus.CurrentStatus.damagePoint -= skillData.StructSkillData.abilityValue[0];
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_0 = __this->___playerStatus_6;
		NullCheck(L_0);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_1 = (&L_0->___CurrentStatus_6);
		int32_t* L_2 = (&L_1->___damagePoint_1);
		int32_t* L_3 = L_2;
		int32_t L_4 = *((int32_t*)L_3);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_5 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___skillData_4;
		NullCheck(L_5);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_6;
		L_6 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_5, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = L_6.___abilityValue_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		int32_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_4, L_9));
		// particle[1].Stop();
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_10 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)__this)->___particle_5;
		NullCheck(L_10);
		int32_t L_11 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_12, NULL);
		// }
		return;
	}
}
// System.Void SkillActionPowerUp::execute(System.Int32&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionPowerUp_execute_mC9AD54565FEF84134E428C705E4C04B4472DA638 (SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* __this, int32_t* ___0_gaugeRate, float* ___1_coolTime, const RuntimeMethod* method) 
{
	{
		// gaugeRate = 0;
		int32_t* L_0 = ___0_gaugeRate;
		*((int32_t*)L_0) = (int32_t)0;
		// coolTime = 0;
		float* L_1 = ___1_coolTime;
		*((float*)L_1) = (float)(0.0f);
		// StartCoroutine(_PowerUp());
		RuntimeObject* L_2;
		L_2 = SkillActionPowerUp__PowerUp_m513B8411D54837AF6908E6829205C383234C9D96(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void SkillActionPowerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkillActionPowerUp__ctor_mFA9E7BDDBD5F561112889A600BAF332C9D06A3F6 (SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* __this, const RuntimeMethod* method) 
{
	{
		SkillAction__ctor_m75E79404139643F44A519E545932FFE30E34D76F(__this, NULL);
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
// System.Void SkillActionPowerUp/<_PowerUp>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PowerUpU3Ed__2__ctor_m408DF5F1D460BB7CB5289B92D1FA0DDE738C9066 (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void SkillActionPowerUp/<_PowerUp>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PowerUpU3Ed__2_System_IDisposable_Dispose_mDB5057A06DF99D1402E2C60E469479439E87F713 (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean SkillActionPowerUp/<_PowerUp>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3C_PowerUpU3Ed__2_MoveNext_mCFCFEB4AD69068F2447BF3217073292574B4BCBE (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0855C11985E2A34A633BEE1027DDDE25FD8E6489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8EB33DBC114602CBC18225D6225A9F4CEC7E1FB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameManager manager = GameManager.Instance;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4;
		L_4 = GameManager_get_Instance_m076FE4D98E785B5AEE0B4C360C7857F824E7FBD0(NULL);
		__this->___U3CmanagerU3E5__2_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmanagerU3E5__2_3), (void*)L_4);
		// Debug.Log("DamageUp");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA8EB33DBC114602CBC18225D6225A9F4CEC7E1FB, NULL);
		// manager.timeScaleModify(0.1f);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = __this->___U3CmanagerU3E5__2_3;
		NullCheck(L_5);
		GameManager_timeScaleModify_m2AFCC20011A4D47E654C46463C8AFE90967C82CC(L_5, (0.100000001f), NULL);
		// particle[0].Play();
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_6 = V_1;
		NullCheck(L_6);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_7 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_6)->___particle_5;
		NullCheck(L_7);
		int32_t L_8 = 0;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_9, NULL);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// manager.timeScaleModify(1f);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = __this->___U3CmanagerU3E5__2_3;
		NullCheck(L_11);
		GameManager_timeScaleModify_m2AFCC20011A4D47E654C46463C8AFE90967C82CC(L_11, (1.0f), NULL);
		// particle[1].Play();
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_12 = V_1;
		NullCheck(L_12);
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_13 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_12)->___particle_5;
		NullCheck(L_13);
		int32_t L_14 = 1;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_15, NULL);
		// playerStatus.CurrentStatus.damagePoint += skillData.StructSkillData.abilityValue[0];
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_16 = V_1;
		NullCheck(L_16);
		StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* L_17 = L_16->___playerStatus_6;
		NullCheck(L_17);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_18 = (&L_17->___CurrentStatus_6);
		int32_t* L_19 = (&L_18->___damagePoint_1);
		int32_t* L_20 = L_19;
		int32_t L_21 = *((int32_t*)L_20);
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_22 = V_1;
		NullCheck(L_22);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_23 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_22)->___skillData_4;
		NullCheck(L_23);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_24;
		L_24 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_23, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = L_24.___abilityValue_0;
		NullCheck(L_25);
		int32_t L_26 = 0;
		int32_t L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, L_27));
		// Invoke("EndReinforce", skillData.StructSkillData.time[0]);
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_28 = V_1;
		SkillActionPowerUp_t344F06B47F96FA37FC21E73273054A754812C340* L_29 = V_1;
		NullCheck(L_29);
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_30 = ((SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01*)L_29)->___skillData_4;
		NullCheck(L_30);
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_31;
		L_31 = SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline(L_30, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31.___time_2;
		NullCheck(L_32);
		int32_t L_33 = 0;
		float L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_28);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(L_28, _stringLiteral0855C11985E2A34A633BEE1027DDDE25FD8E6489, L_34, NULL);
		// }
		return (bool)0;
	}
}
// System.Object SkillActionPowerUp/<_PowerUp>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_PowerUpU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD01C1EE90D9B2B6D0BA6FD452EAE17A8A543A93C (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void SkillActionPowerUp/<_PowerUp>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3C_PowerUpU3Ed__2_System_Collections_IEnumerator_Reset_mB79EE5504664B33375F5EFB039AE7A6E91397DB6 (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3C_PowerUpU3Ed__2_System_Collections_IEnumerator_Reset_mB79EE5504664B33375F5EFB039AE7A6E91397DB6_RuntimeMethod_var)));
	}
}
// System.Object SkillActionPowerUp/<_PowerUp>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3C_PowerUpU3Ed__2_System_Collections_IEnumerator_get_Current_m23A451AEFA219B08803844DD0A4E46359197D443 (U3C_PowerUpU3Ed__2_t9320ABFD503771631DC6C56B9C83DE20CEA4EB4A* __this, const RuntimeMethod* method) 
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
// System.Void StatusComponent::set_BaseStatus(StatusData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent_set_BaseStatus_m73A069AE6AD294D050B5C7B7D46D8CF6DB59F132 (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* ___0_value, const RuntimeMethod* method) 
{
	{
		// public StatusData BaseStatus { set { _BaseStatus = value; } get { return _BaseStatus; } }
		StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* L_0 = ___0_value;
		__this->____BaseStatus_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____BaseStatus_4), (void*)L_0);
		// public StatusData BaseStatus { set { _BaseStatus = value; } get { return _BaseStatus; } }
		return;
	}
}
// StatusData StatusComponent::get_BaseStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* StatusComponent_get_BaseStatus_mAF4C0E408DBF9B13B768D24FA8E0AC828DEB5058 (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) 
{
	{
		// public StatusData BaseStatus { set { _BaseStatus = value; } get { return _BaseStatus; } }
		StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* L_0 = __this->____BaseStatus_4;
		return L_0;
	}
}
// System.Void StatusComponent::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent_OnEnable_m6B7054D1FDDEE011CE207DE67C9E9213394723E2 (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__9_0_mC3D222564E8A71E937C8C0D964C9CAEA99484985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__9_1_mA8F3576F53C7D33078E029BE25E590C95C705B6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* G_B2_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* G_B1_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* G_B4_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* G_B3_1 = NULL;
	{
		// Init();
		StatusComponent_Init_m4169178B770A9555E7AAD0E626E2237D777E81BD(__this, NULL);
		//         afterCurrentHPMotify = () =>
		//         {
		// #if UNITY_EDITOR
		//             Debug.Log(String.Format("{0}?? ???? ????? ?????? => {1} ",name,CurrentStatus.hp));
		// #endif
		//         };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* L_2 = ((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__9_0_mC3D222564E8A71E937C8C0D964C9CAEA99484985_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		NullCheck(G_B2_1);
		G_B2_1->___afterCurrentHPMotify_8 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___afterCurrentHPMotify_8), (void*)G_B2_0);
		//         afterMaxHpMotify = () =>
		//         {
		// #if UNITY_EDITOR
		//             Debug.Log(String.Format("{0}?? ???? ????? ?????? => {1} ",name, CurrentStatus.hp));
		// #endif
		//         };
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = ((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5;
		G_B3_0 = L_6;
		G_B3_1 = __this;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = __this;
			goto IL_004b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* L_7 = ((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3COnEnableU3Eb__9_1_mA8F3576F53C7D33078E029BE25E590C95C705B6C_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = L_8;
		((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
	}

IL_004b:
	{
		NullCheck(G_B4_1);
		G_B4_1->___afterMaxHpMotify_9 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->___afterMaxHpMotify_9), (void*)G_B4_0);
		// }
		return;
	}
}
// System.Void StatusComponent::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent_Init_m4169178B770A9555E7AAD0E626E2237D777E81BD (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) 
{
	{
		// CurrentStatus = _BaseStatus.Status;
		StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* L_0 = __this->____BaseStatus_4;
		NullCheck(L_0);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 L_1;
		L_1 = StatusData_get_Status_m63AEB2D498163CBBAB20447308C40B9AA14FBA73_inline(L_0, NULL);
		__this->___CurrentStatus_6 = L_1;
		// MaxStatus = _BaseStatus.Status;
		StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* L_2 = __this->____BaseStatus_4;
		NullCheck(L_2);
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 L_3;
		L_3 = StatusData_get_Status_m63AEB2D498163CBBAB20447308C40B9AA14FBA73_inline(L_2, NULL);
		__this->___MaxStatus_5 = L_3;
		// }
		return;
	}
}
// System.Void StatusComponent::ApplyDamage(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent_ApplyDamage_m0E9224EB62E5B26424FB28636AE82B4037B655AE (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, int32_t ___0_damage, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_damageTextColor, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int applyedDamage = damage;
		int32_t L_0 = ___0_damage;
		V_0 = L_0;
		// DamageTextManager.Instance.ShowDamageText(transform.position, applyedDamage.ToString(), damageTextColor);
		DamageTextManager_t643253426A47F8E7D0558286E1F263182C1F8F29* L_1;
		L_1 = DamageTextManager_get_Instance_m33DCF3DDD8AB4F53D0957FE72ECBFF918C138277(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___1_damageTextColor;
		NullCheck(L_1);
		DamageTextManager_ShowDamageText_mA97B4B39D1D297960DE852713F7C7B4620FBA663(L_1, L_3, L_4, L_5, NULL);
		// if (damage >= CurrentStatus.hp)
		int32_t L_6 = ___0_damage;
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_7 = (&__this->___CurrentStatus_6);
		int32_t L_8 = L_7->___hp_0;
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0046;
		}
	}
	{
		// CurrentStatus.hp = 0;
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_9 = (&__this->___CurrentStatus_6);
		L_9->___hp_0 = 0;
		// DieOperation.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_10 = __this->___DieOperation_7;
		NullCheck(L_10);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_10, NULL);
		goto IL_0056;
	}

IL_0046:
	{
		// CurrentStatus.hp -= damage;
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602* L_11 = (&__this->___CurrentStatus_6);
		int32_t* L_12 = (&L_11->___hp_0);
		int32_t* L_13 = L_12;
		int32_t L_14 = *((int32_t*)L_13);
		int32_t L_15 = ___0_damage;
		*((int32_t*)L_13) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_14, L_15));
	}

IL_0056:
	{
		// afterCurrentHPMotify();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = __this->___afterCurrentHPMotify_8;
		NullCheck(L_16);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_16, NULL);
		// }
		return;
	}
}
// System.Void StatusComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatusComponent__ctor_m1D4E7020423A8AEAED6FEF1BB5F5A7B2851AEB2A (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) 
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
// System.Void StatusComponent/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE7B35BFCF5DF1155932201A2C16CC9346E3AA331 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* L_0 = (U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815*)il2cpp_codegen_object_new(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m215BF5D1DE3E3094B7CDCDF9A549844A3CA4FF07(L_0, NULL);
		((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void StatusComponent/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m215BF5D1DE3E3094B7CDCDF9A549844A3CA4FF07 (U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void StatusComponent/<>c::<OnEnable>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__9_0_mC3D222564E8A71E937C8C0D964C9CAEA99484985 (U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* __this, const RuntimeMethod* method) 
{
	{
		// };
		return;
	}
}
// System.Void StatusComponent/<>c::<OnEnable>b__9_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__9_1_mA8F3576F53C7D33078E029BE25E590C95C705B6C (U3CU3Ec_t0321EF95A16341C6BE9A60431CD6D76793B6E815* __this, const RuntimeMethod* method) 
{
	{
		// };
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
// System.Collections.IEnumerator BLINK.UI.StatBar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StatBar_Start_m9D26BFC168D67CE93BD8DE538BFBBD60CEC4E679 (StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* L_0 = (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E*)il2cpp_codegen_object_new(U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__5__ctor_m003AC46F8190F8469446B80C3F84418FB9B64B74(L_0, 0, NULL);
		U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void BLINK.UI.StatBar::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatBar_FixedUpdate_m9A6597AF2B7C5FC8DAEC41A645E90A4B0B043162 (StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float G_B4_0 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B4_1 = NULL;
	float G_B3_0 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* G_B5_2 = NULL;
	{
		// if(!_isReady) return;
		bool L_0 = __this->____isReady_8;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(!_isReady) return;
		return;
	}

IL_0009:
	{
		// bar.fillAmount += _fillUp ? speed : -speed;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___bar_6;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = L_1;
		NullCheck(L_2);
		float L_3;
		L_3 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_2, NULL);
		bool L_4 = __this->____fillUp_7;
		G_B3_0 = L_3;
		G_B3_1 = L_2;
		if (L_4)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_2;
			goto IL_0026;
		}
	}
	{
		float L_5 = __this->___speed_5;
		G_B5_0 = ((-L_5));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_002c;
	}

IL_0026:
	{
		float L_6 = __this->___speed_5;
		G_B5_0 = L_6;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_002c:
	{
		NullCheck(G_B5_2);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(G_B5_2, ((float)il2cpp_codegen_add(G_B5_1, G_B5_0)), NULL);
		// if (Math.Abs(bar.fillAmount - 1) < 0.01f) _fillUp = false;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___bar_6;
		NullCheck(L_7);
		float L_8;
		L_8 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_8, (1.0f))));
		if ((!(((float)L_9) < ((float)(0.00999999978f)))))
		{
			goto IL_0057;
		}
	}
	{
		// if (Math.Abs(bar.fillAmount - 1) < 0.01f) _fillUp = false;
		__this->____fillUp_7 = (bool)0;
		return;
	}

IL_0057:
	{
		// else if (bar.fillAmount == 0) _fillUp = true;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___bar_6;
		NullCheck(L_10);
		float L_11;
		L_11 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_10, NULL);
		if ((!(((float)L_11) == ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		// else if (bar.fillAmount == 0) _fillUp = true;
		__this->____fillUp_7 = (bool)1;
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void BLINK.UI.StatBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StatBar__ctor_m0EE52F5D6AEECEF4715F79E8F8185CE5C0F13619 (StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* __this, const RuntimeMethod* method) 
{
	{
		// private bool _fillUp = true;
		__this->____fillUp_7 = (bool)1;
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
// System.Void BLINK.UI.StatBar/<Start>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__5__ctor_m003AC46F8190F8469446B80C3F84418FB9B64B74 (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void BLINK.UI.StatBar/<Start>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__5_System_IDisposable_Dispose_m818CDDBAE1CA9E2AB61C4658B31BC58FC2421F3C (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean BLINK.UI.StatBar/<Start>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__5_MoveNext_m2FFEE7FF2269EA399917C624E14C370C1BFCA5FA (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bar.fillAmount = 0;
		StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* L_4 = V_1;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = L_4->___bar_6;
		NullCheck(L_5);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_5, (0.0f), NULL);
		// yield return new WaitForSeconds(delay);
		StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* L_6 = V_1;
		NullCheck(L_6);
		float L_7 = L_6->___delay_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _isReady = true;
		StatBar_tD58CC995724D7D5760B4FF66969F28682ADE8294* L_9 = V_1;
		NullCheck(L_9);
		L_9->____isReady_8 = (bool)1;
		// }
		return (bool)0;
	}
}
// System.Object BLINK.UI.StatBar/<Start>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m609EF8E20D58661557EF5B72716A6F0A6A98824E (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void BLINK.UI.StatBar/<Start>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__5_System_Collections_IEnumerator_Reset_m7CC97E6E5BD0F9E884DB44378ED9B7539B47AD51 (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__5_System_Collections_IEnumerator_Reset_m7CC97E6E5BD0F9E884DB44378ED9B7539B47AD51_RuntimeMethod_var)));
	}
}
// System.Object BLINK.UI.StatBar/<Start>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__5_System_Collections_IEnumerator_get_Current_m12301AF03A39FD4A39F95564E9009CD6DA650D22 (U3CStartU3Ed__5_tCD6AC6CE24C56E559EFE7F0639283838BFB7AA9E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* SkillContainer_get_normalSkillAction_m1A86D22605D1AE6F82E59B966A062AD7EDC41834_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] normalSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = __this->___U3CnormalSkillActionU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* SkillContainer_get_powerSkillAction_m131FDBB67F1492CFB65BEA452E6C879AF5765AC6_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] powerSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = __this->___U3CpowerSkillActionU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_mB34C0C9337F5D00ECB2915E8008BCAEB8E7C5FB6_inline (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, const RuntimeMethod* method) 
{
	{
		// public float maxValue { get { return m_MaxValue; } set { if (SetPropertyUtility.SetStruct(ref m_MaxValue, value)) { Set(m_Value); UpdateVisuals(); } } }
		float L_0 = __this->___m_MaxValue_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PointerEventData_get_button_mA8CBDAF2E16927E6952BC60040D56630BCC95B0B_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public InputButton button { get; set; }
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField_23;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameProfile_get_score_m83942C887BC1C295872E5D258047D626C1D084B4_inline (GameProfile_t7BB9AC9C04C3B27B970AA9108DED87505D85B291* __this, const RuntimeMethod* method) 
{
	{
		// get { return _score; }
		int32_t L_0 = __this->____score_7;
		return L_0;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector_8;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* StatusComponent_get_BaseStatus_mAF4C0E408DBF9B13B768D24FA8E0AC828DEB5058_inline (StatusComponent_t2C7736166F622BEA45A79D004746F6240E30DCE3* __this, const RuntimeMethod* method) 
{
	{
		// public StatusData BaseStatus { set { _BaseStatus = value; } get { return _BaseStatus; } }
		StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* L_0 = __this->____BaseStatus_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ClampMagnitude_mF83675F19744F58E97CF24D8359A810634DC031F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, float ___1_maxLength, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		float L_0;
		L_0 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___0_vector), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ___1_maxLength;
		float L_3 = ___1_maxLength;
		V_1 = (bool)((((float)L_1) > ((float)((float)il2cpp_codegen_multiply(L_2, L_3))))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		float L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)L_5));
		V_2 = ((float)L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x_2;
		float L_9 = V_2;
		V_3 = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___y_3;
		float L_12 = V_2;
		V_4 = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_vector;
		float L_14 = L_13.___z_4;
		float L_15 = V_2;
		V_5 = ((float)(L_14/L_15));
		float L_16 = V_3;
		float L_17 = ___1_maxLength;
		float L_18 = V_4;
		float L_19 = ___1_maxLength;
		float L_20 = V_5;
		float L_21 = ___1_maxLength;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), ((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21)), /*hidden argument*/NULL);
		V_6 = L_22;
		goto IL_0053;
	}

IL_004e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = ___0_vector;
		V_6 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_6;
		return L_24;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 StatusData_get_Status_m63AEB2D498163CBBAB20447308C40B9AA14FBA73_inline (StatusData_t0AEBFDC8262F3381EF7F01B2C01D5FE0A40B2D5F* __this, const RuntimeMethod* method) 
{
	{
		// public StructStatus Status { get { return status; } }
		StructStatus_t2BCA171E6510D8833382D712166F2720B2E3A602 L_0 = __this->___status_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObstcleData_get_ScorePoint_m64E209716E4F9D33AA585AA16B606677D51218FC_inline (ObstcleData_t6AD23032CAC95B920E206D56EE8CDB29632DB717* __this, const RuntimeMethod* method) 
{
	{
		// public int ScorePoint { get { return scorePoint; } }
		int32_t L_0 = __this->___scorePoint_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* AttackableManager_GetList_m376203471A83B4FE3ADBF766D58A43A9F2788D0B_inline (AttackableManager_tCAEFBC94FCB3F5E51A1CAABEB32C12A969DB45F1* __this, const RuntimeMethod* method) 
{
	{
		// return AttackList;
		HashSet_1_t13446AA50AA493375F7203C054501FC37A03F8C8* L_0 = __this->___AttackList_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkillContainer_set_normalSkillAction_m01EA23BFA8800EB3C01D17D7B53C954BB3B6D4DD_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] normalSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = ___0_value;
		__this->___U3CnormalSkillActionU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnormalSkillActionU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkillContainer_set_powerSkillAction_m6B57A1655299EF1A1986F4F0F8096459FAD3A2DE_inline (SkillContainer_tEE7FAD0DAFD92AC3A9D5689585B49F1A73D246C7* __this, SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SkillAction[] powerSkillAction { private set; get; }
		SkillActionU5BU5D_tB392FCB4AEFEB9276C51EF2979B0C53A2517B014* L_0 = ___0_value;
		__this->___U3CpowerSkillActionU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpowerSkillActionU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 SkillData_get_StructSkillData_m1ED8B4786844D6075601D36AA1BE7BB3DF7A82F4_inline (SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* __this, const RuntimeMethod* method) 
{
	{
		// public StructSkill StructSkillData { get { return structSkillData; } }
		StructSkill_t97BF68DC6A6DF04C0ACCC60BD8362E227C4C8518 L_0 = __this->___structSkillData_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SkillAction_set_SkillData_m3B3BCD49CD2C44F5D2BA53C51262C0B4A3441502_inline (SkillAction_tB9F84182C6916059C304DBA3FC6CDC6636D4BD01* __this, SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* ___0_value, const RuntimeMethod* method) 
{
	{
		// public SkillData SkillData { set { skillData = value; } get { return skillData; } }
		SkillData_t7EAA3DC7486F50575590B56198A5C0D07DCF2299* L_0 = ___0_value;
		__this->___skillData_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___skillData_4), (void*)L_0);
		// public SkillData SkillData { set { skillData = value; } get { return skillData; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_44;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
