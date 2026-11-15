// Java_sun_nio_fs_WindowsNativeDispatcher_GetSecurityDescriptorDacl
// rva 0x132a617c  size 80  section .text  group jdk
// window base 0x1932a617c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_sun_nio_fs_WindowsNativeDispatcher_GetSecurityDescriptorDacl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  __int64 v11; // rdi
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rsi
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)__imp_ADVAPI32.dll!GetSecurityDescriptorDacl(a1, a2, a3: &a9, a4: a5, a5: v16, a6: &a10) != 0 )
    return v16[0] & -(__int64)(a9 != 0);
  v12 = __imp_KERNEL32.dll!GetLastError(a1: v11);
  sub_132A6F44(a1: v13, a2: v14, a3: v12, a4);
  return 0;
}
