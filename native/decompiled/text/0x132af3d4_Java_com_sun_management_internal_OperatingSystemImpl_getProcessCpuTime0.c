// Java_com_sun_management_internal_OperatingSystemImpl_getProcessCpuTime0
// rva 0x132af3d4  size 84  section .text  group text
// window base 0x1932af3d4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall Java_com_sun_management_internal_OperatingSystemImpl_getProcessCpuTime0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  MEMORY[0x79458](a1, a2, a3: &v12, a4: MEMORY[0x337540], a5: &v11, a6: &a9);
  return 100
       * (((unsigned int)a10 | (unsigned __int64)((__int64)SHIDWORD(a10) << 32))
        + ((unsigned int)a9 | (unsigned __int64)((__int64)SHIDWORD(a9) << 32)));
}
