// sub_181EBEEA0
// rva 0x01ebeea0  size 96  section .text  group text
// window base 0x181ebeea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EBEEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  int v13; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    v13 = a5;
    v12 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
    goto LABEL_6;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_6:
    MEMORY[0x182771080]();
    return sub_181EBEF00();
  }
  v9 = v6 + 8LL * *(unsigned int *)(a3 + 8);
  v12 = a3;
  v13 = a5;
  result = sub_181EBF6A0(a1, a2, a3: v6 + 8 * v8, a4, a5: v9, a6: (unsigned int)a5);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
