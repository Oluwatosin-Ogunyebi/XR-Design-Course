#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs>
struct Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs>
struct Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs>
struct Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs>
struct Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0;
// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem>
struct Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_tEB0353AA1A112B6F2D921B58DCC9D9D4C0498E6E;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject>
struct Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose>
struct Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose>
struct Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform>
struct Dictionary_2_t81F2911EE2E2DBAC0CE118A677A47BAC16F93B5C;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter>
struct ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5;
// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter>
struct ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8;
// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo>
struct Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs>
struct LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs>
struct LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B;
// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform>
struct LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450;
// System.Collections.Generic.List`1<UnityEngine.Collider>
struct List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable>
struct List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable>
struct List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor>
struct List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable>
struct List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable>
struct List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>
struct List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Object>
struct List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer>
struct List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable>
struct List_1_t02510C493B34D49F210C22C40442D863A08509CB;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor>
struct List_1_tC6684CD164AA8009B3DC3C06499A47813321B877;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t90832B88D7207769654164CC28440CF594CC397D;
// System.Collections.Generic.List`1<ActionBasedControllerManager/ControllerState>
struct List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65;
// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint>
struct List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD;
// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer>
struct SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Int32Enum>
struct UnityAction_1_tD36D5C84023177B3A8D5E71084DB3930D8274781;
// UnityEngine.Events.UnityAction`1<ActionBasedControllerManager/StateId>
struct UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91;
// UnityEngine.Events.UnityEvent`1<System.Int32Enum>
struct UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81;
// UnityEngine.Events.UnityEvent`1<ActionBasedControllerManager/StateId>
struct UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_tB846E6FE2326CCD34124D1E5D70117C9D33DEE76;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ActionBasedControllerManager/ControllerState[]
struct ControllerStateU5BU5D_tA510D281C00EDA9B23B1D0B48F88F45569A3B5A4;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// ActionBasedControllerManager
struct ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3;
// UnityEngine.XR.Interaction.Toolkit.ActivateEvent
struct ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ChekItem
struct ChekItem_tBC14CB1630AC2960C4A8DB4D2FDDEA25AC19ED09;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent
struct DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// FadeTeleportationProvider
struct FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// HandVisuals
struct HandVisuals_t7F51CF316B1A6B9AB893D4993B0BF185164C69F9;
// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent
struct HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB;
// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent
struct HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.XR.Interaction.Toolkit.ILineRenderable
struct ILineRenderable_t31B0CD4F7660B33DA1844249EF11B0F653E36ADA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractable
struct IXRInteractable_t31CD4FF4D45899471D81D43D605D9C6118BF50CA;
// UnityEngine.XR.Interaction.Toolkit.IXRInteractor
struct IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable
struct IXRSelectInteractable_t588B8BE99E84540D5A1A9D6E5AAC9EDF12985735;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor
struct IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1;
// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter
struct IXRTargetFilter_t51750E0C671ECA90F38CC75BCD395285E61D2778;
// UnityEngine.InputSystem.InputAction
struct InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tF217AC5223B4AAA46EBCB44B33E9259FB117417D;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tFCE82E0E014319D4DED9F8962B06655DD0420A09;
// UnityEngine.InputSystem.InputActionReference
struct InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.LineRenderer
struct LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D;
// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MoveCube
struct MoveCube_tFD726DFF601D0B3C939DF989C86D86ED0FF23E54;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OffsetGrabInteractable
struct OffsetGrabInteractable_tFCA936EE73D95AF080C82EBAB88D9223A5FAD964;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent
struct SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0;
// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent
struct SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6;
// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A;
// System.String
struct String_t;
// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor
struct TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6;
// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
struct TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6;
// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158;
// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter
struct XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F;
// UnityEngine.XR.Interaction.Toolkit.XRControllerState
struct XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50;
// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772;
// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent
struct XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093;
// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
struct XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent
struct XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2;
// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D;
// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76;
// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule
struct XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0;
// ActionBasedControllerManager/ControllerState
struct ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0;
// ActionBasedControllerManager/StateEnterEvent
struct StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE;
// ActionBasedControllerManager/StateExitEvent
struct StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C;
// ActionBasedControllerManager/StateUpdateEvent
struct StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915;
// FadeTeleportationProvider/<FadeIn>d__5
struct U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED;
// FadeTeleportationProvider/<FadeOut>d__6
struct U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer
struct RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D;

IL2CPP_EXTERN_C RuntimeClass* Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral27653A35A3723E907CAE48890DB629947B22AD11;
IL2CPP_EXTERN_C String_t* _stringLiteral61E265BF94AF8A86712B2382B28DE57D158EC95B;
IL2CPP_EXTERN_C String_t* _stringLiteral6440C1C7FE3CFD07921F120257129B233E306DC6;
IL2CPP_EXTERN_C String_t* _stringLiteral6C4ABC44FC0E0B6844730A488CB964E10E30067B;
IL2CPP_EXTERN_C String_t* _stringLiteral74AF42CBDEF8D15EB8CC98338AB0382314408DE7;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85EB20824CF1D08753F13E6FB8579A875C845819;
IL2CPP_EXTERN_C String_t* _stringLiteral89AE91B55B062DC94A0679A61E428C49CA2BC881;
IL2CPP_EXTERN_C String_t* _stringLiteralAB01943B71CC45A5CB9270545A41CABD7A8EF5AC;
IL2CPP_EXTERN_C String_t* _stringLiteralB5D9FDE8094C6CD6F3E1D77ADB8B1B24FFFA3772;
IL2CPP_EXTERN_C String_t* _stringLiteralFA93F6249C8958A394D1EB997C74F5DC26FB1849;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnEnterInteractState_mB99748D913C19731B28CBCA3BC752CD1CABD36E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnEnterSelectState_mEB515A6479A2D50C7321DCA11345B0BB59469A60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnEnterTeleportState_mFD04877915A69518F79F2555CA5A47D508FCAD7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnExitInteractState_mFB5720185801A2E03937CB917EBA0BE4E5CCE55A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnExitSelectState_m38A3B528524D4210A5F7BA81C38AF5EF8228B36F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnExitTeleportState_m698DF18B5D17AF98635F6B14BD9249AF8FD76228_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnUpdateInteractState_mC54DCB46ADA2F3129199524FE19B837D72BE64A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnUpdateSelectState_m6E89D69553FEF9549BFA844ED887350AE8E79B83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ActionBasedControllerManager_OnUpdateTeleportState_m201675C3C4B705C2F277386FB1D70CED56B77DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mEFAB2B06155DBA6F24F8D5E7A84CC051FB677721_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE1B1FC219D3FFC4FE477489C3AE9AB551DFFE00F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6447ABCA80CD0D159E9208FB85D2B8D5066C5926_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_mABD58760AD90FFF0C23236397309EA129CCE6CC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6F12868F7EBCB2B5E76625C38A76AA8A09567249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m54E1B0F1C0E87E752E7D9C599D87DDAF548C4A40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInU3Ed__5_System_Collections_IEnumerator_Reset_mBF4EE55E46F1CEAD0392924F130FC92D5122ADF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutU3Ed__6_System_Collections_IEnumerator_Reset_m8D967CA37EE04D9CDA9CDBA80E5936823757AB98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ActionBasedControllerManager/ControllerState>
struct List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ControllerStateU5BU5D_tA510D281C00EDA9B23B1D0B48F88F45569A3B5A4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ControllerStateU5BU5D_tA510D281C00EDA9B23B1D0B48F88F45569A3B5A4* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
struct BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E  : public RuntimeObject
{
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactorObject>k__BackingField
	RuntimeObject* ___U3CinteractorObjectU3Ek__BackingField_0;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs::<interactableObject>k__BackingField
	RuntimeObject* ___U3CinteractableObjectU3Ek__BackingField_1;
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

// ActionBasedControllerManager/ControllerState
struct ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0  : public RuntimeObject
{
	// System.Boolean ActionBasedControllerManager/ControllerState::m_Enabled
	bool ___m_Enabled_0;
	// ActionBasedControllerManager/StateId ActionBasedControllerManager/ControllerState::m_Id
	int32_t ___m_Id_1;
	// ActionBasedControllerManager/StateEnterEvent ActionBasedControllerManager/ControllerState::m_OnEnter
	StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* ___m_OnEnter_2;
	// ActionBasedControllerManager/StateUpdateEvent ActionBasedControllerManager/ControllerState::m_OnUpdate
	StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* ___m_OnUpdate_3;
	// ActionBasedControllerManager/StateExitEvent ActionBasedControllerManager/ControllerState::m_OnExit
	StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* ___m_OnExit_4;
};

// FadeTeleportationProvider/<FadeOut>d__6
struct U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771  : public RuntimeObject
{
	// System.Int32 FadeTeleportationProvider/<FadeOut>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeTeleportationProvider/<FadeOut>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FadeTeleportationProvider FadeTeleportationProvider/<FadeOut>d__6::<>4__this
	FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* ___U3CU3E4__this_2;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
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

// System.Collections.Generic.List`1/Enumerator<ActionBasedControllerManager/ControllerState>
struct Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ____current_3;
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

// UnityEngine.Events.UnityEvent`1<ActionBasedControllerManager/StateId>
struct UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD 
{
	// System.Boolean UnityEngine.InputSystem.InputActionProperty::m_UseReference
	bool ___m_UseReference_0;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::m_Action
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	// UnityEngine.InputSystem.InputActionReference UnityEngine.InputSystem.InputActionProperty::m_Reference
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_pinvoke
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputActionProperty
struct InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD_marshaled_com
{
	int32_t ___m_UseReference_0;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ___m_Action_1;
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Reference_2;
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

// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
struct InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 
{
	// System.UInt32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Bits
	uint32_t ___m_Bits_0;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask::m_Mask
	int32_t ___m_Mask_1;
};

// UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB 
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Value
	float ___m_Value_0;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_Active
	bool ___m_Active_1;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_ActivatedThisFrame
	bool ___m_ActivatedThisFrame_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.InteractionState::m_DeactivatedThisFrame
	bool ___m_DeactivatedThisFrame_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_pinvoke
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};
// Native definition for COM marshalling of UnityEngine.XR.Interaction.Toolkit.InteractionState
struct InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB_marshaled_com
{
	float ___m_Value_0;
	int32_t ___m_Active_1;
	int32_t ___m_ActivatedThisFrame_2;
	int32_t ___m_DeactivatedThisFrame_3;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.PhysicsScene
struct PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE 
{
	// System.Int32 UnityEngine.PhysicsScene::m_Handle
	int32_t ___m_Handle_0;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
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

// UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs
struct SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
};

// UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs
struct SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A  : public BaseInteractionEventArgs_t8B38B6C63C6C9EA4BD179EF5FD40106872B82D7E
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<manager>k__BackingField
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___U3CmanagerU3Ek__BackingField_2;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs::<isCanceled>k__BackingField
	bool ___U3CisCanceledU3Ek__BackingField_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
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

// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_t11786EE914FE65E70B9671129B0DFC4D0DE80C44 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___value_1;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.XR.Interaction.Toolkit.TeleportRequest
struct TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE 
{
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.TeleportRequest::destinationPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destinationPosition_0;
	// UnityEngine.Quaternion UnityEngine.XR.Interaction.Toolkit.TeleportRequest::destinationRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___destinationRotation_1;
	// System.Single UnityEngine.XR.Interaction.Toolkit.TeleportRequest::requestTime
	float ___requestTime_2;
	// UnityEngine.XR.Interaction.Toolkit.MatchOrientation UnityEngine.XR.Interaction.Toolkit.TeleportRequest::matchOrientation
	int32_t ___matchOrientation_3;
};

// ActionBasedControllerManager/StateEnterEvent
struct StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE  : public UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F
{
};

// ActionBasedControllerManager/StateExitEvent
struct StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C  : public UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F
{
};

// ActionBasedControllerManager/StateUpdateEvent
struct StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
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

// FadeTeleportationProvider/<FadeIn>d__5
struct U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED  : public RuntimeObject
{
	// System.Int32 FadeTeleportationProvider/<FadeIn>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object FadeTeleportationProvider/<FadeIn>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// FadeTeleportationProvider FadeTeleportationProvider/<FadeIn>d__5::<>4__this
	FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* ___U3CU3E4__this_2;
	// UnityEngine.XR.Interaction.Toolkit.TeleportRequest FadeTeleportationProvider/<FadeIn>d__5::teleportRequest
	TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___teleportRequest_3;
};

// UnityEngine.Events.UnityAction`1<ActionBasedControllerManager/StateId>
struct UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91  : public MulticastDelegate_t
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

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ActionBasedControllerManager
struct ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ActionBasedControllerManager::m_BaseControllerGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BaseControllerGameObject_5;
	// UnityEngine.GameObject ActionBasedControllerManager::m_TeleportControllerGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_TeleportControllerGameObject_6;
	// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::m_TeleportModeActivate
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeActivate_7;
	// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::m_TeleportModeCancel
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TeleportModeCancel_8;
	// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::m_Turn
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Turn_9;
	// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::m_Move
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_Move_10;
	// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::m_TranslateAnchor
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_TranslateAnchor_11;
	// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::m_RotateAnchor
	InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___m_RotateAnchor_12;
	// ActionBasedControllerManager/ControllerState ActionBasedControllerManager::m_SelectState
	ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___m_SelectState_13;
	// ActionBasedControllerManager/ControllerState ActionBasedControllerManager::m_TeleportState
	ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___m_TeleportState_14;
	// ActionBasedControllerManager/ControllerState ActionBasedControllerManager::m_InteractState
	ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___m_InteractState_15;
	// System.Collections.Generic.List`1<ActionBasedControllerManager/ControllerState> ActionBasedControllerManager::m_DefaultStates
	List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* ___m_DefaultStates_16;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController ActionBasedControllerManager::m_BaseController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_BaseController_17;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor ActionBasedControllerManager::m_BaseInteractor
	RuntimeObject* ___m_BaseInteractor_18;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual ActionBasedControllerManager::m_BaseLineVisual
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* ___m_BaseLineVisual_19;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController ActionBasedControllerManager::m_TeleportController
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_TeleportController_20;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractor ActionBasedControllerManager::m_TeleportInteractor
	RuntimeObject* ___m_TeleportInteractor_21;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual ActionBasedControllerManager::m_TeleportLineVisual
	XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* ___m_TeleportLineVisual_22;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ChekItem
struct ChekItem_tBC14CB1630AC2960C4A8DB4D2FDDEA25AC19ED09  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ChekItem::tagName
	String_t* ___tagName_4;
	// UnityEngine.Transform ChekItem::newPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___newPosition_5;
};

// HandVisuals
struct HandVisuals_t7F51CF316B1A6B9AB893D4993B0BF185164C69F9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator HandVisuals::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_4;
	// UnityEngine.InputSystem.InputActionProperty HandVisuals::flex
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___flex_5;
	// UnityEngine.InputSystem.InputActionProperty HandVisuals::point
	InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD ___point_6;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider
struct LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::beginLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___beginLocomotion_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::endLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___endLocomotion_5;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::m_System
	LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* ___m_System_6;
	// UnityEngine.XR.Interaction.Toolkit.LocomotionPhase UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::<locomotionPhase>k__BackingField
	int32_t ___U3ClocomotionPhaseU3Ek__BackingField_7;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.LocomotionSystem> UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::startLocomotion
	Action_1_tF1EFD363206113AB62CC79E4ABC28A4901B693B7* ___startLocomotion_8;
};

// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem
struct LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.LocomotionProvider UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_CurrentExclusiveProvider
	LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* ___m_CurrentExclusiveProvider_4;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_TimeMadeExclusive
	float ___m_TimeMadeExclusive_5;
	// System.Single UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_Timeout
	float ___m_Timeout_6;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_7;
};

// MoveCube
struct MoveCube_tFD726DFF601D0B3C939DF989C86D86ED0FF23E54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 MoveCube::speed
	int32_t ___speed_4;
	// UnityEngine.GameObject MoveCube::sphere
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sphere_5;
};

// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource PlayAudio::playAudio
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___playAudio_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseController
struct XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController/UpdateType UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UpdateTrackingType
	int32_t ___m_UpdateTrackingType_4;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputTracking
	bool ___m_EnableInputTracking_5;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_EnableInputActions
	bool ___m_EnableInputActions_6;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelPrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelPrefab_7;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ModelParent_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_Model
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Model_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_AnimateModel
	bool ___m_AnimateModel_10;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelSelectTransition
	String_t* ___m_ModelSelectTransition_11;
	// System.String UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelDeSelectTransition
	String_t* ___m_ModelDeSelectTransition_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HideControllerModel
	bool ___m_HideControllerModel_13;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_SelectInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_SelectInteractionState_14;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ActivateInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_ActivateInteractionState_15;
	// UnityEngine.XR.Interaction.Toolkit.InteractionState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_UIPressInteractionState
	InteractionState_tA1AFAB17758E43BA3F654BEAD6A61A05992003AB ___m_UIPressInteractionState_16;
	// UnityEngine.XR.Interaction.Toolkit.XRControllerState UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ControllerState
	XRControllerState_tC34C40CB942A51408D8799940A87A6AD87218B50* ___m_ControllerState_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_CreateControllerState
	bool ___m_CreateControllerState_18;
	// UnityEngine.Animator UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_ModelAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___m_ModelAnimator_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_HasWarnedAnimatorMissing
	bool ___m_HasWarnedAnimatorMissing_20;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseController::m_PerformSetup
	bool ___m_PerformSetup_21;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlDeadzone>k__BackingField
	float ___U3CanchorControlDeadzoneU3Ek__BackingField_22;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseController::<anchorControlOffAxisDeadzone>k__BackingField
	float ___U3CanchorControlOffAxisDeadzoneU3Ek__BackingField_23;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable
struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::registered
	Action_1_tB8CA4FD5AE31D22DB74D262F9D03ACFA1C0B2CA8* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::unregistered
	Action_1_tCB862C932EAF49C2968D3AD96CEDF6D2DFED41F0* ___unregistered_5;
	// System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRInteractable,UnityEngine.Vector3,UnityEngine.XR.Interaction.Toolkit.DistanceInfo> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<getDistanceOverride>k__BackingField
	Func_3_tBF1DE89A7437A805938AD0879CFDD9527043E1EF* ___U3CgetDistanceOverrideU3Ek__BackingField_6;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_7;
	// System.Collections.Generic.List`1<UnityEngine.Collider> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Colliders
	List_1_t58F89DEDCD7DABB0CFB009AAD9C0CFE061592252* ___m_Colliders_8;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_9;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/DistanceCalculationMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_DistanceCalculationMode
	int32_t ___m_DistanceCalculationMode_11;
	// UnityEngine.XR.Interaction.Toolkit.InteractableSelectMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectMode
	int32_t ___m_SelectMode_12;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstHoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_FirstHoverEntered_14;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastHoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_LastHoverExited_15;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_16;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_17;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_FirstSelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_FirstSelectEntered_18;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LastSelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_LastSelectExited_19;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_20;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_21;
	// UnityEngine.XR.Interaction.Toolkit.ActivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Activated
	ActivateEvent_tA1D392B588AC99958CB847AE6911DC5131BCFB43* ___m_Activated_22;
	// UnityEngine.XR.Interaction.Toolkit.DeactivateEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_Deactivated
	DeactivateEvent_tFE44262C3D8377F947FD46D4561BB9DAC7E0785D* ___m_Deactivated_23;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsHovering>k__BackingField
	List_1_tEDB0482081C5116241976F52FC9FF27C4DF3E5A1* ___U3CinteractorsHoveringU3Ek__BackingField_24;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<interactorsSelecting>k__BackingField
	List_1_t4A80F0DB75823AFFF5BFC6F95355F0079537C102* ___U3CinteractorsSelectingU3Ek__BackingField_25;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<firstInteractorSelecting>k__BackingField
	RuntimeObject* ___U3CfirstInteractorSelectingU3Ek__BackingField_26;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_27;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_28;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_29;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_30;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_AttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_AttachPoseOnSelect_31;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_LocalAttachPoseOnSelect
	Dictionary_2_tB8AE3DDA8EA7929AFBFE51780B779705E45D363D* ___m_LocalAttachPoseOnSelect_32;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRInteractor,UnityEngine.GameObject> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_ReticleCache
	Dictionary_2_t0582B78260B6945022313E08E6945DDC2F648137* ___m_ReticleCache_33;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_34;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnFirstHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnFirstHoverEntered_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnLastHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnLastHoverExited_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverEntered_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnHoverExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnHoverExited_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectEntered
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectEntered_40;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectExited
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectExited_41;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnSelectCanceled
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnSelectCanceled_42;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnActivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnActivate_43;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractableEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::m_OnDeactivate
	XRInteractableEvent_t58E835C64FCD79C1322F5DDCAE92F3D40FCB2093* ___m_OnDeactivate_44;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::<hoveringInteractors>k__BackingField
	List_1_tC6684CD164AA8009B3DC3C06499A47813321B877* ___U3ChoveringInteractorsU3Ek__BackingField_45;
};

struct XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_35;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor
struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::registered
	Action_1_tBE7729820CBA793D8D5D57207BA5938B012863C5* ___registered_4;
	// System.Action`1<UnityEngine.XR.Interaction.Toolkit.InteractorUnregisteredEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::unregistered
	Action_1_t9A06C49FCB3ADF4C984887951A3DC1DA07CFFBF0* ___unregistered_5;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_InteractionManager_6;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_InteractionLayerMask_7;
	// UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_InteractionLayers
	InteractionLayerMask_t3B3480A4A5E1E0C43314C0D2CEB3BB39175E1FD4 ___m_InteractionLayers_8;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_KeepSelectedTargetValid
	bool ___m_KeepSelectedTargetValid_10;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectedInteractable
	XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6* ___m_StartingSelectedInteractable_11;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingTargetFilter
	XRBaseTargetFilter_t24D9DBCEA900DFEA08D543C91DFC070C1C91594F* ___m_StartingTargetFilter_12;
	// UnityEngine.XR.Interaction.Toolkit.HoverEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverEntered
	HoverEnterEvent_t2BDBCA14FF94DA18C9AC12B43297F6C1641788AB* ___m_HoverEntered_13;
	// UnityEngine.XR.Interaction.Toolkit.HoverExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverExited
	HoverExitEvent_t256704BC79FE0AA61EB2DE3FDDF43A1FC97F5832* ___m_HoverExited_14;
	// UnityEngine.XR.Interaction.Toolkit.SelectEnterEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectEntered
	SelectEnterEvent_tBA2614C8C25D8794D5804C4F66195D74E64FC5D0* ___m_SelectEntered_15;
	// UnityEngine.XR.Interaction.Toolkit.SelectExitEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectExited
	SelectExitEvent_t15DC0A39F9657BA9E6BAE6250D8D64C9671201F6* ___m_SelectExited_16;
	// UnityEngine.XR.Interaction.Toolkit.Filtering.IXRTargetFilter UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_TargetFilter
	RuntimeObject* ___m_TargetFilter_17;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowHover
	bool ___m_AllowHover_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AllowSelect
	bool ___m_AllowSelect_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_IsPerformingManualInteraction
	bool ___m_IsPerformingManualInteraction_20;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesHovered>k__BackingField
	List_1_tEDA90BAEBDE9ABE36C7E54D6A64EE12E2E3A93F0* ___U3CinteractablesHoveredU3Ek__BackingField_21;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<interactablesSelected>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CinteractablesSelectedU3Ek__BackingField_22;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<firstInteractableSelected>k__BackingField
	RuntimeObject* ___U3CfirstInteractableSelectedU3Ek__BackingField_23;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingHoverFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingHoverFilters_24;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_HoverFilters
	ExposedRegistrationList_1_t11A438A04DF188A3BE1950639AAF0CBFAF9065A5* ___m_HoverFilters_25;
	// System.Collections.Generic.List`1<UnityEngine.Object> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_StartingSelectFilters
	List_1_t9A2E2984B23260AECDFA90CEB1F2887075FA4DF3* ___m_StartingSelectFilters_26;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.ExposedRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_SelectFilters
	ExposedRegistrationList_1_t0AF641D8E06922C1FFAF3DA223105F57CE5BC4D8* ___m_SelectFilters_27;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_AttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_AttachPoseOnSelect_28;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable,UnityEngine.Pose> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_LocalAttachPoseOnSelect
	Dictionary_2_tC8CDB97AFC9E538A6AF3126874A321065572174C* ___m_LocalAttachPoseOnSelect_29;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesHovered
	HashSet_1_t442C406BB3DAA0091640BF5E45C6E255DCE9BC88* ___m_UnorderedInteractablesHovered_30;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_UnorderedInteractablesSelected
	HashSet_1_t393CE008A524DA1CCED603B4564BFAB7574A9EDF* ___m_UnorderedInteractablesSelected_31;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_ManualInteractionInteractable
	RuntimeObject* ___m_ManualInteractionInteractable_32;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_RegisteredInteractionManager
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___m_RegisteredInteractionManager_33;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetPriorityMode>k__BackingField
	int32_t ___U3CtargetPriorityModeU3Ek__BackingField_35;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<targetsForSelection>k__BackingField
	List_1_tC3FDFEE51803D5C604CED1C088BC2B8A566E0E5B* ___U3CtargetsForSelectionU3Ek__BackingField_36;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverEntered_37;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnHoverExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnHoverExited_38;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectEntered
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectEntered_39;
	// UnityEngine.XR.Interaction.Toolkit.XRInteractorEvent UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::m_OnSelectExited
	XRInteractorEvent_tA90E755406526412871F25BB621E7F4536CD00E2* ___m_OnSelectExited_40;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::<hoverTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3ChoverTargetsU3Ek__BackingField_41;
};

struct XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.XRInteractionManager UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor::s_InteractionManagerCache
	XRInteractionManager_t93C7F7F0CFEAD83E1A70F92D05B0E663483746CD* ___s_InteractionManagerCache_34;
};

// UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual
struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineWidth
	float ___m_LineWidth_6;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_OverrideInteractorLineLength
	bool ___m_OverrideInteractorLineLength_7;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineLength
	float ___m_LineLength_8;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_WidthCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_WidthCurve_9;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ValidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_ValidColorGradient_10;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_InvalidColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_InvalidColorGradient_11;
	// UnityEngine.Gradient UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_BlockedColorGradient
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___m_BlockedColorGradient_12;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TreatSelectionAsValidState
	bool ___m_TreatSelectionAsValidState_13;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SmoothMovement
	bool ___m_SmoothMovement_14;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_FollowTightness
	float ___m_FollowTightness_15;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapThresholdDistance
	float ___m_SnapThresholdDistance_16;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_Reticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_Reticle_17;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_BlockedReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_BlockedReticle_18;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtFirstRaycastHit
	bool ___m_StopLineAtFirstRaycastHit_19;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_StopLineAtSelection
	bool ___m_StopLineAtSelection_20;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticlePos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticlePos_21;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_ReticleNormal_22;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_EndPositionInLine
	int32_t ___m_EndPositionInLine_23;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_SnapCurve
	bool ___m_SnapCurve_24;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PerformSetup
	bool ___m_PerformSetup_25;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ReticleToUse
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ReticleToUse_26;
	// UnityEngine.LineRenderer UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderer
	LineRenderer_tEFEF960672DB69CB14B6D181FAE6292F0CF8B63D* ___m_LineRenderer_27;
	// UnityEngine.XR.Interaction.Toolkit.ILineRenderable UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderable
	RuntimeObject* ___m_LineRenderable_28;
	// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsSelectInteractor
	RuntimeObject* ___m_LineRenderableAsSelectInteractor_29;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractor UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_LineRenderableAsBaseInteractor
	XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158* ___m_LineRenderableAsBaseInteractor_30;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_TargetPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_TargetPoints_31;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoTargetPoints
	int32_t ___m_NoTargetPoints_32;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_RenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RenderPoints_33;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoRenderPoints
	int32_t ___m_NoRenderPoints_34;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_PreviousRenderPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_PreviousRenderPoints_35;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_NoPreviousRenderPoints
	int32_t ___m_NoPreviousRenderPoints_36;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_ClearArray
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ClearArray_37;
	// UnityEngine.GameObject UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CustomReticle_38;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_CustomReticleAttached
	bool ___m_CustomReticleAttached_39;
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::m_XROrigin
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___m_XROrigin_40;
};

struct XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_StaticFields
{
	// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual::s_XROriginCache
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* ___s_XROriginCache_41;
};

// Unity.XR.CoreUtils.XROrigin
struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera Unity.XR.CoreUtils.XROrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform Unity.XR.CoreUtils.XROrigin::<TrackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTrackablesParentU3Ek__BackingField_5;
	// System.Action`1<Unity.XR.CoreUtils.ARTrackablesParentTransformChangedEventArgs> Unity.XR.CoreUtils.XROrigin::TrackablesParentTransformChanged
	Action_1_t941F5236BDA57C5BC0EE651FF51B247342AFE701* ___TrackablesParentTransformChanged_6;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_OriginBaseGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_OriginBaseGameObject_8;
	// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::m_CameraFloorOffsetObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CameraFloorOffsetObject_9;
	// Unity.XR.CoreUtils.XROrigin/TrackingOriginMode Unity.XR.CoreUtils.XROrigin::m_RequestedTrackingOriginMode
	int32_t ___m_RequestedTrackingOriginMode_10;
	// System.Single Unity.XR.CoreUtils.XROrigin::m_CameraYOffset
	float ___m_CameraYOffset_11;
	// UnityEngine.XR.TrackingOriginModeFlags Unity.XR.CoreUtils.XROrigin::<CurrentTrackingOriginMode>k__BackingField
	int32_t ___U3CCurrentTrackingOriginModeU3Ek__BackingField_12;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitialized
	bool ___m_CameraInitialized_14;
	// System.Boolean Unity.XR.CoreUtils.XROrigin::m_CameraInitializing
	bool ___m_CameraInitializing_15;
};

struct XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> Unity.XR.CoreUtils.XROrigin::s_InputSubsystems
	List_1_t90832B88D7207769654164CC28440CF594CC397D* ___s_InputSubsystems_13;
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

// UnityEngine.XR.Interaction.Toolkit.TeleportationProvider
struct TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972  : public LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B
{
	// UnityEngine.XR.Interaction.Toolkit.TeleportRequest UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::<currentRequest>k__BackingField
	TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___U3CcurrentRequestU3Ek__BackingField_9;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::<validRequest>k__BackingField
	bool ___U3CvalidRequestU3Ek__BackingField_10;
	// System.Single UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::m_DelayTime
	float ___m_DelayTime_11;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::m_HasExclusiveLocomotion
	bool ___m_HasExclusiveLocomotion_12;
	// System.Single UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::m_TimeStarted
	float ___m_TimeStarted_13;
};

// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E  : public XRBaseInteractor_tB48889E8D95695ABF46D2012EC55EA660103D158
{
	// UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor/InputTriggerType UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_SelectActionTrigger
	int32_t ___m_SelectActionTrigger_42;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HideControllerOnSelect
	bool ___m_HideControllerOnSelect_43;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoveredActivate
	bool ___m_AllowHoveredActivate_44;
	// UnityEngine.XR.Interaction.Toolkit.TargetPriorityMode UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_TargetPriorityMode
	int32_t ___m_TargetPriorityMode_45;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectEntered
	bool ___m_PlayAudioClipOnSelectEntered_46;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectEntered_47;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectExited
	bool ___m_PlayAudioClipOnSelectExited_48;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectExited_49;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnSelectCanceled
	bool ___m_PlayAudioClipOnSelectCanceled_50;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnSelectCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnSelectCanceled_51;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverEntered
	bool ___m_PlayAudioClipOnHoverEntered_52;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverEntered
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverEntered_53;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverExited
	bool ___m_PlayAudioClipOnHoverExited_54;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverExited
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverExited_55;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayAudioClipOnHoverCanceled
	bool ___m_PlayAudioClipOnHoverCanceled_56;
	// UnityEngine.AudioClip UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AudioClipForOnHoverCanceled
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___m_AudioClipForOnHoverCanceled_57;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverAudioWhileSelecting
	bool ___m_AllowHoverAudioWhileSelecting_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectEntered
	bool ___m_PlayHapticsOnSelectEntered_59;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterIntensity
	float ___m_HapticSelectEnterIntensity_60;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectEnterDuration
	float ___m_HapticSelectEnterDuration_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectExited
	bool ___m_PlayHapticsOnSelectExited_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitIntensity
	float ___m_HapticSelectExitIntensity_63;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectExitDuration
	float ___m_HapticSelectExitDuration_64;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnSelectCanceled
	bool ___m_PlayHapticsOnSelectCanceled_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelIntensity
	float ___m_HapticSelectCancelIntensity_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticSelectCancelDuration
	float ___m_HapticSelectCancelDuration_67;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverEntered
	bool ___m_PlayHapticsOnHoverEntered_68;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterIntensity
	float ___m_HapticHoverEnterIntensity_69;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverEnterDuration
	float ___m_HapticHoverEnterDuration_70;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverExited
	bool ___m_PlayHapticsOnHoverExited_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitIntensity
	float ___m_HapticHoverExitIntensity_72;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverExitDuration
	float ___m_HapticHoverExitDuration_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_PlayHapticsOnHoverCanceled
	bool ___m_PlayHapticsOnHoverCanceled_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelIntensity
	float ___m_HapticHoverCancelIntensity_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_HapticHoverCancelDuration
	float ___m_HapticHoverCancelDuration_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowHoverHapticsWhileSelecting
	bool ___m_AllowHoverHapticsWhileSelecting_77;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_AllowActivate
	bool ___m_AllowActivate_78;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseController UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_Controller
	XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* ___m_Controller_79;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ActivateEventArgs
	LinkedPool_1_t99CFF33CB8085652A0F2FC6579D0388FB3CBAA01* ___m_ActivateEventArgs_80;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.XR.Interaction.Toolkit.DeactivateEventArgs> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_DeactivateEventArgs
	LinkedPool_1_t0F5C109EA19EF35798DEF24B63645919D0B7B53B* ___m_DeactivateEventArgs_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectActive
	bool ___m_ToggleSelectActive_83;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_ToggleSelectDeactivatedThisFrame
	bool ___m_ToggleSelectDeactivatedThisFrame_84;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_WaitingForSelectDeactivate
	bool ___m_WaitingForSelectDeactivate_85;
	// UnityEngine.AudioSource UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::m_EffectsAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___m_EffectsAudioSource_86;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::<validTargets>k__BackingField
	List_1_t02510C493B34D49F210C22C40442D863A08509CB* ___U3CvalidTargetsU3Ek__BackingField_87;
};

struct XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRActivateInteractable> UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::s_ActivateTargets
	List_1_tAB2FD3FF9900A585A26C6DC2D8EE94D30F2AECCA* ___s_ActivateTargets_82;
};

// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable
struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772  : public XRBaseInteractable_tC2C966C710AE6AC232E248B1BCF323386110D0F6
{
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AttachTransform_58;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UseDynamicAttach
	bool ___m_UseDynamicAttach_59;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachPosition
	bool ___m_MatchAttachPosition_60;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MatchAttachRotation
	bool ___m_MatchAttachRotation_61;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SnapToColliderVolume
	bool ___m_SnapToColliderVolume_62;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachEaseInTime
	float ___m_AttachEaseInTime_63;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MovementType
	int32_t ___m_MovementType_64;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityDamping
	float ___m_VelocityDamping_65;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_VelocityScale
	float ___m_VelocityScale_66;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityDamping
	float ___m_AngularVelocityDamping_67;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AngularVelocityScale
	float ___m_AngularVelocityScale_68;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackPosition
	bool ___m_TrackPosition_69;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPosition
	bool ___m_SmoothPosition_70;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothPositionAmount
	float ___m_SmoothPositionAmount_71;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenPosition
	float ___m_TightenPosition_72;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TrackRotation
	bool ___m_TrackRotation_73;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotation
	bool ___m_SmoothRotation_74;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SmoothRotationAmount
	float ___m_SmoothRotationAmount_75;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TightenRotation
	float ___m_TightenRotation_76;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowOnDetach
	bool ___m_ThrowOnDetach_77;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingDuration
	float ___m_ThrowSmoothingDuration_78;
	// UnityEngine.AnimationCurve UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___m_ThrowSmoothingCurve_79;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowVelocityScale
	float ___m_ThrowVelocityScale_80;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowAngularVelocityScale
	float ___m_ThrowAngularVelocityScale_81;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ForceGravityOnDetach
	bool ___m_ForceGravityOnDetach_82;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_RetainTransformParent
	bool ___m_RetainTransformParent_83;
	// UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable/AttachPointCompatibilityMode UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AttachPointCompatibilityMode
	int32_t ___m_AttachPointCompatibilityMode_84;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingSingleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingSingleGrabTransformers_85;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.XRBaseGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_StartingMultipleGrabTransformers
	List_1_tCFCD970A7548BC894D178194E5028E3E294AF3B9* ___m_StartingMultipleGrabTransformers_86;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_AddDefaultGrabTransformers
	bool ___m_AddDefaultGrabTransformers_87;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_SingleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_SingleGrabTransformers_88;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.SmallRegistrationList`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_MultipleGrabTransformers
	SmallRegistrationList_1_t748513BBF6769ED01AAD787FF7698EF51EBEF62D* ___m_MultipleGrabTransformers_89;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.Transformers.IXRGrabTransformer> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabTransformersAddedWhenGrabbed
	List_1_tB0C796BACCE72002824004B31D3AFE084C3BFC75* ___m_GrabTransformersAddedWhenGrabbed_90;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_GrabCountChanged
	bool ___m_GrabCountChanged_91;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_IsProcessingGrabTransformers
	bool ___m_IsProcessingGrabTransformers_92;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_TargetPose_93;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TargetLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TargetLocalScale_94;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentAttachEaseTime
	float ___m_CurrentAttachEaseTime_95;
	// UnityEngine.XR.Interaction.Toolkit.XRBaseInteractable/MovementType UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_CurrentMovementType
	int32_t ___m_CurrentMovementType_96;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachInLateUpdate
	bool ___m_DetachInLateUpdate_97;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachVelocity_98;
	// UnityEngine.Vector3 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DetachAngularVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_DetachAngularVelocity_99;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingCurrentFrame
	int32_t ___m_ThrowSmoothingCurrentFrame_100;
	// System.Single[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFrameTimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_ThrowSmoothingFrameTimes_101;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingVelocityFrames_102;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingAngularVelocityFrames
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ThrowSmoothingAngularVelocityFrames_103;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_ThrowSmoothingFirstUpdate
	bool ___m_ThrowSmoothingFirstUpdate_104;
	// UnityEngine.Pose UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_LastThrowReferencePose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_LastThrowReferencePose_105;
	// UnityEngine.Rigidbody UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_Rigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___m_Rigidbody_106;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_WasKinematic
	bool ___m_WasKinematic_107;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_UsedGravity
	bool ___m_UsedGravity_108;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldDrag
	float ___m_OldDrag_109;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OldAngularDrag
	float ___m_OldAngularDrag_110;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_OriginalSceneParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_OriginalSceneParent_111;
	// UnityEngine.XR.Interaction.Toolkit.Utilities.TeleportationMonitor UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_TeleportationMonitor
	TeleportationMonitor_tC9AB34520A1A0D6D2F18DD2067601DE1405C72C6* ___m_TeleportationMonitor_112;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor,UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::m_DynamicAttachTransforms
	Dictionary_2_t81F2911EE2E2DBAC0CE118A677A47BAC16F93B5C* ___m_DynamicAttachTransforms_113;
};

struct XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_StaticFields
{
	// UnityEngine.XR.Interaction.Toolkit.Utilities.Pooling.LinkedPool`1<UnityEngine.Transform> UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_DynamicAttachTransformPool
	LinkedPool_1_t903D30868AECB20DD006FC2E04DDC68D822C3450* ___s_DynamicAttachTransformPool_114;
	// Unity.Profiling.ProfilerMarker UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::s_ProcessGrabTransformersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_ProcessGrabTransformersMarker_115;
};

// FadeTeleportationProvider
struct FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A  : public TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972
{
	// System.Boolean FadeTeleportationProvider::EnableFade
	bool ___EnableFade_14;
	// UnityEngine.UI.RawImage FadeTeleportationProvider::faderImage
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ___faderImage_15;
	// System.Single FadeTeleportationProvider::fadeSpeed
	float ___fadeSpeed_16;
	// System.Single FadeTeleportationProvider::timer
	float ___timer_17;
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

// OffsetGrabInteractable
struct OffsetGrabInteractable_tFCA936EE73D95AF080C82EBAB88D9223A5FAD964  : public XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772
{
	// System.Boolean OffsetGrabInteractable::OffsetGrab
	bool ___OffsetGrab_116;
	// UnityEngine.Pose OffsetGrabInteractable::initialPose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___initialPose_117;
};

// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor
struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76  : public XRBaseControllerInteractor_t718A447F8F3D646B51B42E1FAFEA2C1A1EF1C66E
{
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/LineType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LineType
	int32_t ___m_LineType_92;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_BlendVisualLinePoints
	bool ___m_BlendVisualLinePoints_93;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_MaxRaycastDistance
	float ___m_MaxRaycastDistance_94;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RayOriginTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RayOriginTransform_95;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_ReferenceFrame_96;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Velocity
	float ___m_Velocity_97;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_Acceleration
	float ___m_Acceleration_98;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalGroundHeight
	float ___m_AdditionalGroundHeight_99;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AdditionalFlightTime
	float ___m_AdditionalFlightTime_100;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointDistance
	float ___m_EndPointDistance_101;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EndPointHeight
	float ___m_EndPointHeight_102;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointDistance
	float ___m_ControlPointDistance_103;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPointHeight
	float ___m_ControlPointHeight_104;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SampleFrequency
	int32_t ___m_SampleFrequency_105;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/HitDetectionType UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitDetectionType
	int32_t ___m_HitDetectionType_106;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SphereCastRadius
	float ___m_SphereCastRadius_107;
	// UnityEngine.LayerMask UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_RaycastMask_108;
	// UnityEngine.QueryTriggerInteraction UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastTriggerInteraction
	int32_t ___m_RaycastTriggerInteraction_109;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitClosestOnly
	bool ___m_HitClosestOnly_110;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverToSelect
	bool ___m_HoverToSelect_111;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HoverTimeToSelect
	float ___m_HoverTimeToSelect_112;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_EnableUIInteraction
	bool ___m_EnableUIInteraction_113;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AllowAnchorControl
	bool ___m_AllowAnchorControl_114;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UseForceGrab
	bool ___m_UseForceGrab_115;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RotateSpeed
	float ___m_RotateSpeed_116;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_TranslateSpeed
	float ___m_TranslateSpeed_117;
	// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotateReferenceFrame
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_AnchorRotateReferenceFrame_118;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/AnchorRotationMode UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_AnchorRotationMode
	int32_t ___m_AnchorRotationMode_119;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ValidTargets
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___m_ValidTargets_120;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_InputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_InputModule_121;
	// UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RegisteredInputModule
	XRUIInputModule_tA641266A2621C1465F3C5433D747428A4CDA72F0* ___m_RegisteredInputModule_122;
	// UnityEngine.XR.Interaction.Toolkit.IXRInteractable UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_CurrentNearestObject
	RuntimeObject* ___m_CurrentNearestObject_123;
	// System.Single UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LastTimeHoveredObjectChanged
	float ___m_LastTimeHoveredObjectChanged_124;
	// System.Boolean UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_PassedHoverTimeToSelect
	bool ___m_PassedHoverTimeToSelect_125;
	// UnityEngine.RaycastHit[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHits
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___m_RaycastHits_126;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitsCount
	int32_t ___m_RaycastHitsCount_127;
	// UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/RaycastHitComparer UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitComparer
	RaycastHitComparer_tC59C36D577B7426F5EE8E3AE65B988F953757E9D* ___m_RaycastHitComparer_128;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___m_SamplePoints_129;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_SamplePointsFrameUpdated
	int32_t ___m_SamplePointsFrameUpdated_130;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_RaycastHitEndpointIndex
	int32_t ___m_RaycastHitEndpointIndex_131;
	// System.Int32 UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_UIRaycastHitEndpointIndex
	int32_t ___m_UIRaycastHitEndpointIndex_132;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_ControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_ControlPoints_133;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_HitChordControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_HitChordControlPoints_134;
	// UnityEngine.PhysicsScene UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::m_LocalPhysicsScene
	PhysicsScene_t55222DD37072E8560EE054A07C0E3FE391D9D9DE ___m_LocalPhysicsScene_137;
};

struct XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.IXRInteractable> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_Results
	List_1_t3B3CED900C4A273E3B63AAB5493C4D6D4B112810* ___s_Results_88;
	// System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor/SamplePoint> UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchSamplePoints
	List_1_tC0F6311D5ACC55EC4184D225E50673DBDAC555BD* ___s_ScratchSamplePoints_135;
	// UnityEngine.Vector3[] UnityEngine.XR.Interaction.Toolkit.XRRayInteractor::s_ScratchControlPoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_ScratchControlPoints_136;
};

// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___m_Texture_37;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_UVRect_38;
};
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


// System.Void UnityEngine.Events.UnityAction`1<System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m73A3D7B99C088CA6BAAB465E23008BCB9CD97339_gshared (UnityAction_1_tD36D5C84023177B3A8D5E71084DB3930D8274781* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mEBB9505653F17604186FF06836701AA21D254F00_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, UnityAction_1_tD36D5C84023177B3A8D5E71084DB3930D8274781* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mA71B41C07ABA91BE82B1A3DF9A62CF9114D12A31_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, UnityAction_1_tD36D5C84023177B3A8D5E71084DB3930D8274781* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mB03FAFB4EA9BB010481D103709FB149F26D2D1D0_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mB02CA1F5BD6D866640636D18011AC3329058C26B_gshared (UnityEvent_1_t090B79D1A655BCAB01BC91C7409AC476DC731B81* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;

// System.Void ActionBasedControllerManager::FindBaseControllerComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_FindBaseControllerComponents_m2DAE4C0A983FA3DD044F5F3F1050BDD2A70BC7C7 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager::FindTeleportControllerComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_FindTeleportControllerComponents_m18D04F1B9AA0465AF13CF04295C35B7CFA1A6C2F (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) ;
// ActionBasedControllerManager/StateEnterEvent ActionBasedControllerManager/ControllerState::get_onEnter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<ActionBasedControllerManager/StateId>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892 (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m73A3D7B99C088CA6BAAB465E23008BCB9CD97339_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<ActionBasedControllerManager/StateId>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6 (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F* __this, UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F*, UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*, const RuntimeMethod*))UnityEvent_1_AddListener_mEBB9505653F17604186FF06836701AA21D254F00_gshared)(__this, ___call0, method);
}
// ActionBasedControllerManager/StateUpdateEvent ActionBasedControllerManager/ControllerState::get_onUpdate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// ActionBasedControllerManager/StateExitEvent ActionBasedControllerManager/ControllerState::get_onExit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<ActionBasedControllerManager/StateId>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819 (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F* __this, UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F*, UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*, const RuntimeMethod*))UnityEvent_1_RemoveListener_mA71B41C07ABA91BE82B1A3DF9A62CF9114D12A31_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ActionBasedControllerManager/ControllerState>::Add(T)
inline void List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_inline (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* __this, ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65*, ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ActionBasedControllerManager::TransitionState(ActionBasedControllerManager/ControllerState,ActionBasedControllerManager/ControllerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___fromState0, ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___toState1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ActionBasedControllerManager/ControllerState>::GetEnumerator()
inline Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996 List_1_GetEnumerator_m6F12868F7EBCB2B5E76625C38A76AA8A09567249 (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996 (*) (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ActionBasedControllerManager/ControllerState>::Dispose()
inline void Enumerator_Dispose_mEFAB2B06155DBA6F24F8D5E7A84CC051FB677721 (Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ActionBasedControllerManager/ControllerState>::get_Current()
inline ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* Enumerator_get_Current_m6447ABCA80CD0D159E9208FB85D2B8D5066C5926_inline (Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996* __this, const RuntimeMethod* method)
{
	return ((  ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* (*) (Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean ActionBasedControllerManager/ControllerState::get_enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerState_get_enabled_m707D4F603315C4B716C59F2F887AE942D9C96114_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<ActionBasedControllerManager/ControllerState>::MoveNext()
inline bool Enumerator_MoveNext_mE1B1FC219D3FFC4FE477489C3AE9AB551DFFE00F (Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void ActionBasedControllerManager/ControllerState::set_enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerState_set_enabled_m27C729892CD7A747809EF2F5161DCAF7598A0063_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, bool ___value0, const RuntimeMethod* method) ;
// ActionBasedControllerManager/StateId ActionBasedControllerManager/ControllerState::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerState_get_id_m244CFA6F302E22849C064CF751C719FAAFE90C50_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<ActionBasedControllerManager/StateId>::Invoke(T0)
inline void UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mB03FAFB4EA9BB010481D103709FB149F26D2D1D0_gshared)(__this, ___arg00, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRBaseController>()
inline XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor>()
inline RuntimeObject* GameObject_GetComponent_TisIXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_mABD58760AD90FFF0C23236397309EA129CCE6CC9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRInteractorLineVisual>()
inline XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.XR.Interaction.Toolkit.XRRayInteractor>()
inline XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRBaseController::set_enableInputActions(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseController_set_enableInputActions_m74E6BEA651230890AF81718CE1E25FF030592BFA_inline (XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager::SetBaseController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetBaseController_m1757539FB3FE97E9616281A5FCF9E8A1E5E17AE3 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager::SetTeleportController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetTeleportController_mFB1CD8DF84E54E540353A218E03777B34CF36815 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, bool ___enable0, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_triggered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputActionPhase UnityEngine.InputSystem.InputAction::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputAction_get_phase_mA9B46F817A05ED2094C318354A05895FE4E1F891 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.InputSystem.InputAction::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.InputSystem.InputAction::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50 (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method) ;
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionReference::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* __this, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager/ControllerState::.ctor(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState__ctor_m27AE48BBE091A0FD0A4748BA05217B4A8CFA482B (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, int32_t ___defaultId0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ActionBasedControllerManager/ControllerState>::.ctor()
inline void List_1__ctor_m54E1B0F1C0E87E752E7D9C599D87DDAF548C4A40 (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<ActionBasedControllerManager/StateId>::.ctor()
inline void UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225 (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t5252AF18711A6BFE74A17416C30039D5FCBD359F*, const RuntimeMethod*))UnityEvent_1__ctor_mB02CA1F5BD6D866640636D18011AC3329058C26B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m03D3E5121B9A6100351984D0CE3050B909CD3235 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager/StateEnterEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateEnterEvent__ctor_mD412A425B215BC2D726BBED2227604869BD896B3 (StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* __this, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager/StateUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateUpdateEvent__ctor_m3F6241CF1A33C963DEDC354350B61BD4C5983644 (StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* __this, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager/StateExitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateExitEvent__ctor_mA90667173BFCFA00241495160E15DB2E2BC77921 (StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void ActionBasedControllerManager/ControllerState::set_id(ActionBasedControllerManager/StateId)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerState_set_id_m79F209BD1B74650590178C922086997CE9572ADC_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) ;
// System.Void FadeTeleportationProvider/<FadeIn>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5__ctor_m54E7B9E37845E5880BD3878CEF9ADF2DE869E0DA (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void FadeTeleportationProvider/<FadeOut>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6__ctor_m054367F1A53DFC78A127A680A4CB086C59AEFABC (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FadeTeleportationProvider::FadeIn(UnityEngine.XR.Interaction.Toolkit.TeleportRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeTeleportationProvider_FadeIn_m73EDDB67B1861D7E9F837A10FE26126424ABD4A4 (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___teleportRequest0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::set_currentRequest(UnityEngine.XR.Interaction.Toolkit.TeleportRequest)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportationProvider_set_currentRequest_m109FD936C57760C70C312B799E6AD6D7651B0581_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::set_validRequest(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportationProvider_set_validRequest_m539A9FBCF21BBCE6062D888442666D0679B27B0D_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::get_validRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TeleportationProvider_get_validRequest_m083A1AF44E1AD7BD791A2B599216067B94D65788_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::BeginLocomotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocomotionProvider_BeginLocomotion_mFB221E462FEC6E933C9161E30271678311D1AAEF (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.LocomotionSystem UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::get_system()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// Unity.XR.CoreUtils.XROrigin UnityEngine.XR.Interaction.Toolkit.LocomotionSystem::get_xrOrigin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline (LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.TeleportRequest UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::get_currentRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.CoreUtils.XROrigin::MatchOriginUp(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MatchOriginUp_m21E7F97625F9C616B757226DB083A8FE00297D1C (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destinationUp0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Boolean Unity.XR.CoreUtils.XROrigin::MatchOriginUpCameraForward(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MatchOriginUpCameraForward_m8D6A19292733DBEA380BF94DF74A6F9BC33E1F90 (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destinationUp0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___destinationForward1, const RuntimeMethod* method) ;
// UnityEngine.GameObject Unity.XR.CoreUtils.XROrigin::get_Origin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single Unity.XR.CoreUtils.XROrigin::get_CameraInOriginSpaceHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XROrigin_get_CameraInOriginSpaceHeight_m1DC15C0A56A969838A827F425ABBED375751BFC5 (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.XR.CoreUtils.XROrigin::MoveCameraToWorldLocation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XROrigin_MoveCameraToWorldLocation_m7AA0DF514F9F8E9E68541C314FAB868D043E5B4D (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredWorldLocation0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator FadeTeleportationProvider::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeTeleportationProvider_FadeOut_mD72CC4C168780DD202732D10B4AA7B0E7C6B708A (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Interaction.Toolkit.LocomotionProvider::EndLocomotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocomotionProvider_EndLocomotion_m64CC4C14527FF9F8D2956159425A2208E4612ECB (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.TeleportationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TeleportationProvider__ctor_mE4031FC9A5B03DA60B3C68E52F39D0F721C3C2ED (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionProperty::get_action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47 (InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* __this, const RuntimeMethod* method) ;
// TValue UnityEngine.InputSystem.InputAction::ReadValue<System.Single>()
inline float InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* __this, const RuntimeMethod* method)
{
	return ((  float (*) (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*, const RuntimeMethod*))InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::get_attachTransform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactorObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractable UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs::get_interactableObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SelectEnterEventArgs_get_interactableObject_m1BF44240E99A894B17EE07BBBC4B6AA6D1058DD2 (SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::OnSelectEntering(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable_OnSelectEntering_m61F7528D64DC4008194F74434CCBB07118F65230 (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::OnSelectExiting(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable_OnSelectExiting_mF52B6F4DD6BAC23E34610E8394768B08510F7A65 (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Interaction.Toolkit.XRGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___translation0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
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
// UnityEngine.GameObject ActionBasedControllerManager::get_baseControllerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ActionBasedControllerManager_get_baseControllerGameObject_m9BBD1A52F28A68AEF9DC1AF3EABD57D0DD68E641 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_BaseControllerGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_BaseControllerGameObject_5;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_baseControllerGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_baseControllerGameObject_mAB105960DAB02BC0FDAFEAC3474F296528309942 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_BaseControllerGameObject = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_BaseControllerGameObject_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BaseControllerGameObject_5), (void*)L_0);
		return;
	}
}
// UnityEngine.GameObject ActionBasedControllerManager::get_teleportControllerGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ActionBasedControllerManager_get_teleportControllerGameObject_m81B589FC829FE83126B3EFE8899A344FC6DD1119 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TeleportControllerGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TeleportControllerGameObject_6;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_teleportControllerGameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_teleportControllerGameObject_m26B6302B34DFE491CDD459D41C24FBF63594C30E (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TeleportControllerGameObject = value;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_TeleportControllerGameObject_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportControllerGameObject_6), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::get_teleportModeActivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ActionBasedControllerManager_get_teleportModeActivate_m16BD82FD6ACA5DDC472A182A867A9A0B86A2C344 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TeleportModeActivate;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TeleportModeActivate_7;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_teleportModeActivate(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_teleportModeActivate_mD9538B9BDCB33B6FE92242D0CB4C08C9E69B135C (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TeleportModeActivate = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___m_TeleportModeActivate_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportModeActivate_7), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::get_teleportModeCancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ActionBasedControllerManager_get_teleportModeCancel_mB0BCFACD71AF2314AD9958033C9F55CD6CF238C0 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TeleportModeCancel;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TeleportModeCancel_8;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_teleportModeCancel(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_teleportModeCancel_mE4C42ADD20817F2F8985DB24101ECF2D078060B6 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TeleportModeCancel = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___m_TeleportModeCancel_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportModeCancel_8), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::get_turn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ActionBasedControllerManager_get_turn_m829C689DAC6861D5A48033ACE33AAB79001A7975 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Turn;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Turn_9;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_turn(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_turn_mB6001E7C8DA50B44C3525B9ED060F9BE621B21DB (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Turn = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___m_Turn_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Turn_9), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::get_move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ActionBasedControllerManager_get_move_m094F8B1E9ACF36EC256BA206612A1509CE73E854 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Move;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_Move_10;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_move(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_move_m0F3CB89E0FCEC14F6E7FEB69BC36160F33BDC097 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Move = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___m_Move_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Move_10), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::get_translateAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ActionBasedControllerManager_get_translateAnchor_m2172B8A268F88BD9CBC78EB716763D1592F6845B (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_TranslateAnchor;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TranslateAnchor_11;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_translateAnchor(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_translateAnchor_m651A9BF96B432DE404DF89F19689A1395CD49798 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_TranslateAnchor = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___m_TranslateAnchor_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TranslateAnchor_11), (void*)L_0);
		return;
	}
}
// UnityEngine.InputSystem.InputActionReference ActionBasedControllerManager::get_rotateAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ActionBasedControllerManager_get_rotateAnchor_m1945D186CC0C636EA53FC2199B0E7F67F19C7078 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// get => m_RotateAnchor;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_RotateAnchor_12;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::set_rotateAnchor(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_set_rotateAnchor_m43256FA59C01AD731DDB7F53505FEB5A0D64FE65 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_RotateAnchor = value;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___value0;
		__this->___m_RotateAnchor_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_RotateAnchor_12), (void*)L_0);
		return;
	}
}
// ActionBasedControllerManager/ControllerState ActionBasedControllerManager::get_selectState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ActionBasedControllerManager_get_selectState_m4DD5D8BB8C2551D2CB6AAEF6853F79F1C08E8930 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// public ControllerState selectState => m_SelectState;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = __this->___m_SelectState_13;
		return L_0;
	}
}
// ActionBasedControllerManager/ControllerState ActionBasedControllerManager::get_teleportState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ActionBasedControllerManager_get_teleportState_mCACDE264068C637D708A3E8EA298D8A682C0CD02 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// public ControllerState teleportState => m_TeleportState;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = __this->___m_TeleportState_14;
		return L_0;
	}
}
// ActionBasedControllerManager/ControllerState ActionBasedControllerManager::get_interactState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ActionBasedControllerManager_get_interactState_m6FFFA84102BF4538CB3D4A5FD0D0CC3FBA97F1E7 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	{
		// public ControllerState interactState => m_InteractState;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = __this->___m_InteractState_15;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnable_mEBD44DDC11997FCE656E222D291B59E7E10FC1FF (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnEnterInteractState_mB99748D913C19731B28CBCA3BC752CD1CABD36E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnEnterSelectState_mEB515A6479A2D50C7321DCA11345B0BB59469A60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnEnterTeleportState_mFD04877915A69518F79F2555CA5A47D508FCAD7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnExitInteractState_mFB5720185801A2E03937CB917EBA0BE4E5CCE55A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnExitSelectState_m38A3B528524D4210A5F7BA81C38AF5EF8228B36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnExitTeleportState_m698DF18B5D17AF98635F6B14BD9249AF8FD76228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUpdateInteractState_mC54DCB46ADA2F3129199524FE19B837D72BE64A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUpdateSelectState_m6E89D69553FEF9549BFA844ED887350AE8E79B83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUpdateTeleportState_m201675C3C4B705C2F277386FB1D70CED56B77DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FindBaseControllerComponents();
		ActionBasedControllerManager_FindBaseControllerComponents_m2DAE4C0A983FA3DD044F5F3F1050BDD2A70BC7C7(__this, NULL);
		// FindTeleportControllerComponents();
		ActionBasedControllerManager_FindTeleportControllerComponents_m18D04F1B9AA0465AF13CF04295C35B7CFA1A6C2F(__this, NULL);
		// m_SelectState.onEnter.AddListener(OnEnterSelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = __this->___m_SelectState_13;
		NullCheck(L_0);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_1;
		L_1 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_0, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_2 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_2, __this, (intptr_t)((void*)ActionBasedControllerManager_OnEnterSelectState_mEB515A6479A2D50C7321DCA11345B0BB59469A60_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6(L_1, L_2, UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		// m_SelectState.onUpdate.AddListener(OnUpdateSelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_3 = __this->___m_SelectState_13;
		NullCheck(L_3);
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_4;
		L_4 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUpdateSelectState_m6E89D69553FEF9549BFA844ED887350AE8E79B83_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// m_SelectState.onExit.AddListener(OnExitSelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_6 = __this->___m_SelectState_13;
		NullCheck(L_6);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_7;
		L_7 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_6, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_8 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_8, __this, (intptr_t)((void*)ActionBasedControllerManager_OnExitSelectState_m38A3B528524D4210A5F7BA81C38AF5EF8228B36F_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6(L_7, L_8, UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		// m_TeleportState.onEnter.AddListener(OnEnterTeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_9 = __this->___m_TeleportState_14;
		NullCheck(L_9);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_10;
		L_10 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_9, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_11 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_11, __this, (intptr_t)((void*)ActionBasedControllerManager_OnEnterTeleportState_mFD04877915A69518F79F2555CA5A47D508FCAD7C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6(L_10, L_11, UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		// m_TeleportState.onUpdate.AddListener(OnUpdateTeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_12 = __this->___m_TeleportState_14;
		NullCheck(L_12);
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_13;
		L_13 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUpdateTeleportState_m201675C3C4B705C2F277386FB1D70CED56B77DAB_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// m_TeleportState.onExit.AddListener(OnExitTeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_15 = __this->___m_TeleportState_14;
		NullCheck(L_15);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_16;
		L_16 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_15, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_17 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_17, __this, (intptr_t)((void*)ActionBasedControllerManager_OnExitTeleportState_m698DF18B5D17AF98635F6B14BD9249AF8FD76228_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6(L_16, L_17, UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		// m_InteractState.onEnter.AddListener(OnEnterInteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_18 = __this->___m_InteractState_15;
		NullCheck(L_18);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_19;
		L_19 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_18, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_20 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_20, __this, (intptr_t)((void*)ActionBasedControllerManager_OnEnterInteractState_mB99748D913C19731B28CBCA3BC752CD1CABD36E4_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6(L_19, L_20, UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		// m_InteractState.onUpdate.AddListener(OnUpdateInteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_21 = __this->___m_InteractState_15;
		NullCheck(L_21);
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_22;
		L_22 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_21, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUpdateInteractState_mC54DCB46ADA2F3129199524FE19B837D72BE64A9_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_22, L_23, NULL);
		// m_InteractState.onExit.AddListener(OnExitInteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_24 = __this->___m_InteractState_15;
		NullCheck(L_24);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_25;
		L_25 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_24, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_26 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_26, __this, (intptr_t)((void*)ActionBasedControllerManager_OnExitInteractState_mFB5720185801A2E03937CB917EBA0BE4E5CCE55A_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6(L_25, L_26, UnityEvent_1_AddListener_m722A3745CEC9E23BEC650E26685C5D1C2C51C4C6_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnDisable_m2A5FE037ABA332667A04945D41EAB76BA7731811 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnEnterInteractState_mB99748D913C19731B28CBCA3BC752CD1CABD36E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnEnterSelectState_mEB515A6479A2D50C7321DCA11345B0BB59469A60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnEnterTeleportState_mFD04877915A69518F79F2555CA5A47D508FCAD7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnExitInteractState_mFB5720185801A2E03937CB917EBA0BE4E5CCE55A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnExitSelectState_m38A3B528524D4210A5F7BA81C38AF5EF8228B36F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnExitTeleportState_m698DF18B5D17AF98635F6B14BD9249AF8FD76228_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUpdateInteractState_mC54DCB46ADA2F3129199524FE19B837D72BE64A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUpdateSelectState_m6E89D69553FEF9549BFA844ED887350AE8E79B83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionBasedControllerManager_OnUpdateTeleportState_m201675C3C4B705C2F277386FB1D70CED56B77DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_SelectState.onEnter.RemoveListener(OnEnterSelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = __this->___m_SelectState_13;
		NullCheck(L_0);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_1;
		L_1 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_0, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_2 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_2, __this, (intptr_t)((void*)ActionBasedControllerManager_OnEnterSelectState_mEB515A6479A2D50C7321DCA11345B0BB59469A60_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819(L_1, L_2, UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		// m_SelectState.onUpdate.RemoveListener(OnUpdateSelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_3 = __this->___m_SelectState_13;
		NullCheck(L_3);
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_4;
		L_4 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUpdateSelectState_m6E89D69553FEF9549BFA844ED887350AE8E79B83_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// m_SelectState.onExit.RemoveListener(OnExitSelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_6 = __this->___m_SelectState_13;
		NullCheck(L_6);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_7;
		L_7 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_6, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_8 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_8, __this, (intptr_t)((void*)ActionBasedControllerManager_OnExitSelectState_m38A3B528524D4210A5F7BA81C38AF5EF8228B36F_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819(L_7, L_8, UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		// m_TeleportState.onEnter.RemoveListener(OnEnterTeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_9 = __this->___m_TeleportState_14;
		NullCheck(L_9);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_10;
		L_10 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_9, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_11 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_11, __this, (intptr_t)((void*)ActionBasedControllerManager_OnEnterTeleportState_mFD04877915A69518F79F2555CA5A47D508FCAD7C_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819(L_10, L_11, UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		// m_TeleportState.onUpdate.RemoveListener(OnUpdateTeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_12 = __this->___m_TeleportState_14;
		NullCheck(L_12);
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_13;
		L_13 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUpdateTeleportState_m201675C3C4B705C2F277386FB1D70CED56B77DAB_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_13, L_14, NULL);
		// m_TeleportState.onExit.RemoveListener(OnExitTeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_15 = __this->___m_TeleportState_14;
		NullCheck(L_15);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_16;
		L_16 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_15, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_17 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_17, __this, (intptr_t)((void*)ActionBasedControllerManager_OnExitTeleportState_m698DF18B5D17AF98635F6B14BD9249AF8FD76228_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819(L_16, L_17, UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		// m_InteractState.onEnter.RemoveListener(OnEnterInteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_18 = __this->___m_InteractState_15;
		NullCheck(L_18);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_19;
		L_19 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_18, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_20 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_20, __this, (intptr_t)((void*)ActionBasedControllerManager_OnEnterInteractState_mB99748D913C19731B28CBCA3BC752CD1CABD36E4_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819(L_19, L_20, UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		// m_InteractState.onUpdate.RemoveListener(OnUpdateInteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_21 = __this->___m_InteractState_15;
		NullCheck(L_21);
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_22;
		L_22 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_21, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_23, __this, (intptr_t)((void*)ActionBasedControllerManager_OnUpdateInteractState_mC54DCB46ADA2F3129199524FE19B837D72BE64A9_RuntimeMethod_var), NULL);
		NullCheck(L_22);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_22, L_23, NULL);
		// m_InteractState.onExit.RemoveListener(OnExitInteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_24 = __this->___m_InteractState_15;
		NullCheck(L_24);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_25;
		L_25 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_24, NULL);
		UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91* L_26 = (UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91*)il2cpp_codegen_object_new(UnityAction_1_tAB1994DAEBB069735EC1572BB87649450D6FDD91_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		UnityAction_1__ctor_m0C8CED63A0FF3B546E83A867112EAAB204CA8892(L_26, __this, (intptr_t)((void*)ActionBasedControllerManager_OnExitInteractState_mFB5720185801A2E03937CB917EBA0BE4E5CCE55A_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819(L_25, L_26, UnityEvent_1_RemoveListener_m7942215179548701BB1DD7B3493E8F9A3EDFB819_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Start_m081FCE40055F7990E4619BB17EE87046EA901C34 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_DefaultStates.Add(m_SelectState);
		List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* L_0 = __this->___m_DefaultStates_16;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_1 = __this->___m_SelectState_13;
		NullCheck(L_0);
		List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_inline(L_0, L_1, List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_RuntimeMethod_var);
		// m_DefaultStates.Add(m_TeleportState);
		List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* L_2 = __this->___m_DefaultStates_16;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_3 = __this->___m_TeleportState_14;
		NullCheck(L_2);
		List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_inline(L_2, L_3, List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_RuntimeMethod_var);
		// m_DefaultStates.Add(m_InteractState);
		List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* L_4 = __this->___m_DefaultStates_16;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_5 = __this->___m_InteractState_15;
		NullCheck(L_4);
		List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_inline(L_4, L_5, List_1_Add_m41BA3FF1854129068D550D0785AA6C67AEFC25F7_RuntimeMethod_var);
		// TransitionState(null, m_SelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_6 = __this->___m_SelectState_13;
		ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D(__this, (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0*)NULL, L_6, NULL);
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_Update_m1C64EF13281D8FDF5EE8D723CCA897E5A6E15CD5 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mEFAB2B06155DBA6F24F8D5E7A84CC051FB677721_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE1B1FC219D3FFC4FE477489C3AE9AB551DFFE00F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6447ABCA80CD0D159E9208FB85D2B8D5066C5926_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6F12868F7EBCB2B5E76625C38A76AA8A09567249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* V_1 = NULL;
	{
		// foreach (var state in m_DefaultStates)
		List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* L_0 = __this->___m_DefaultStates_16;
		NullCheck(L_0);
		Enumerator_tF69B2028D33B2765DB40FB0CED6122ED1D063996 L_1;
		L_1 = List_1_GetEnumerator_m6F12868F7EBCB2B5E76625C38A76AA8A09567249(L_0, List_1_GetEnumerator_m6F12868F7EBCB2B5E76625C38A76AA8A09567249_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0036:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mEFAB2B06155DBA6F24F8D5E7A84CC051FB677721((&V_0), Enumerator_Dispose_mEFAB2B06155DBA6F24F8D5E7A84CC051FB677721_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002b_1;
			}

IL_000e_1:
			{
				// foreach (var state in m_DefaultStates)
				ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_2;
				L_2 = Enumerator_get_Current_m6447ABCA80CD0D159E9208FB85D2B8D5066C5926_inline((&V_0), Enumerator_get_Current_m6447ABCA80CD0D159E9208FB85D2B8D5066C5926_RuntimeMethod_var);
				V_1 = L_2;
				// if (state.enabled)
				ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_3 = V_1;
				NullCheck(L_3);
				bool L_4;
				L_4 = ControllerState_get_enabled_m707D4F603315C4B716C59F2F887AE942D9C96114_inline(L_3, NULL);
				if (!L_4)
				{
					goto IL_002b_1;
				}
			}
			{
				// state.onUpdate.Invoke();
				ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_5 = V_1;
				NullCheck(L_5);
				StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_6;
				L_6 = ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline(L_5, NULL);
				NullCheck(L_6);
				UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_6, NULL);
				// return;
				goto IL_0044;
			}

IL_002b_1:
			{
				// foreach (var state in m_DefaultStates)
				bool L_7;
				L_7 = Enumerator_MoveNext_mE1B1FC219D3FFC4FE477489C3AE9AB551DFFE00F((&V_0), Enumerator_MoveNext_mE1B1FC219D3FFC4FE477489C3AE9AB551DFFE00F_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0044;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::TransitionState(ActionBasedControllerManager/ControllerState,ActionBasedControllerManager/ControllerState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___fromState0, ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* ___toState1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* G_B3_0 = NULL;
	StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* G_B4_1 = NULL;
	StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* G_B8_0 = NULL;
	StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* G_B9_1 = NULL;
	{
		// if (fromState != null)
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = ___fromState0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// fromState.enabled = false;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_1 = ___fromState0;
		NullCheck(L_1);
		ControllerState_set_enabled_m27C729892CD7A747809EF2F5161DCAF7598A0063_inline(L_1, (bool)0, NULL);
		// fromState.onExit.Invoke(toState?.id ?? StateId.None);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_2 = ___fromState0;
		NullCheck(L_2);
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_3;
		L_3 = ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline(L_2, NULL);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_4 = ___toState1;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_0016;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001c;
	}

IL_0016:
	{
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_5 = ___toState1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ControllerState_get_id_m244CFA6F302E22849C064CF751C719FAAFE90C50_inline(L_5, NULL);
		G_B4_0 = ((int32_t)(L_6));
		G_B4_1 = G_B3_0;
	}

IL_001c:
	{
		NullCheck(G_B4_1);
		UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A(G_B4_1, G_B4_0, UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A_RuntimeMethod_var);
	}

IL_0021:
	{
		// if (toState != null)
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_7 = ___toState1;
		if (!L_7)
		{
			goto IL_0042;
		}
	}
	{
		// toState.onEnter.Invoke(fromState?.id ?? StateId.None);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_8 = ___toState1;
		NullCheck(L_8);
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_9;
		L_9 = ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline(L_8, NULL);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_10 = ___fromState0;
		G_B7_0 = L_9;
		if (L_10)
		{
			G_B8_0 = L_9;
			goto IL_0030;
		}
	}
	{
		G_B9_0 = 0;
		G_B9_1 = G_B7_0;
		goto IL_0036;
	}

IL_0030:
	{
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_11 = ___fromState0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = ControllerState_get_id_m244CFA6F302E22849C064CF751C719FAAFE90C50_inline(L_11, NULL);
		G_B9_0 = ((int32_t)(L_12));
		G_B9_1 = G_B8_0;
	}

IL_0036:
	{
		NullCheck(G_B9_1);
		UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A(G_B9_1, G_B9_0, UnityEvent_1_Invoke_m0FF44C4424C88502DEA56740C695CE53B924684A_RuntimeMethod_var);
		// toState.enabled = true;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_13 = ___toState1;
		NullCheck(L_13);
		ControllerState_set_enabled_m27C729892CD7A747809EF2F5161DCAF7598A0063_inline(L_13, (bool)1, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::FindBaseControllerComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_FindBaseControllerComponents_m2DAE4C0A983FA3DD044F5F3F1050BDD2A70BC7C7 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisIXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_mABD58760AD90FFF0C23236397309EA129CCE6CC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C4ABC44FC0E0B6844730A488CB964E10E30067B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89AE91B55B062DC94A0679A61E428C49CA2BC881);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB01943B71CC45A5CB9270545A41CABD7A8EF5AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA93F6249C8958A394D1EB997C74F5DC26FB1849);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_BaseControllerGameObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_BaseControllerGameObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogWarning("Missing reference to Base Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralAB01943B71CC45A5CB9270545A41CABD7A8EF5AC, __this, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// if (m_BaseController == null)
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_2 = __this->___m_BaseController_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		// m_BaseController = m_BaseControllerGameObject.GetComponent<XRBaseController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_BaseControllerGameObject_5;
		NullCheck(L_4);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_5;
		L_5 = GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE(L_4, GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE_RuntimeMethod_var);
		__this->___m_BaseController_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BaseController_17), (void*)L_5);
		// if (m_BaseController == null)
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_6 = __this->___m_BaseController_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogWarning($"Cannot find any {nameof(XRBaseController)} component on the Base Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral6C4ABC44FC0E0B6844730A488CB964E10E30067B, __this, NULL);
	}

IL_0052:
	{
		// if (m_BaseInteractor == null || m_BaseInteractor as Object == null)
		RuntimeObject* L_8 = __this->___m_BaseInteractor_18;
		if (!L_8)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_9 = __this->___m_BaseInteractor_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_9, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_00a4;
		}
	}

IL_006d:
	{
		// m_BaseInteractor = m_BaseControllerGameObject.GetComponent<IXRSelectInteractor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___m_BaseControllerGameObject_5;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = GameObject_GetComponent_TisIXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_mABD58760AD90FFF0C23236397309EA129CCE6CC9(L_11, GameObject_GetComponent_TisIXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_mABD58760AD90FFF0C23236397309EA129CCE6CC9_RuntimeMethod_var);
		__this->___m_BaseInteractor_18 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BaseInteractor_18), (void*)L_12);
		// if (m_BaseInteractor == null || m_BaseInteractor as Object == null)
		RuntimeObject* L_13 = __this->___m_BaseInteractor_18;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		RuntimeObject* L_14 = __this->___m_BaseInteractor_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_14, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00a4;
		}
	}

IL_0099:
	{
		// Debug.LogWarning($"Cannot find any {nameof(IXRSelectInteractor)} component on the Base Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralFA93F6249C8958A394D1EB997C74F5DC26FB1849, __this, NULL);
	}

IL_00a4:
	{
		// if (m_BaseInteractor is XRRayInteractor && m_BaseLineVisual == null)
		RuntimeObject* L_16 = __this->___m_BaseInteractor_18;
		if (!((XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)IsInstClass((RuntimeObject*)L_16, XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var)))
		{
			goto IL_00e9;
		}
	}
	{
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_17 = __this->___m_BaseLineVisual_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00e9;
		}
	}
	{
		// m_BaseLineVisual = m_BaseControllerGameObject.GetComponent<XRInteractorLineVisual>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___m_BaseControllerGameObject_5;
		NullCheck(L_19);
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_20;
		L_20 = GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA(L_19, GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA_RuntimeMethod_var);
		__this->___m_BaseLineVisual_19 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_BaseLineVisual_19), (void*)L_20);
		// if (m_BaseLineVisual == null)
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_21 = __this->___m_BaseLineVisual_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00e9;
		}
	}
	{
		// Debug.LogWarning($"Cannot find any {nameof(XRInteractorLineVisual)} component on the Base Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral89AE91B55B062DC94A0679A61E428C49CA2BC881, __this, NULL);
	}

IL_00e9:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::FindTeleportControllerComponents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_FindTeleportControllerComponents_m18D04F1B9AA0465AF13CF04295C35B7CFA1A6C2F (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61E265BF94AF8A86712B2382B28DE57D158EC95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6440C1C7FE3CFD07921F120257129B233E306DC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85EB20824CF1D08753F13E6FB8579A875C845819);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5D9FDE8094C6CD6F3E1D77ADB8B1B24FFFA3772);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_TeleportControllerGameObject == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_TeleportControllerGameObject_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// Debug.LogWarning("Missing reference to the Teleport Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteralB5D9FDE8094C6CD6F3E1D77ADB8B1B24FFFA3772, __this, NULL);
		// return;
		return;
	}

IL_001a:
	{
		// if (m_TeleportController == null)
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_2 = __this->___m_TeleportController_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		// m_TeleportController = m_TeleportControllerGameObject.GetComponent<XRBaseController>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___m_TeleportControllerGameObject_6;
		NullCheck(L_4);
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_5;
		L_5 = GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE(L_4, GameObject_GetComponent_TisXRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C_m17CE256989F21B3E06B2F9C8BBB6D2E3A0232DAE_RuntimeMethod_var);
		__this->___m_TeleportController_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportController_20), (void*)L_5);
		// if (m_TeleportController == null)
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_6 = __this->___m_TeleportController_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogWarning($"Cannot find {nameof(XRBaseController)} component on the Teleport Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral61E265BF94AF8A86712B2382B28DE57D158EC95B, __this, NULL);
	}

IL_0052:
	{
		// if (m_TeleportLineVisual == null)
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_8 = __this->___m_TeleportLineVisual_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_008a;
		}
	}
	{
		// m_TeleportLineVisual = m_TeleportControllerGameObject.GetComponent<XRInteractorLineVisual>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___m_TeleportControllerGameObject_6;
		NullCheck(L_10);
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_11;
		L_11 = GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA(L_10, GameObject_GetComponent_TisXRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D_m8AE0A7E290E0EC3086E1E1C086F197CC73B806FA_RuntimeMethod_var);
		__this->___m_TeleportLineVisual_22 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportLineVisual_22), (void*)L_11);
		// if (m_TeleportLineVisual == null)
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_12 = __this->___m_TeleportLineVisual_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// Debug.LogWarning($"Cannot find {nameof(XRInteractorLineVisual)} component on the Teleport Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral6440C1C7FE3CFD07921F120257129B233E306DC6, __this, NULL);
	}

IL_008a:
	{
		// if (m_TeleportInteractor == null)
		RuntimeObject* L_14 = __this->___m_TeleportInteractor_21;
		if (L_14)
		{
			goto IL_00b6;
		}
	}
	{
		// m_TeleportInteractor = m_TeleportControllerGameObject.GetComponent<XRRayInteractor>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___m_TeleportControllerGameObject_6;
		NullCheck(L_15);
		XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76* L_16;
		L_16 = GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62(L_15, GameObject_GetComponent_TisXRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_mDBEEFFED7B73842AE7ABD97624DFBD94B89A1B62_RuntimeMethod_var);
		__this->___m_TeleportInteractor_21 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportInteractor_21), (void*)L_16);
		// if (m_TeleportInteractor == null)
		RuntimeObject* L_17 = __this->___m_TeleportInteractor_21;
		if (L_17)
		{
			goto IL_00b6;
		}
	}
	{
		// Debug.LogWarning($"Cannot find {nameof(XRRayInteractor)} component on the Teleport Controller GameObject.", this);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(_stringLiteral85EB20824CF1D08753F13E6FB8579A875C845819, __this, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::SetBaseController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetBaseController_m1757539FB3FE97E9616281A5FCF9E8A1E5E17AE3 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* V_0 = NULL;
	{
		// FindBaseControllerComponents();
		ActionBasedControllerManager_FindBaseControllerComponents_m2DAE4C0A983FA3DD044F5F3F1050BDD2A70BC7C7(__this, NULL);
		// if (m_BaseController != null)
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_0 = __this->___m_BaseController_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// m_BaseController.enableInputActions = enable;
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_2 = __this->___m_BaseController_17;
		bool L_3 = ___enable0;
		NullCheck(L_2);
		XRBaseController_set_enableInputActions_m74E6BEA651230890AF81718CE1E25FF030592BFA_inline(L_2, L_3, NULL);
	}

IL_0020:
	{
		// if (m_BaseInteractor is Behaviour baseInteractorComponent && baseInteractorComponent != null)
		RuntimeObject* L_4 = __this->___m_BaseInteractor_18;
		V_0 = ((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)IsInstClass((RuntimeObject*)L_4, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var));
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_5 = V_0;
		if (!L_5)
		{
			goto IL_003f;
		}
	}
	{
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// baseInteractorComponent.enabled = enable;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_8 = V_0;
		bool L_9 = ___enable0;
		NullCheck(L_8);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, L_9, NULL);
	}

IL_003f:
	{
		// if (m_BaseInteractor is XRRayInteractor && m_BaseLineVisual != null)
		RuntimeObject* L_10 = __this->___m_BaseInteractor_18;
		if (!((XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76*)IsInstClass((RuntimeObject*)L_10, XRRayInteractor_t0B25C1D5A938B199A71908E189AB351B43DA4C76_il2cpp_TypeInfo_var)))
		{
			goto IL_0066;
		}
	}
	{
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_11 = __this->___m_BaseLineVisual_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0066;
		}
	}
	{
		// m_BaseLineVisual.enabled = enable;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_13 = __this->___m_BaseLineVisual_19;
		bool L_14 = ___enable0;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, L_14, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::SetTeleportController(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_SetTeleportController_mFB1CD8DF84E54E540353A218E03777B34CF36815 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, bool ___enable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* V_0 = NULL;
	{
		// FindTeleportControllerComponents();
		ActionBasedControllerManager_FindTeleportControllerComponents_m18D04F1B9AA0465AF13CF04295C35B7CFA1A6C2F(__this, NULL);
		// if (m_TeleportLineVisual != null)
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_0 = __this->___m_TeleportLineVisual_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// m_TeleportLineVisual.enabled = enable;
		XRInteractorLineVisual_tE94C9C3412104E7A3564BEB8D2A37BD934F0456D* L_2 = __this->___m_TeleportLineVisual_22;
		bool L_3 = ___enable0;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, L_3, NULL);
	}

IL_0020:
	{
		// if (m_TeleportController != null)
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_4 = __this->___m_TeleportController_20;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003a;
		}
	}
	{
		// m_TeleportController.enableInputActions = enable;
		XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* L_6 = __this->___m_TeleportController_20;
		bool L_7 = ___enable0;
		NullCheck(L_6);
		XRBaseController_set_enableInputActions_m74E6BEA651230890AF81718CE1E25FF030592BFA_inline(L_6, L_7, NULL);
	}

IL_003a:
	{
		// if (m_TeleportInteractor is Behaviour teleportInteractorComponent && teleportInteractorComponent != null)
		RuntimeObject* L_8 = __this->___m_TeleportInteractor_21;
		V_0 = ((Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA*)IsInstClass((RuntimeObject*)L_8, Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA_il2cpp_TypeInfo_var));
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0059;
		}
	}
	{
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// teleportInteractorComponent.enabled = enable;
		Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* L_12 = V_0;
		bool L_13 = ___enable0;
		NullCheck(L_12);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_12, L_13, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnEnterSelectState(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnterSelectState_mEB515A6479A2D50C7321DCA11345B0BB59469A60 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, int32_t ___previousStateId0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___previousStateId0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_007f;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0069;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// EnableAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_TeleportModeActivate_7;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_1, NULL);
		// EnableAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_TeleportModeCancel_8;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_2, NULL);
		// EnableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___m_Turn_9;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_3, NULL);
		// EnableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_Move_10;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_4, NULL);
		// SetBaseController(true);
		ActionBasedControllerManager_SetBaseController_m1757539FB3FE97E9616281A5FCF9E8A1E5E17AE3(__this, (bool)1, NULL);
		// break;
		return;
	}

IL_004b:
	{
		// EnableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_5 = __this->___m_Turn_9;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_5, NULL);
		// EnableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_6 = __this->___m_Move_10;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_6, NULL);
		// SetBaseController(true);
		ActionBasedControllerManager_SetBaseController_m1757539FB3FE97E9616281A5FCF9E8A1E5E17AE3(__this, (bool)1, NULL);
		// break;
		return;
	}

IL_0069:
	{
		// EnableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_7 = __this->___m_Turn_9;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_7, NULL);
		// EnableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_8 = __this->___m_Move_10;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_8, NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnExitSelectState(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnExitSelectState_m38A3B528524D4210A5F7BA81C38AF5EF8228B36F (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, int32_t ___nextStateId0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___nextStateId0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0017;
			}
			case 3:
			{
				goto IL_0035;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_Turn_9;
		ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540(L_1, NULL);
		// DisableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_Move_10;
		ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540(L_2, NULL);
		// SetBaseController(false);
		ActionBasedControllerManager_SetBaseController_m1757539FB3FE97E9616281A5FCF9E8A1E5E17AE3(__this, (bool)0, NULL);
		// break;
		return;
	}

IL_0035:
	{
		// DisableAction(m_Turn);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_3 = __this->___m_Turn_9;
		ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540(L_3, NULL);
		// DisableAction(m_Move);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_4 = __this->___m_Move_10;
		ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540(L_4, NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnEnterTeleportState(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnterTeleportState_mFD04877915A69518F79F2555CA5A47D508FCAD7C (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, int32_t ___previousStateId0, const RuntimeMethod* method) 
{
	{
		// void OnEnterTeleportState(StateId previousStateId) => SetTeleportController(true);
		ActionBasedControllerManager_SetTeleportController_mFB1CD8DF84E54E540353A218E03777B34CF36815(__this, (bool)1, NULL);
		return;
	}
}
// System.Void ActionBasedControllerManager::OnExitTeleportState(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnExitTeleportState_m698DF18B5D17AF98635F6B14BD9249AF8FD76228 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, int32_t ___nextStateId0, const RuntimeMethod* method) 
{
	{
		// void OnExitTeleportState(StateId nextStateId) => SetTeleportController(false);
		ActionBasedControllerManager_SetTeleportController_mFB1CD8DF84E54E540353A218E03777B34CF36815(__this, (bool)0, NULL);
		return;
	}
}
// System.Void ActionBasedControllerManager::OnEnterInteractState(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnEnterInteractState_mB99748D913C19731B28CBCA3BC752CD1CABD36E4 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, int32_t ___previousStateId0, const RuntimeMethod* method) 
{
	{
		// EnableAction(m_TranslateAnchor);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TranslateAnchor_11;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_0, NULL);
		// EnableAction(m_RotateAnchor);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_RotateAnchor_12;
		ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB(L_1, NULL);
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnExitInteractState(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnExitInteractState_mFB5720185801A2E03937CB917EBA0BE4E5CCE55A (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, int32_t ___nextStateId0, const RuntimeMethod* method) 
{
	{
		// DisableAction(m_TranslateAnchor);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TranslateAnchor_11;
		ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540(L_0, NULL);
		// DisableAction(m_RotateAnchor);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_1 = __this->___m_RotateAnchor_12;
		ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540(L_1, NULL);
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnUpdateSelectState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnUpdateSelectState_m6E89D69553FEF9549BFA844ED887350AE8E79B83 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var teleportModeAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TeleportModeActivate_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB(L_0, NULL);
		V_0 = L_1;
		// var cancelTeleportModeAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_TeleportModeCancel_8;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB(L_2, NULL);
		V_1 = L_3;
		// var triggerTeleportMode = teleportModeAction != null && teleportModeAction.triggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		// var cancelTeleport = cancelTeleportModeAction != null && cancelTeleportModeAction.triggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = V_1;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002f;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_8, NULL);
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0030:
	{
		V_2 = (bool)G_B6_0;
		// if (triggerTeleportMode && !cancelTeleport)
		if (!G_B6_1)
		{
			goto IL_0049;
		}
	}
	{
		bool L_10 = V_2;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		// TransitionState(m_SelectState, m_TeleportState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_11 = __this->___m_SelectState_13;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_12 = __this->___m_TeleportState_14;
		ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D(__this, L_11, L_12, NULL);
		// return;
		return;
	}

IL_0049:
	{
		// FindBaseControllerComponents();
		ActionBasedControllerManager_FindBaseControllerComponents_m2DAE4C0A983FA3DD044F5F3F1050BDD2A70BC7C7(__this, NULL);
		// if (m_BaseInteractor.hasSelection)
		RuntimeObject* L_13 = __this->___m_BaseInteractor_18;
		NullCheck(L_13);
		bool L_14;
		L_14 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor::get_hasSelection() */, IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var, L_13);
		if (!L_14)
		{
			goto IL_006e;
		}
	}
	{
		// TransitionState(m_SelectState, m_InteractState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_15 = __this->___m_SelectState_13;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_16 = __this->___m_InteractState_15;
		ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D(__this, L_15, L_16, NULL);
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnUpdateTeleportState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnUpdateTeleportState_m201675C3C4B705C2F277386FB1D70CED56B77DAB (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_1 = NULL;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		// var teleportModeAction = GetInputAction(m_TeleportModeActivate);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = __this->___m_TeleportModeActivate_7;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB(L_0, NULL);
		V_0 = L_1;
		// var cancelTeleportModeAction = GetInputAction(m_TeleportModeCancel);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = __this->___m_TeleportModeCancel_8;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB(L_2, NULL);
		V_1 = L_3;
		// var cancelTeleport = cancelTeleportModeAction != null && cancelTeleportModeAction.triggered;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = V_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = InputAction_get_triggered_m27FD9FEF221D1BD365F2A8CD0131CE5F2A97B7BB(L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 0;
	}

IL_0024:
	{
		// var releasedTeleport = teleportModeAction != null && teleportModeAction.phase == InputActionPhase.Waiting;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_7 = V_0;
		G_B4_0 = G_B3_0;
		if (!L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_0032;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InputAction_get_phase_mA9B46F817A05ED2094C318354A05895FE4E1F891(L_8, NULL);
		G_B6_0 = ((((int32_t)L_9) == ((int32_t)1))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_0033;
	}

IL_0032:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_0033:
	{
		V_2 = (bool)G_B6_0;
		// if (cancelTeleport || releasedTeleport)
		bool L_10 = V_2;
		if (!((int32_t)(G_B6_1|(int32_t)L_10)))
		{
			goto IL_004a;
		}
	}
	{
		// TransitionState(m_TeleportState, m_SelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_11 = __this->___m_TeleportState_14;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_12 = __this->___m_SelectState_13;
		ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D(__this, L_11, L_12, NULL);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::OnUpdateInteractState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_OnUpdateInteractState_mC54DCB46ADA2F3129199524FE19B837D72BE64A9 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!m_BaseInteractor.hasSelection)
		RuntimeObject* L_0 = __this->___m_BaseInteractor_18;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean UnityEngine.XR.Interaction.Toolkit.IXRSelectInteractor::get_hasSelection() */, IXRSelectInteractor_tF9278B9892CA9B8C1F0E0C70E2E2362DC860E3F1_il2cpp_TypeInfo_var, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// TransitionState(m_InteractState, m_SelectState);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_2 = __this->___m_InteractState_15;
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_3 = __this->___m_SelectState_13;
		ActionBasedControllerManager_TransitionState_m5319EDF15C7242060D6F92BC9868A0B92083045D(__this, L_2, L_3, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::EnableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_EnableAction_m25794D65C83AF2F8022478CEF8B7635072AAF6BB (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB(L_0, NULL);
		V_0 = L_1;
		// if (action != null && !action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}
	{
		// action.Enable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = V_0;
		NullCheck(L_5);
		InputAction_Enable_mB3897C0741409C033656E4566EC49135C3C8BC68(L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void ActionBasedControllerManager::DisableAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager_DisableAction_m59A3A777CADCD124AEA207BB6A75915D3CF90540 (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* V_0 = NULL;
	{
		// var action = GetInputAction(actionReference);
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_1;
		L_1 = ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB(L_0, NULL);
		V_0 = L_1;
		// if (action != null && action.enabled)
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InputAction_get_enabled_mA1E3523D89FCD4649E787A4BFE9D5863674846FA(L_3, NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		// action.Disable();
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_5 = V_0;
		NullCheck(L_5);
		InputAction_Disable_m72D1982F82457C6E003440BADD06989D399BDE50(L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// UnityEngine.InputSystem.InputAction ActionBasedControllerManager::GetInputAction(UnityEngine.InputSystem.InputActionReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* ActionBasedControllerManager_GetInputAction_m36325EFA845EC2F4FE4818FA24634D38FED1F0FB (InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* ___actionReference0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return actionReference != null ? actionReference.action : null;
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_0 = ___actionReference0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return (InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD*)NULL;
	}

IL_000b:
	{
		InputActionReference_t64730C6B41271E0983FC21BFB416169F5D6BC4A1* L_2 = ___actionReference0;
		NullCheck(L_2);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_3;
		L_3 = InputActionReference_get_action_m395EDEA6A93B54555D22323FDA6E1B1E931CE6EF(L_2, NULL);
		return L_3;
	}
}
// System.Void ActionBasedControllerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionBasedControllerManager__ctor_mF589EDE62560F16D5F05BC88A167392A204E37C9 (ActionBasedControllerManager_t6DF6E68A00DBE1028978B00486A43C0EED43FEB3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m54E1B0F1C0E87E752E7D9C599D87DDAF548C4A40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ControllerState m_SelectState = new ControllerState(StateId.Select);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_0 = (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0*)il2cpp_codegen_object_new(ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ControllerState__ctor_m27AE48BBE091A0FD0A4748BA05217B4A8CFA482B(L_0, 1, NULL);
		__this->___m_SelectState_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SelectState_13), (void*)L_0);
		// ControllerState m_TeleportState = new ControllerState(StateId.Teleport);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_1 = (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0*)il2cpp_codegen_object_new(ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ControllerState__ctor_m27AE48BBE091A0FD0A4748BA05217B4A8CFA482B(L_1, 2, NULL);
		__this->___m_TeleportState_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TeleportState_14), (void*)L_1);
		// ControllerState m_InteractState = new ControllerState(StateId.Interact);
		ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* L_2 = (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0*)il2cpp_codegen_object_new(ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ControllerState__ctor_m27AE48BBE091A0FD0A4748BA05217B4A8CFA482B(L_2, 3, NULL);
		__this->___m_InteractState_15 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InteractState_15), (void*)L_2);
		// readonly List<ControllerState> m_DefaultStates = new List<ControllerState>();
		List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65* L_3 = (List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65*)il2cpp_codegen_object_new(List_1_t5883EA6AE1EAD457A01EA02BBA926037CEA4EC65_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m54E1B0F1C0E87E752E7D9C599D87DDAF548C4A40(L_3, List_1__ctor_m54E1B0F1C0E87E752E7D9C599D87DDAF548C4A40_RuntimeMethod_var);
		__this->___m_DefaultStates_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DefaultStates_16), (void*)L_3);
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
// System.Void ActionBasedControllerManager/StateEnterEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateEnterEvent__ctor_mD412A425B215BC2D726BBED2227604869BD896B3 (StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225(__this, UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225_RuntimeMethod_var);
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
// System.Void ActionBasedControllerManager/StateUpdateEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateUpdateEvent__ctor_m3F6241CF1A33C963DEDC354350B61BD4C5983644 (StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* __this, const RuntimeMethod* method) 
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
// System.Void ActionBasedControllerManager/StateExitEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateExitEvent__ctor_mA90667173BFCFA00241495160E15DB2E2BC77921 (StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225(__this, UnityEvent_1__ctor_m205B371629A0B8576349801B2519D0E2B7F86225_RuntimeMethod_var);
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
// System.Boolean ActionBasedControllerManager/ControllerState::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerState_get_enabled_m707D4F603315C4B716C59F2F887AE942D9C96114 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Enabled;
		bool L_0 = __this->___m_Enabled_0;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager/ControllerState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState_set_enabled_m27C729892CD7A747809EF2F5161DCAF7598A0063 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Enabled = value;
		bool L_0 = ___value0;
		__this->___m_Enabled_0 = L_0;
		return;
	}
}
// ActionBasedControllerManager/StateId ActionBasedControllerManager/ControllerState::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ControllerState_get_id_m244CFA6F302E22849C064CF751C719FAAFE90C50 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Id;
		int32_t L_0 = __this->___m_Id_1;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager/ControllerState::set_id(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState_set_id_m79F209BD1B74650590178C922086997CE9572ADC (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Id = value;
		int32_t L_0 = ___value0;
		__this->___m_Id_1 = L_0;
		return;
	}
}
// ActionBasedControllerManager/StateEnterEvent ActionBasedControllerManager/ControllerState::get_onEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnEnter;
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_0 = __this->___m_OnEnter_2;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager/ControllerState::set_onEnter(ActionBasedControllerManager/StateEnterEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState_set_onEnter_m464BF0EF892EC1DD26E7966FCD9D13E3671BEE9F (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OnEnter = value;
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_0 = ___value0;
		__this->___m_OnEnter_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnEnter_2), (void*)L_0);
		return;
	}
}
// ActionBasedControllerManager/StateUpdateEvent ActionBasedControllerManager/ControllerState::get_onUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnUpdate;
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_0 = __this->___m_OnUpdate_3;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager/ControllerState::set_onUpdate(ActionBasedControllerManager/StateUpdateEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState_set_onUpdate_m5704C039EF1B34CF4C69F9D5405418ACD2BAF325 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OnUpdate = value;
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_0 = ___value0;
		__this->___m_OnUpdate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnUpdate_3), (void*)L_0);
		return;
	}
}
// ActionBasedControllerManager/StateExitEvent ActionBasedControllerManager/ControllerState::get_onExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549 (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnExit;
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_0 = __this->___m_OnExit_4;
		return L_0;
	}
}
// System.Void ActionBasedControllerManager/ControllerState::set_onExit(ActionBasedControllerManager/StateExitEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState_set_onExit_m0D7ABCB63111EF3AD232CA3E9E93998C176297BD (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_OnExit = value;
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_0 = ___value0;
		__this->___m_OnExit_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnExit_4), (void*)L_0);
		return;
	}
}
// System.Void ActionBasedControllerManager/ControllerState::.ctor(ActionBasedControllerManager/StateId)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerState__ctor_m27AE48BBE091A0FD0A4748BA05217B4A8CFA482B (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, int32_t ___defaultId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StateEnterEvent m_OnEnter = new StateEnterEvent();
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_0 = (StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE*)il2cpp_codegen_object_new(StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StateEnterEvent__ctor_mD412A425B215BC2D726BBED2227604869BD896B3(L_0, NULL);
		__this->___m_OnEnter_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnEnter_2), (void*)L_0);
		// StateUpdateEvent m_OnUpdate = new StateUpdateEvent();
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_1 = (StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915*)il2cpp_codegen_object_new(StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StateUpdateEvent__ctor_m3F6241CF1A33C963DEDC354350B61BD4C5983644(L_1, NULL);
		__this->___m_OnUpdate_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnUpdate_3), (void*)L_1);
		// StateExitEvent m_OnExit = new StateExitEvent();
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_2 = (StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C*)il2cpp_codegen_object_new(StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StateExitEvent__ctor_mA90667173BFCFA00241495160E15DB2E2BC77921(L_2, NULL);
		__this->___m_OnExit_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_OnExit_4), (void*)L_2);
		// public ControllerState(StateId defaultId = StateId.None) => this.id = defaultId;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public ControllerState(StateId defaultId = StateId.None) => this.id = defaultId;
		int32_t L_3 = ___defaultId0;
		ControllerState_set_id_m79F209BD1B74650590178C922086997CE9572ADC_inline(__this, L_3, NULL);
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
// System.Void FadeTeleportationProvider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTeleportationProvider_Start_mB86A76511AB0254F02FDC3E4150E852CADA715AD (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, const RuntimeMethod* method) 
{
	{
		// faderImage.color = Color.clear;
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_0 = __this->___faderImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// }
		return;
	}
}
// System.Collections.IEnumerator FadeTeleportationProvider::FadeIn(UnityEngine.XR.Interaction.Toolkit.TeleportRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeTeleportationProvider_FadeIn_m73EDDB67B1861D7E9F837A10FE26126424ABD4A4 (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___teleportRequest0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* L_0 = (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED*)il2cpp_codegen_object_new(U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInU3Ed__5__ctor_m54E7B9E37845E5880BD3878CEF9ADF2DE869E0DA(L_0, 0, NULL);
		U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* L_2 = L_1;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_3 = ___teleportRequest0;
		NullCheck(L_2);
		L_2->___teleportRequest_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator FadeTeleportationProvider::FadeOut()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FadeTeleportationProvider_FadeOut_mD72CC4C168780DD202732D10B4AA7B0E7C6B708A (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* L_0 = (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771*)il2cpp_codegen_object_new(U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutU3Ed__6__ctor_m054367F1A53DFC78A127A680A4CB086C59AEFABC(L_0, 0, NULL);
		U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Boolean FadeTeleportationProvider::QueueTeleportRequest(UnityEngine.XR.Interaction.Toolkit.TeleportRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FadeTeleportationProvider_QueueTeleportRequest_mF2094CB45B6A5DDB5EDEC6853D25FA99B1610C47 (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___teleportRequest0, const RuntimeMethod* method) 
{
	{
		// if(EnableFade)
		bool L_0 = __this->___EnableFade_14;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// StartCoroutine(FadeIn(teleportRequest));
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_1 = ___teleportRequest0;
		RuntimeObject* L_2;
		L_2 = FadeTeleportationProvider_FadeIn_m73EDDB67B1861D7E9F837A10FE26126424ABD4A4(__this, L_1, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		goto IL_0026;
	}

IL_0018:
	{
		// currentRequest = teleportRequest;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_4 = ___teleportRequest0;
		TeleportationProvider_set_currentRequest_m109FD936C57760C70C312B799E6AD6D7651B0581_inline(__this, L_4, NULL);
		// validRequest = true;
		TeleportationProvider_set_validRequest_m539A9FBCF21BBCE6062D888442666D0679B27B0D_inline(__this, (bool)1, NULL);
	}

IL_0026:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void FadeTeleportationProvider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTeleportationProvider_Update_m38264F8C319CCF7A2DF747AA5A56D4EBACFCFDED (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* V_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (!validRequest || !BeginLocomotion())
		bool L_0;
		L_0 = TeleportationProvider_get_validRequest_m083A1AF44E1AD7BD791A2B599216067B94D65788_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = LocomotionProvider_BeginLocomotion_mFB221E462FEC6E933C9161E30271678311D1AAEF(__this, NULL);
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
		// var xrOrigin = system.xrOrigin;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_2;
		L_2 = LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline(__this, NULL);
		NullCheck(L_2);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_3;
		L_3 = LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline(L_2, NULL);
		V_0 = L_3;
		// if (xrOrigin != null)
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00e0;
		}
	}
	{
		// switch (currentRequest.matchOrientation)
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_6;
		L_6 = TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline(__this, NULL);
		int32_t L_7 = L_6.___matchOrientation_3;
		V_3 = L_7;
		int32_t L_8 = V_3;
		switch (L_8)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_005b;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_00aa;
	}

IL_004d:
	{
		// xrOrigin.MatchOriginUp(Vector3.up);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_9);
		bool L_11;
		L_11 = XROrigin_MatchOriginUp_m21E7F97625F9C616B757226DB083A8FE00297D1C(L_9, L_10, NULL);
		// break;
		goto IL_00aa;
	}

IL_005b:
	{
		// xrOrigin.MatchOriginUp(currentRequest.destinationRotation * Vector3.up);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_12 = V_0;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_13;
		L_13 = TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = L_13.___destinationRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_14, L_15, NULL);
		NullCheck(L_12);
		bool L_17;
		L_17 = XROrigin_MatchOriginUp_m21E7F97625F9C616B757226DB083A8FE00297D1C(L_12, L_16, NULL);
		// break;
		goto IL_00aa;
	}

IL_0079:
	{
		// xrOrigin.MatchOriginUpCameraForward(currentRequest.destinationRotation * Vector3.up, currentRequest.destinationRotation * Vector3.forward);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_18 = V_0;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_19;
		L_19 = TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = L_19.___destinationRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_20, L_21, NULL);
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_23;
		L_23 = TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = L_23.___destinationRotation_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_24, L_25, NULL);
		NullCheck(L_18);
		bool L_27;
		L_27 = XROrigin_MatchOriginUpCameraForward_m8D6A19292733DBEA380BF94DF74A6F9BC33E1F90(L_18, L_22, L_26, NULL);
	}

IL_00aa:
	{
		// var heightAdjustment = xrOrigin.Origin.transform.up * xrOrigin.CameraInOriginSpaceHeight;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_28 = V_0;
		NullCheck(L_28);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29;
		L_29 = XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_30, NULL);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_32 = V_0;
		NullCheck(L_32);
		float L_33;
		L_33 = XROrigin_get_CameraInOriginSpaceHeight_m1DC15C0A56A969838A827F425ABBED375751BFC5(L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_31, L_33, NULL);
		V_1 = L_34;
		// var cameraDestination = currentRequest.destinationPosition + heightAdjustment;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_35;
		L_35 = TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35.___destinationPosition_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_37, NULL);
		V_2 = L_38;
		// xrOrigin.MoveCameraToWorldLocation(cameraDestination);
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_39 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		NullCheck(L_39);
		bool L_41;
		L_41 = XROrigin_MoveCameraToWorldLocation_m7AA0DF514F9F8E9E68541C314FAB868D043E5B4D(L_39, L_40, NULL);
	}

IL_00e0:
	{
		// if(EnableFade)
		bool L_42 = __this->___EnableFade_14;
		if (!L_42)
		{
			goto IL_00f7;
		}
	}
	{
		// StartCoroutine(FadeOut()); // Fade out and endlocomotion
		RuntimeObject* L_43;
		L_43 = FadeTeleportationProvider_FadeOut_mD72CC4C168780DD202732D10B4AA7B0E7C6B708A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_44;
		L_44 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_43, NULL);
		goto IL_00fe;
	}

IL_00f7:
	{
		// EndLocomotion();
		bool L_45;
		L_45 = LocomotionProvider_EndLocomotion_m64CC4C14527FF9F8D2956159425A2208E4612ECB(__this, NULL);
	}

IL_00fe:
	{
		// validRequest = false;
		TeleportationProvider_set_validRequest_m539A9FBCF21BBCE6062D888442666D0679B27B0D_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FadeTeleportationProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FadeTeleportationProvider__ctor_m43382A9D80653DF3BCA07E033730FFDF84271111 (FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private bool EnableFade = true;
		__this->___EnableFade_14 = (bool)1;
		// [SerializeField] private float fadeSpeed = 0.01f;
		__this->___fadeSpeed_16 = (0.00999999978f);
		TeleportationProvider__ctor_mE4031FC9A5B03DA60B3C68E52F39D0F721C3C2ED(__this, NULL);
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
// System.Void FadeTeleportationProvider/<FadeIn>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5__ctor_m54E7B9E37845E5880BD3878CEF9ADF2DE869E0DA (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FadeTeleportationProvider/<FadeIn>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5_System_IDisposable_Dispose_mE57C52439CABA2D314BBF3C21665114068624D3A (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FadeTeleportationProvider/<FadeIn>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInU3Ed__5_MoveNext_mA7BBE2169A8906EE6773E9ECACBA53A56812E1BB (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timer = 0;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_4 = V_1;
		NullCheck(L_4);
		L_4->___timer_17 = (0.0f);
		goto IL_0079;
	}

IL_002b:
	{
		// faderImage.color = Color.Lerp(Color.clear, Color.black, timer);
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_5 = V_1;
		NullCheck(L_5);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_6 = L_5->___faderImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___timer_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_7, L_8, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_11);
		// timer += fadeSpeed;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_12 = V_1;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___timer_17;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___fadeSpeed_16;
		NullCheck(L_12);
		L_12->___timer_17 = ((float)il2cpp_codegen_add(L_14, L_16));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_17 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0079:
	{
		// while (timer <= 1)
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___timer_17;
		if ((((float)L_19) <= ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// faderImage.color = Color.black;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_20 = V_1;
		NullCheck(L_20);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_21 = L_20->___faderImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// currentRequest = teleportRequest;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_23 = V_1;
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_24 = __this->___teleportRequest_3;
		NullCheck(L_23);
		TeleportationProvider_set_currentRequest_m109FD936C57760C70C312B799E6AD6D7651B0581_inline(L_23, L_24, NULL);
		// validRequest = true;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_25 = V_1;
		NullCheck(L_25);
		TeleportationProvider_set_validRequest_m539A9FBCF21BBCE6062D888442666D0679B27B0D_inline(L_25, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FadeTeleportationProvider/<FadeIn>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3F4C3DBF50D98DD394C8D0FF8F3B32055B9E1EE9 (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FadeTeleportationProvider/<FadeIn>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInU3Ed__5_System_Collections_IEnumerator_Reset_mBF4EE55E46F1CEAD0392924F130FC92D5122ADF7 (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInU3Ed__5_System_Collections_IEnumerator_Reset_mBF4EE55E46F1CEAD0392924F130FC92D5122ADF7_RuntimeMethod_var)));
	}
}
// System.Object FadeTeleportationProvider/<FadeIn>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInU3Ed__5_System_Collections_IEnumerator_get_Current_mBF5BABC4A247EDED0F8007E1A91AE709F11CE8D3 (U3CFadeInU3Ed__5_t935D1A7C15E553FB6D0F97C413BB976928FA87ED* __this, const RuntimeMethod* method) 
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
// System.Void FadeTeleportationProvider/<FadeOut>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6__ctor_m054367F1A53DFC78A127A680A4CB086C59AEFABC (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void FadeTeleportationProvider/<FadeOut>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6_System_IDisposable_Dispose_m13AB0E4A69D6837826D1DCA4D0EB1C6255568DD9 (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean FadeTeleportationProvider/<FadeOut>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutU3Ed__6_MoveNext_m6057CB3F42D8C9CD8CD0B6BA1D6C8FEE18E2923D (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// timer = 0;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_4 = V_1;
		NullCheck(L_4);
		L_4->___timer_17 = (0.0f);
		goto IL_0079;
	}

IL_002b:
	{
		// faderImage.color = Color.Lerp(Color.black, Color.clear, timer);
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_5 = V_1;
		NullCheck(L_5);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_6 = L_5->___faderImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->___timer_17;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_7, L_8, L_10, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_11);
		// timer += fadeSpeed;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_12 = V_1;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_13 = V_1;
		NullCheck(L_13);
		float L_14 = L_13->___timer_17;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_15 = V_1;
		NullCheck(L_15);
		float L_16 = L_15->___fadeSpeed_16;
		NullCheck(L_12);
		L_12->___timer_17 = ((float)il2cpp_codegen_add(L_14, L_16));
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_17 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_17, NULL);
		__this->___U3CU3E2__current_1 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_17);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0079:
	{
		// while (timer <= 1)
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___timer_17;
		if ((((float)L_19) <= ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// faderImage.color = Color.clear;
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_20 = V_1;
		NullCheck(L_20);
		RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* L_21 = L_20->___faderImage_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline(NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// EndLocomotion();
		FadeTeleportationProvider_t1629CECE172FDC120FC44A4E6F21C3C3BFD2966A* L_23 = V_1;
		NullCheck(L_23);
		bool L_24;
		L_24 = LocomotionProvider_EndLocomotion_m64CC4C14527FF9F8D2956159425A2208E4612ECB(L_23, NULL);
		// }
		return (bool)0;
	}
}
// System.Object FadeTeleportationProvider/<FadeOut>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7AE849C3BFD2A788A57CC014ACB64C9DC2374895 (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void FadeTeleportationProvider/<FadeOut>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutU3Ed__6_System_Collections_IEnumerator_Reset_m8D967CA37EE04D9CDA9CDBA80E5936823757AB98 (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutU3Ed__6_System_Collections_IEnumerator_Reset_m8D967CA37EE04D9CDA9CDBA80E5936823757AB98_RuntimeMethod_var)));
	}
}
// System.Object FadeTeleportationProvider/<FadeOut>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutU3Ed__6_System_Collections_IEnumerator_get_Current_m1F074A8DD30BFB2A49922014D06B703C9DABC900 (U3CFadeOutU3Ed__6_tA3CFB0D77B2061A8A5C4D6A74E75FA6DE5DFB771* __this, const RuntimeMethod* method) 
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
// System.Void HandVisuals::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisuals_Awake_m79E09C37EEE87EE1B12D484443D4207246B4E5FB (HandVisuals_t7F51CF316B1A6B9AB893D4993B0BF185164C69F9* __this, const RuntimeMethod* method) 
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
// System.Void HandVisuals::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisuals_Update_m9DC588F2BC7446DDEEA890DB3EA52D089A93FAAC (HandVisuals_t7F51CF316B1A6B9AB893D4993B0BF185164C69F9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27653A35A3723E907CAE48890DB629947B22AD11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74AF42CBDEF8D15EB8CC98338AB0382314408DE7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.SetFloat("ControllerSelectValue", flex.action.ReadValue<float>());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_4;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_1 = (&__this->___flex_5);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_2;
		L_2 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_1, NULL);
		NullCheck(L_2);
		float L_3;
		L_3 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_2, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_0);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteral74AF42CBDEF8D15EB8CC98338AB0382314408DE7, L_3, NULL);
		// animator.SetFloat("ControllerActivateValue", point.action.ReadValue<float>());
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___animator_4;
		InputActionProperty_tE5B1633784A72FC044A0BB5C0BE140DD7BD84FAD* L_5 = (&__this->___point_6);
		InputAction_t1B550AD2B55AF322AFB53CD28DA64081220D01CD* L_6;
		L_6 = InputActionProperty_get_action_mABF2197D9CC6586E5DFB0481CF9C1B2586F41A47(L_5, NULL);
		NullCheck(L_6);
		float L_7;
		L_7 = InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B(L_6, InputAction_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m37FC749080A83C05777D1F779F38B8A27BAFA97B_RuntimeMethod_var);
		NullCheck(L_4);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_4, _stringLiteral27653A35A3723E907CAE48890DB629947B22AD11, L_7, NULL);
		// }
		return;
	}
}
// System.Void HandVisuals::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandVisuals__ctor_m9A8CF17B3B8F6076925A0F7EA0D668F2EBD1B0C3 (HandVisuals_t7F51CF316B1A6B9AB893D4993B0BF185164C69F9* __this, const RuntimeMethod* method) 
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
// System.Void OffsetGrabInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffsetGrabInteractable_Start_m0F5079AF1521C5B98E56962B3D82510BEA205B3B (OffsetGrabInteractable_tFCA936EE73D95AF080C82EBAB88D9223A5FAD964* __this, const RuntimeMethod* method) 
{
	{
		// initialPose.position = attachTransform.position;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_0 = (&__this->___initialPose_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline(__this, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		L_0->___position_0 = L_2;
		// initialPose.rotation = attachTransform.rotation;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_3 = (&__this->___initialPose_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline(__this, NULL);
		NullCheck(L_4);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		L_3->___rotation_1 = L_5;
		// }
		return;
	}
}
// System.Void OffsetGrabInteractable::OnSelectEntering(UnityEngine.XR.Interaction.Toolkit.SelectEnterEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffsetGrabInteractable_OnSelectEntering_m0C76A713E6C3CD19D33D6E249B738658750AB7C2 (OffsetGrabInteractable_tFCA936EE73D95AF080C82EBAB88D9223A5FAD964* __this, SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (OffsetGrab)
		bool L_0 = __this->___OffsetGrab_116;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		// attachTransform.position = args.interactorObject.GetAttachTransform(args.interactableObject).position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline(__this, NULL);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_2 = ___args0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_2, NULL);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_4 = ___args0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = SelectEnterEventArgs_get_interactableObject_m1BF44240E99A894B17EE07BBBC4B6AA6D1058DD2(L_4, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_3, L_5);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// attachTransform.rotation = args.interactorObject.GetAttachTransform(args.interactableObject).rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline(__this, NULL);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_9 = ___args0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = SelectEnterEventArgs_get_interactorObject_m97F5CFDD451F9E85F5B92FD2B3E668A43B1C146C(L_9, NULL);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_11 = ___args0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = SelectEnterEventArgs_get_interactableObject_m1BF44240E99A894B17EE07BBBC4B6AA6D1058DD2(L_11, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = InterfaceFuncInvoker1< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, RuntimeObject* >::Invoke(6 /* UnityEngine.Transform UnityEngine.XR.Interaction.Toolkit.IXRInteractor::GetAttachTransform(UnityEngine.XR.Interaction.Toolkit.IXRInteractable) */, IXRInteractor_t0E1112913D56F678962B999BA5CC139CFE0D344A_il2cpp_TypeInfo_var, L_10, L_12);
		NullCheck(L_13);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_14, NULL);
	}

IL_004a:
	{
		// base.OnSelectEntering(args);
		SelectEnterEventArgs_t9220B1E6A9BB5A847C0476949ACE0182430BB938* L_15 = ___args0;
		XRGrabInteractable_OnSelectEntering_m61F7528D64DC4008194F74434CCBB07118F65230(__this, L_15, NULL);
		// }
		return;
	}
}
// System.Void OffsetGrabInteractable::OnSelectExiting(UnityEngine.XR.Interaction.Toolkit.SelectExitEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffsetGrabInteractable_OnSelectExiting_mE09CD2680869EAB5837BE4BDD781F8EB7BB29497 (OffsetGrabInteractable_tFCA936EE73D95AF080C82EBAB88D9223A5FAD964* __this, SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* ___args0, const RuntimeMethod* method) 
{
	{
		// if(OffsetGrab)
		bool L_0 = __this->___OffsetGrab_116;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// attachTransform.position = initialPose.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_2 = (&__this->___initialPose_117);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___position_0;
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_3, NULL);
		// attachTransform.rotation = initialPose.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline(__this, NULL);
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971* L_5 = (&__this->___initialPose_117);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = L_5->___rotation_1;
		NullCheck(L_4);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_4, L_6, NULL);
	}

IL_0034:
	{
		// base.OnSelectExiting(args);
		SelectExitEventArgs_t56125CE0360D37AC0B50EB6066B5AB5957EF559A* L_7 = ___args0;
		XRGrabInteractable_OnSelectExiting_mF52B6F4DD6BAC23E34610E8394768B08510F7A65(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void OffsetGrabInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OffsetGrabInteractable__ctor_mF03E80D4B4BBBA3DD23F824B8EA5B6980D868D0B (OffsetGrabInteractable_tFCA936EE73D95AF080C82EBAB88D9223A5FAD964* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772_il2cpp_TypeInfo_var);
		XRGrabInteractable__ctor_mF1FA77294880EFA9C7C840025B207B80327B5E2E(__this, NULL);
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
// System.Void ChekItem::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChekItem_OnTriggerEnter_m6694F7233C9BD92F5AE1931A27E4D0262397EC8A (ChekItem_tBC14CB1630AC2960C4A8DB4D2FDDEA25AC19ED09* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	{
		// if (other.CompareTag(tagName))
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		String_t* L_1 = __this->___tagName_4;
		NullCheck(L_0);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// other.gameObject.SetActive(false);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___other0;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// other.gameObject.transform.position = newPosition.position;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5 = ___other0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___newPosition_5;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		NullCheck(L_7);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_7, L_9, NULL);
		// other.gameObject.SetActive(true);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_10 = ___other0;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ChekItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChekItem__ctor_m0B4C6B4E0FEDA71ABE7ADCCCF8FBD6AAE41D0AE1 (ChekItem_tBC14CB1630AC2960C4A8DB4D2FDDEA25AC19ED09* __this, const RuntimeMethod* method) 
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
// System.Void MoveCube::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCube_Start_mDF1C2E0FFF394FA65A4B933EB1500E2947B1BC8D (MoveCube_tFD726DFF601D0B3C939DF989C86D86ED0FF23E54* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MoveCube::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCube_Update_m0574C9E56F6FB71D7B9F457EDD0629B3C95AB910 (MoveCube_tFD726DFF601D0B3C939DF989C86D86ED0FF23E54* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(Vector3.right * Input.GetAxis("Horizontal") * Time.deltaTime * speed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		int32_t L_6 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, ((float)L_6), NULL);
		NullCheck(L_0);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_0, L_7, NULL);
		// sphere.transform.Translate(Vector3.up * Input.GetAxis("Vertical") * Time.deltaTime * speed);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___sphere_5;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_11;
		L_11 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		int32_t L_15 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, ((float)L_15), NULL);
		NullCheck(L_9);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_9, L_16, NULL);
		// }
		return;
	}
}
// System.Void MoveCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCube__ctor_mD97FBAAA425C4FAB3323D25CAB7EC00A3CD23F43 (MoveCube_tFD726DFF601D0B3C939DF989C86D86ED0FF23E54* __this, const RuntimeMethod* method) 
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
// System.Void PlayAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_Start_m86A14EA0830911AFD81D145AB2E7F7AEE7C6C77B (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playAudio = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___playAudio_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playAudio_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void PlayAudio::PlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_PlayButton_m7E919D71312EEF46734DF9B8360043FE231D3BD1 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		// playAudio.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___playAudio_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio__ctor_mFB4A06CE9F21D57E725F284B2C55494834E2B421 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* ControllerState_get_onEnter_m95180BA449608C7DC2D3D4977BC79C80A628AC92_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnEnter;
		StateEnterEvent_tFC62157A97667193613E3653535D32888ADC10DE* L_0 = __this->___m_OnEnter_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* ControllerState_get_onUpdate_mE6C3C805E950C95BD6AD4D3061419894C84D1302_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnUpdate;
		StateUpdateEvent_tF7D03F569BB43042F4BFF59E04291B2A0B1EF915* L_0 = __this->___m_OnUpdate_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* ControllerState_get_onExit_m7124FB8D27E0E07AF285392A23B6CEDD20B29549_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OnExit;
		StateExitEvent_t6A762091D01E98D78C5772D7E5026ED1F0872B6C* L_0 = __this->___m_OnExit_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ControllerState_get_enabled_m707D4F603315C4B716C59F2F887AE942D9C96114_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Enabled;
		bool L_0 = __this->___m_Enabled_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerState_set_enabled_m27C729892CD7A747809EF2F5161DCAF7598A0063_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Enabled = value;
		bool L_0 = ___value0;
		__this->___m_Enabled_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ControllerState_get_id_m244CFA6F302E22849C064CF751C719FAAFE90C50_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, const RuntimeMethod* method) 
{
	{
		// get => m_Id;
		int32_t L_0 = __this->___m_Id_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void XRBaseController_set_enableInputActions_m74E6BEA651230890AF81718CE1E25FF030592BFA_inline (XRBaseController_t44C1BB30A7E1D279DD2508F34D3352B33A9AD60C* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_EnableInputActions = value;
		bool L_0 = ___value0;
		__this->___m_EnableInputActions_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ControllerState_set_id_m79F209BD1B74650590178C922086997CE9572ADC_inline (ControllerState_t417742DA079B96DD377B3F95AD9A2A85D112FFD0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set => m_Id = value;
		int32_t L_0 = ___value0;
		__this->___m_Id_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_clear_m02E023A7D396B973288B3915F6F24FBF7E0DC81D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportationProvider_set_currentRequest_m109FD936C57760C70C312B799E6AD6D7651B0581_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE ___value0, const RuntimeMethod* method) 
{
	{
		// protected TeleportRequest currentRequest { get; set; }
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_0 = ___value0;
		__this->___U3CcurrentRequestU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TeleportationProvider_set_validRequest_m539A9FBCF21BBCE6062D888442666D0679B27B0D_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// protected bool validRequest { get; set; }
		bool L_0 = ___value0;
		__this->___U3CvalidRequestU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TeleportationProvider_get_validRequest_m083A1AF44E1AD7BD791A2B599216067B94D65788_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, const RuntimeMethod* method) 
{
	{
		// protected bool validRequest { get; set; }
		bool L_0 = __this->___U3CvalidRequestU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* LocomotionProvider_get_system_m2FFD680EAEA3837BF1BE61B34DB6685118760D94_inline (LocomotionProvider_tC65B288AF39EACCD294F953F300BA33E33C2017B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_System;
		LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* L_0 = __this->___m_System_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* LocomotionSystem_get_xrOrigin_m06C2599D9739A71562F0F3DD27BC57BCC18F3EF7_inline (LocomotionSystem_t969449BF16C7ED7A4A08A07CB480440C79AD2D6B* __this, const RuntimeMethod* method) 
{
	{
		// get => m_XROrigin;
		XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* L_0 = __this->___m_XROrigin_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE TeleportationProvider_get_currentRequest_m0CCE6B6BE488A506F4FD398A18C8D0450ED6C39B_inline (TeleportationProvider_t97A0AC16C69ACC50C842581737181148614AF972* __this, const RuntimeMethod* method) 
{
	{
		// protected TeleportRequest currentRequest { get; set; }
		TeleportRequest_t50D2AA5655D559F78FC8138B445FB997858EAFBE L_0 = __this->___U3CcurrentRequestU3Ek__BackingField_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* XROrigin_get_Origin_mCE6A3B327ACE6FAEDCC67A9DC952FEED191C26B6_inline (XROrigin_t5E534A6D886991AF3C1C64127E19A3A510009CFE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_OriginBaseGameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_OriginBaseGameObject_8;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* XRGrabInteractable_get_attachTransform_m30CDBF31508E618FE793B016216943805111DA12_inline (XRGrabInteractable_t8F7EA04527E7074002690EA93ACEAEFEBD79A772* __this, const RuntimeMethod* method) 
{
	{
		// get => m_AttachTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___m_AttachTransform_58;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
