#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "vm/NonCachedCCWBase.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>
struct IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Char>
struct IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int64>
struct IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>
struct IDictionary_2_tA359427016452362582134A8C14496A1241B840D;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>
struct IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Boolean>
struct IReadOnlyDictionary_2_t8D3FD4DE07CED4C0DCBFCAE6F21EA07AEBCF4106;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Char>
struct IReadOnlyDictionary_2_tE289C55D514BC3EE1DEF4003944D4C920A22AB58;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Int32>
struct IReadOnlyDictionary_2_t45EA70556BBC1AA358BDC7AC3891F9E2EE5926DA;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Int64>
struct IReadOnlyDictionary_2_tF213E9C580793B1196B8ECE8EBB14B86405C665F;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>
struct IReadOnlyDictionary_2_tF1153837984884C58DB2002103135F3D9F0A9B4E;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.String>
struct IReadOnlyDictionary_2_tD7085867A7CBD6A65830ADFF246449C2809633E0;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Object>
struct IReadOnlyDictionary_2_t26970A9F76D3DFB52788F83ACC615A84039CAB29;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>
struct IReadOnlyDictionary_2_tC59696C9B4BEEDAA1F5FF20B05041CA0BEDEF88F;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>
struct IReadOnlyDictionary_2_t2711B2C006043E17885E1EFB4A59E1206C08FD68;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>
struct IReadOnlyDictionary_2_tF3133645B3876E8AA374DE1B4668134D48CA8D03;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>
struct IReadOnlyDictionary_2_t94AD503726A8DA0918BD194B14FEDAC0C0C6DB9E;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_tDDADE2F16E796424445272128ADA67258FD17ED7;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Object>
struct IReadOnlyDictionary_2_tB80B95F14EE9CB318F0F36A3B0B51B1360D272BD;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tD604AC9B58FD64FA8C0930F86A857E0D4236F3B5;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>[]
struct KeyValuePair_2U5BU5D_t2821132F356BE4A4C9DA5BA34C0A364675D53417;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_tC7A09A604E89B878B8A673BD6238A819ADDAD26A;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>[]
struct KeyValuePair_2U5BU5D_t0049A6F56B79DA4AC9939EDEC6BB113B02318291;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>[]
struct KeyValuePair_2U5BU5D_t8CD3ED046BC02CB01B012CDD95421A31914D4BD5;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_tF3E7A3C0CD8F236E22836D54F25B24F11461CD8C;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_tA70A6D970A6407747BDE3F49A31B0BE1D7043951;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1336B67B1075C3E1E7713F0436412A73F860ADBB;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t26D97109393AD123C389E1D07E24A1E1AAEDF1B8;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t4EBB4872BC5FA3F4D13397844D1BE1117503C2B9;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_tE550885A1F49CF2FBFB8A2E39DC0EADEF91219B8;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Boolean>
struct KeyCollection_t7B919FB3937A9C3FFB153DC6A5709DD2D0597FD7;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Char>
struct KeyCollection_t8ED07CB4735CA1B35A6C107DB538249AAB6FFF12;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t117459FFC496A6F89EDDF66E179C6C9DFB3C2AB6;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Int64>
struct KeyCollection_t3E1013D8746BC8026F013DEC00D8707F23D00471;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t4FDD5C1ED2D3457C102C5DAB4F993DE0E29C8B5B;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.String>
struct KeyCollection_t7843276E3718C994127F4917FD4915CB81DEF07E;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t5AA2278184736E551204270EAB1C2EDBAD92B2ED;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t4CB6B2E7A2B824E2B80408F5D99F5B840C47E427;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t37FEA08FB6B3F1D49A5BB9CF415A41145F58C3DE;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t61A35CE4F7CC744CA4161339BCD33F68E2D29F7A;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tDC2454B75AA818EFC69868BC6220D6992160199B;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t3C74E5866E9C49EF05E2268013DA9B23474920F6;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t220E1682DB2C6E7E54B9899E6E8108DB53313B5E;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.Boolean>
struct KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t3D5FEB05EAF0FC557F237264E02EC9A32344948E;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_tEC8CA11C72300D803DAB77DB4FF795FC4368D4F8;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Char>
struct ValueCollection_tED3CC5D612357FADB6643A096EEE49DD02059C3F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t7C82D91754863D8D9F3323783E1B9311B2F96AB0;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Int64>
struct ValueCollection_t3DDAE0AD09F186E83DEEAC49C93F726317133B3A;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t97DD149C4FC0DC0DC5C2ADA8305D499553A31CCF;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.String>
struct ValueCollection_tF329C9835834DE9E570BD4EF40FDA798D69D331A;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t004138F902C5D9714D0ADB9EF31CC3E85D8F66B0;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t7737C4F66357DFECD11D843A44A9269C91B2CE72;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tDA44ED001579670FE76D31590A0BEFEA63FC8DE1;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t21FF044950DDE3204EB491F2E977DB5A088182D5;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t48AF90A5FF8FB66BBA9A8959688F502A109630BE;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tE9C97C0BA62F10B910C55A152441C954EB79944A;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tEF98CD55572C57B7B5CAA02B5AF0B9017D85EE4C;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.Boolean>
struct ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_t56D1A66FF4EDE101F3CE343479A022A77BB70E89;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Boolean>
struct ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Char>
struct ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int32>
struct ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int64>
struct ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>
struct ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.String>
struct ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>
struct ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>
struct ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>
struct ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Object>
struct ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>
struct ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>
struct ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Boolean>
struct KeyValuePairComparer_t0334718C7EFEB1E568CDD1A064B1253F258AA47D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Char>
struct KeyValuePairComparer_t3853FCFA79AE61DD5F66A6D5971BF1B01E063414;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Int32>
struct KeyValuePairComparer_t4496D7F4D3127796759270158B342936149BCAE8;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Int64>
struct KeyValuePairComparer_tF5286128F9F3557D2A54A0379CA63745F6B1E10C;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Object>
struct KeyValuePairComparer_tCDD00DB758F72407D0363DA5BE8B61569DE266CC;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.String>
struct KeyValuePairComparer_t6195EC512019426FB78213F0817505A9B4F24D73;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int64,System.Object>
struct KeyValuePairComparer_t60864D9B82BA756AC28AC3CB553743C1378A84DD;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Boolean>
struct KeyValuePairComparer_t5D875EB46E7B7BD626D609DCEA063BEDAC48E3D8;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Int32>
struct KeyValuePairComparer_t7CA9957AA524A7311201F7AB7BF467E9EC1DFD21;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Object>
struct KeyValuePairComparer_tFEB39D01096E3863AA07B6863680E34CBE69E68D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Int32>
struct KeyValuePairComparer_t724AEF30E8589037957CB8E08381D1DA3C92100D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Object>
struct KeyValuePairComparer_tDC9F58E2B61A675D13B01414F1872D843F5DD0DA;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.String>
struct KeyValuePairComparer_tD7252789582ABB889A0380DEBE598F432601E0C1;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.Boolean>
struct KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.Object>
struct KeyValuePairComparer_tA2C458B52694BF4FC810D9EADCAE715B79C8E519;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Boolean>
struct ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Char>
struct ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int32>
struct ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int64>
struct ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>
struct ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>
struct ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>
struct ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>
struct ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>
struct ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>
struct ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>
struct ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>
struct ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>
struct ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>
struct ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>
struct ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;

extern RuntimeClass* ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t16D8634CC1971E56843DDB5FF854A403364BD8B6_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t2E18A9C518FE082D8062948E154F69D00DC46677_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t376AA82E152EA92AF847765C1E50FBDF0E2CCB1A_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t51FAEFFD9A8E3759A4BACFACBDF2879F11C33319_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t589BF03E6AF3715C53F02BB601A1E652C455B39F_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t5B601954D317D8C287BEAE0CD4CE1FC192341F3F_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t81D3A7334E4F05CBDE0937B2716545517BE310B8_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t94F9496DBEAD75F9152E7AAC9FACA33C3460038A_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t95D272ED47E5AF7473F4D06F3A4BFF561E3FBF1C_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_t9606967545DE41D476D3C4E9AF7E51F9EDD61720_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_tA78C4852BB3D537314405D0D61C46C88DF2892DB_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_tB014FEB76EDF0942997BAAB59D2CBA5CAD07B379_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_tC12FC9F1ED1BE2DE4AF828C51C568DC089B956F0_il2cpp_TypeInfo_var;
extern RuntimeClass* ICollection_1_tF4D1EF95DA6D70CF70676B820B7D263E4B44C1E2_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_1_t72A09E3835A3EF68028D217551944746A8512CDA_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_1_tADE7F07428E1345F0133DD94EFCB10CA48C40D8F_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t025ECAC8D0C01C29AA86473681F566A078537F2E_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t095A92EB7844B31E4B51C9786C26A67001CD1E02_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t198C68240C14CDA93A2285621E11618E1A62798F_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t2AB420236D0C9F266112FEF894EF9E9C0236FF51_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t34A5D0833B96A1F6C872A58F98761AFAF4C36D5E_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t624FEF3CB7433AF116F0405BCA884284AA456E83_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_t67299E4BE64CE4846C9AC507C04EE68F3C036DE6_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tBF8597503B0263931F18429B54FB6718939366C0_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tC20B58C0DE2B0F274753E8AC36FBA757B50545F4_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tC7FC30E9584BF882C56AAF7BCD36E30D5FC93757_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tCD70B38B49151CDCDDA938825E2A9A938FC286E5_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tE541712F5404BEB2DF28AD1AF0D42B76D9C518CE_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tEEFA96045AC300F86C0E5E31719834F591EADD4F_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyCollection_1_tFD56CD4756908C4077042C52EF1FFE51A068A568_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t26970A9F76D3DFB52788F83ACC615A84039CAB29_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t2711B2C006043E17885E1EFB4A59E1206C08FD68_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t45EA70556BBC1AA358BDC7AC3891F9E2EE5926DA_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t8D3FD4DE07CED4C0DCBFCAE6F21EA07AEBCF4106_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_t94AD503726A8DA0918BD194B14FEDAC0C0C6DB9E_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tB80B95F14EE9CB318F0F36A3B0B51B1360D272BD_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tC59696C9B4BEEDAA1F5FF20B05041CA0BEDEF88F_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tD7085867A7CBD6A65830ADFF246449C2809633E0_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tDDADE2F16E796424445272128ADA67258FD17ED7_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tE289C55D514BC3EE1DEF4003944D4C920A22AB58_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tF1153837984884C58DB2002103135F3D9F0A9B4E_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tF213E9C580793B1196B8ECE8EBB14B86405C665F_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyDictionary_2_tF3133645B3876E8AA374DE1B4668134D48CA8D03_il2cpp_TypeInfo_var;
extern RuntimeClass* IReadOnlyList_1_t123D011888A4D9B520E568F42B6CFBAD318B68C7_il2cpp_TypeInfo_var;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297;
extern String_t* _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1997BD7E327357898EDABF3D833771A10AC1A79D_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m20931F33515F13787476435E30E04214D91B9BB3_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m41639F3A2D729F4E44D58E1269D45EDF660A9F1F_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m62FE3AAA845A120E000E3BBA0CA1F73B631264E4_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m685DA4637C1ECA6E8D6C1028D844CA71188885FC_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m82398B71F6957AD972581B30DB3C186E8081FF13_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mAB9195AB8AC758190789C5E54A3587535F689F1A_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mC22A61915CE206831ABA9F52BD8149E645A375BC_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mCA5BCF362C189E616B716BDA45BD90B629AFE53F_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mDDBFD709CBB5467C1B33E9E1B7F6D7F5A7ADD2B3_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_mE27CE0AD88B8EE74CBFB64085F22BC8E3388100E_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m02B412F7C1877120635BE5307CD39E5E63EF6F68_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m02E4B3DF559D51132CFFDCBC27C0B5CA8ADBD040_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m242B9CD73C6CB42BAB9150538322206DFACCC9D1_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m39FE6C80A4B14B98C4D370E0EDF9CA17ABDA50E7_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3DC3086FC1743C4C5EC39725C4BD2B60F91D6643_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m6CAB06F9514B56F1F16C9D589CF4D426F084DC65_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m7EEF4C3F1070B52FAE2CB751669D4E2CCA72B556_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_mEFB815B913BA9334FFC7880B988F1ABC2AA1B32D_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_mF1A480D6BCDDEF7EAC5BFEF87A785B9C937D9256_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_mF3189244A63BCC0D376323A36F1E6F005084130B_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_mFEB6FFB753930BD450C9B9251F7FF92B041D6182_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m18EAE7C3652CC594B89532C2182AF531F351C1A1_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2D5E5781EECFE6FB93066D9C39852C9E052B220A_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m399ECA62E7496A29A7396211018AD652FF15D930_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m53E63212F4103CB32CE7BF11259AA994C58F9763_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m5E5D221D5A8172958E8E794478353110183832EA_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m89819ADCF57B0FAB7895AD67A45532933C191651_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mA63AB45B1DCD00F430DA683B7446EA00536ECD43_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mB735BC2D7232A3B45D667D28C17BA51AAAFFB4A1_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_mFF22AA1BD60F2760A4CAAB581B5996DDD62CBCAA_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m29DE50BBCB38063E44E72BF1C0F4488DEEF6DACE_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2D91533A66E5BB608E0175099C9D7289D172D318_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2FC07FAC81494CABD1E9BD58E7917981B6EBC5B2_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m435F98F01A7613A2BC8ED3A15E128D30D75D2FD4_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m5A3A76AD9C76D7E58EBED51BF3C82BD695B83548_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mA198C771B2A8287C0A6E482092D2AB4376F6F8F1_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mBAD430E7201DB0E9F5057891AFFEDFC393A96C51_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mE50A05A795484D20F8060413212B29EBADC1EA40_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mF7293AF44DA0B8EB7B455A6227F7C36EEE9CF508_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m103B8650815F508198DBE41BF395B893564B692A_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m15451E5BF4DB173E958C0FEA1996B0A108B1BC01_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m25B6DA3095884FB0D7D28CC69EE80C6DCCEB8008_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m775BD524BDA4E5B10629191175488C558F01D247_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m7B7070157BA83F443A04EB5773E99CFD0BAB013A_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m7DC85FF020A5F3C07AFF55B4B5CA0966BDF0AE2A_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m92E28218207650BF9D01E015F5E260E2B33577BC_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_mB00B04B07D47F362A172DB40FCF7CB2D56199079_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_mB2D19FDF7E2760F6CD503397D0395FBD27E877FF_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_mC3EE57544327AEA20DC1598EE9C8C1E1120A2F6A_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A_RuntimeMethod_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_mC9CB99F4923E90D9DC5C454220833DCB845F79A9_RuntimeMethod_var;
extern const uint32_t IIterable_1_First_m84004E4C50675B9B5869094B49CB983EA40D2C7F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter_MoveNext_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m1DAAA00B1724D97136F592E04E9C6146D41FFFC9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m423536B0B2DE296196311E0A25A5540D6C3AC0F8_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m48FD9835615DFFACDB96E3F99E3A82C1B7967E7C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m59A02B9173565C9487313AEF006D22B89E891ACA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m6E70C70549DB48D68AA88E5A24044F34501C832A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m6F5F6DD5A0DA07188FAE57CBFF2F72A39C38C0C3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m92C57658C4597A455068184F0A97A41C0E222512_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_m98EE0237601729C163ACE668075FFB92354BAFE6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mBC1C773DAF6598B023AF3F7C1C53A5B2A2C60210_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mC3D38969E4BED888E29302CADB602A0CD694B60D_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mD574CB3B2B9B78ACE78BEE00CE74E8D2C8EAE015_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mD719EFA29E8BDB1834D0C036F3D858110C7F0AC6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mE526F61CB30B178AF1074AF1183E55B0162E8ABB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Key_mEE6F924156F157D959C51F4DC7C5D75F105E122E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m083B015CFBE3E129E1D2282CD926189599195256_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m0CB149607EDE61EF02B0C9D6EC600CF8FFDC26BC_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m130E5BE3F1A1D87A8E97E483DBAC0E05D7F31130_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m39E0D5E2C7FC859BE3F76D4160C8D013AAAE9193_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m57ECACBA40BEC0C268CDBD9B7B591DA064087A35_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m58697189DFD4331CBF62C9BB747023B7193F4A7D_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m5949FE18C131A76BB49F41A8F69601C75F48D66D_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m5A652B49FAEAA49A22A0D200871C1675F4E9F4ED_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m664A0696C4E1DF5AA719302938E9DB385F01C4EB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_m8C5A63C0C41D45DA4ECE4F0F86B05E2329783ADD_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_mC8375618394D63F4EB9B58FAD3DC7BFB3D83E80F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_mCE7ADCAACB1F09420E47B5073D4E10A1642125B2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_mD9216AFDD39C2208BD98B6AFD1E53AE92DD57858_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IKeyValuePair_2_get_Value_mE7B87F0FE1DD49E9B765616FF95FA51C54266515_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m06A089418F9A7F076C4432356F13783979E36C3C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m0B3336EF296C26F19C689FEBD5D81AACE9DFA546_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m0C8F0F907EBD7108088333362E26E078A27E4540_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m0DBCBA5D8B71EFABE2E7F0303C7F3E1B5FD26253_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2947463A97CE243580F0B1B605EA10263878FFD0_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m46D9B22734B6A871366162DB6721D4A70216BAC1_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m4B94833E67600CD9EB76DAF502B1C00017362FCE_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m70E6873C40454816C38521794BD0FBE8E8802442_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m83B8D945F5AF4755ED0A9D4A2B7044BFD45EA306_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m9652D22524EFA7D8B0CA4623F7C33883CD4D8060_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m9CBEFD94E02928ABA0832D03C009835B46BD39CC_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_mCA69CFFCFD93DF33B1AE1C71F2C2AF6B78AFDE64_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_mCF2CA12762CB2BE3A065E726268946BB6DD053BD_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_mE06AC6B4AA27CA0E1880ED08D6651013AD341943_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m1C7E9C76B833CEE3730C07E20400C020E53AF433_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m2597F3E061A2A36B9729AC3BFB7AF66ABA8B986C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3927D669358CABBADD2E8E44C649034236686EDA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m486623CE182130A1BA692837F90E5743C5BB9717_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m55A7A28AAD6B9D5336EBC9DBD9FB6245B0759CCF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m70395C4B4FEF91BEE322542D89D87CE6620976C3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m7B5AFB448F9350A7420100E0045D25EDCE7D925D_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m7CFC8B470D3395ABE6B79306D3E89BDEFE86B66E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m80AD48B3FBFE3AFCE874DB3089C24D67879139A3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m8933B2E3F579A1AB40DE9C4F68F9C46EF7A0B211_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m95E00FC4EF10ADCA7637EC43605F109BDAE307AF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_mA65E9EDCAB06EED36BABF54812436DBDD3725E7D_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_mAF6FE30F33BCEB5BF2CEE9A908111073EAAEF3B0_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_mDCE9C97744C40920861AFF0BF02D462E9C7D7884_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m212D1A4B64950E733EDC81226FDFD433B13DB73B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m26F1C2B3216E256D930586DCEA2A24263A58F6B0_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m38E2521C8EB326B1B92CCEBFAC6BF27758E5A3BC_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m428E68FFEAA6FA65A365325BFB7FF88372AA8AB7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m517D3D02EA369E32ED639989601A5B3F778EDA68_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m5197501E5C9D55DDCF5C838D17892ED368196FEF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m5EAAF4E07FB76EDE7B1493D0536791B368778BC1_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m784CA46A39C1DBF83E1D8707B1A3184775A5B8B6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m95E94F8CD0670B726C96BC52F55BBBA25B323335_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_m9CD0044B1E0089CEABB6927A6C19DC32B7360ECB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mAB8755F664B7110CEACCEA3C46B08DFE78D9C303_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mC716A08DDC6A869CB4EEC66B1DA9C91FA8BA2969_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mD116FD16EAB612CC60F9E08248CC88587C3E13C3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Split_mF0967753CE1BD5708F1ED78FC936F141417E9E23_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m269AE27D53DA9999C542A093FFDE4A2B0C922B33_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m2C98DC6679782C176DE4D6980BC56694A8780A1B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m446F719629B16E4209FE4D81AE51102037C69B36_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m60963925BCA832E7B6C8400BFD20EBFAD268B04F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m9292AC9808B960E51C1CB1CE999FDA71E7CC2F46_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m96F05086219084E81C08D12576D80985B86F11B5_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m9786CC556E67756C10C9D909F5B773ABC9F28DEE_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mB23CFCA7F32DA3970EB24F6E271396BB157A18E9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mD59A118F66E203364CB1462DB8345B9410B15AD0_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mE159F99A01E2B317ECD6C98BCEA833EB5696C64A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mE420727E4959C22AE56B158826B4772C070242D4_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mF0F6F682065427648FE7B401AB8BA5D55286E76A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mFE1BA78ED36452FDE33C133EEF5FE2E5C4D2630C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_mFF9BDCEC02BC43FF3141B0B0B2310F6ED0CC3585_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m19128EF5E8D3942DC86AD919221F54533CC599B7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m23127D9B7F9171544391EA3A68AEDCB0766D92C9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m48850C80048B582432C1302AF31CB103FE6364B2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m4910E3D8EEB4C5F5D3387398F105B987812E79DD_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m4B93FAB66562E9EC679EB252D32F298013A28914_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m5EBC956471E70DF76BD6F92F126F5C52C4BF1534_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m7AC8204F7205EF9798A3829E04FE9D7908F5A9B2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m883F4639BA2846AF4F975B5F379284092C499FB3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mAB7A6383223B7F083E4B4B035174869A0A1E90BF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mAC3D1EC71C36CC4A6986EABDFCDF7AB9A1096280_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mD1D5E79B27C090FA32CE9BF87B18611D71C75DD7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mE2CD2390A2C7FFA7091CC35F8E9316464D388B13_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mF4977209C0CF61C3715726605E9DCC304F9F5C40_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_mFAA975BDDF86160C42362B77B9C45F37EAB3236F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m108CB108267B8E182B0AC2060EB2EC2F9CE2E486_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m17A052C4FFE37EF78C572A8240088AE2D1433899_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m427138D7CF09B05C2FA534B62A157D3778FDE1D5_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m4706D05E04651431DB4D72FF86F18508366E99AB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m584EE5FFCCAAE5880FFDE8B43956EB197075EFF4_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m7531CAF304C73613806C96A38BA9624D2E436D53_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m7B1644C9D86A297CD0996EBBE98EEAF02270C088_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m816B37ECEB1FAD511E00E4CD0B9226A16F6A5D6C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m85845EA616D94D26D15F79ECDB49832B832CAB91_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m9404529D03E23540F16E05B1D8169DEE4B5CBDC3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_m99A3D1C89CE4584634865B1592E7CCCF6DF7B0EC_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_mC501D2EEFE7C98BD6BFD70FFCB646BA2ED8AC5BA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_mD53E4F9AC946B89D1B140E08D418BDC178123FB3_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_GetView_mF649E29280E1910C609F546F0148389E52718601_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1BD15FD8CFD7904C0C512E00DCAF2C5DB4509F8B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m283303434B6F8915C25CFB1357AE0A211607AFE0_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3819B419601975A4F5D4A29BDBCD02C351100184_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4646A5F3D5EF59C1832A508F774A4F052817523F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4E55292A1A067E9D8510CE3FBC4459C4A6889337_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m9AAEC246A5144E1A61549B6202DBF062D42C0C79_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mAE30389D121261DD14355B6C37269840C83BCF43_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mC23090FA89D691381BFFCD3564D9E9AC1E0F37F9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mCD46ADD30AA09893783B817BFBFBF1AE0A9B3391_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mDA506A6189D75A99A90FBE81D92E9EBD7F866FDD_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mE0CF0380910792FF4A497496EEA92792011E769E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mE2615DDE9503C63BE92D98A9869461F1F2F6CB30_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mEC865D0F10D8578929646408F5C7AF66B9E00F68_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_mF7AF167D8CFD7532521BDDB45B74A65CD18F9CAF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m20ECE53EC82A7D1B35991AD0BAC83E2D79888F3D_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m2E9B462FF7BD99B789147880AF4C61CF1F475580_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m440FC4B763173A87C7E5C2E14D5D5AAD3A13BB80_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m49673DE6D98F4D6C15666B6ED9DDAE7D1B166A2F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m5E3A9C31F18B78D815E58837DA9D349766C39863_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m65A9FDD7CCE3AE5946FCF859DB0164758218E579_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m76F5C1867B60A98FE8F2A446CB67EC5BF4DCCFCE_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m80B437F6D811E87BB6CE6A6270D1904F4F2D8A0F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m81EF3858A9F079FBED4A32135C3BD76B375993DB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mA6FC95D481A753B2937C94B7FEC5D261E1215BA2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mC27F9D1171CFD8537A48838E42151955E5EC3DE9_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mD3AF0F5DE1A9537DC37AEEFA421DAF22120B857B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mEC739FF422DF8979336A6EBFA3E852A9CEFCBAEB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_mFE915CC39D4C9EAFE565DA3B599A69C4ABAC81E6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m08FFE051AD6C37E04883C26A1A002E53F3D3322A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m17BF2C3F27F5EEFCF00C4F52E52A6C6BAAAA1107_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m193F07C7B7F57C8CDAD0DDA1B6462D55523DE0FC_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m3093F658011110B85A44FEECAE9A175F51D2CE3B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m4DE69E584A68A890CB4647557D06DFC9CD13844E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m74F1A20CF028413570772CED8DB5C46F03B4C8FD_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_m848097D9DDC2BCD72B5FAA1E29BA2ED36604B9F6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mA352BA30D0CD226685BA9A1D8C563894DBFE5658_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mA69B10DA8FB4F0405953159A6AFAEAA1823624FF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mC37EEEF0D2AF0474A5A5C0D3AAB11318682C9BC5_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mD2DB6929CD1611A5A7D587980A5505DA923A4A46_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mD5A1416BE05A3CEA207D471D171E18B5274EFBB2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mE41258F44B7F5CEBD99F7ACBB7A149CB7EB10C7F_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Lookup_mF7DD9C9B00891CFC13C341B46F2DAB5DF171EB05_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m004C67C470F3EC8F23166A2F834D08ED1438B6D7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m282BA22D0191BE72F55A2E02A8FD11BB66178DE7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m5447078947B06776FB64CBA7B3CE4D74039F0BE2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m69A918F841847727227BB769AA5FE4C99E31CCCA_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m78FFA27A31E30341C406CC0039B7B78CEAD9F23E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m7DA6ADB7C8EEAFD587DF65658188F16F27EFFEE5_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mA66688B0305FC2DF4B6099C4297B7620978D3722_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mA75059844C546A0BA3494FC6E8C7109B7735EC61_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mB018823DBCA3C99C29529AA71DF1D3103362FE25_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mD2061CEF276C7ABB1E346485DDFC1F182A198D93_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mD75194A9099D10EFBD900E02C38AEA16D05FADEB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mE7BB8D254446EAF38A50795155F6B24F34759F14_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mE7EB00F75AB50337F3BDFE72CAE27F5E74CCFDB2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_mF3F10CECAF3EA3CAAC687B7913A3437ED03C4B79_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m0D3B7DEF00653381FA6E2DB7A0F5F1911130BEB6_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m17BF9E39EA9D1A3CE11D2A89A5E8E82BE038C0F7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3E4FE6701CF6638FBF245F5D8E5D7672C1ECDDA7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m4967BDE59167A0462E277344856DDF1C1EDCD4E1_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m4D9CE99612AD90E41BC0D5FBD0823EAC32D40E6E_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m66C0220748862880543229A741F50EB1E00905FB_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m75C5A4FC7DBE9DD2B9EC79A93CC56F2D7239CC32_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m8456284E45A26064AE58519C3A09A50CB7B63DB7_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m8FAD66D38B1591964048D7F26F85325A0E1B8F06_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_mAEB5165E0202B3549338EC03EF61B74A52DB6846_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_mAFC218B9083A6C118581A0CF9690E6752C745E3B_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_mBAF885CF2187F8BB27E5FC63E997671B351F3DD2_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_mDB4107311E3D179B101A8374ED432C0A1C2A5751_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_mEEC8A6A83E5F75918A782E12324E50FC14EB1353_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m82BF11FCC6F017935978CAC95516382E194B45AF_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m5057CD976562F3D6F7829B64D97A2B63C388A597_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m6F08F5B06801BE282280040942346363F8F462E0_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_get_Size_mB0EBB29E83E6C8F9A437AAB57E114DB8C8DAEE60_ComCallableWrapperProjectedMethod_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9;
struct IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744;
struct IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6;
struct IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A;
struct IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2;
struct IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3;
struct IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A;
struct IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82;
struct IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7;
struct IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D;
struct IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5;
struct IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16;
struct IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C;
struct IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8;
struct IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5;
struct IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D;
struct IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3;

struct KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>
struct NOVTABLE IIterable_1_t4A1630DD14BDC255B00BA77E1F4854DCA53C3B6A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m84004E4C50675B9B5869094B49CB983EA40D2C7F(IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>
struct NOVTABLE IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1A52214D0059D52162B263A6A0A2D00453BE7F33(IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_mF993ADF49EE2780C08099751639C979DC956F42C(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m6F65451472B85A5F4B50491215A64400768B103E(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m9D01B24AA4DA53C602A488DB8BAD50D27AC8D779(uint32_t ___items0ArraySize, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t876B2E6E1F7D2240B911E8A187BDCCD0CA18CA5C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mD574CB3B2B9B78ACE78BEE00CE74E8D2C8EAE015(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m083B015CFBE3E129E1D2282CD926189599195256(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Char>
struct NOVTABLE IKeyValuePair_2_tE934865E70448F4C99B4F5038D417AC41D6433CF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m59A02B9173565C9487313AEF006D22B89E891ACA(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m57ECACBA40BEC0C268CDBD9B7B591DA064087A35(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>
struct NOVTABLE IKeyValuePair_2_tB8AFBF2E8DFD9984971AC813E46F1237256DE065 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m48FD9835615DFFACDB96E3F99E3A82C1B7967E7C(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m8C5A63C0C41D45DA4ECE4F0F86B05E2329783ADD(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int64>
struct NOVTABLE IKeyValuePair_2_t69B69A04A68E93792DEAD225DFB41D1EBAC119EE : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mBC1C773DAF6598B023AF3F7C1C53A5B2A2C60210(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m58697189DFD4331CBF62C9BB747023B7193F4A7D(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>
struct NOVTABLE IKeyValuePair_2_t106AAFC7A761F42262D3C6EBDF3BC3404F7EDF78 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m423536B0B2DE296196311E0A25A5540D6C3AC0F8(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m5A652B49FAEAA49A22A0D200871C1675F4E9F4ED(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>
struct NOVTABLE IKeyValuePair_2_tD03AA435B791A3D27E7FD688827851834B2169B6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mE526F61CB30B178AF1074AF1183E55B0162E8ABB(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mD9216AFDD39C2208BD98B6AFD1E53AE92DD57858(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Object>
struct NOVTABLE IKeyValuePair_2_t39B59FBCE841239EFD4BF51C2B407B51400DD1D3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mEE6F924156F157D959C51F4DC7C5D75F105E122E(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mE7B87F0FE1DD49E9B765616FF95FA51C54266515(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t69C762378A6C6E704260A85946D21B9C37FDA898 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m6F5F6DD5A0DA07188FAE57CBFF2F72A39C38C0C3(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mCE7ADCAACB1F09420E47B5073D4E10A1642125B2(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>
struct NOVTABLE IKeyValuePair_2_t0430BA2952DFC31C399BDC2BDBB08E6D0C0DB409 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mD719EFA29E8BDB1834D0C036F3D858110C7F0AC6(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m130E5BE3F1A1D87A8E97E483DBAC0E05D7F31130(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>
struct NOVTABLE IKeyValuePair_2_t53A22D6351252E7BA269A226AD3DC8D5D1BECA40 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m98EE0237601729C163ACE668075FFB92354BAFE6(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m0CB149607EDE61EF02B0C9D6EC600CF8FFDC26BC(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>
struct NOVTABLE IKeyValuePair_2_tB7624D3A159EE31F2A39D4AA2378CE6206E81CE9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mC3D38969E4BED888E29302CADB602A0CD694B60D(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m5949FE18C131A76BB49F41A8F69601C75F48D66D(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>
struct NOVTABLE IKeyValuePair_2_t56132B513BFC3793EE91B0D7368F99CBD2C9ACE8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1DAAA00B1724D97136F592E04E9C6146D41FFFC9(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m39E0D5E2C7FC859BE3F76D4160C8D013AAAE9193(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>
struct NOVTABLE IKeyValuePair_2_t156C2EFE389FA077572EFC7951E33228934C8B70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m6E70C70549DB48D68AA88E5A24044F34501C832A(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m664A0696C4E1DF5AA719302938E9DB385F01C4EB(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>
struct NOVTABLE IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>
struct NOVTABLE IKeyValuePair_2_t43138ED23D38E4329328D4B7DB1F8E9FD9BDC5A9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m92C57658C4597A455068184F0A97A41C0E222512(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_mC8375618394D63F4EB9B58FAD3DC7BFB3D83E80F(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Boolean>
struct NOVTABLE IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3927D669358CABBADD2E8E44C649034236686EDA(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mFF9BDCEC02BC43FF3141B0B0B2310F6ED0CC3585(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m06A089418F9A7F076C4432356F13783979E36C3C(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m26F1C2B3216E256D930586DCEA2A24263A58F6B0(IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5** ___first0, IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Char>
struct NOVTABLE IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m486623CE182130A1BA692837F90E5743C5BB9717(int32_t ___key0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m446F719629B16E4209FE4D81AE51102037C69B36(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m70E6873C40454816C38521794BD0FBE8E8802442(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m212D1A4B64950E733EDC81226FDFD433B13DB73B(IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A** ___first0, IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int32>
struct NOVTABLE IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2597F3E061A2A36B9729AC3BFB7AF66ABA8B986C(int32_t ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9292AC9808B960E51C1CB1CE999FDA71E7CC2F46(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mCA69CFFCFD93DF33B1AE1C71F2C2AF6B78AFDE64(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mC716A08DDC6A869CB4EEC66B1DA9C91FA8BA2969(IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A** ___first0, IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int64>
struct NOVTABLE IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDCE9C97744C40920861AFF0BF02D462E9C7D7884(int32_t ___key0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m9786CC556E67756C10C9D909F5B773ABC9F28DEE(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2947463A97CE243580F0B1B605EA10263878FFD0(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m9CD0044B1E0089CEABB6927A6C19DC32B7360ECB(IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D** ___first0, IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>
struct NOVTABLE IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m95E00FC4EF10ADCA7637EC43605F109BDAE307AF(int32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mFE1BA78ED36452FDE33C133EEF5FE2E5C4D2630C(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mCF2CA12762CB2BE3A065E726268946BB6DD053BD(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mAB8755F664B7110CEACCEA3C46B08DFE78D9C303(IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5** ___first0, IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>
struct NOVTABLE IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m8933B2E3F579A1AB40DE9C4F68F9C46EF7A0B211(int32_t ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mE420727E4959C22AE56B158826B4772C070242D4(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m0C8F0F907EBD7108088333362E26E078A27E4540(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m517D3D02EA369E32ED639989601A5B3F778EDA68(IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82** ___first0, IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>
struct NOVTABLE IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mAF6FE30F33BCEB5BF2CEE9A908111073EAAEF3B0(int64_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mE159F99A01E2B317ECD6C98BCEA833EB5696C64A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m83B8D945F5AF4755ED0A9D4A2B7044BFD45EA306(int64_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m95E94F8CD0670B726C96BC52F55BBBA25B323335(IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6** ___first0, IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>
struct NOVTABLE IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m55A7A28AAD6B9D5336EBC9DBD9FB6245B0759CCF(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m60963925BCA832E7B6C8400BFD20EBFAD268B04F(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m46D9B22734B6A871366162DB6721D4A70216BAC1(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mF0967753CE1BD5708F1ED78FC936F141417E9E23(IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2** ___first0, IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>
struct NOVTABLE IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m80AD48B3FBFE3AFCE874DB3089C24D67879139A3(Il2CppIInspectable* ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mF0F6F682065427648FE7B401AB8BA5D55286E76A(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m0B3336EF296C26F19C689FEBD5D81AACE9DFA546(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m38E2521C8EB326B1B92CCEBFAC6BF27758E5A3BC(IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3** ___first0, IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>
struct NOVTABLE IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m70395C4B4FEF91BEE322542D89D87CE6620976C3(Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m269AE27D53DA9999C542A093FFDE4A2B0C922B33(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m9CBEFD94E02928ABA0832D03C009835B46BD39CC(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m428E68FFEAA6FA65A365325BFB7FF88372AA8AB7(IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8** ___first0, IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>
struct NOVTABLE IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m1C7E9C76B833CEE3730C07E20400C020E53AF433(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mD59A118F66E203364CB1462DB8345B9410B15AD0(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m0DBCBA5D8B71EFABE2E7F0303C7F3E1B5FD26253(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m784CA46A39C1DBF83E1D8707B1A3184775A5B8B6(IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3** ___first0, IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Object>
struct NOVTABLE IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mA65E9EDCAB06EED36BABF54812436DBDD3725E7D(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m96F05086219084E81C08D12576D80985B86F11B5(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m9652D22524EFA7D8B0CA4623F7C33883CD4D8060(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m5197501E5C9D55DDCF5C838D17892ED368196FEF(IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C** ___first0, IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.String>
struct NOVTABLE IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m7B5AFB448F9350A7420100E0045D25EDCE7D925D(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2C98DC6679782C176DE4D6980BC56694A8780A1B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m4B94833E67600CD9EB76DAF502B1C00017362FCE(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m5EAAF4E07FB76EDE7B1493D0536791B368778BC1(IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D** ___first0, IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>
struct NOVTABLE IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___first0, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>
struct NOVTABLE IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m7CFC8B470D3395ABE6B79306D3E89BDEFE86B66E(uint32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mB23CFCA7F32DA3970EB24F6E271396BB157A18E9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mE06AC6B4AA27CA0E1880ED08D6651013AD341943(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mD116FD16EAB612CC60F9E08248CC88587C3E13C3(IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16** ___first0, IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>
struct NOVTABLE IMap_2_t078BE0264ECC533E4914DFAF728CE0D3BF986ECB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mD5A1416BE05A3CEA207D471D171E18B5274EFBB2(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m8FAD66D38B1591964048D7F26F85325A0E1B8F06(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mCD46ADD30AA09893783B817BFBFBF1AE0A9B3391(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m108CB108267B8E182B0AC2060EB2EC2F9CE2E486(IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m76F5C1867B60A98FE8F2A446CB67EC5BF4DCCFCE(int32_t ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE7BB8D254446EAF38A50795155F6B24F34759F14(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m48850C80048B582432C1302AF31CB103FE6364B2() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>
struct NOVTABLE IMap_2_tC4BB51DAD647A68F55C2866CE3C5B85FAD762F5B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mC37EEEF0D2AF0474A5A5C0D3AAB11318682C9BC5(int32_t ___key0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m66C0220748862880543229A741F50EB1E00905FB(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mAE30389D121261DD14355B6C37269840C83BCF43(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m7531CAF304C73613806C96A38BA9624D2E436D53(IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mD3AF0F5DE1A9537DC37AEEFA421DAF22120B857B(int32_t ___key0, Il2CppChar ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mA66688B0305FC2DF4B6099C4297B7620978D3722(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m23127D9B7F9171544391EA3A68AEDCB0766D92C9() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>
struct NOVTABLE IMap_2_tE94B0326168AB4628B4D97073D353062E1D684FF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mA69B10DA8FB4F0405953159A6AFAEAA1823624FF(int32_t ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mAEB5165E0202B3549338EC03EF61B74A52DB6846(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mE2615DDE9503C63BE92D98A9869461F1F2F6CB30(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m584EE5FFCCAAE5880FFDE8B43956EB197075EFF4(IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mEC739FF422DF8979336A6EBFA3E852A9CEFCBAEB(int32_t ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mD2061CEF276C7ABB1E346485DDFC1F182A198D93(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m19128EF5E8D3942DC86AD919221F54533CC599B7() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>
struct NOVTABLE IMap_2_t52B102FF1BAC747479B193965017E3AF02CD4460 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mF7DD9C9B00891CFC13C341B46F2DAB5DF171EB05(int32_t ___key0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m0D3B7DEF00653381FA6E2DB7A0F5F1911130BEB6(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mE0CF0380910792FF4A497496EEA92792011E769E(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m427138D7CF09B05C2FA534B62A157D3778FDE1D5(IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m65A9FDD7CCE3AE5946FCF859DB0164758218E579(int32_t ___key0, int64_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m7DA6ADB7C8EEAFD587DF65658188F16F27EFFEE5(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF4977209C0CF61C3715726605E9DCC304F9F5C40() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>
struct NOVTABLE IMap_2_t2238F2738032778A9F00B6BB76DE2154DC22E69E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m17BF2C3F27F5EEFCF00C4F52E52A6C6BAAAA1107(int32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mBAF885CF2187F8BB27E5FC63E997671B351F3DD2(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1BD15FD8CFD7904C0C512E00DCAF2C5DB4509F8B(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m9404529D03E23540F16E05B1D8169DEE4B5CBDC3(IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m81EF3858A9F079FBED4A32135C3BD76B375993DB(int32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m004C67C470F3EC8F23166A2F834D08ED1438B6D7(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mFAA975BDDF86160C42362B77B9C45F37EAB3236F() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.String>
struct NOVTABLE IMap_2_t745888894699C4A63BEE7E007B0F061E58120E4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m74F1A20CF028413570772CED8DB5C46F03B4C8FD(int32_t ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m75C5A4FC7DBE9DD2B9EC79A93CC56F2D7239CC32(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3819B419601975A4F5D4A29BDBCD02C351100184(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m99A3D1C89CE4584634865B1592E7CCCF6DF7B0EC(IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mC27F9D1171CFD8537A48838E42151955E5EC3DE9(int32_t ___key0, Il2CppHString ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mB018823DBCA3C99C29529AA71DF1D3103362FE25(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAB7A6383223B7F083E4B4B035174869A0A1E90BF() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>
struct NOVTABLE IMap_2_t525A56C0928D6BB908F35233B5BE5C2537F27283 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mD2DB6929CD1611A5A7D587980A5505DA923A4A46(int64_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m17BF9E39EA9D1A3CE11D2A89A5E8E82BE038C0F7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mF7AF167D8CFD7532521BDDB45B74A65CD18F9CAF(int64_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mC501D2EEFE7C98BD6BFD70FFCB646BA2ED8AC5BA(IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m80B437F6D811E87BB6CE6A6270D1904F4F2D8A0F(int64_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m69A918F841847727227BB769AA5FE4C99E31CCCA(int64_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m883F4639BA2846AF4F975B5F379284092C499FB3() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>
struct NOVTABLE IMap_2_t3C9F6CAB115F4E1C0FFE808AAE20FCA475077554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m08FFE051AD6C37E04883C26A1A002E53F3D3322A(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3E4FE6701CF6638FBF245F5D8E5D7672C1ECDDA7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mC23090FA89D691381BFFCD3564D9E9AC1E0F37F9(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m816B37ECEB1FAD511E00E4CD0B9226A16F6A5D6C(IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mFE915CC39D4C9EAFE565DA3B599A69C4ABAC81E6(Il2CppIInspectable* ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mA75059844C546A0BA3494FC6E8C7109B7735EC61(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mAC3D1EC71C36CC4A6986EABDFCDF7AB9A1096280() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>
struct NOVTABLE IMap_2_tE0A22F1BD9B7E4F0293301263F9376B899CCBB8A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mE41258F44B7F5CEBD99F7ACBB7A149CB7EB10C7F(Il2CppIInspectable* ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m8456284E45A26064AE58519C3A09A50CB7B63DB7(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4646A5F3D5EF59C1832A508F774A4F052817523F(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mD53E4F9AC946B89D1B140E08D418BDC178123FB3(IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m20ECE53EC82A7D1B35991AD0BAC83E2D79888F3D(Il2CppIInspectable* ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mE7EB00F75AB50337F3BDFE72CAE27F5E74CCFDB2(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m4910E3D8EEB4C5F5D3387398F105B987812E79DD() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Object>
struct NOVTABLE IMap_2_t542C60F7FAA21298DB084184B5A9FFDEB500BF94 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_mA352BA30D0CD226685BA9A1D8C563894DBFE5658(Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mEEC8A6A83E5F75918A782E12324E50FC14EB1353(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4E55292A1A067E9D8510CE3FBC4459C4A6889337(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m7B1644C9D86A297CD0996EBBE98EEAF02270C088(IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m5E3A9C31F18B78D815E58837DA9D349766C39863(Il2CppIInspectable* ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m282BA22D0191BE72F55A2E02A8FD11BB66178DE7(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m7AC8204F7205EF9798A3829E04FE9D7908F5A9B2() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Int32>
struct NOVTABLE IMap_2_t3B7B9869972140694EC8DBB77288FE4D28D469A7 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3093F658011110B85A44FEECAE9A175F51D2CE3B(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mAFC218B9083A6C118581A0CF9690E6752C745E3B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mDA506A6189D75A99A90FBE81D92E9EBD7F866FDD(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m17A052C4FFE37EF78C572A8240088AE2D1433899(IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m440FC4B763173A87C7E5C2E14D5D5AAD3A13BB80(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mD75194A9099D10EFBD900E02C38AEA16D05FADEB(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m4B93FAB66562E9EC679EB252D32F298013A28914() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Object>
struct NOVTABLE IMap_2_t3A8D4234FE79A4B37A827DAFDCC3EBCE52978642 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4DE69E584A68A890CB4647557D06DFC9CD13844E(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4967BDE59167A0462E277344856DDF1C1EDCD4E1(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m283303434B6F8915C25CFB1357AE0A211607AFE0(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mF649E29280E1910C609F546F0148389E52718601(IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mA6FC95D481A753B2937C94B7FEC5D261E1215BA2(Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m78FFA27A31E30341C406CC0039B7B78CEAD9F23E(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mD1D5E79B27C090FA32CE9BF87B18611D71C75DD7() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.String>
struct NOVTABLE IMap_2_t072A54A1D6B39F73D138457A036A90365DACC4C1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m848097D9DDC2BCD72B5FAA1E29BA2ED36604B9F6(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4D9CE99612AD90E41BC0D5FBD0823EAC32D40E6E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m9AAEC246A5144E1A61549B6202DBF062D42C0C79(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m4706D05E04651431DB4D72FF86F18508366E99AB(IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2E9B462FF7BD99B789147880AF4C61CF1F475580(Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m5447078947B06776FB64CBA7B3CE4D74039F0BE2(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m5EBC956471E70DF76BD6F92F126F5C52C4BF1534() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>
struct NOVTABLE IMap_2_t36C9AB5B1AB38FC142C2FA92750C4250666E8DBA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B(uint32_t ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>
struct NOVTABLE IMap_2_tD7E6EED0C5A72F1EC3F3F27F2B27CBDC4D7FA206 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m193F07C7B7F57C8CDAD0DDA1B6462D55523DE0FC(uint32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_mDB4107311E3D179B101A8374ED432C0A1C2A5751(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_mEC865D0F10D8578929646408F5C7AF66B9E00F68(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m85845EA616D94D26D15F79ECDB49832B832CAB91(IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m49673DE6D98F4D6C15666B6ED9DDAE7D1B166A2F(uint32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mF3F10CECAF3EA3CAAC687B7913A3437ED03C4B79(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mE2CD2390A2C7FFA7091CC35F8E9316464D388B13() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>
struct NOVTABLE IVectorView_1_tFCA49C96F78B2EE6FBCA73E1EE14421518C4E513 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m82BF11FCC6F017935978CAC95516382E194B45AF(uint32_t ___index0, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_mB0EBB29E83E6C8F9A437AAB57E114DB8C8DAEE60(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m6F08F5B06801BE282280040942346363F8F462E0(IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m5057CD976562F3D6F7829B64D97A2B63C388A597(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** ___items1, uint32_t* comReturnValue) = 0;
};
#ifndef READONLYDICTIONARY_2_TF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26_H
#define READONLYDICTIONARY_2_TF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Boolean>
struct  ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t7B919FB3937A9C3FFB153DC6A5709DD2D0597FD7 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tEC8CA11C72300D803DAB77DB4FF795FC4368D4F8 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26, ___m_keys_2)); }
	inline KeyCollection_t7B919FB3937A9C3FFB153DC6A5709DD2D0597FD7 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t7B919FB3937A9C3FFB153DC6A5709DD2D0597FD7 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t7B919FB3937A9C3FFB153DC6A5709DD2D0597FD7 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26, ___m_values_3)); }
	inline ValueCollection_tEC8CA11C72300D803DAB77DB4FF795FC4368D4F8 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tEC8CA11C72300D803DAB77DB4FF795FC4368D4F8 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tEC8CA11C72300D803DAB77DB4FF795FC4368D4F8 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_TF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26_H
#ifndef READONLYDICTIONARY_2_T58B9DE1BCF2543FF60F3B372E3F7B750D23069D6_H
#define READONLYDICTIONARY_2_T58B9DE1BCF2543FF60F3B372E3F7B750D23069D6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Char>
struct  ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t8ED07CB4735CA1B35A6C107DB538249AAB6FFF12 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tED3CC5D612357FADB6643A096EEE49DD02059C3F * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6, ___m_keys_2)); }
	inline KeyCollection_t8ED07CB4735CA1B35A6C107DB538249AAB6FFF12 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t8ED07CB4735CA1B35A6C107DB538249AAB6FFF12 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t8ED07CB4735CA1B35A6C107DB538249AAB6FFF12 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6, ___m_values_3)); }
	inline ValueCollection_tED3CC5D612357FADB6643A096EEE49DD02059C3F * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tED3CC5D612357FADB6643A096EEE49DD02059C3F ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tED3CC5D612357FADB6643A096EEE49DD02059C3F * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T58B9DE1BCF2543FF60F3B372E3F7B750D23069D6_H
#ifndef READONLYDICTIONARY_2_T5B811B75D011FADCF2B64A4B558FBC32EA102157_H
#define READONLYDICTIONARY_2_T5B811B75D011FADCF2B64A4B558FBC32EA102157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int32>
struct  ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t117459FFC496A6F89EDDF66E179C6C9DFB3C2AB6 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t7C82D91754863D8D9F3323783E1B9311B2F96AB0 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157, ___m_keys_2)); }
	inline KeyCollection_t117459FFC496A6F89EDDF66E179C6C9DFB3C2AB6 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t117459FFC496A6F89EDDF66E179C6C9DFB3C2AB6 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t117459FFC496A6F89EDDF66E179C6C9DFB3C2AB6 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157, ___m_values_3)); }
	inline ValueCollection_t7C82D91754863D8D9F3323783E1B9311B2F96AB0 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t7C82D91754863D8D9F3323783E1B9311B2F96AB0 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t7C82D91754863D8D9F3323783E1B9311B2F96AB0 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T5B811B75D011FADCF2B64A4B558FBC32EA102157_H
#ifndef READONLYDICTIONARY_2_TD3E37F3400046F0CE99A337EFF062200BB1B17DF_H
#define READONLYDICTIONARY_2_TD3E37F3400046F0CE99A337EFF062200BB1B17DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int64>
struct  ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3E1013D8746BC8026F013DEC00D8707F23D00471 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3DDAE0AD09F186E83DEEAC49C93F726317133B3A * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF, ___m_keys_2)); }
	inline KeyCollection_t3E1013D8746BC8026F013DEC00D8707F23D00471 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3E1013D8746BC8026F013DEC00D8707F23D00471 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3E1013D8746BC8026F013DEC00D8707F23D00471 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF, ___m_values_3)); }
	inline ValueCollection_t3DDAE0AD09F186E83DEEAC49C93F726317133B3A * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3DDAE0AD09F186E83DEEAC49C93F726317133B3A ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3DDAE0AD09F186E83DEEAC49C93F726317133B3A * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_TD3E37F3400046F0CE99A337EFF062200BB1B17DF_H
#ifndef READONLYDICTIONARY_2_TFB5D69D2796A1EC31F5A84F12D938B27D4BFC932_H
#define READONLYDICTIONARY_2_TFB5D69D2796A1EC31F5A84F12D938B27D4BFC932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>
struct  ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4FDD5C1ED2D3457C102C5DAB4F993DE0E29C8B5B * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t97DD149C4FC0DC0DC5C2ADA8305D499553A31CCF * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932, ___m_keys_2)); }
	inline KeyCollection_t4FDD5C1ED2D3457C102C5DAB4F993DE0E29C8B5B * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4FDD5C1ED2D3457C102C5DAB4F993DE0E29C8B5B ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4FDD5C1ED2D3457C102C5DAB4F993DE0E29C8B5B * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932, ___m_values_3)); }
	inline ValueCollection_t97DD149C4FC0DC0DC5C2ADA8305D499553A31CCF * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t97DD149C4FC0DC0DC5C2ADA8305D499553A31CCF ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t97DD149C4FC0DC0DC5C2ADA8305D499553A31CCF * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_TFB5D69D2796A1EC31F5A84F12D938B27D4BFC932_H
#ifndef READONLYDICTIONARY_2_T0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097_H
#define READONLYDICTIONARY_2_T0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.String>
struct  ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t7843276E3718C994127F4917FD4915CB81DEF07E * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tF329C9835834DE9E570BD4EF40FDA798D69D331A * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097, ___m_keys_2)); }
	inline KeyCollection_t7843276E3718C994127F4917FD4915CB81DEF07E * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t7843276E3718C994127F4917FD4915CB81DEF07E ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t7843276E3718C994127F4917FD4915CB81DEF07E * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097, ___m_values_3)); }
	inline ValueCollection_tF329C9835834DE9E570BD4EF40FDA798D69D331A * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tF329C9835834DE9E570BD4EF40FDA798D69D331A ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tF329C9835834DE9E570BD4EF40FDA798D69D331A * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097_H
#ifndef READONLYDICTIONARY_2_T46EE13A309CFB599123D324CE899E07A51DFB308_H
#define READONLYDICTIONARY_2_T46EE13A309CFB599123D324CE899E07A51DFB308_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>
struct  ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t5AA2278184736E551204270EAB1C2EDBAD92B2ED * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t004138F902C5D9714D0ADB9EF31CC3E85D8F66B0 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308, ___m_keys_2)); }
	inline KeyCollection_t5AA2278184736E551204270EAB1C2EDBAD92B2ED * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t5AA2278184736E551204270EAB1C2EDBAD92B2ED ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t5AA2278184736E551204270EAB1C2EDBAD92B2ED * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308, ___m_values_3)); }
	inline ValueCollection_t004138F902C5D9714D0ADB9EF31CC3E85D8F66B0 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t004138F902C5D9714D0ADB9EF31CC3E85D8F66B0 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t004138F902C5D9714D0ADB9EF31CC3E85D8F66B0 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T46EE13A309CFB599123D324CE899E07A51DFB308_H
#ifndef READONLYDICTIONARY_2_TE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0_H
#define READONLYDICTIONARY_2_TE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>
struct  ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4CB6B2E7A2B824E2B80408F5D99F5B840C47E427 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t7737C4F66357DFECD11D843A44A9269C91B2CE72 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0, ___m_keys_2)); }
	inline KeyCollection_t4CB6B2E7A2B824E2B80408F5D99F5B840C47E427 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4CB6B2E7A2B824E2B80408F5D99F5B840C47E427 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4CB6B2E7A2B824E2B80408F5D99F5B840C47E427 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0, ___m_values_3)); }
	inline ValueCollection_t7737C4F66357DFECD11D843A44A9269C91B2CE72 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t7737C4F66357DFECD11D843A44A9269C91B2CE72 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t7737C4F66357DFECD11D843A44A9269C91B2CE72 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_TE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0_H
#ifndef READONLYDICTIONARY_2_TECD5B73717B25DA923786781104DE68C6116C0F8_H
#define READONLYDICTIONARY_2_TECD5B73717B25DA923786781104DE68C6116C0F8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>
struct  ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t37FEA08FB6B3F1D49A5BB9CF415A41145F58C3DE * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tDA44ED001579670FE76D31590A0BEFEA63FC8DE1 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8, ___m_keys_2)); }
	inline KeyCollection_t37FEA08FB6B3F1D49A5BB9CF415A41145F58C3DE * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t37FEA08FB6B3F1D49A5BB9CF415A41145F58C3DE ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t37FEA08FB6B3F1D49A5BB9CF415A41145F58C3DE * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8, ___m_values_3)); }
	inline ValueCollection_tDA44ED001579670FE76D31590A0BEFEA63FC8DE1 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tDA44ED001579670FE76D31590A0BEFEA63FC8DE1 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tDA44ED001579670FE76D31590A0BEFEA63FC8DE1 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_TECD5B73717B25DA923786781104DE68C6116C0F8_H
#ifndef READONLYDICTIONARY_2_T9AB03C58D299BE81D151A5B23097049F7106820C_H
#define READONLYDICTIONARY_2_T9AB03C58D299BE81D151A5B23097049F7106820C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct  ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t61A35CE4F7CC744CA4161339BCD33F68E2D29F7A * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t21FF044950DDE3204EB491F2E977DB5A088182D5 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C, ___m_keys_2)); }
	inline KeyCollection_t61A35CE4F7CC744CA4161339BCD33F68E2D29F7A * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t61A35CE4F7CC744CA4161339BCD33F68E2D29F7A ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t61A35CE4F7CC744CA4161339BCD33F68E2D29F7A * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C, ___m_values_3)); }
	inline ValueCollection_t21FF044950DDE3204EB491F2E977DB5A088182D5 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t21FF044950DDE3204EB491F2E977DB5A088182D5 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t21FF044950DDE3204EB491F2E977DB5A088182D5 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T9AB03C58D299BE81D151A5B23097049F7106820C_H
#ifndef READONLYDICTIONARY_2_T4B2D06B3BCA1E4056540C095BC557EE508D56470_H
#define READONLYDICTIONARY_2_T4B2D06B3BCA1E4056540C095BC557EE508D56470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct  ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_tDC2454B75AA818EFC69868BC6220D6992160199B * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t48AF90A5FF8FB66BBA9A8959688F502A109630BE * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470, ___m_keys_2)); }
	inline KeyCollection_tDC2454B75AA818EFC69868BC6220D6992160199B * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_tDC2454B75AA818EFC69868BC6220D6992160199B ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_tDC2454B75AA818EFC69868BC6220D6992160199B * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470, ___m_values_3)); }
	inline ValueCollection_t48AF90A5FF8FB66BBA9A8959688F502A109630BE * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t48AF90A5FF8FB66BBA9A8959688F502A109630BE ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t48AF90A5FF8FB66BBA9A8959688F502A109630BE * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T4B2D06B3BCA1E4056540C095BC557EE508D56470_H
#ifndef READONLYDICTIONARY_2_T05DA2EE84A80CF878ED69D88645B1D6CE04B9403_H
#define READONLYDICTIONARY_2_T05DA2EE84A80CF878ED69D88645B1D6CE04B9403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Object>
struct  ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3C74E5866E9C49EF05E2268013DA9B23474920F6 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tE9C97C0BA62F10B910C55A152441C954EB79944A * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403, ___m_keys_2)); }
	inline KeyCollection_t3C74E5866E9C49EF05E2268013DA9B23474920F6 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3C74E5866E9C49EF05E2268013DA9B23474920F6 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3C74E5866E9C49EF05E2268013DA9B23474920F6 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403, ___m_values_3)); }
	inline ValueCollection_tE9C97C0BA62F10B910C55A152441C954EB79944A * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tE9C97C0BA62F10B910C55A152441C954EB79944A ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tE9C97C0BA62F10B910C55A152441C954EB79944A * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T05DA2EE84A80CF878ED69D88645B1D6CE04B9403_H
#ifndef READONLYDICTIONARY_2_T29543C8C3288540849751E93624E1C8FD5AF5DDE_H
#define READONLYDICTIONARY_2_T29543C8C3288540849751E93624E1C8FD5AF5DDE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>
struct  ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t220E1682DB2C6E7E54B9899E6E8108DB53313B5E * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tEF98CD55572C57B7B5CAA02B5AF0B9017D85EE4C * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE, ___m_keys_2)); }
	inline KeyCollection_t220E1682DB2C6E7E54B9899E6E8108DB53313B5E * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t220E1682DB2C6E7E54B9899E6E8108DB53313B5E ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t220E1682DB2C6E7E54B9899E6E8108DB53313B5E * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE, ___m_values_3)); }
	inline ValueCollection_tEF98CD55572C57B7B5CAA02B5AF0B9017D85EE4C * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tEF98CD55572C57B7B5CAA02B5AF0B9017D85EE4C ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tEF98CD55572C57B7B5CAA02B5AF0B9017D85EE4C * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T29543C8C3288540849751E93624E1C8FD5AF5DDE_H
#ifndef READONLYDICTIONARY_2_T4260336E780083853066CAE01EEFB71424340B8D_H
#define READONLYDICTIONARY_2_T4260336E780083853066CAE01EEFB71424340B8D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>
struct  ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_keys_2)); }
	inline KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_tA42839722C59A6609D41593B31BB962A1B659648 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D, ___m_values_3)); }
	inline ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_tF59C5C766BE010A099815E5C5268FD346E4E656F * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T4260336E780083853066CAE01EEFB71424340B8D_H
#ifndef READONLYDICTIONARY_2_TD9243C89FC08B394F66AD42D9214721054A33991_H
#define READONLYDICTIONARY_2_TD9243C89FC08B394F66AD42D9214721054A33991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>
struct  ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3D5FEB05EAF0FC557F237264E02EC9A32344948E * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2_ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t56D1A66FF4EDE101F3CE343479A022A77BB70E89 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991, ___m_keys_2)); }
	inline KeyCollection_t3D5FEB05EAF0FC557F237264E02EC9A32344948E * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3D5FEB05EAF0FC557F237264E02EC9A32344948E ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3D5FEB05EAF0FC557F237264E02EC9A32344948E * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991, ___m_values_3)); }
	inline ValueCollection_t56D1A66FF4EDE101F3CE343479A022A77BB70E89 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t56D1A66FF4EDE101F3CE343479A022A77BB70E89 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t56D1A66FF4EDE101F3CE343479A022A77BB70E89 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_TD9243C89FC08B394F66AD42D9214721054A33991_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef CONSTANTSPLITTABLEMAP_2_TCF12242BBDB59F42D70694CE939FE68315601033_H
#define CONSTANTSPLITTABLEMAP_2_TCF12242BBDB59F42D70694CE939FE68315601033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Boolean>
struct  ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tD604AC9B58FD64FA8C0930F86A857E0D4236F3B5* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tD604AC9B58FD64FA8C0930F86A857E0D4236F3B5* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tD604AC9B58FD64FA8C0930F86A857E0D4236F3B5** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tD604AC9B58FD64FA8C0930F86A857E0D4236F3B5* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t0334718C7EFEB1E568CDD1A064B1253F258AA47D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t0334718C7EFEB1E568CDD1A064B1253F258AA47D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t0334718C7EFEB1E568CDD1A064B1253F258AA47D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t0334718C7EFEB1E568CDD1A064B1253F258AA47D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_TCF12242BBDB59F42D70694CE939FE68315601033_H
#ifndef CONSTANTSPLITTABLEMAP_2_T65099D16A3F32F68FC491717C9BF7EC0F847395C_H
#define CONSTANTSPLITTABLEMAP_2_T65099D16A3F32F68FC491717C9BF7EC0F847395C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Char>
struct  ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2821132F356BE4A4C9DA5BA34C0A364675D53417* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2821132F356BE4A4C9DA5BA34C0A364675D53417* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2821132F356BE4A4C9DA5BA34C0A364675D53417** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2821132F356BE4A4C9DA5BA34C0A364675D53417* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t3853FCFA79AE61DD5F66A6D5971BF1B01E063414 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t3853FCFA79AE61DD5F66A6D5971BF1B01E063414 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t3853FCFA79AE61DD5F66A6D5971BF1B01E063414 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t3853FCFA79AE61DD5F66A6D5971BF1B01E063414 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T65099D16A3F32F68FC491717C9BF7EC0F847395C_H
#ifndef CONSTANTSPLITTABLEMAP_2_TB0F8990A3CD3B88719E0B75963BA4B4AC088439C_H
#define CONSTANTSPLITTABLEMAP_2_TB0F8990A3CD3B88719E0B75963BA4B4AC088439C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int32>
struct  ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tC7A09A604E89B878B8A673BD6238A819ADDAD26A* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tC7A09A604E89B878B8A673BD6238A819ADDAD26A* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tC7A09A604E89B878B8A673BD6238A819ADDAD26A** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tC7A09A604E89B878B8A673BD6238A819ADDAD26A* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t4496D7F4D3127796759270158B342936149BCAE8 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t4496D7F4D3127796759270158B342936149BCAE8 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t4496D7F4D3127796759270158B342936149BCAE8 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t4496D7F4D3127796759270158B342936149BCAE8 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_TB0F8990A3CD3B88719E0B75963BA4B4AC088439C_H
#ifndef CONSTANTSPLITTABLEMAP_2_T738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_H
#define CONSTANTSPLITTABLEMAP_2_T738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int64>
struct  ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t0049A6F56B79DA4AC9939EDEC6BB113B02318291* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t0049A6F56B79DA4AC9939EDEC6BB113B02318291* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t0049A6F56B79DA4AC9939EDEC6BB113B02318291** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t0049A6F56B79DA4AC9939EDEC6BB113B02318291* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tF5286128F9F3557D2A54A0379CA63745F6B1E10C * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tF5286128F9F3557D2A54A0379CA63745F6B1E10C * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tF5286128F9F3557D2A54A0379CA63745F6B1E10C ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tF5286128F9F3557D2A54A0379CA63745F6B1E10C * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_H
#ifndef CONSTANTSPLITTABLEMAP_2_TB818C5D2DD261F2821164C866138506D7AE09A9D_H
#define CONSTANTSPLITTABLEMAP_2_TB818C5D2DD261F2821164C866138506D7AE09A9D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>
struct  ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t51ECDC3588B5BA2DE76DE4B25B62ACADF928345B* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tCDD00DB758F72407D0363DA5BE8B61569DE266CC * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tCDD00DB758F72407D0363DA5BE8B61569DE266CC * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tCDD00DB758F72407D0363DA5BE8B61569DE266CC ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tCDD00DB758F72407D0363DA5BE8B61569DE266CC * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_TB818C5D2DD261F2821164C866138506D7AE09A9D_H
#ifndef CONSTANTSPLITTABLEMAP_2_T0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_H
#define CONSTANTSPLITTABLEMAP_2_T0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>
struct  ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t8CD3ED046BC02CB01B012CDD95421A31914D4BD5* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t8CD3ED046BC02CB01B012CDD95421A31914D4BD5* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t8CD3ED046BC02CB01B012CDD95421A31914D4BD5** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t8CD3ED046BC02CB01B012CDD95421A31914D4BD5* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t6195EC512019426FB78213F0817505A9B4F24D73 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t6195EC512019426FB78213F0817505A9B4F24D73 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t6195EC512019426FB78213F0817505A9B4F24D73 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t6195EC512019426FB78213F0817505A9B4F24D73 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_H
#ifndef CONSTANTSPLITTABLEMAP_2_T66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_H
#define CONSTANTSPLITTABLEMAP_2_T66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>
struct  ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tF3E7A3C0CD8F236E22836D54F25B24F11461CD8C* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tF3E7A3C0CD8F236E22836D54F25B24F11461CD8C* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tF3E7A3C0CD8F236E22836D54F25B24F11461CD8C** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tF3E7A3C0CD8F236E22836D54F25B24F11461CD8C* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t60864D9B82BA756AC28AC3CB553743C1378A84DD * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t60864D9B82BA756AC28AC3CB553743C1378A84DD * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t60864D9B82BA756AC28AC3CB553743C1378A84DD ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t60864D9B82BA756AC28AC3CB553743C1378A84DD * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_H
#ifndef CONSTANTSPLITTABLEMAP_2_T050A25C5F067D75C625827B5F37901F5F277DF91_H
#define CONSTANTSPLITTABLEMAP_2_T050A25C5F067D75C625827B5F37901F5F277DF91_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>
struct  ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tA70A6D970A6407747BDE3F49A31B0BE1D7043951* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tA70A6D970A6407747BDE3F49A31B0BE1D7043951* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tA70A6D970A6407747BDE3F49A31B0BE1D7043951** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tA70A6D970A6407747BDE3F49A31B0BE1D7043951* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t5D875EB46E7B7BD626D609DCEA063BEDAC48E3D8 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t5D875EB46E7B7BD626D609DCEA063BEDAC48E3D8 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t5D875EB46E7B7BD626D609DCEA063BEDAC48E3D8 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t5D875EB46E7B7BD626D609DCEA063BEDAC48E3D8 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T050A25C5F067D75C625827B5F37901F5F277DF91_H
#ifndef CONSTANTSPLITTABLEMAP_2_T06C3CE00F7629F7F9811B570F4D8894123E470F7_H
#define CONSTANTSPLITTABLEMAP_2_T06C3CE00F7629F7F9811B570F4D8894123E470F7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>
struct  ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1336B67B1075C3E1E7713F0436412A73F860ADBB* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1336B67B1075C3E1E7713F0436412A73F860ADBB* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1336B67B1075C3E1E7713F0436412A73F860ADBB** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1336B67B1075C3E1E7713F0436412A73F860ADBB* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t7CA9957AA524A7311201F7AB7BF467E9EC1DFD21 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t7CA9957AA524A7311201F7AB7BF467E9EC1DFD21 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t7CA9957AA524A7311201F7AB7BF467E9EC1DFD21 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t7CA9957AA524A7311201F7AB7BF467E9EC1DFD21 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T06C3CE00F7629F7F9811B570F4D8894123E470F7_H
#ifndef CONSTANTSPLITTABLEMAP_2_TE7E5F2F8397EB337E88FAA6E83401819DD282B8B_H
#define CONSTANTSPLITTABLEMAP_2_TE7E5F2F8397EB337E88FAA6E83401819DD282B8B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>
struct  ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t4594E4068980FD80C0C538F4F8042A626BC1F262* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tFEB39D01096E3863AA07B6863680E34CBE69E68D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tFEB39D01096E3863AA07B6863680E34CBE69E68D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tFEB39D01096E3863AA07B6863680E34CBE69E68D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tFEB39D01096E3863AA07B6863680E34CBE69E68D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_TE7E5F2F8397EB337E88FAA6E83401819DD282B8B_H
#ifndef CONSTANTSPLITTABLEMAP_2_T49B99005742DD22DFEAC69B28AD60AF19AEE5C15_H
#define CONSTANTSPLITTABLEMAP_2_T49B99005742DD22DFEAC69B28AD60AF19AEE5C15_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>
struct  ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t26D97109393AD123C389E1D07E24A1E1AAEDF1B8* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t26D97109393AD123C389E1D07E24A1E1AAEDF1B8* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t26D97109393AD123C389E1D07E24A1E1AAEDF1B8** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t26D97109393AD123C389E1D07E24A1E1AAEDF1B8* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t724AEF30E8589037957CB8E08381D1DA3C92100D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t724AEF30E8589037957CB8E08381D1DA3C92100D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t724AEF30E8589037957CB8E08381D1DA3C92100D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t724AEF30E8589037957CB8E08381D1DA3C92100D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T49B99005742DD22DFEAC69B28AD60AF19AEE5C15_H
#ifndef CONSTANTSPLITTABLEMAP_2_T4876616DB591E0AEA79C7A8FE525855AF3484086_H
#define CONSTANTSPLITTABLEMAP_2_T4876616DB591E0AEA79C7A8FE525855AF3484086_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>
struct  ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tEF7B0C36EC296277C5C943CFF843529E0B8B5343* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tDC9F58E2B61A675D13B01414F1872D843F5DD0DA * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tDC9F58E2B61A675D13B01414F1872D843F5DD0DA * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tDC9F58E2B61A675D13B01414F1872D843F5DD0DA ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tDC9F58E2B61A675D13B01414F1872D843F5DD0DA * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T4876616DB591E0AEA79C7A8FE525855AF3484086_H
#ifndef CONSTANTSPLITTABLEMAP_2_T313F3CA92D8209C78622C634234C3D64B1C151E8_H
#define CONSTANTSPLITTABLEMAP_2_T313F3CA92D8209C78622C634234C3D64B1C151E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>
struct  ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t4EBB4872BC5FA3F4D13397844D1BE1117503C2B9* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t4EBB4872BC5FA3F4D13397844D1BE1117503C2B9* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t4EBB4872BC5FA3F4D13397844D1BE1117503C2B9** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t4EBB4872BC5FA3F4D13397844D1BE1117503C2B9* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tD7252789582ABB889A0380DEBE598F432601E0C1 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tD7252789582ABB889A0380DEBE598F432601E0C1 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tD7252789582ABB889A0380DEBE598F432601E0C1 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tD7252789582ABB889A0380DEBE598F432601E0C1 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T313F3CA92D8209C78622C634234C3D64B1C151E8_H
#ifndef CONSTANTSPLITTABLEMAP_2_T081BD67F792FEDEBBB228DE10E30A5086BD814C7_H
#define CONSTANTSPLITTABLEMAP_2_T081BD67F792FEDEBBB228DE10E30A5086BD814C7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>
struct  ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t13B5445371428E0B3973C1DD1CB0918D127C3A3D * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T081BD67F792FEDEBBB228DE10E30A5086BD814C7_H
#ifndef CONSTANTSPLITTABLEMAP_2_TE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_H
#define CONSTANTSPLITTABLEMAP_2_TE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>
struct  ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_tE550885A1F49CF2FBFB8A2E39DC0EADEF91219B8* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7, ___items_1)); }
	inline KeyValuePair_2U5BU5D_tE550885A1F49CF2FBFB8A2E39DC0EADEF91219B8* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_tE550885A1F49CF2FBFB8A2E39DC0EADEF91219B8** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_tE550885A1F49CF2FBFB8A2E39DC0EADEF91219B8* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2_KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_tA2C458B52694BF4FC810D9EADCAE715B79C8E519 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_tA2C458B52694BF4FC810D9EADCAE715B79C8E519 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_tA2C458B52694BF4FC810D9EADCAE715B79C8E519 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_tA2C458B52694BF4FC810D9EADCAE715B79C8E519 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_TE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef KEYVALUEPAIR_2_T411E4248A20D0FDB15190B13EA12EBCB69500C82_H
#define KEYVALUEPAIR_2_T411E4248A20D0FDB15190B13EA12EBCB69500C82_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>
struct  KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T411E4248A20D0FDB15190B13EA12EBCB69500C82_H
#ifndef KEYVALUEPAIR_2_T13BE4DA362E151A60E59C414DB8A5C61F4A1B30F_H
#define KEYVALUEPAIR_2_T13BE4DA362E151A60E59C414DB8A5C61F4A1B30F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>
struct  KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T13BE4DA362E151A60E59C414DB8A5C61F4A1B30F_H
#ifndef KEYVALUEPAIR_2_TA9AFBC865B07606ED8F020A8E3AF8E27491AF809_H
#define KEYVALUEPAIR_2_TA9AFBC865B07606ED8F020A8E3AF8E27491AF809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TA9AFBC865B07606ED8F020A8E3AF8E27491AF809_H
#ifndef KEYVALUEPAIR_2_T7C4859F20ECDF8EEA530886FE8ADEE363F117FB5_H
#define KEYVALUEPAIR_2_T7C4859F20ECDF8EEA530886FE8ADEE363F117FB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>
struct  KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T7C4859F20ECDF8EEA530886FE8ADEE363F117FB5_H
#ifndef KEYVALUEPAIR_2_T142B50DAD5164EBD2E1495FD821B1A4C3233FA26_H
#define KEYVALUEPAIR_2_T142B50DAD5164EBD2E1495FD821B1A4C3233FA26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T142B50DAD5164EBD2E1495FD821B1A4C3233FA26_H
#ifndef KEYVALUEPAIR_2_T4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33_H
#define KEYVALUEPAIR_2_T4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>
struct  KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33_H
#ifndef KEYVALUEPAIR_2_T01369E536C15A7A1AF58F260AD740C479FBFC4EA_H
#define KEYVALUEPAIR_2_T01369E536C15A7A1AF58F260AD740C479FBFC4EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct  KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T01369E536C15A7A1AF58F260AD740C479FBFC4EA_H
#ifndef KEYVALUEPAIR_2_TF975BF5238F06AC9CCA19111DD41484E071258C1_H
#define KEYVALUEPAIR_2_TF975BF5238F06AC9CCA19111DD41484E071258C1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TF975BF5238F06AC9CCA19111DD41484E071258C1_H
#ifndef KEYVALUEPAIR_2_T3BAB6A80A3894F871F1F6B030436D8F2FF1D398E_H
#define KEYVALUEPAIR_2_T3BAB6A80A3894F871F1F6B030436D8F2FF1D398E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3BAB6A80A3894F871F1F6B030436D8F2FF1D398E_H
#ifndef KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#define KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T23481547E419E16E3B96A303578C1EB685C99EEE_H
#ifndef KEYVALUEPAIR_2_T7FCB843133EF93D8F1052918FE4E6D04BB47A99D_H
#define KEYVALUEPAIR_2_T7FCB843133EF93D8F1052918FE4E6D04BB47A99D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct  KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T7FCB843133EF93D8F1052918FE4E6D04BB47A99D_H
#ifndef KEYVALUEPAIR_2_TC167337BFA3217084F940401B1BC047130DED61D_H
#define KEYVALUEPAIR_2_TC167337BFA3217084F940401B1BC047130DED61D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TC167337BFA3217084F940401B1BC047130DED61D_H
#ifndef KEYVALUEPAIR_2_T1A58906CCD7ED79792916B56DB716477495C85D8_H
#define KEYVALUEPAIR_2_T1A58906CCD7ED79792916B56DB716477495C85D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1A58906CCD7ED79792916B56DB716477495C85D8_H
#ifndef KEYVALUEPAIR_2_T4924C8EC65AAF8D242A28DB259AE14F25055A7EE_H
#define KEYVALUEPAIR_2_T4924C8EC65AAF8D242A28DB259AE14F25055A7EE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>
struct  KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4924C8EC65AAF8D242A28DB259AE14F25055A7EE_H
#ifndef KEYVALUEPAIR_2_T471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA_H
#define KEYVALUEPAIR_2_T471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct  KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#define ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_TEDCD16F20A09ECE461C3DA766C16EDA8864057D1_H
#ifndef KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#define KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_TC28F8B9E114291001A5D135723673C6F292438E2_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T94D19DF918A54511AEDF4784C9A08741BAD1DEDA_H
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t90D650B211D4280D9C648325D90FE4CDA0CE18D7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  m_Items[1];

public:
	inline KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A_gshared (ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8_gshared (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F_gshared (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA_gshared (ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C_gshared (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB_gshared (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared (KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared (KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8_gshared (ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C_gshared (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3_gshared (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09_gshared (KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A_gshared (KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E * __this, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mB735BC2D7232A3B45D667D28C17BA51AAAFFB4A1_gshared (KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Value_mF7293AF44DA0B8EB7B455A6227F7C36EEE9CF508_gshared (KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m775BD524BDA4E5B10629191175488C558F01D247_gshared (ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_mFEB6FFB753930BD450C9B9251F7FF92B041D6182_gshared (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m1997BD7E327357898EDABF3D833771A10AC1A79D_gshared (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m18EAE7C3652CC594B89532C2182AF531F351C1A1_gshared (KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m29DE50BBCB38063E44E72BF1C0F4488DEEF6DACE_gshared (KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m103B8650815F508198DBE41BF395B893564B692A_gshared (ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m242B9CD73C6CB42BAB9150538322206DFACCC9D1_gshared (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m62FE3AAA845A120E000E3BBA0CA1F73B631264E4_gshared (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m399ECA62E7496A29A7396211018AD652FF15D930_gshared (KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_mE50A05A795484D20F8060413212B29EBADC1EA40_gshared (KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m7B7070157BA83F443A04EB5773E99CFD0BAB013A_gshared (ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m3DC3086FC1743C4C5EC39725C4BD2B60F91D6643_gshared (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m82398B71F6957AD972581B30DB3C186E8081FF13_gshared (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m15451E5BF4DB173E958C0FEA1996B0A108B1BC01_gshared (ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Char>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m39FE6C80A4B14B98C4D370E0EDF9CA17ABDA50E7_gshared (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_mDDBFD709CBB5467C1B33E9E1B7F6D7F5A7ADD2B3_gshared (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mA63AB45B1DCD00F430DA683B7446EA00536ECD43_gshared (KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar KeyValuePair_2_get_Value_m5A3A76AD9C76D7E58EBED51BF3C82BD695B83548_gshared (KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mC3EE57544327AEA20DC1598EE9C8C1E1120A2F6A_gshared (ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_mF3189244A63BCC0D376323A36F1E6F005084130B_gshared (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_mE27CE0AD88B8EE74CBFB64085F22BC8E3388100E_gshared (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Key_m89819ADCF57B0FAB7895AD67A45532933C191651_gshared (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84_gshared (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m92E28218207650BF9D01E015F5E260E2B33577BC_gshared (ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m7EEF4C3F1070B52FAE2CB751669D4E2CCA72B556_gshared (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_mC22A61915CE206831ABA9F52BD8149E645A375BC_gshared (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m53E63212F4103CB32CE7BF11259AA994C58F9763_gshared (KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
extern "C" IL2CPP_METHOD_ATTR int64_t KeyValuePair_2_get_Value_m2FC07FAC81494CABD1E9BD58E7917981B6EBC5B2_gshared (KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_mB00B04B07D47F362A172DB40FCF7CB2D56199079_gshared (ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_mF1A480D6BCDDEF7EAC5BFEF87A785B9C937D9256_gshared (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m41639F3A2D729F4E44D58E1269D45EDF660A9F1F_gshared (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mFF22AA1BD60F2760A4CAAB581B5996DDD62CBCAA_gshared (KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m2D91533A66E5BB608E0175099C9D7289D172D318_gshared (KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_gshared (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_gshared (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C" IL2CPP_METHOD_ATTR void ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_gshared (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
extern "C" IL2CPP_METHOD_ATTR uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
extern "C" IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method);

// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6 (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mB2D19FDF7E2760F6CD503397D0395FBD27E877FF (ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m02E4B3DF559D51132CFFDCBC27C0B5CA8ADBD040 (ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mCA5BCF362C189E616B716BDA45BD90B629AFE53F (ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65 (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A (ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8 (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2 (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2 (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m25B6DA3095884FB0D7D28CC69EE80C6DCCEB8008 (ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m6CAB06F9514B56F1F16C9D589CF4D426F084DC65 (ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m20931F33515F13787476435E30E04214D91B9BB3 (ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C (KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC (KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA (ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m5E5D221D5A8172958E8E794478353110183832EA (KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mA198C771B2A8287C0A6E482092D2AB4376F6F8F1 (KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mC9CB99F4923E90D9DC5C454220833DCB845F79A9 (ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m02B412F7C1877120635BE5307CD39E5E63EF6F68 (ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mAB9195AB8AC758190789C5E54A3587535F689F1A (ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m435F98F01A7613A2BC8ED3A15E128D30D75D2FD4 (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m7DC85FF020A5F3C07AFF55B4B5CA0966BDF0AE2A (ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_mEFB815B913BA9334FFC7880B988F1ABC2AA1B32D (ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m685DA4637C1ECA6E8D6C1028D844CA71188885FC (ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09 (KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E *, const RuntimeMethod*))KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A (KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E *, const RuntimeMethod*))KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8 (ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3 (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m2D5E5781EECFE6FB93066D9C39852C9E052B220A (KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D *, const RuntimeMethod*))KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mBAD430E7201DB0E9F5057891AFFEDFC393A96C51 (KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D *, const RuntimeMethod*))KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mB735BC2D7232A3B45D667D28C17BA51AAAFFB4A1 (KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mB735BC2D7232A3B45D667D28C17BA51AAAFFB4A1_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
inline int32_t KeyValuePair_2_get_Value_mF7293AF44DA0B8EB7B455A6227F7C36EEE9CF508 (KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mF7293AF44DA0B8EB7B455A6227F7C36EEE9CF508_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m775BD524BDA4E5B10629191175488C558F01D247 (ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m775BD524BDA4E5B10629191175488C558F01D247_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_mFEB6FFB753930BD450C9B9251F7FF92B041D6182 (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_mFEB6FFB753930BD450C9B9251F7FF92B041D6182_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m1997BD7E327357898EDABF3D833771A10AC1A79D (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1997BD7E327357898EDABF3D833771A10AC1A79D_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m18EAE7C3652CC594B89532C2182AF531F351C1A1 (KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA *, const RuntimeMethod*))KeyValuePair_2_get_Key_m18EAE7C3652CC594B89532C2182AF531F351C1A1_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m29DE50BBCB38063E44E72BF1C0F4488DEEF6DACE (KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA *, const RuntimeMethod*))KeyValuePair_2_get_Value_m29DE50BBCB38063E44E72BF1C0F4488DEEF6DACE_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m103B8650815F508198DBE41BF395B893564B692A (ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m103B8650815F508198DBE41BF395B893564B692A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m242B9CD73C6CB42BAB9150538322206DFACCC9D1 (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m242B9CD73C6CB42BAB9150538322206DFACCC9D1_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m62FE3AAA845A120E000E3BBA0CA1F73B631264E4 (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m62FE3AAA845A120E000E3BBA0CA1F73B631264E4_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m399ECA62E7496A29A7396211018AD652FF15D930 (KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m399ECA62E7496A29A7396211018AD652FF15D930_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_mE50A05A795484D20F8060413212B29EBADC1EA40 (KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mE50A05A795484D20F8060413212B29EBADC1EA40_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m7B7070157BA83F443A04EB5773E99CFD0BAB013A (ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m7B7070157BA83F443A04EB5773E99CFD0BAB013A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m3DC3086FC1743C4C5EC39725C4BD2B60F91D6643 (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3DC3086FC1743C4C5EC39725C4BD2B60F91D6643_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m82398B71F6957AD972581B30DB3C186E8081FF13 (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m82398B71F6957AD972581B30DB3C186E8081FF13_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m15451E5BF4DB173E958C0FEA1996B0A108B1BC01 (ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m15451E5BF4DB173E958C0FEA1996B0A108B1BC01_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Char>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m39FE6C80A4B14B98C4D370E0EDF9CA17ABDA50E7 (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m39FE6C80A4B14B98C4D370E0EDF9CA17ABDA50E7_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mDDBFD709CBB5467C1B33E9E1B7F6D7F5A7ADD2B3 (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mDDBFD709CBB5467C1B33E9E1B7F6D7F5A7ADD2B3_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mA63AB45B1DCD00F430DA683B7446EA00536ECD43 (KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F *, const RuntimeMethod*))KeyValuePair_2_get_Key_mA63AB45B1DCD00F430DA683B7446EA00536ECD43_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>::get_Value()
inline Il2CppChar KeyValuePair_2_get_Value_m5A3A76AD9C76D7E58EBED51BF3C82BD695B83548 (KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F * __this, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F *, const RuntimeMethod*))KeyValuePair_2_get_Value_m5A3A76AD9C76D7E58EBED51BF3C82BD695B83548_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mC3EE57544327AEA20DC1598EE9C8C1E1120A2F6A (ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mC3EE57544327AEA20DC1598EE9C8C1E1120A2F6A_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_mF3189244A63BCC0D376323A36F1E6F005084130B (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_mF3189244A63BCC0D376323A36F1E6F005084130B_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mE27CE0AD88B8EE74CBFB64085F22BC8E3388100E (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mE27CE0AD88B8EE74CBFB64085F22BC8E3388100E_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
inline int64_t KeyValuePair_2_get_Key_m89819ADCF57B0FAB7895AD67A45532933C191651 (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA *, const RuntimeMethod*))KeyValuePair_2_get_Key_m89819ADCF57B0FAB7895AD67A45532933C191651_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84 (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA *, const RuntimeMethod*))KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m92E28218207650BF9D01E015F5E260E2B33577BC (ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m92E28218207650BF9D01E015F5E260E2B33577BC_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int64>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m7EEF4C3F1070B52FAE2CB751669D4E2CCA72B556 (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m7EEF4C3F1070B52FAE2CB751669D4E2CCA72B556_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_mC22A61915CE206831ABA9F52BD8149E645A375BC (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_mC22A61915CE206831ABA9F52BD8149E645A375BC_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m53E63212F4103CB32CE7BF11259AA994C58F9763 (KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m53E63212F4103CB32CE7BF11259AA994C58F9763_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>::get_Value()
inline int64_t KeyValuePair_2_get_Value_m2FC07FAC81494CABD1E9BD58E7917981B6EBC5B2 (KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 * __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2FC07FAC81494CABD1E9BD58E7917981B6EBC5B2_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_mB00B04B07D47F362A172DB40FCF7CB2D56199079 (ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_mB00B04B07D47F362A172DB40FCF7CB2D56199079_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_mF1A480D6BCDDEF7EAC5BFEF87A785B9C937D9256 (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_mF1A480D6BCDDEF7EAC5BFEF87A785B9C937D9256_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m41639F3A2D729F4E44D58E1269D45EDF660A9F1F (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m41639F3A2D729F4E44D58E1269D45EDF660A9F1F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mFF22AA1BD60F2760A4CAAB581B5996DDD62CBCAA (KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mFF22AA1BD60F2760A4CAAB581B5996DDD62CBCAA_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m2D91533A66E5BB608E0175099C9D7289D172D318 (KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2D91533A66E5BB608E0175099C9D7289D172D318_gshared)(__this, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24 (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_gshared)(__this, ___dictionary0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
inline void ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3 (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject* ___data0, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_gshared)(__this, ___data0, method);
}
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
inline void ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method)
{
	((  void (*) (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_gshared)(__this, ___firstPartition0, ___secondPartition1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
inline uint32_t KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	return ((  uint32_t (*) (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_gshared)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6 (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *, const RuntimeMethod*))KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_gshared)(__this, method);
}
// Windows.Foundation.Collections.IIterator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>> adapter
struct IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter>, IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9
{
	inline IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m1A52214D0059D52162B263A6A0A2D00453BE7F33(IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_mF993ADF49EE2780C08099751639C979DC956F42C(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m6F65451472B85A5F4B50491215A64400768B103E(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m9D01B24AA4DA53C602A488DB8BAD50D27AC8D779(uint32_t ___items0ArraySize, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::IIterator_1_get_Current_m1A52214D0059D52162B263A6A0A2D00453BE7F33(IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::IIterator_1_get_HasCurrent_mF993ADF49EE2780C08099751639C979DC956F42C(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::IIterator_1_MoveNext_m6F65451472B85A5F4B50491215A64400768B103E(bool* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::IIterator_1_GetMany_m9D01B24AA4DA53C602A488DB8BAD50D27AC8D779(uint32_t ___items0ArraySize, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** ___items0, uint32_t* comReturnValue)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::GetCurrent(IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Current() */, IEnumerator_1_tADE7F07428E1345F0133DD94EFCB10CA48C40D8F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744* _returnValue_marshaled = NULL;
	KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  returnValueCopy = returnValue;;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744>(Box(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var, &returnValueCopy));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::First()
il2cpp_hresult_t IIterable_1_First_m84004E4C50675B9B5869094B49CB983EA40D2C7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m84004E4C50675B9B5869094B49CB983EA40D2C7F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* returnValue;
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::GetEnumerator() */, IEnumerable_1_t72A09E3835A3EF68028D217551944746A8512CDA_il2cpp_TypeInfo_var, __thisValue);
		*comReturnValue = (returnValue != NULL) ? IIterator_1_tA9CA75CED7DF4356AA7250A307560CCB542832F9_Adapter::__CreateInstance(returnValue) : NULL;
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m82BF11FCC6F017935978CAC95516382E194B45AF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m82BF11FCC6F017935978CAC95516382E194B45AF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Item(System.Int32) */, IReadOnlyList_1_t123D011888A4D9B520E568F42B6CFBAD318B68C7_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744* _returnValue_marshaled = NULL;
	KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  returnValueCopy = returnValue;;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744>(Box(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var, &returnValueCopy));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_mB0EBB29E83E6C8F9A437AAB57E114DB8C8DAEE60_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_mB0EBB29E83E6C8F9A437AAB57E114DB8C8DAEE60_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::IndexOf(T,System.UInt32U26)
il2cpp_hresult_t IVectorView_1_IndexOf_m6F08F5B06801BE282280040942346363F8F462E0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m6F08F5B06801BE282280040942346363F8F462E0_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___value0U27 to managed representation
	KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  ___value0Staging;
			uint32_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			bool ___value0ValueNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_value_1(___value0ValueNative);

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Marshaling of parameter U27___index1U27 to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  item = InterfaceFuncInvoker1< KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Item(System.Int32) */, IReadOnlyList_1_t123D011888A4D9B520E568F42B6CFBAD318B68C7_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, Box(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var, &item), Box(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var, &____value0_unmarshaled)))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___index1U27 back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m5057CD976562F3D6F7829B64D97A2B63C388A597_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m5057CD976562F3D6F7829B64D97A2B63C388A597_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA * exception = (ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t94D19DF918A54511AEDF4784C9A08741BAD1DEDA_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m6B36E60C989DC798A8B44556DB35960282B133A6(exception, _stringLiteralE540CDD1328B2B21E29A95405C301B9313B7C346, NULL);
				Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception, NULL, NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  itemManaged = InterfaceFuncInvoker1< KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Item(System.Int32) */, IReadOnlyList_1_t123D011888A4D9B520E568F42B6CFBAD318B68C7_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE  itemManagedCopy = itemManaged;;
				___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_tB81AF326A696B0212C71918EF0099D931D4CF744>(Box(KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var, &itemManagedCopy));
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.String>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m848097D9DDC2BCD72B5FAA1E29BA2ED36604B9F6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m848097D9DDC2BCD72B5FAA1E29BA2ED36604B9F6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.String>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m4D9CE99612AD90E41BC0D5FBD0823EAC32D40E6E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m4D9CE99612AD90E41BC0D5FBD0823EAC32D40E6E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_tC12FC9F1ED1BE2DE4AF828C51C568DC089B956F0_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.String>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m9AAEC246A5144E1A61549B6202DBF062D42C0C79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m9AAEC246A5144E1A61549B6202DBF062D42C0C79_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.String>::GetView()
il2cpp_hresult_t IMap_2_GetView_m4706D05E04651431DB4D72FF86F18508366E99AB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m4706D05E04651431DB4D72FF86F18508366E99AB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tDDADE2F16E796424445272128ADA67258FD17ED7_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE * readOnlyDictionary = (ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t29543C8C3288540849751E93624E1C8FD5AF5DDE_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_mB2D19FDF7E2760F6CD503397D0395FBD27E877FF(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_mB2D19FDF7E2760F6CD503397D0395FBD27E877FF_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.String>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m2E9B462FF7BD99B789147880AF4C61CF1F475580_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m2E9B462FF7BD99B789147880AF4C61CF1F475580_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Marshaling of parameter U27___value1U27 to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_hstring_result(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.String>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m5447078947B06776FB64CBA7B3CE4D74039F0BE2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m5447078947B06776FB64CBA7B3CE4D74039F0BE2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t8D4B47914EFD2300DFBC7D9626F3D538CFA7CA53_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.String>::Clear()
il2cpp_hresult_t IMap_2_Clear_m5EBC956471E70DF76BD6F92F126F5C52C4BF1534_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m5EBC956471E70DF76BD6F92F126F5C52C4BF1534_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Clear() */, ICollection_1_tC12FC9F1ED1BE2DE4AF828C51C568DC089B956F0_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.String>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m7B5AFB448F9350A7420100E0045D25EDCE7D925D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m7B5AFB448F9350A7420100E0045D25EDCE7D925D_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tDDADE2F16E796424445272128ADA67258FD17ED7_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.String>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2C98DC6679782C176DE4D6980BC56694A8780A1B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2C98DC6679782C176DE4D6980BC56694A8780A1B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, IReadOnlyCollection_1_tC20B58C0DE2B0F274753E8AC36FBA757B50545F4_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.String>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m4B94833E67600CD9EB76DAF502B1C00017362FCE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m4B94833E67600CD9EB76DAF502B1C00017362FCE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tDDADE2F16E796424445272128ADA67258FD17ED7_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m5EAAF4E07FB76EDE7B1493D0536791B368778BC1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D** ___first0, IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m5EAAF4E07FB76EDE7B1493D0536791B368778BC1_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, IReadOnlyCollection_1_tC20B58C0DE2B0F274753E8AC36FBA757B50545F4_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8 * splittableMap = (ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8 *)IsInstSealed(__this, ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t313F3CA92D8209C78622C634234C3D64B1C151E8_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m02E4B3DF559D51132CFFDCBC27C0B5CA8ADBD040(splittableMap, __this, ConstantSplittableMap_2__ctor_m02E4B3DF559D51132CFFDCBC27C0B5CA8ADBD040_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mCA5BCF362C189E616B716BDA45BD90B629AFE53F(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mCA5BCF362C189E616B716BDA45BD90B629AFE53F_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t98C023418CC3899B66E670112F5DC2326DD2846D>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m98EE0237601729C163ACE668075FFB92354BAFE6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m98EE0237601729C163ACE668075FFB92354BAFE6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE*)UnBox(__thisValue, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3AA5875E6F038F027D9B80929300B746525F9D65_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m0CB149607EDE61EF02B0C9D6EC600CF8FFDC26BC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m0CB149607EDE61EF02B0C9D6EC600CF8FFDC26BC_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC((KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE*)UnBox(__thisValue, KeyValuePair_2_t23481547E419E16E3B96A303578C1EB685C99EEE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m8C7B882C4D425535288FAAD08EAF11D289A43AEC_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mA352BA30D0CD226685BA9A1D8C563894DBFE5658_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mA352BA30D0CD226685BA9A1D8C563894DBFE5658_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mEEC8A6A83E5F75918A782E12324E50FC14EB1353_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mEEC8A6A83E5F75918A782E12324E50FC14EB1353_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, ICollection_1_t5B601954D317D8C287BEAE0CD4CE1FC192341F3F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4E55292A1A067E9D8510CE3FBC4459C4A6889337_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4E55292A1A067E9D8510CE3FBC4459C4A6889337_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m7B1644C9D86A297CD0996EBBE98EEAF02270C088_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m7B1644C9D86A297CD0996EBBE98EEAF02270C088_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C * readOnlyDictionary = (ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t9AB03C58D299BE81D151A5B23097049F7106820C_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_mC417F57C7FB9D62B2F8388B52FD3E45955BA160A_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m5E3A9C31F18B78D815E58837DA9D349766C39863_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m5E3A9C31F18B78D815E58837DA9D349766C39863_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Marshaling of parameter U27___value1U27 to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m282BA22D0191BE72F55A2E02A8FD11BB66178DE7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m282BA22D0191BE72F55A2E02A8FD11BB66178DE7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey) */, IDictionary_2_tF77278125F2C7A401884F0168E974ADB442020AF_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m7AC8204F7205EF9798A3829E04FE9D7908F5A9B2_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m7AC8204F7205EF9798A3829E04FE9D7908F5A9B2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, ICollection_1_t5B601954D317D8C287BEAE0CD4CE1FC192341F3F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m70395C4B4FEF91BEE322542D89D87CE6620976C3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m70395C4B4FEF91BEE322542D89D87CE6620976C3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m269AE27D53DA9999C542A093FFDE4A2B0C922B33_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m269AE27D53DA9999C542A093FFDE4A2B0C922B33_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IReadOnlyCollection_1_t095A92EB7844B31E4B51C9786C26A67001CD1E02_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m9CBEFD94E02928ABA0832D03C009835B46BD39CC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m9CBEFD94E02928ABA0832D03C009835B46BD39CC_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tF12AC6C54B252680968AC58C45E1522DA1C72D03_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m428E68FFEAA6FA65A365325BFB7FF88372AA8AB7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8** ___first0, IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m428E68FFEAA6FA65A365325BFB7FF88372AA8AB7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IReadOnlyCollection_1_t095A92EB7844B31E4B51C9786C26A67001CD1E02_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B * splittableMap = (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B *)IsInstSealed(__this, ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tE7E5F2F8397EB337E88FAA6E83401819DD282B8B_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8(splittableMap, __this, ConstantSplittableMap_2__ctor_m15FB2A3239704AD60006FF301429748E18CA6AF8_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3F75D4AAB3BBEE85C71BB782D0044668CCDE971F_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tAF8DA062BFBB5A45DE810151B5A920B2D9DBADF8>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m6E70C70549DB48D68AA88E5A24044F34501C832A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m6E70C70549DB48D68AA88E5A24044F34501C832A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8*)UnBox(__thisValue, KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m434E29A1251E81B5A2124466105823011C462BF2_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m664A0696C4E1DF5AA719302938E9DB385F01C4EB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m664A0696C4E1DF5AA719302938E9DB385F01C4EB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2((KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8*)UnBox(__thisValue, KeyValuePair_2_t1A58906CCD7ED79792916B56DB716477495C85D8_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mEAF4B15DEEAC6EB29683A5C6569F0F50B4DEBDA2_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m74F1A20CF028413570772CED8DB5C46F03B4C8FD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m74F1A20CF028413570772CED8DB5C46F03B4C8FD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m75C5A4FC7DBE9DD2B9EC79A93CC56F2D7239CC32_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m75C5A4FC7DBE9DD2B9EC79A93CC56F2D7239CC32_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::get_Count() */, ICollection_1_t94F9496DBEAD75F9152E7AAC9FACA33C3460038A_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3819B419601975A4F5D4A29BDBCD02C351100184_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3819B419601975A4F5D4A29BDBCD02C351100184_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::ContainsKey(TKey) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::GetView()
il2cpp_hresult_t IMap_2_GetView_m99A3D1C89CE4584634865B1592E7CCCF6DF7B0EC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m99A3D1C89CE4584634865B1592E7CCCF6DF7B0EC_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tD7085867A7CBD6A65830ADFF246449C2809633E0_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097 * readOnlyDictionary = (ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t0E8EFD439EC1AEE0B3890B2EFAF0CE2F1EC8D097_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m25B6DA3095884FB0D7D28CC69EE80C6DCCEB8008(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m25B6DA3095884FB0D7D28CC69EE80C6DCCEB8008_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mC27F9D1171CFD8537A48838E42151955E5EC3DE9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppHString ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mC27F9D1171CFD8537A48838E42151955E5EC3DE9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___value1U27 to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_hstring_result(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::ContainsKey(TKey) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(TKey,TValue) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mB018823DBCA3C99C29529AA71DF1D3103362FE25_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mB018823DBCA3C99C29529AA71DF1D3103362FE25_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.String>::Remove(TKey) */, IDictionary_2_tF6EE3A881C5DBE88F0A357B5AC27C61D83D862DE_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.String>::Clear()
il2cpp_hresult_t IMap_2_Clear_mAB7A6383223B7F083E4B4B035174869A0A1E90BF_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mAB7A6383223B7F083E4B4B035174869A0A1E90BF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::Clear() */, ICollection_1_t94F9496DBEAD75F9152E7AAC9FACA33C3460038A_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m8933B2E3F579A1AB40DE9C4F68F9C46EF7A0B211_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m8933B2E3F579A1AB40DE9C4F68F9C46EF7A0B211_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, String_t** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.String>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tD7085867A7CBD6A65830ADFF246449C2809633E0_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mE420727E4959C22AE56B158826B4772C070242D4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mE420727E4959C22AE56B158826B4772C070242D4_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::get_Count() */, IReadOnlyCollection_1_t198C68240C14CDA93A2285621E11618E1A62798F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m0C8F0F907EBD7108088333362E26E078A27E4540_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m0C8F0F907EBD7108088333362E26E078A27E4540_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.String>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tD7085867A7CBD6A65830ADFF246449C2809633E0_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m517D3D02EA369E32ED639989601A5B3F778EDA68_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82** ___first0, IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m517D3D02EA369E32ED639989601A5B3F778EDA68_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.String>>::get_Count() */, IReadOnlyCollection_1_t198C68240C14CDA93A2285621E11618E1A62798F_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367 * splittableMap = (ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367 *)IsInstSealed(__this, ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t0AACE5C5CA93F3F9F8CF2F7C84FA9F910A82B367_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m6CAB06F9514B56F1F16C9D589CF4D426F084DC65(splittableMap, __this, ConstantSplittableMap_2__ctor_m6CAB06F9514B56F1F16C9D589CF4D426F084DC65_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m20931F33515F13787476435E30E04214D91B9BB3(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m20931F33515F13787476435E30E04214D91B9BB3_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t545F8118BE881E23A3B703EA421805520A31BB82>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m423536B0B2DE296196311E0A25A5540D6C3AC0F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m423536B0B2DE296196311E0A25A5540D6C3AC0F8_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C((KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26*)UnBox(__thisValue, KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m89B687D373FBE3D230647CA0C536235E12AD829C_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m5A652B49FAEAA49A22A0D200871C1675F4E9F4ED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m5A652B49FAEAA49A22A0D200871C1675F4E9F4ED_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC((KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26*)UnBox(__thisValue, KeyValuePair_2_t142B50DAD5164EBD2E1495FD821B1A4C3233FA26_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mAD6801F3BC9BA1E99D4E0F72B2B420182D0494FC_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m17BF2C3F27F5EEFCF00C4F52E52A6C6BAAAA1107_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m17BF2C3F27F5EEFCF00C4F52E52A6C6BAAAA1107_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mBAF885CF2187F8BB27E5FC63E997671B351F3DD2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mBAF885CF2187F8BB27E5FC63E997671B351F3DD2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, ICollection_1_t2E18A9C518FE082D8062948E154F69D00DC46677_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1BD15FD8CFD7904C0C512E00DCAF2C5DB4509F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1BD15FD8CFD7904C0C512E00DCAF2C5DB4509F8B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m9404529D03E23540F16E05B1D8169DEE4B5CBDC3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m9404529D03E23540F16E05B1D8169DEE4B5CBDC3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tF1153837984884C58DB2002103135F3D9F0A9B4E_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932 * readOnlyDictionary = (ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tFB5D69D2796A1EC31F5A84F12D938B27D4BFC932_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2E67DD8FC00572B74B57BA5B879CAD7903A0EEEA_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m81EF3858A9F079FBED4A32135C3BD76B375993DB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m81EF3858A9F079FBED4A32135C3BD76B375993DB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___value1U27 to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m004C67C470F3EC8F23166A2F834D08ED1438B6D7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m004C67C470F3EC8F23166A2F834D08ED1438B6D7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::Remove(TKey) */, IDictionary_2_t91E812D41E3EAD0FF6BD9CCCEF18477B159DF85F_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_mFAA975BDDF86160C42362B77B9C45F37EAB3236F_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mFAA975BDDF86160C42362B77B9C45F37EAB3236F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Clear() */, ICollection_1_t2E18A9C518FE082D8062948E154F69D00DC46677_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m95E00FC4EF10ADCA7637EC43605F109BDAE307AF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m95E00FC4EF10ADCA7637EC43605F109BDAE307AF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tF1153837984884C58DB2002103135F3D9F0A9B4E_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mFE1BA78ED36452FDE33C133EEF5FE2E5C4D2630C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mFE1BA78ED36452FDE33C133EEF5FE2E5C4D2630C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2AB420236D0C9F266112FEF894EF9E9C0236FF51_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_mCF2CA12762CB2BE3A065E726268946BB6DD053BD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_mCF2CA12762CB2BE3A065E726268946BB6DD053BD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tF1153837984884C58DB2002103135F3D9F0A9B4E_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mAB8755F664B7110CEACCEA3C46B08DFE78D9C303_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5** ___first0, IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mAB8755F664B7110CEACCEA3C46B08DFE78D9C303_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2AB420236D0C9F266112FEF894EF9E9C0236FF51_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D * splittableMap = (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D *)IsInstSealed(__this, ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tB818C5D2DD261F2821164C866138506D7AE09A9D_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C(splittableMap, __this, ConstantSplittableMap_2__ctor_m3A350F364DB590CC2D1D2B6E970AC7B49514D70C_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1B51473D3DD083CC40AEF5D1825CBC2F222767EB_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA75059A1A28D75C5CA1B1BC5D9956A1FF633BFC5>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mE526F61CB30B178AF1074AF1183E55B0162E8ABB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mE526F61CB30B178AF1074AF1183E55B0162E8ABB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m5E5D221D5A8172958E8E794478353110183832EA((KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33*)UnBox(__thisValue, KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m5E5D221D5A8172958E8E794478353110183832EA_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.String>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_mD9216AFDD39C2208BD98B6AFD1E53AE92DD57858_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_mD9216AFDD39C2208BD98B6AFD1E53AE92DD57858_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mA198C771B2A8287C0A6E482092D2AB4376F6F8F1((KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33*)UnBox(__thisValue, KeyValuePair_2_t4589A3BB5B6D6CE563979F9AF2FC48C7A9A23E33_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mA198C771B2A8287C0A6E482092D2AB4376F6F8F1_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m4DE69E584A68A890CB4647557D06DFC9CD13844E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m4DE69E584A68A890CB4647557D06DFC9CD13844E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m4967BDE59167A0462E277344856DDF1C1EDCD4E1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m4967BDE59167A0462E277344856DDF1C1EDCD4E1_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, ICollection_1_tA78C4852BB3D537314405D0D61C46C88DF2892DB_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m283303434B6F8915C25CFB1357AE0A211607AFE0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m283303434B6F8915C25CFB1357AE0A211607AFE0_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_mF649E29280E1910C609F546F0148389E52718601_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_mF649E29280E1910C609F546F0148389E52718601_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t94AD503726A8DA0918BD194B14FEDAC0C0C6DB9E_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403 * readOnlyDictionary = (ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t05DA2EE84A80CF878ED69D88645B1D6CE04B9403_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_mC9CB99F4923E90D9DC5C454220833DCB845F79A9(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_mC9CB99F4923E90D9DC5C454220833DCB845F79A9_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mA6FC95D481A753B2937C94B7FEC5D261E1215BA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mA6FC95D481A753B2937C94B7FEC5D261E1215BA2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Marshaling of parameter U27___value1U27 to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m78FFA27A31E30341C406CC0039B7B78CEAD9F23E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m78FFA27A31E30341C406CC0039B7B78CEAD9F23E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::Remove(TKey) */, IDictionary_2_t1E5681AFFD86E8189077B1EE929272E2AF245A91_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_mD1D5E79B27C090FA32CE9BF87B18611D71C75DD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mD1D5E79B27C090FA32CE9BF87B18611D71C75DD7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear() */, ICollection_1_tA78C4852BB3D537314405D0D61C46C88DF2892DB_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_mA65E9EDCAB06EED36BABF54812436DBDD3725E7D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_mA65E9EDCAB06EED36BABF54812436DBDD3725E7D_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t94AD503726A8DA0918BD194B14FEDAC0C0C6DB9E_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m96F05086219084E81C08D12576D80985B86F11B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m96F05086219084E81C08D12576D80985B86F11B5_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IReadOnlyCollection_1_t34A5D0833B96A1F6C872A58F98761AFAF4C36D5E_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m9652D22524EFA7D8B0CA4623F7C33883CD4D8060_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m9652D22524EFA7D8B0CA4623F7C33883CD4D8060_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t94AD503726A8DA0918BD194B14FEDAC0C0C6DB9E_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m5197501E5C9D55DDCF5C838D17892ED368196FEF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C** ___first0, IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m5197501E5C9D55DDCF5C838D17892ED368196FEF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IReadOnlyCollection_1_t34A5D0833B96A1F6C872A58F98761AFAF4C36D5E_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086 * splittableMap = (ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086 *)IsInstSealed(__this, ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t4876616DB591E0AEA79C7A8FE525855AF3484086_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m02B412F7C1877120635BE5307CD39E5E63EF6F68(splittableMap, __this, ConstantSplittableMap_2__ctor_m02B412F7C1877120635BE5307CD39E5E63EF6F68_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mAB9195AB8AC758190789C5E54A3587535F689F1A(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mAB9195AB8AC758190789C5E54A3587535F689F1A_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA9BC1207BBFBC7B5476A4914664EC142C2C7807C>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1DAAA00B1724D97136F592E04E9C6146D41FFFC9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1DAAA00B1724D97136F592E04E9C6146D41FFFC9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D*)UnBox(__thisValue, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m70ABAD248D45E166CEC58AF007095CEC5E79B1DD_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m39E0D5E2C7FC859BE3F76D4160C8D013AAAE9193_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m39E0D5E2C7FC859BE3F76D4160C8D013AAAE9193_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m435F98F01A7613A2BC8ED3A15E128D30D75D2FD4((KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D*)UnBox(__thisValue, KeyValuePair_2_tC167337BFA3217084F940401B1BC047130DED61D_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m435F98F01A7613A2BC8ED3A15E128D30D75D2FD4_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3093F658011110B85A44FEECAE9A175F51D2CE3B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3093F658011110B85A44FEECAE9A175F51D2CE3B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mAFC218B9083A6C118581A0CF9690E6752C745E3B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mAFC218B9083A6C118581A0CF9690E6752C745E3B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, ICollection_1_tB014FEB76EDF0942997BAAB59D2CBA5CAD07B379_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mDA506A6189D75A99A90FBE81D92E9EBD7F866FDD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mDA506A6189D75A99A90FBE81D92E9EBD7F866FDD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m17A052C4FFE37EF78C572A8240088AE2D1433899_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m17A052C4FFE37EF78C572A8240088AE2D1433899_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tF3133645B3876E8AA374DE1B4668134D48CA8D03_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470 * readOnlyDictionary = (ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4B2D06B3BCA1E4056540C095BC557EE508D56470_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m7DC85FF020A5F3C07AFF55B4B5CA0966BDF0AE2A(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m7DC85FF020A5F3C07AFF55B4B5CA0966BDF0AE2A_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m440FC4B763173A87C7E5C2E14D5D5AAD3A13BB80_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m440FC4B763173A87C7E5C2E14D5D5AAD3A13BB80_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mD75194A9099D10EFBD900E02C38AEA16D05FADEB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mD75194A9099D10EFBD900E02C38AEA16D05FADEB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Remove(TKey) */, IDictionary_2_t1BA14E657A7C2086151AA159E3C7FE1FFA044F85_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m4B93FAB66562E9EC679EB252D32F298013A28914_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m4B93FAB66562E9EC679EB252D32F298013A28914_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear() */, ICollection_1_tB014FEB76EDF0942997BAAB59D2CBA5CAD07B379_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m1C7E9C76B833CEE3730C07E20400C020E53AF433_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m1C7E9C76B833CEE3730C07E20400C020E53AF433_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tF3133645B3876E8AA374DE1B4668134D48CA8D03_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mD59A118F66E203364CB1462DB8345B9410B15AD0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mD59A118F66E203364CB1462DB8345B9410B15AD0_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t624FEF3CB7433AF116F0405BCA884284AA456E83_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m0DBCBA5D8B71EFABE2E7F0303C7F3E1B5FD26253_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m0DBCBA5D8B71EFABE2E7F0303C7F3E1B5FD26253_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tF3133645B3876E8AA374DE1B4668134D48CA8D03_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m784CA46A39C1DBF83E1D8707B1A3184775A5B8B6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3** ___first0, IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m784CA46A39C1DBF83E1D8707B1A3184775A5B8B6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t624FEF3CB7433AF116F0405BCA884284AA456E83_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15 * splittableMap = (ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15 *)IsInstSealed(__this, ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t49B99005742DD22DFEAC69B28AD60AF19AEE5C15_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_mEFB815B913BA9334FFC7880B988F1ABC2AA1B32D(splittableMap, __this, ConstantSplittableMap_2__ctor_mEFB815B913BA9334FFC7880B988F1ABC2AA1B32D_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m685DA4637C1ECA6E8D6C1028D844CA71188885FC(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m685DA4637C1ECA6E8D6C1028D844CA71188885FC_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tFB2F8AEA1C8A159E0E34115B147C9F9B2C7827B3>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mD719EFA29E8BDB1834D0C036F3D858110C7F0AC6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mD719EFA29E8BDB1834D0C036F3D858110C7F0AC6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09((KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E*)UnBox(__thisValue, KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mA8E3537C258052C112D227D263B03028DD16CC09_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m130E5BE3F1A1D87A8E97E483DBAC0E05D7F31130_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m130E5BE3F1A1D87A8E97E483DBAC0E05D7F31130_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A((KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E*)UnBox(__thisValue, KeyValuePair_2_t3BAB6A80A3894F871F1F6B030436D8F2FF1D398E_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m24A5AC0D5FC0501CC02B85EB38A56A7C34E9BB9A_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mE41258F44B7F5CEBD99F7ACBB7A149CB7EB10C7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mE41258F44B7F5CEBD99F7ACBB7A149CB7EB10C7F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m8456284E45A26064AE58519C3A09A50CB7B63DB7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m8456284E45A26064AE58519C3A09A50CB7B63DB7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, ICollection_1_t81D3A7334E4F05CBDE0937B2716545517BE310B8_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4646A5F3D5EF59C1832A508F774A4F052817523F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4646A5F3D5EF59C1832A508F774A4F052817523F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_mD53E4F9AC946B89D1B140E08D418BDC178123FB3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_mD53E4F9AC946B89D1B140E08D418BDC178123FB3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2711B2C006043E17885E1EFB4A59E1206C08FD68_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8 * readOnlyDictionary = (ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tECD5B73717B25DA923786781104DE68C6116C0F8_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3EFB62DB2EC03BEEE46B4CEB7A472BB87A7563A8_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m20ECE53EC82A7D1B35991AD0BAC83E2D79888F3D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m20ECE53EC82A7D1B35991AD0BAC83E2D79888F3D_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mE7EB00F75AB50337F3BDFE72CAE27F5E74CCFDB2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mE7EB00F75AB50337F3BDFE72CAE27F5E74CCFDB2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey) */, IDictionary_2_tD58D387C33AEFBF956F94B7F02B7F1722C3E3278_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m4910E3D8EEB4C5F5D3387398F105B987812E79DD_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m4910E3D8EEB4C5F5D3387398F105B987812E79DD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear() */, ICollection_1_t81D3A7334E4F05CBDE0937B2716545517BE310B8_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m80AD48B3FBFE3AFCE874DB3089C24D67879139A3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m80AD48B3FBFE3AFCE874DB3089C24D67879139A3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2711B2C006043E17885E1EFB4A59E1206C08FD68_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mF0F6F682065427648FE7B401AB8BA5D55286E76A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mF0F6F682065427648FE7B401AB8BA5D55286E76A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IReadOnlyCollection_1_tBF8597503B0263931F18429B54FB6718939366C0_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m0B3336EF296C26F19C689FEBD5D81AACE9DFA546_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m0B3336EF296C26F19C689FEBD5D81AACE9DFA546_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2711B2C006043E17885E1EFB4A59E1206C08FD68_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m38E2521C8EB326B1B92CCEBFAC6BF27758E5A3BC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3** ___first0, IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m38E2521C8EB326B1B92CCEBFAC6BF27758E5A3BC_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IReadOnlyCollection_1_tBF8597503B0263931F18429B54FB6718939366C0_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 * splittableMap = (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7 *)IsInstSealed(__this, ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t06C3CE00F7629F7F9811B570F4D8894123E470F7_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C(splittableMap, __this, ConstantSplittableMap_2__ctor_mA68679DBF549EFEEC82BDAF1A1DD0CD6697B574C_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mA7D0E460776E9D6D0F16C9CC434655DF2F403ED3_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t21E58478CD0F19DCD8D76A2352BA63A69C6061D3>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mC3D38969E4BED888E29302CADB602A0CD694B60D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mC3D38969E4BED888E29302CADB602A0CD694B60D_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2D5E5781EECFE6FB93066D9C39852C9E052B220A((KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D*)UnBox(__thisValue, KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2D5E5781EECFE6FB93066D9C39852C9E052B220A_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"), NULL, NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m5949FE18C131A76BB49F41A8F69601C75F48D66D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m5949FE18C131A76BB49F41A8F69601C75F48D66D_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mBAD430E7201DB0E9F5057891AFFEDFC393A96C51((KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D*)UnBox(__thisValue, KeyValuePair_2_t7FCB843133EF93D8F1052918FE4E6D04BB47A99D_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mBAD430E7201DB0E9F5057891AFFEDFC393A96C51_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m48FD9835615DFFACDB96E3F99E3A82C1B7967E7C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m48FD9835615DFFACDB96E3F99E3A82C1B7967E7C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mB735BC2D7232A3B45D667D28C17BA51AAAFFB4A1((KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809*)UnBox(__thisValue, KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mB735BC2D7232A3B45D667D28C17BA51AAAFFB4A1_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m8C5A63C0C41D45DA4ECE4F0F86B05E2329783ADD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m8C5A63C0C41D45DA4ECE4F0F86B05E2329783ADD_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mF7293AF44DA0B8EB7B455A6227F7C36EEE9CF508((KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809*)UnBox(__thisValue, KeyValuePair_2_tA9AFBC865B07606ED8F020A8E3AF8E27491AF809_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mF7293AF44DA0B8EB7B455A6227F7C36EEE9CF508_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m193F07C7B7F57C8CDAD0DDA1B6462D55523DE0FC_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m193F07C7B7F57C8CDAD0DDA1B6462D55523DE0FC_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mDB4107311E3D179B101A8374ED432C0A1C2A5751_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mDB4107311E3D179B101A8374ED432C0A1C2A5751_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, ICollection_1_t95D272ED47E5AF7473F4D06F3A4BFF561E3FBF1C_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mEC865D0F10D8578929646408F5C7AF66B9E00F68_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mEC865D0F10D8578929646408F5C7AF66B9E00F68_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::ContainsKey(TKey) */, IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m85845EA616D94D26D15F79ECDB49832B832CAB91_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m85845EA616D94D26D15F79ECDB49832B832CAB91_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tB80B95F14EE9CB318F0F36A3B0B51B1360D272BD_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991 * readOnlyDictionary = (ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tD9243C89FC08B394F66AD42D9214721054A33991_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m775BD524BDA4E5B10629191175488C558F01D247(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m775BD524BDA4E5B10629191175488C558F01D247_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m49673DE6D98F4D6C15666B6ED9DDAE7D1B166A2F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m49673DE6D98F4D6C15666B6ED9DDAE7D1B166A2F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___value1U27 to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::ContainsKey(TKey) */, IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mF3F10CECAF3EA3CAAC687B7913A3437ED03C4B79_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mF3F10CECAF3EA3CAAC687B7913A3437ED03C4B79_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::Remove(TKey) */, IDictionary_2_tE13B3C030E4818E4C489476C08BC9812579BB13B_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_mE2CD2390A2C7FFA7091CC35F8E9316464D388B13_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mE2CD2390A2C7FFA7091CC35F8E9316464D388B13_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Clear() */, ICollection_1_t95D272ED47E5AF7473F4D06F3A4BFF561E3FBF1C_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m7CFC8B470D3395ABE6B79306D3E89BDEFE86B66E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m7CFC8B470D3395ABE6B79306D3E89BDEFE86B66E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tB80B95F14EE9CB318F0F36A3B0B51B1360D272BD_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mB23CFCA7F32DA3970EB24F6E271396BB157A18E9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mB23CFCA7F32DA3970EB24F6E271396BB157A18E9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_tE541712F5404BEB2DF28AD1AF0D42B76D9C518CE_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_mE06AC6B4AA27CA0E1880ED08D6651013AD341943_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_mE06AC6B4AA27CA0E1880ED08D6651013AD341943_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tB80B95F14EE9CB318F0F36A3B0B51B1360D272BD_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mD116FD16EAB612CC60F9E08248CC88587C3E13C3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16** ___first0, IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mD116FD16EAB612CC60F9E08248CC88587C3E13C3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_tE541712F5404BEB2DF28AD1AF0D42B76D9C518CE_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 * splittableMap = (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7 *)IsInstSealed(__this, ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tE8770D5F2EA4FA978247E4EA0FB5E1B465AE95E7_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_mFEB6FFB753930BD450C9B9251F7FF92B041D6182(splittableMap, __this, ConstantSplittableMap_2__ctor_mFEB6FFB753930BD450C9B9251F7FF92B041D6182_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1997BD7E327357898EDABF3D833771A10AC1A79D(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1997BD7E327357898EDABF3D833771A10AC1A79D_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tA7A2B727EDC089595F4FF212930C265EF0B59E16>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m92C57658C4597A455068184F0A97A41C0E222512_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m92C57658C4597A455068184F0A97A41C0E222512_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m18EAE7C3652CC594B89532C2182AF531F351C1A1((KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA*)UnBox(__thisValue, KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m18EAE7C3652CC594B89532C2182AF531F351C1A1_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_mC8375618394D63F4EB9B58FAD3DC7BFB3D83E80F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_mC8375618394D63F4EB9B58FAD3DC7BFB3D83E80F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m29DE50BBCB38063E44E72BF1C0F4488DEEF6DACE((KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA*)UnBox(__thisValue, KeyValuePair_2_t471E2DF36C9849B1488F87CC6C0EA0F6B6224DBA_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m29DE50BBCB38063E44E72BF1C0F4488DEEF6DACE_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m08FFE051AD6C37E04883C26A1A002E53F3D3322A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m08FFE051AD6C37E04883C26A1A002E53F3D3322A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3E4FE6701CF6638FBF245F5D8E5D7672C1ECDDA7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3E4FE6701CF6638FBF245F5D8E5D7672C1ECDDA7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, ICollection_1_t376AA82E152EA92AF847765C1E50FBDF0E2CCB1A_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mC23090FA89D691381BFFCD3564D9E9AC1E0F37F9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mC23090FA89D691381BFFCD3564D9E9AC1E0F37F9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m816B37ECEB1FAD511E00E4CD0B9226A16F6A5D6C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m816B37ECEB1FAD511E00E4CD0B9226A16F6A5D6C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tC59696C9B4BEEDAA1F5FF20B05041CA0BEDEF88F_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0 * readOnlyDictionary = (ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tE49F7EE8B191585796F1DECD7CCD245F5EFA5CA0_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m103B8650815F508198DBE41BF395B893564B692A(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m103B8650815F508198DBE41BF395B893564B692A_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mFE915CC39D4C9EAFE565DA3B599A69C4ABAC81E6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mFE915CC39D4C9EAFE565DA3B599A69C4ABAC81E6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mA75059844C546A0BA3494FC6E8C7109B7735EC61_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mA75059844C546A0BA3494FC6E8C7109B7735EC61_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::Remove(TKey) */, IDictionary_2_t76AF03C3A205ED2092017AFC6F32E2D93D9EC603_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_mAC3D1EC71C36CC4A6986EABDFCDF7AB9A1096280_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mAC3D1EC71C36CC4A6986EABDFCDF7AB9A1096280_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clear() */, ICollection_1_t376AA82E152EA92AF847765C1E50FBDF0E2CCB1A_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m55A7A28AAD6B9D5336EBC9DBD9FB6245B0759CCF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m55A7A28AAD6B9D5336EBC9DBD9FB6245B0759CCF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tC59696C9B4BEEDAA1F5FF20B05041CA0BEDEF88F_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m60963925BCA832E7B6C8400BFD20EBFAD268B04F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m60963925BCA832E7B6C8400BFD20EBFAD268B04F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCD70B38B49151CDCDDA938825E2A9A938FC286E5_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m46D9B22734B6A871366162DB6721D4A70216BAC1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m46D9B22734B6A871366162DB6721D4A70216BAC1_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___key0U27 to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tC59696C9B4BEEDAA1F5FF20B05041CA0BEDEF88F_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mF0967753CE1BD5708F1ED78FC936F141417E9E23_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2** ___first0, IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mF0967753CE1BD5708F1ED78FC936F141417E9E23_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCD70B38B49151CDCDDA938825E2A9A938FC286E5_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 * splittableMap = (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91 *)IsInstSealed(__this, ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t050A25C5F067D75C625827B5F37901F5F277DF91_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m242B9CD73C6CB42BAB9150538322206DFACCC9D1(splittableMap, __this, ConstantSplittableMap_2__ctor_m242B9CD73C6CB42BAB9150538322206DFACCC9D1_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m62FE3AAA845A120E000E3BBA0CA1F73B631264E4(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m62FE3AAA845A120E000E3BBA0CA1F73B631264E4_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1F3F2820C238CB6A97E9B4862BA83C1E3A1F86D2>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m6F5F6DD5A0DA07188FAE57CBFF2F72A39C38C0C3_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m6F5F6DD5A0DA07188FAE57CBFF2F72A39C38C0C3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m399ECA62E7496A29A7396211018AD652FF15D930((KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1*)UnBox(__thisValue, KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m399ECA62E7496A29A7396211018AD652FF15D930_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_mCE7ADCAACB1F09420E47B5073D4E10A1642125B2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_mCE7ADCAACB1F09420E47B5073D4E10A1642125B2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_mE50A05A795484D20F8060413212B29EBADC1EA40((KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1*)UnBox(__thisValue, KeyValuePair_2_tF975BF5238F06AC9CCA19111DD41484E071258C1_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_mE50A05A795484D20F8060413212B29EBADC1EA40_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mA69B10DA8FB4F0405953159A6AFAEAA1823624FF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mA69B10DA8FB4F0405953159A6AFAEAA1823624FF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_mAEB5165E0202B3549338EC03EF61B74A52DB6846_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_mAEB5165E0202B3549338EC03EF61B74A52DB6846_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count() */, ICollection_1_t16D8634CC1971E56843DDB5FF854A403364BD8B6_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mE2615DDE9503C63BE92D98A9869461F1F2F6CB30_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mE2615DDE9503C63BE92D98A9869461F1F2F6CB30_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m584EE5FFCCAAE5880FFDE8B43956EB197075EFF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m584EE5FFCCAAE5880FFDE8B43956EB197075EFF4_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t45EA70556BBC1AA358BDC7AC3891F9E2EE5926DA_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157 * readOnlyDictionary = (ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t5B811B75D011FADCF2B64A4B558FBC32EA102157_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m7B7070157BA83F443A04EB5773E99CFD0BAB013A(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m7B7070157BA83F443A04EB5773E99CFD0BAB013A_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mEC739FF422DF8979336A6EBFA3E852A9CEFCBAEB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mEC739FF422DF8979336A6EBFA3E852A9CEFCBAEB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mD2061CEF276C7ABB1E346485DDFC1F182A198D93_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mD2061CEF276C7ABB1E346485DDFC1F182A198D93_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>::Remove(TKey) */, IDictionary_2_t9AFC3D5D6948C37C9B177423D57BB781BF20BF51_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m19128EF5E8D3942DC86AD919221F54533CC599B7_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m19128EF5E8D3942DC86AD919221F54533CC599B7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::Clear() */, ICollection_1_t16D8634CC1971E56843DDB5FF854A403364BD8B6_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2597F3E061A2A36B9729AC3BFB7AF66ABA8B986C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2597F3E061A2A36B9729AC3BFB7AF66ABA8B986C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t45EA70556BBC1AA358BDC7AC3891F9E2EE5926DA_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m9292AC9808B960E51C1CB1CE999FDA71E7CC2F46_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m9292AC9808B960E51C1CB1CE999FDA71E7CC2F46_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t025ECAC8D0C01C29AA86473681F566A078537F2E_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_mCA69CFFCFD93DF33B1AE1C71F2C2AF6B78AFDE64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_mCA69CFFCFD93DF33B1AE1C71F2C2AF6B78AFDE64_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t45EA70556BBC1AA358BDC7AC3891F9E2EE5926DA_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mC716A08DDC6A869CB4EEC66B1DA9C91FA8BA2969_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A** ___first0, IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mC716A08DDC6A869CB4EEC66B1DA9C91FA8BA2969_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t025ECAC8D0C01C29AA86473681F566A078537F2E_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C * splittableMap = (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C *)IsInstSealed(__this, ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tB0F8990A3CD3B88719E0B75963BA4B4AC088439C_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3DC3086FC1743C4C5EC39725C4BD2B60F91D6643(splittableMap, __this, ConstantSplittableMap_2__ctor_m3DC3086FC1743C4C5EC39725C4BD2B60F91D6643_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m82398B71F6957AD972581B30DB3C186E8081FF13(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m82398B71F6957AD972581B30DB3C186E8081FF13_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1F00D21DEA93E3FD5FA35C3A0A45826782719C1A>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mC37EEEF0D2AF0474A5A5C0D3AAB11318682C9BC5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mC37EEEF0D2AF0474A5A5C0D3AAB11318682C9BC5_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, Il2CppChar* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Char>::TryGetValue(TKey,TValue&) */, IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m66C0220748862880543229A741F50EB1E00905FB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m66C0220748862880543229A741F50EB1E00905FB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::get_Count() */, ICollection_1_tF4D1EF95DA6D70CF70676B820B7D263E4B44C1E2_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mAE30389D121261DD14355B6C37269840C83BCF43_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mAE30389D121261DD14355B6C37269840C83BCF43_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Char>::ContainsKey(TKey) */, IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::GetView()
il2cpp_hresult_t IMap_2_GetView_m7531CAF304C73613806C96A38BA9624D2E436D53_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m7531CAF304C73613806C96A38BA9624D2E436D53_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tE289C55D514BC3EE1DEF4003944D4C920A22AB58_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6 * readOnlyDictionary = (ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t58B9DE1BCF2543FF60F3B372E3F7B750D23069D6_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m15451E5BF4DB173E958C0FEA1996B0A108B1BC01(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m15451E5BF4DB173E958C0FEA1996B0A108B1BC01_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mD3AF0F5DE1A9537DC37AEEFA421DAF22120B857B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppChar ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mD3AF0F5DE1A9537DC37AEEFA421DAF22120B857B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Char>::ContainsKey(TKey) */, IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, Il2CppChar >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Char>::set_Item(TKey,TValue) */, IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mA66688B0305FC2DF4B6099C4297B7620978D3722_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mA66688B0305FC2DF4B6099C4297B7620978D3722_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Char>::Remove(TKey) */, IDictionary_2_t328B0844B6824EA7CB6E1B1176B51A52C1183D0C_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Char>::Clear()
il2cpp_hresult_t IMap_2_Clear_m23127D9B7F9171544391EA3A68AEDCB0766D92C9_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m23127D9B7F9171544391EA3A68AEDCB0766D92C9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::Clear() */, ICollection_1_tF4D1EF95DA6D70CF70676B820B7D263E4B44C1E2_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Char>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m486623CE182130A1BA692837F90E5743C5BB9717_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m486623CE182130A1BA692837F90E5743C5BB9717_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, Il2CppChar* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Char>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tE289C55D514BC3EE1DEF4003944D4C920A22AB58_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Char>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m446F719629B16E4209FE4D81AE51102037C69B36_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m446F719629B16E4209FE4D81AE51102037C69B36_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::get_Count() */, IReadOnlyCollection_1_tFD56CD4756908C4077042C52EF1FFE51A068A568_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Char>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m70E6873C40454816C38521794BD0FBE8E8802442_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m70E6873C40454816C38521794BD0FBE8E8802442_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Char>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tE289C55D514BC3EE1DEF4003944D4C920A22AB58_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m212D1A4B64950E733EDC81226FDFD433B13DB73B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A** ___first0, IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m212D1A4B64950E733EDC81226FDFD433B13DB73B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Char>>::get_Count() */, IReadOnlyCollection_1_tFD56CD4756908C4077042C52EF1FFE51A068A568_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C * splittableMap = (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C *)IsInstSealed(__this, ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t65099D16A3F32F68FC491717C9BF7EC0F847395C_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m39FE6C80A4B14B98C4D370E0EDF9CA17ABDA50E7(splittableMap, __this, ConstantSplittableMap_2__ctor_m39FE6C80A4B14B98C4D370E0EDF9CA17ABDA50E7_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mDDBFD709CBB5467C1B33E9E1B7F6D7F5A7ADD2B3(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mDDBFD709CBB5467C1B33E9E1B7F6D7F5A7ADD2B3_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t237D2D428C33FC59684F3168C1F57307926DAF6A>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Char>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m59A02B9173565C9487313AEF006D22B89E891ACA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m59A02B9173565C9487313AEF006D22B89E891ACA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mA63AB45B1DCD00F430DA683B7446EA00536ECD43((KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F*)UnBox(__thisValue, KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mA63AB45B1DCD00F430DA683B7446EA00536ECD43_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Char>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m57ECACBA40BEC0C268CDBD9B7B591DA064087A35_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m57ECACBA40BEC0C268CDBD9B7B591DA064087A35_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m5A3A76AD9C76D7E58EBED51BF3C82BD695B83548((KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F*)UnBox(__thisValue, KeyValuePair_2_t13BE4DA362E151A60E59C414DB8A5C61F4A1B30F_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m5A3A76AD9C76D7E58EBED51BF3C82BD695B83548_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mD2DB6929CD1611A5A7D587980A5505DA923A4A46_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mD2DB6929CD1611A5A7D587980A5505DA923A4A46_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int64_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m17BF9E39EA9D1A3CE11D2A89A5E8E82BE038C0F7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m17BF9E39EA9D1A3CE11D2A89A5E8E82BE038C0F7_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, ICollection_1_t51FAEFFD9A8E3759A4BACFACBDF2879F11C33319_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mF7AF167D8CFD7532521BDDB45B74A65CD18F9CAF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mF7AF167D8CFD7532521BDDB45B74A65CD18F9CAF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_mC501D2EEFE7C98BD6BFD70FFCB646BA2ED8AC5BA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_mC501D2EEFE7C98BD6BFD70FFCB646BA2ED8AC5BA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t26970A9F76D3DFB52788F83ACC615A84039CAB29_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308 * readOnlyDictionary = (ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t46EE13A309CFB599123D324CE899E07A51DFB308_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_mC3EE57544327AEA20DC1598EE9C8C1E1120A2F6A(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_mC3EE57544327AEA20DC1598EE9C8C1E1120A2F6A_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m80B437F6D811E87BB6CE6A6270D1904F4F2D8A0F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m80B437F6D811E87BB6CE6A6270D1904F4F2D8A0F_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___value1U27 to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int64_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m69A918F841847727227BB769AA5FE4C99E31CCCA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m69A918F841847727227BB769AA5FE4C99E31CCCA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int64_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::Remove(TKey) */, IDictionary_2_t07EBD313C52C7DDC4DB5B640A8936B2E937B8C90_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m883F4639BA2846AF4F975B5F379284092C499FB3_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m883F4639BA2846AF4F975B5F379284092C499FB3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clear() */, ICollection_1_t51FAEFFD9A8E3759A4BACFACBDF2879F11C33319_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_mAF6FE30F33BCEB5BF2CEE9A908111073EAAEF3B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_mAF6FE30F33BCEB5BF2CEE9A908111073EAAEF3B0_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int64_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t26970A9F76D3DFB52788F83ACC615A84039CAB29_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mE159F99A01E2B317ECD6C98BCEA833EB5696C64A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mE159F99A01E2B317ECD6C98BCEA833EB5696C64A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_tEEFA96045AC300F86C0E5E31719834F591EADD4F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m83B8D945F5AF4755ED0A9D4A2B7044BFD45EA306_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m83B8D945F5AF4755ED0A9D4A2B7044BFD45EA306_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t26970A9F76D3DFB52788F83ACC615A84039CAB29_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m95E94F8CD0670B726C96BC52F55BBBA25B323335_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6** ___first0, IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m95E94F8CD0670B726C96BC52F55BBBA25B323335_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_tEEFA96045AC300F86C0E5E31719834F591EADD4F_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA * splittableMap = (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA *)IsInstSealed(__this, ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t66C4CED3CD86156A7E1CEE8EE4E0BE65DD8029CA_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_mF3189244A63BCC0D376323A36F1E6F005084130B(splittableMap, __this, ConstantSplittableMap_2__ctor_mF3189244A63BCC0D376323A36F1E6F005084130B_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mE27CE0AD88B8EE74CBFB64085F22BC8E3388100E(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mE27CE0AD88B8EE74CBFB64085F22BC8E3388100E_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t10A5ECF0E22C270269B4C0A475CFB8BCF1B725A6>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mEE6F924156F157D959C51F4DC7C5D75F105E122E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mEE6F924156F157D959C51F4DC7C5D75F105E122E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m89819ADCF57B0FAB7895AD67A45532933C191651((KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA*)UnBox(__thisValue, KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m89819ADCF57B0FAB7895AD67A45532933C191651_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_mE7B87F0FE1DD49E9B765616FF95FA51C54266515_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_mE7B87F0FE1DD49E9B765616FF95FA51C54266515_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84((KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA*)UnBox(__thisValue, KeyValuePair_2_t01369E536C15A7A1AF58F260AD740C479FBFC4EA_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m50A10E5B6FCC2418F03FA34E2A70B84F16CE8B84_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mF7DD9C9B00891CFC13C341B46F2DAB5DF171EB05_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mF7DD9C9B00891CFC13C341B46F2DAB5DF171EB05_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, int64_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int64>::TryGetValue(TKey,TValue&) */, IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m0D3B7DEF00653381FA6E2DB7A0F5F1911130BEB6_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m0D3B7DEF00653381FA6E2DB7A0F5F1911130BEB6_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>>::get_Count() */, ICollection_1_t9606967545DE41D476D3C4E9AF7E51F9EDD61720_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mE0CF0380910792FF4A497496EEA92792011E769E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mE0CF0380910792FF4A497496EEA92792011E769E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int64>::ContainsKey(TKey) */, IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::GetView()
il2cpp_hresult_t IMap_2_GetView_m427138D7CF09B05C2FA534B62A157D3778FDE1D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m427138D7CF09B05C2FA534B62A157D3778FDE1D5_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tF213E9C580793B1196B8ECE8EBB14B86405C665F_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF * readOnlyDictionary = (ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tD3E37F3400046F0CE99A337EFF062200BB1B17DF_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m92E28218207650BF9D01E015F5E260E2B33577BC(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m92E28218207650BF9D01E015F5E260E2B33577BC_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m65A9FDD7CCE3AE5946FCF859DB0164758218E579_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, int64_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m65A9FDD7CCE3AE5946FCF859DB0164758218E579_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int64>::ContainsKey(TKey) */, IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, int64_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int64>::set_Item(TKey,TValue) */, IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m7DA6ADB7C8EEAFD587DF65658188F16F27EFFEE5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m7DA6ADB7C8EEAFD587DF65658188F16F27EFFEE5_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Int64>::Remove(TKey) */, IDictionary_2_t79428A943F7CA3E9E60746D17EB110D24BAEAA96_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Int64>::Clear()
il2cpp_hresult_t IMap_2_Clear_mF4977209C0CF61C3715726605E9DCC304F9F5C40_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_mF4977209C0CF61C3715726605E9DCC304F9F5C40_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>>::Clear() */, ICollection_1_t9606967545DE41D476D3C4E9AF7E51F9EDD61720_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int64>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_mDCE9C97744C40920861AFF0BF02D462E9C7D7884_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_mDCE9C97744C40920861AFF0BF02D462E9C7D7884_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, int64_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Int64>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tF213E9C580793B1196B8ECE8EBB14B86405C665F_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int64>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m9786CC556E67756C10C9D909F5B773ABC9F28DEE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m9786CC556E67756C10C9D909F5B773ABC9F28DEE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>>::get_Count() */, IReadOnlyCollection_1_tC7FC30E9584BF882C56AAF7BCD36E30D5FC93757_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int64>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2947463A97CE243580F0B1B605EA10263878FFD0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2947463A97CE243580F0B1B605EA10263878FFD0_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Int64>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tF213E9C580793B1196B8ECE8EBB14B86405C665F_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m9CD0044B1E0089CEABB6927A6C19DC32B7360ECB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D** ___first0, IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m9CD0044B1E0089CEABB6927A6C19DC32B7360ECB_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int64>>::get_Count() */, IReadOnlyCollection_1_tC7FC30E9584BF882C56AAF7BCD36E30D5FC93757_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 * splittableMap = (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87 *)IsInstSealed(__this, ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t738FDF0AD8EC29DC7F24DEA1781D6F91F3FF1E87_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m7EEF4C3F1070B52FAE2CB751669D4E2CCA72B556(splittableMap, __this, ConstantSplittableMap_2__ctor_m7EEF4C3F1070B52FAE2CB751669D4E2CCA72B556_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_mC22A61915CE206831ABA9F52BD8149E645A375BC(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_mC22A61915CE206831ABA9F52BD8149E645A375BC_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tD1725759C68B631C2DDBE1E2A740C3F7BD7BBB1D>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int64>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mBC1C773DAF6598B023AF3F7C1C53A5B2A2C60210_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mBC1C773DAF6598B023AF3F7C1C53A5B2A2C60210_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m53E63212F4103CB32CE7BF11259AA994C58F9763((KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5*)UnBox(__thisValue, KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m53E63212F4103CB32CE7BF11259AA994C58F9763_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int64>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m58697189DFD4331CBF62C9BB747023B7193F4A7D_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m58697189DFD4331CBF62C9BB747023B7193F4A7D_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2FC07FAC81494CABD1E9BD58E7917981B6EBC5B2((KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5*)UnBox(__thisValue, KeyValuePair_2_t7C4859F20ECDF8EEA530886FE8ADEE363F117FB5_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2FC07FAC81494CABD1E9BD58E7917981B6EBC5B2_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_mD5A1416BE05A3CEA207D471D171E18B5274EFBB2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_mD5A1416BE05A3CEA207D471D171E18B5274EFBB2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m8FAD66D38B1591964048D7F26F85325A0E1B8F06_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m8FAD66D38B1591964048D7F26F85325A0E1B8F06_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::get_Count() */, ICollection_1_t589BF03E6AF3715C53F02BB601A1E652C455B39F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_mCD46ADD30AA09893783B817BFBFBF1AE0A9B3391_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_mCD46ADD30AA09893783B817BFBFBF1AE0A9B3391_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m108CB108267B8E182B0AC2060EB2EC2F9CE2E486_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m108CB108267B8E182B0AC2060EB2EC2F9CE2E486_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t8D3FD4DE07CED4C0DCBFCAE6F21EA07AEBCF4106_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26 * readOnlyDictionary = (ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_tF280FEE10F075BBCCBDDBE4D6CE1CB10F07B7F26_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_mB00B04B07D47F362A172DB40FCF7CB2D56199079(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_mB00B04B07D47F362A172DB40FCF7CB2D56199079_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m76F5C1867B60A98FE8F2A446CB67EC5BF4DCCFCE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m76F5C1867B60A98FE8F2A446CB67EC5BF4DCCFCE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_mE7BB8D254446EAF38A50795155F6B24F34759F14_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_mE7BB8D254446EAF38A50795155F6B24F34759F14_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Boolean>::Remove(TKey) */, IDictionary_2_t90971FA89987BA09116425E1F041550168B1019A_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m48850C80048B582432C1302AF31CB103FE6364B2_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m48850C80048B582432C1302AF31CB103FE6364B2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::Clear() */, ICollection_1_t589BF03E6AF3715C53F02BB601A1E652C455B39F_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3927D669358CABBADD2E8E44C649034236686EDA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3927D669358CABBADD2E8E44C649034236686EDA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t8D3FD4DE07CED4C0DCBFCAE6F21EA07AEBCF4106_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_mFF9BDCEC02BC43FF3141B0B0B2310F6ED0CC3585_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_mFF9BDCEC02BC43FF3141B0B0B2310F6ED0CC3585_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t67299E4BE64CE4846C9AC507C04EE68F3C036DE6_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m06A089418F9A7F076C4432356F13783979E36C3C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m06A089418F9A7F076C4432356F13783979E36C3C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t8D3FD4DE07CED4C0DCBFCAE6F21EA07AEBCF4106_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_m26F1C2B3216E256D930586DCEA2A24263A58F6B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5** ___first0, IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m26F1C2B3216E256D930586DCEA2A24263A58F6B0_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t67299E4BE64CE4846C9AC507C04EE68F3C036DE6_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 * splittableMap = (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033 *)IsInstSealed(__this, ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033*)il2cpp_codegen_object_new(ConstantSplittableMap_2_tCF12242BBDB59F42D70694CE939FE68315601033_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_mF1A480D6BCDDEF7EAC5BFEF87A785B9C937D9256(splittableMap, __this, ConstantSplittableMap_2__ctor_mF1A480D6BCDDEF7EAC5BFEF87A785B9C937D9256_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m41639F3A2D729F4E44D58E1269D45EDF660A9F1F(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m41639F3A2D729F4E44D58E1269D45EDF660A9F1F_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_tCD32FB04656F9ABB7783E8CAF8D3D3736E33C9F5>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mD574CB3B2B9B78ACE78BEE00CE74E8D2C8EAE015_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mD574CB3B2B9B78ACE78BEE00CE74E8D2C8EAE015_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_mFF22AA1BD60F2760A4CAAB581B5996DDD62CBCAA((KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82*)UnBox(__thisValue, KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_mFF22AA1BD60F2760A4CAAB581B5996DDD62CBCAA_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m083B015CFBE3E129E1D2282CD926189599195256_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m083B015CFBE3E129E1D2282CD926189599195256_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2D91533A66E5BB608E0175099C9D7289D172D318((KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82*)UnBox(__thisValue, KeyValuePair_2_t411E4248A20D0FDB15190B13EA12EBCB69500C82_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2D91533A66E5BB608E0175099C9D7289D172D318_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m0718625C363AEEA0801EA35909117DA607B24B2C_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3C240C1433A16C2E83AAA968E4942B788111F58E_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4258923389530673A525DE9F3822E2496866A9CE_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m40B9FF681E94BEBB6A921917E4FA56CBBE777FA2_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D * readOnlyDictionary = (ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4260336E780083853066CAE01EEFB71424340B8D_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m8ED1FDBA4141634A2267E48D50EEA6D76419AB24_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_mE388BAEBDFBC177CCD87BA83F592AAC02D71CF0B_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m06F6ED69EC5586CBE10C11905F926E9BBD9BB68A_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Boolean>::Remove(TKey) */, IDictionary_2_tA359427016452362582134A8C14496A1241B840D_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m49921EA1207F15EC572D2D283436A2FEBD874DF3_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::Clear() */, ICollection_1_t8B79319064AA37D303A6F7B44B226829D712B647_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m4D4E83CB57D6206B630F5FC2524EA6C6276694CF_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2 * e = (KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2*)il2cpp_codegen_object_new(KeyNotFoundException_tC28F8B9E114291001A5D135723673C6F292438E2_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m9D84ADA7AF7ECBA5A71B6744811F7B2152CF821C(e, _stringLiteral4B82980DAF08650EBCD07B02A4F870A65CFD9297, NULL);
			Exception_set_HResult_m920DF8C728D8A0EC0759685FED890C775FA08B99(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e, NULL, NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m0CD3F3E510139625902431F0B535629B3475D963_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m15805C682E0D2BC85F52C4326261935410E12ADA_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_tB5D99A5F14E7DCBFB5A6C1FDC53256F2AD229064_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26,System.Collections.Generic.IReadOnlyDictionary`2<K,V>U26)
il2cpp_hresult_t IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___first0, IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_mD2FDF938390E7AF0BCA3D55965D854961183C1E9_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter U27___first0U27 to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter U27___second1U27 to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_tCEAD3EF6328F408308165F172697D7F04F91BA40_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 * splittableMap = (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7 *)IsInstSealed(__this, ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t081BD67F792FEDEBBB228DE10E30A5086BD814C7_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3(splittableMap, __this, ConstantSplittableMap_2__ctor_m9A7247DEA1730413A6FA2D145517710F2DCC7BE3_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m042B0C1E8977BFB5BF8067544156CF6E441BAD0F_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter U27___first0U27 back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter U27___second1U27 back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t7CDDC1D682ABD5B0738153FDE3C4D8382A1345A7>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_mA13B338C7AD37B79065B855E0D3BAFF83177FE19_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D((KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE*)UnBox(__thisValue, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3DD0A6EEAF98E38321DDC52FE64B278DCEE5C41D_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m439427B1F3556C74F1FD7CB576B498770F970522_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6((KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE*)UnBox(__thisValue, KeyValuePair_2_t4924C8EC65AAF8D242A28DB259AE14F25055A7EE_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m9B92C700757D039859ED8FEA35A4F534871C19E6_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		memset(comReturnValue, 0, sizeof(*comReturnValue));
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
