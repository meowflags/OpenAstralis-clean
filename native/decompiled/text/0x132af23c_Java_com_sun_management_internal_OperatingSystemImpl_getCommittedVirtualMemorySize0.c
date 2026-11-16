// Java_com_sun_management_internal_OperatingSystemImpl_getCommittedVirtualMemorySize0
// rva 0x132af23c  size 84  section .text  group text
// window base 0x1932af23c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall Java_com_sun_management_internal_OperatingSystemImpl_getCommittedVirtualMemorySize0(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[56]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  if ( (unsigned int)sub_1932CA2C9(a1, a2, a3: v8, a4: MEMORY[0x337540], a5: 72) != 0 )
    JUMPOUT(0x326509278LL);
  return sub_1932C8DE0(a1: v2, a2: v3, a3: -1, a4: (unsigned __int64)&v7 ^ v9, a5: v4, a6: v5);
}
