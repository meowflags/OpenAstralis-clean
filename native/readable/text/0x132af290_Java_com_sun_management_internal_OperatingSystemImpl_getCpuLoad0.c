// Java_com_sun_management_internal_OperatingSystemImpl_getCpuLoad0
// rva 0x132af290  size 82  section .text  group text
// window base 0x1932af290: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
double __fastcall Java_com_sun_management_internal_OperatingSystemImpl_getCpuLoad0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  int v6; // edi
  int v7; // esi
  __int64 v9; // [rsp+0h] [rbp-38h]
  __int64 v10; // [rsp+8h] [rbp-30h]
  char v11; // [rsp+20h] [rbp-18h] BYREF
  double v12; // [rsp+28h] [rbp-10h]

  if ( (int)sub_132B0154(a1, a2, a3, a4, a5, a6) < 0
    || (unsigned int)sub_132AFA40(
                       a1: v6,
                       a2: v7,
                       a3: *(_QWORD *)(*(_QWORD *)(MEMORY[0x3375d8]/* 0x3375d8 */ + 16LL) + 8LL * *(int *)(MEMORY[0x3375d8]/* 0x3375d8 */ + 24LL) - 8),
                       a4: MEMORY[0x3375d8]/* 0x3375d8 */,
                       a5: (unsigned int)&v11,
                       a6: 512,
                       a7: v9,
                       a8: v10) != 0 )
  {
    return MEMORY[0x846d8]/* 0x846d8 */;
  }
  else
  {
    return v12 / MEMORY[0x846d0]/* 0x846d0 */;
  }
}
