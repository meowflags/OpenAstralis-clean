// sub_18504AF20
// rva 0x0504af20  size 437  section .text  group text
// window base 0x18504af20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504AF20(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  _DWORD *v9; // rsi
  __int64 v10; // rbp
  _DWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *); // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  _DWORD *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 (__fastcall *v24)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  __int64 result; // rax
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  _DWORD *v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  _DWORD *v30; // [rsp+28h] [rbp-10h]
  unsigned int v31; // [rsp+34h] [rbp-4h]

  v30 = a3;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v7 + 8) )
  {
    v28 = a5;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    if ( (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a5 >> 3) + 11] & (0x575u >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1397 )
    {
LABEL_10:
      v28 = a5;
      MEMORY[0x182770780]();
      goto LABEL_11;
    }
    v8 = *a5 >> 3;
    v9 = &v6[2 * v6[2 * v8 + 5]];
    v10 = v6[2 * v8 + 11] & (0x575u >> HIBYTE(v6[2 * v8 + 11]));
    v11 = &v6[2 * v8];
    v12 = *(_QWORD *)((char *)v11 + HIWORD(v9[v10 + 3]));
    v29 = (__int64)v11;
    v28 = a5;
    v27 = v9;
    v31 = v10;
    v13 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v5 + v12))(a1, a2: v9, a3: a5);
    v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)(v29 + HIWORD(v27[v31 + 3]) + 8));
    v29 = v13;
    v17 = v14(a1: v15, a2: v16, a3: v28);
    v20 = v30;
    if ( v30 == v6 )
    {
LABEL_11:
      MEMORY[0x182771080]();
      goto LABEL_12;
    }
    v21 = (unsigned __int16)v6[2 * v6[2 * (*v30 >> 3) + 5]
                             + 3
                             + (v6[2 * (*v30 >> 3) + 11] & (0x633u >> HIBYTE(v6[2 * (*v30 >> 3) + 11])))];
    if ( (_DWORD)v21 != 1587 )
    {
LABEL_12:
      MEMORY[0x182770780](a1: v18, a2: v19, a3: v20, a4: v21, a5: v28);
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
      return sub_18504B0E0();
    }
    v22 = *v30 >> 3;
    v23 = v6[2 * v22 + 11] & (0x633u >> HIBYTE(v6[2 * v22 + 11]));
    v24 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v5
                                                                                       + *(_QWORD *)((char *)&v6[2 * v22 + 2] + HIWORD(v6[2 * (unsigned int)v6[2 * v22 + 5] + 3 + v23])));
    result = v24(a1: v18, a2: v23, a3: v30, a4: v24, a5: v29, a6: v17);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
  goto LABEL_10;
}
