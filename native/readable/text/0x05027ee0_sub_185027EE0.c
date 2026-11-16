// sub_5027EE0
// rva 0x05027ee0  size 87  section .text  group text
// window base 0x185027ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5027EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *); // rax
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  _QWORD v18[2]; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v18 <= *(_QWORD *)(v9 + 8) )
  {
    v19 = a3;
    sub_1EB84E0();
  }
  else if ( a5 != v8 )
  {
    v19 = a3;
    v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*a5 >> 3) + 46]);
    v18[1] = a5;
    result = v10(a1, a2, a3: a5);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_5027F40(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
}
