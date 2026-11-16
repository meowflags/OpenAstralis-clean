// sub_1ED5D00
// rva 0x01ed5d00  size 245  section .text  group text
// window base 0x181ed5d00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED5D00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // r9
  unsigned int v10; // eax
  _DWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 (__fastcall *v24)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  __int64 result; // rax
  char v26; // [rsp+0h] [rbp-28h] BYREF
  __int64 v27; // [rsp+10h] [rbp-18h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  __int64 v29; // [rsp+20h] [rbp-8h]

  v29 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    v28 = a5;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v26);
  }
  else if ( (_DWORD *)a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v9 == 0 )
    {
LABEL_10:
      v28 = a5;
      sub_2771080();
      goto LABEL_11;
    }
    v10 = v7[2 * v9 + 2] - 1;
    v28 = a5;
    v11 = (_DWORD *)sub_27C6140(a1, a2, a3: a5, a4, a5: 1, a6: v10);
    if ( v11 == v7 )
    {
LABEL_11:
      sub_2771080();
      goto LABEL_12;
    }
    v14 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*v11 >> 3) + 48]))(
            a1: v12,
            a2: v13,
            a3: v11);
    v18 = sub_4FFACC0(a1: v16, a2: v17, a3: v14, a4: v15, a5: 47, a6: 46);
    v22 = v29;
    v23 = *(unsigned int *)(v29 + 20);
    if ( (_DWORD)v23 == 0 )
    {
LABEL_12:
      sub_2771080(a1: v20, a2: v21, a3: v22, a4: v19, a5: v28);
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
      return sub_1ED5E00();
    }
    v24 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v6
                                                                              + *(_QWORD *)&v7[2 * (v7[2 * v23] >> 3)
                                                                                             + 68]);
    v27 = v18;
    result = v24(a1: v20, a2: v21, a3: &v7[2 * v23], a4: v24, a5: v18);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  sub_2771080();
  goto LABEL_10;
}
