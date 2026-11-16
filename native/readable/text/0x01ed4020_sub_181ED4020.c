// sub_1ED4020
// rva 0x01ed4020  size 314  section .text  group text
// window base 0x181ed4020: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1ED4020(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // edi
  int v11; // esi
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *result; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  char v35; // [rsp+0h] [rbp-28h] BYREF
  __int64 v36; // [rsp+8h] [rbp-20h]
  __int64 v37; // [rsp+10h] [rbp-18h]
  __int64 v38; // [rsp+18h] [rbp-10h]
  __int64 v39; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v8 + 8) )
  {
    v39 = a5;
    v38 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v35);
    goto LABEL_13;
  }
  v39 = a5;
  v38 = a3;
  v9 = sub_27C5AE0();
  v37 = (__int64)(v7 + 94164984);
  v36 = v9;
  v13 = sub_1ED45C0(a1: v10, a2: v11, a3: (int)v7 + 376659936, a4: (int)v7 + 376659936, a5: v39, a6: v12, a7: v35);
  if ( (_DWORD *)v13 == v7 )
  {
LABEL_13:
    sub_2771080(a1: v15, a2: v16, a3: v38, a4: v14, a5: v39);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_1ED4160(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7);
  }
  v18 = sub_1EC96A0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v36, a6: v17);
  if ( (_DWORD *)v18 == v7 )
    v18 = sub_1EC3420(a1: v20, a2: v21, a3: v38, a4: v19, a5: v39, a6: v22);
  v23 = v37;
  v24 = v37;
  v37 = v18;
  result = sub_1ED3B20(a1: v20, a2: v21, a3: v24, a4: v23, a5: v18, a6: v38, a7: v35);
  if ( result != v7 && *result >> 3 == 4262015 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)sub_277F280(a1: v27, a2: v28, a3: v26, a4: v37);
  }
  else
  {
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v7;
  }
  return result;
}
