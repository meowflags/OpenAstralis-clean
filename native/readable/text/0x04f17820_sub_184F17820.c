// sub_4F17820
// rva 0x04f17820  size 313  section .text  group text
// window base 0x184f17820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F17820(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 result; // rax
  _DWORD *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  unsigned int v21; // [rsp+24h] [rbp-4h]

  v20 = a3;
  v19 = a5;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
LABEL_17:
    sub_2771080();
    goto LABEL_18;
  }
  if ( a5 != v6 )
  {
    v8 = *a5 >> 3;
    if ( SHIWORD(v6[2 * v8 + 15]) < 2 || v6[2 * v6[2 * v8 + 4] + 4] != 26685 )
      sub_276FC00(a1, a2, a3: a5, a4: a3, a5: v6 + 8733550);
  }
  v21 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a3 >> 3) + 44]))(a1, a2, a3);
  if ( v19 == v6 )
    goto LABEL_17;
  v11 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*v19 >> 3) + 44]))(
          a1: v9,
          a2: v10,
          a3: v19);
  v14 = v21;
  if ( v21 != v11 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    if ( (_DWORD)v14 != 0 )
      JUMPOUT(0x309E2D8DELL);
    return 1;
  }
  v16 = v20;
  v17 = (unsigned int)v20[1];
  if ( (_DWORD)v17 == 0 )
  {
LABEL_18:
    sub_2771080(a1: v12, a2: v13, a3: v16, a4: v14, a5: v19);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F17960();
  }
  result = sub_4FEC560(a1: v12, a2: v13, a3: &v6[2 * v17], a4: v21, a5: &v6[2 * v19[1]]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
