// sub_4F451C0
// rva 0x04f451c0  size 248  section .text  group text
// window base 0x184f451c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_4F451C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  _DWORD *v16; // rdx
  _DWORD *result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v27; // [rsp+8h] [rbp-10h]
  __int64 v28; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
  }
  else if ( (_DWORD *)a3 != v7 )
  {
    v28 = a3;
    v28 = sub_4FFE180(a1, a2, a3, a4, a5: v7 + 94064364);
    v12 = sub_5869420(a1: v10, a2: v11, a3: v7 + 94284220, a4: v9, a5: v28);
    if ( (_DWORD *)v12 == v7 )
      v16 = v7;
    else
      v16 = &v7[2 * *(unsigned int *)(v12 + 8)];
    if ( v16 != v7 && *v16 >> 3 != 5410895 )
      goto LABEL_18;
    if ( v16 != v7 )
    {
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280();
      return v16;
    }
    v27 = v7 + 10821790;
    result = (_DWORD *)sub_4F797A0(a1: v14, a2: v15, a3: v7 + 10821790, a4: v13, a5: v28);
    if ( result != v7 && *result >> 3 != 5410895 )
    {
LABEL_19:
      sub_276FC00(a1: v18, a2: v19, a3: result, a4: v28, a5: v27);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return (_DWORD *)sub_4F452C0(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
    return result;
  }
  sub_2771080();
LABEL_18:
  result = (_DWORD *)sub_276FC00(a1: v14, a2: v15, a3: v16, a4: v13, a5: v7 + 10821790);
  goto LABEL_19;
}
