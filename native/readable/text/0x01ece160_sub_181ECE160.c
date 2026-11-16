// sub_1ECE160
// rva 0x01ece160  size 243  section .text  group text
// window base 0x181ece160: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ECE160(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+10h] [rbp-18h]
  _DWORD *v28; // [rsp+18h] [rbp-10h]
  _DWORD *v29; // [rsp+20h] [rbp-8h]

  v29 = (_DWORD *)a5;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    v28 = a3;
    v10 = sub_1EB84E0(a1, a2, (__int64)a3, a4, a5, a6, a7: v26);
    goto LABEL_15;
  }
  v9 = (__int64 (*)(void))(v6 + *(_QWORD *)&v7[2 * (*a3 >> 3) + 28]);
  v28 = a3;
  v10 = v9();
  if ( v29 == v7 )
  {
LABEL_15:
    sub_2771080(a1: v11, a2: v12, a3: v28, a4: v10);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1ECE260();
  }
  v27 = v10;
  v13 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*v29 >> 3) + 48]))(
          a1: v11,
          a2: v12,
          a3: v29);
  v17 = sub_4FFACC0(a1: v15, a2: v16, a3: v13, a4: v14, a5: 47, a6: 46);
  result = sub_1EE3540(a1: v19, a2: v20, a3: v27, a4: v18, a5: v17);
  if ( (_DWORD *)result == v7 )
  {
    v25 = v27;
    if ( (_DWORD *)v27 == v7 )
    {
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280();
      return (__int64)(v7 + 94165002);
    }
    else
    {
      if ( *(int *)(v8 + 16) <= 0 )
        sub_277F280();
      return (__int64)&v7[2 * *(unsigned int *)(v25 + 12)];
    }
  }
  else if ( *(int *)(v8 + 16) <= 0 )
  {
    return sub_277F280(a1: v23, a2: v24, a3: v22, a4: v27);
  }
  return result;
}
